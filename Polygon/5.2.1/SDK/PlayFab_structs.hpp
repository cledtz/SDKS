#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EStatisticResetIntervalOption : uint8
{
	pfenum_Never                   = 0,
	pfenum_Hour                    = 1,
	pfenum_Day                     = 2,
	pfenum_Week                    = 3,
	pfenum_Month                   = 4,
	pfenum_MAX                     = 5,
};

enum class EStatisticAggregationMethod : uint8
{
	pfenum_Last                    = 0,
	pfenum_Min                     = 1,
	pfenum_Max                     = 2,
	pfenum_Sum                     = 3,
};

enum class ERegion : uint8
{
	pfenum_USCentral               = 0,
	pfenum_USEast                  = 1,
	pfenum_EUWest                  = 2,
	pfenum_Singapore               = 3,
	pfenum_Japan                   = 4,
	pfenum_Brazil                  = 5,
	pfenum_Australia               = 6,
	pfenum_MAX                     = 7,
};

enum class EPfSourceType : uint8
{
	pfenum_Admin                   = 0,
	pfenum_BackEnd                 = 1,
	pfenum_GameClient              = 2,
	pfenum_GameServer              = 3,
	pfenum_Partner                 = 4,
	pfenum_Custom                  = 5,
	pfenum_API                     = 6,
	pfenum_MAX                     = 7,
};

enum class EGameBuildStatus : uint8
{
	pfenum_Available               = 0,
	pfenum_Validating              = 1,
	pfenum_InvalidBuildPackage     = 2,
	pfenum_Processing              = 3,
	pfenum_FailedToProcess         = 4,
	pfenum_MAX                     = 5,
};

enum class EAuthTokenType : uint8
{
	pfenum_Email                   = 0,
	pfenum_MAX                     = 1,
};

enum class ETaskInstanceStatus : uint8
{
	pfenum_Succeeded               = 0,
	pfenum_Starting                = 1,
	pfenum_InProgress              = 2,
	pfenum_Failed                  = 3,
	pfenum_Aborted                 = 4,
	pfenum_Stalled                 = 5,
	pfenum_MAX                     = 6,
};

enum class EResolutionOutcome : uint8
{
	pfenum_Revoke                  = 0,
	pfenum_Reinstate               = 1,
	pfenum_Manual                  = 2,
	pfenum_MAX                     = 3,
};

enum class EPushSetupPlatform : uint8
{
	pfenum_GCM                     = 0,
	pfenum_APNS                    = 1,
	pfenum_APNS_SANDBOX            = 2,
	pfenum_MAX                     = 3,
};

enum class EScheduledTaskType : uint8
{
	pfenum_CloudScript             = 0,
	pfenum_ActionsOnPlayerSegment  = 1,
	pfenum_CloudScriptAzureFunctions = 2,
	pfenum_InsightsScheduledScaling = 3,
	pfenum_MAX                     = 4,
};

enum class EUserDataPermission : uint8
{
	pfenum_Private                 = 0,
	pfenum_Public                  = 1,
	pfenum_MAX                     = 2,
};

enum class ELoginIdentityProvider : uint8
{
	pfenum_Unknown                 = 0,
	pfenum_PlayFab                 = 1,
	pfenum_Custom                  = 2,
	pfenum_GameCenter              = 3,
	pfenum_GooglePlay              = 4,
	pfenum_Steam                   = 5,
	pfenum_XBoxLive                = 6,
	pfenum_PSN                     = 7,
	pfenum_Kongregate              = 8,
	pfenum_Facebook                = 9,
	pfenum_IOSDevice               = 10,
	pfenum_AndroidDevice           = 11,
	pfenum_Twitch                  = 12,
	pfenum_WindowsHello            = 13,
	pfenum_GameServer              = 14,
	pfenum_CustomServer            = 15,
	pfenum_NintendoSwitch          = 16,
	pfenum_FacebookInstantGames    = 17,
	pfenum_OpenIdConnect           = 18,
	pfenum_Apple                   = 19,
	pfenum_NintendoSwitchAccount   = 20,
	pfenum_GooglePlayGames         = 21,
	pfenum_MAX                     = 22,
};

enum class EIdentifiedDeviceType : uint8
{
	pfenum_Unknown                 = 0,
	pfenum_XboxOne                 = 1,
	pfenum_Scarlett                = 2,
	pfenum_MAX                     = 3,
};

enum class EMatchmakeStatus : uint8
{
	pfenum_Complete                = 0,
	pfenum_Waiting                 = 1,
	pfenum_GameNotFound            = 2,
	pfenum_NoAvailableSlots        = 3,
	pfenum_SessionClosed           = 4,
	pfenum_MAX                     = 5,
};

enum class ETransactionStatus : uint8
{
	pfenum_CreateCart              = 0,
	pfenum_Init                    = 1,
	pfenum_Approved                = 2,
	pfenum_Succeeded               = 3,
	pfenum_FailedByProvider        = 4,
	pfenum_DisputePending          = 5,
	pfenum_RefundPending           = 6,
	pfenum_Refunded                = 7,
	pfenum_RefundFailed            = 8,
	pfenum_ChargedBack             = 9,
	pfenum_FailedByUber            = 10,
	pfenum_FailedByPlayFab         = 11,
	pfenum_Revoked                 = 12,
	pfenum_TradePending            = 13,
	pfenum_Traded                  = 14,
	pfenum_Upgraded                = 15,
	pfenum_StackPending            = 16,
	pfenum_Stacked                 = 17,
	pfenum_Other                   = 18,
	pfenum_Failed                  = 19,
	pfenum_MAX                     = 20,
};

enum class ECloudScriptRevisionOption : uint8
{
	pfenum_Live                    = 0,
	pfenum_Latest                  = 1,
	pfenum_Specific                = 2,
	pfenum_MAX                     = 3,
};

enum class EExternalFriendSources : uint8
{
	pfenum_None                    = 0,
	pfenum_Steam                   = 1,
	pfenum_Facebook                = 2,
	pfenum_Xbox                    = 3,
	pfenum_Psn                     = 4,
	pfenum_All                     = 5,
	pfenum_MAX                     = 6,
};

enum class ETradeStatus : uint8
{
	pfenum_Invalid                 = 0,
	pfenum_Opening                 = 1,
	pfenum_Open                    = 2,
	pfenum_Accepting               = 3,
	pfenum_Accepted                = 4,
	pfenum_Filled                  = 5,
	pfenum_Cancelled               = 6,
	pfenum_MAX                     = 7,
};

enum class EAdActivity : uint8
{
	pfenum_Opened                  = 0,
	pfenum_Closed                  = 1,
	pfenum_Start                   = 2,
	pfenum_End                     = 3,
	pfenum_MAX                     = 4,
};

enum class EPublishResult : uint8
{
	pfenum_Unknown                 = 0,
	pfenum_Pending                 = 1,
	pfenum_Succeeded               = 2,
	pfenum_Failed                  = 3,
	pfenum_Canceled                = 4,
	pfenum_MAX                     = 5,
};

enum class EConcernCategory : uint8
{
	pfenum_None                    = 0,
	pfenum_OffensiveContent        = 1,
	pfenum_ChildExploitation       = 2,
	pfenum_MalwareOrVirus          = 3,
	pfenum_PrivacyConcerns         = 4,
	pfenum_MisleadingApp           = 5,
	pfenum_PoorPerformance         = 6,
	pfenum_ReviewResponse          = 7,
	pfenum_SpamAdvertising         = 8,
	pfenum_Profanity               = 9,
	pfenum_MAX                     = 10,
};

enum class EModerationStatus : uint8
{
	pfenum_Unknown                 = 0,
	pfenum_AwaitingModeration      = 1,
	pfenum_Approved                = 2,
	pfenum_Rejected                = 3,
	pfenum_MAX                     = 4,
};

enum class EHelpfulnessVote : uint8
{
	pfenum_None                    = 0,
	pfenum_UnHelpful               = 1,
	pfenum_Helpful                 = 2,
	pfenum_MAX                     = 3,
};

enum class EExperimentType : uint8
{
	pfenum_Active                  = 0,
	pfenum_Snapshot                = 1,
	pfenum_MAX                     = 2,
};

enum class EOperationTypes : uint8
{
	pfenum_Created                 = 0,
	pfenum_Updated                 = 1,
	pfenum_Deleted                 = 2,
	pfenum_None                    = 3,
	pfenum_MAX                     = 4,
};

enum class EAzureVmSize : uint8
{
	pfenum_Standard_A1             = 0,
	pfenum_Standard_A2             = 1,
	pfenum_Standard_A3             = 2,
	pfenum_Standard_A4             = 3,
	pfenum_Standard_A1_v2          = 4,
	pfenum_Standard_A2_v2          = 5,
	pfenum_Standard_A4_v2          = 6,
	pfenum_Standard_A8_v2          = 7,
	pfenum_Standard_D1_v2          = 8,
	pfenum_Standard_D2_v2          = 9,
	pfenum_Standard_D3_v2          = 10,
	pfenum_Standard_D4_v2          = 11,
	pfenum_Standard_D5_v2          = 12,
	pfenum_Standard_D2_v3          = 13,
	pfenum_Standard_D4_v3          = 14,
	pfenum_Standard_D8_v3          = 15,
	pfenum_Standard_D16_v3         = 16,
	pfenum_Standard_F1             = 17,
	pfenum_Standard_F2             = 18,
	pfenum_Standard_F4             = 19,
	pfenum_Standard_F8             = 20,
	pfenum_Standard_F16            = 21,
	pfenum_Standard_F2s_v2         = 22,
	pfenum_Standard_F4s_v2         = 23,
	pfenum_Standard_F8s_v2         = 24,
	pfenum_Standard_F16s_v2        = 25,
	pfenum_Standard_D2as_v4        = 26,
	pfenum_Standard_D4as_v4        = 27,
	pfenum_Standard_D8as_v4        = 28,
	pfenum_Standard_D16as_v4       = 29,
	pfenum_Standard_D2a_v4         = 30,
	pfenum_Standard_D4a_v4         = 31,
	pfenum_Standard_D8a_v4         = 32,
	pfenum_Standard_D16a_v4        = 33,
	pfenum_Standard_D2ads_v5       = 34,
	pfenum_Standard_D4ads_v5       = 35,
	pfenum_Standard_D8ads_v5       = 36,
	pfenum_Standard_D16ads_v5      = 37,
	pfenum_Standard_E2a_v4         = 38,
	pfenum_Standard_E4a_v4         = 39,
	pfenum_Standard_E8a_v4         = 40,
	pfenum_Standard_E16a_v4        = 41,
	pfenum_Standard_E2as_v4        = 42,
	pfenum_Standard_E4as_v4        = 43,
	pfenum_Standard_E8as_v4        = 44,
	pfenum_Standard_E16as_v4       = 45,
	pfenum_Standard_D2s_v3         = 46,
	pfenum_Standard_D4s_v3         = 47,
	pfenum_Standard_D8s_v3         = 48,
	pfenum_Standard_D16s_v3        = 49,
	pfenum_Standard_DS1_v2         = 50,
	pfenum_Standard_DS2_v2         = 51,
	pfenum_Standard_DS3_v2         = 52,
	pfenum_Standard_DS4_v2         = 53,
	pfenum_Standard_DS5_v2         = 54,
	pfenum_Standard_NC4as_T4_v3    = 55,
	pfenum_Standard_D2d_v4         = 56,
	pfenum_Standard_D4d_v4         = 57,
	pfenum_Standard_D8d_v4         = 58,
	pfenum_Standard_D16d_v4        = 59,
	pfenum_Standard_D2ds_v4        = 60,
	pfenum_Standard_D4ds_v4        = 61,
	pfenum_Standard_D8ds_v4        = 62,
	pfenum_Standard_D16ds_v4       = 63,
	pfenum_Standard_HB120_16rs_v3  = 64,
	pfenum_Standard_HB120_32rs_v3  = 65,
	pfenum_Standard_HB120_64rs_v3  = 66,
	pfenum_Standard_HB120_96rs_v3  = 67,
	pfenum_Standard_HB120rs_v3     = 68,
	pfenum_Standard_MAX            = 69,
};

enum class EContainerFlavor : uint8
{
	pfenum_ManagedWindowsServerCore = 0,
	pfenum_CustomLinux             = 1,
	pfenum_ManagedWindowsServerCorePreview = 2,
	pfenum_Invalid                 = 3,
	pfenum_MAX                     = 4,
};

enum class EOwnerMigrationPolicy : uint8
{
	pfenum_None                    = 0,
	pfenum_Automatic               = 1,
	pfenum_Manual                  = 2,
	pfenum_Server                  = 3,
	pfenum_MAX                     = 4,
};

enum class EAccessPolicy : uint8
{
	pfenum_Public                  = 0,
	pfenum_Friends                 = 1,
	pfenum_Private                 = 2,
	pfenum_MAX                     = 3,
};

enum class ETitleMultiplayerServerEnabledStatus : uint8
{
	pfenum_Initializing            = 0,
	pfenum_Enabled                 = 1,
	pfenum_Disabled                = 2,
	pfenum_MAX                     = 3,
};

enum class ESubscriptionType : uint8
{
	pfenum_LobbyChange             = 0,
	pfenum_LobbyInvite             = 1,
	pfenum_MAX                     = 2,
};

enum class EMembershipLock : uint8
{
	pfenum_Unlocked                = 0,
	pfenum_Locked                  = 1,
	pfenum_MAX                     = 2,
};

enum class EPlayerConnectionState : uint8
{
	pfenum_Unassigned              = 0,
	pfenum_Connecting              = 1,
	pfenum_Participating           = 2,
	pfenum_Participated            = 3,
	pfenum_MAX                     = 4,
};

enum class EGameInstanceState : uint8
{
	pfenum_Open                    = 0,
	pfenum_Closed                  = 1,
	pfenum_MAX                     = 2,
};

enum class EChurnRiskLevel : uint8
{
	pfenum_NoData                  = 0,
	pfenum_LowRisk                 = 1,
	pfenum_MediumRisk              = 2,
	pfenum_HighRisk                = 3,
	pfenum_MAX                     = 4,
};

enum class EConditionals : uint8
{
	pfenum_Any                     = 0,
	pfenum_True                    = 1,
	pfenum_False                   = 2,
	pfenum_MAX                     = 3,
};

enum class EContinentCode : uint8
{
	pfenum_AF                      = 0,
	pfenum_AN                      = 1,
	pfenum_AS                      = 2,
	pfenum_EU                      = 3,
	pfenum_NA                      = 4,
	pfenum_OC                      = 5,
	pfenum_SA                      = 6,
	pfenum_MAX                     = 7,
};

enum class ECountryCode : uint8
{
	pfenum_AF                      = 0,
	pfenum_AX                      = 1,
	pfenum_AL                      = 2,
	pfenum_DZ                      = 3,
	pfenum_AS                      = 4,
	pfenum_AD                      = 5,
	pfenum_AO                      = 6,
	pfenum_AI                      = 7,
	pfenum_AQ                      = 8,
	pfenum_AG                      = 9,
	pfenum_AR                      = 10,
	pfenum_AM                      = 11,
	pfenum_AW                      = 12,
	pfenum_AU                      = 13,
	pfenum_AT                      = 14,
	pfenum_AZ                      = 15,
	pfenum_BS                      = 16,
	pfenum_BH                      = 17,
	pfenum_BD                      = 18,
	pfenum_BB                      = 19,
	pfenum_BY                      = 20,
	pfenum_BE                      = 21,
	pfenum_BZ                      = 22,
	pfenum_BJ                      = 23,
	pfenum_BM                      = 24,
	pfenum_BT                      = 25,
	pfenum_BO                      = 26,
	pfenum_BQ                      = 27,
	pfenum_BA                      = 28,
	pfenum_BW                      = 29,
	pfenum_BV                      = 30,
	pfenum_BR                      = 31,
	pfenum_IO                      = 32,
	pfenum_BN                      = 33,
	pfenum_BG                      = 34,
	pfenum_BF                      = 35,
	pfenum_BI                      = 36,
	pfenum_KH                      = 37,
	pfenum_CM                      = 38,
	pfenum_CA                      = 39,
	pfenum_CV                      = 40,
	pfenum_KY                      = 41,
	pfenum_CF                      = 42,
	pfenum_TD                      = 43,
	pfenum_CL                      = 44,
	pfenum_CN                      = 45,
	pfenum_CX                      = 46,
	pfenum_CC                      = 47,
	pfenum_CO                      = 48,
	pfenum_KM                      = 49,
	pfenum_CG                      = 50,
	pfenum_CD                      = 51,
	pfenum_CK                      = 52,
	pfenum_CR                      = 53,
	pfenum_CI                      = 54,
	pfenum_HR                      = 55,
	pfenum_CU                      = 56,
	pfenum_CW                      = 57,
	pfenum_CY                      = 58,
	pfenum_CZ                      = 59,
	pfenum_DK                      = 60,
	pfenum_DJ                      = 61,
	pfenum_DM                      = 62,
	pfenum_DO                      = 63,
	pfenum_EC                      = 64,
	pfenum_EG                      = 65,
	pfenum_SV                      = 66,
	pfenum_GQ                      = 67,
	pfenum_ER                      = 68,
	pfenum_EE                      = 69,
	pfenum_ET                      = 70,
	pfenum_FK                      = 71,
	pfenum_FO                      = 72,
	pfenum_FJ                      = 73,
	pfenum_FI                      = 74,
	pfenum_FR                      = 75,
	pfenum_GF                      = 76,
	pfenum_PF                      = 77,
	pfenum_TF                      = 78,
	pfenum_GA                      = 79,
	pfenum_GM                      = 80,
	pfenum_GE                      = 81,
	pfenum_DE                      = 82,
	pfenum_GH                      = 83,
	pfenum_GI                      = 84,
	pfenum_GR                      = 85,
	pfenum_GL                      = 86,
	pfenum_GD                      = 87,
	pfenum_GP                      = 88,
	pfenum_GU                      = 89,
	pfenum_GT                      = 90,
	pfenum_GG                      = 91,
	pfenum_GN                      = 92,
	pfenum_GW                      = 93,
	pfenum_GY                      = 94,
	pfenum_HT                      = 95,
	pfenum_HM                      = 96,
	pfenum_VA                      = 97,
	pfenum_HN                      = 98,
	pfenum_HK                      = 99,
	pfenum_HU                      = 100,
	pfenum_IS                      = 101,
	pfenum_IN                      = 102,
	pfenum_ID                      = 103,
	pfenum_IR                      = 104,
	pfenum_IQ                      = 105,
	pfenum_IE                      = 106,
	pfenum_IM                      = 107,
	pfenum_IL                      = 108,
	pfenum_IT                      = 109,
	pfenum_JM                      = 110,
	pfenum_JP                      = 111,
	pfenum_JE                      = 112,
	pfenum_JO                      = 113,
	pfenum_KZ                      = 114,
	pfenum_KE                      = 115,
	pfenum_KI                      = 116,
	pfenum_KP                      = 117,
	pfenum_KR                      = 118,
	pfenum_KW                      = 119,
	pfenum_KG                      = 120,
	pfenum_LA                      = 121,
	pfenum_LV                      = 122,
	pfenum_LB                      = 123,
	pfenum_LS                      = 124,
	pfenum_LR                      = 125,
	pfenum_LY                      = 126,
	pfenum_LI                      = 127,
	pfenum_LT                      = 128,
	pfenum_LU                      = 129,
	pfenum_MO                      = 130,
	pfenum_MK                      = 131,
	pfenum_MG                      = 132,
	pfenum_MW                      = 133,
	pfenum_MY                      = 134,
	pfenum_MV                      = 135,
	pfenum_ML                      = 136,
	pfenum_MT                      = 137,
	pfenum_MH                      = 138,
	pfenum_MQ                      = 139,
	pfenum_MR                      = 140,
	pfenum_MU                      = 141,
	pfenum_YT                      = 142,
	pfenum_MX                      = 143,
	pfenum_FM                      = 144,
	pfenum_MD                      = 145,
	pfenum_MC                      = 146,
	pfenum_MN                      = 147,
	pfenum_ME                      = 148,
	pfenum_MS                      = 149,
	pfenum_MA                      = 150,
	pfenum_MZ                      = 151,
	pfenum_MM                      = 152,
	pfenum_NA                      = 153,
	pfenum_NR                      = 154,
	pfenum_NP                      = 155,
	pfenum_NL                      = 156,
	pfenum_NC                      = 157,
	pfenum_NZ                      = 158,
	pfenum_NI                      = 159,
	pfenum_NE                      = 160,
	pfenum_NG                      = 161,
	pfenum_NU                      = 162,
	pfenum_NF                      = 163,
	pfenum_MP                      = 164,
	pfenum_NO                      = 165,
	pfenum_OM                      = 166,
	pfenum_PK                      = 167,
	pfenum_PW                      = 168,
	pfenum_PS                      = 169,
	pfenum_PA                      = 170,
	pfenum_PG                      = 171,
	pfenum_PY                      = 172,
	pfenum_PE                      = 173,
	pfenum_PH                      = 174,
	pfenum_PN                      = 175,
	pfenum_PL                      = 176,
	pfenum_PT                      = 177,
	pfenum_PR                      = 178,
	pfenum_QA                      = 179,
	pfenum_RE                      = 180,
	pfenum_RO                      = 181,
	pfenum_RU                      = 182,
	pfenum_RW                      = 183,
	pfenum_BL                      = 184,
	pfenum_SH                      = 185,
	pfenum_KN                      = 186,
	pfenum_LC                      = 187,
	pfenum_MF                      = 188,
	pfenum_PM                      = 189,
	pfenum_VC                      = 190,
	pfenum_WS                      = 191,
	pfenum_SM                      = 192,
	pfenum_ST                      = 193,
	pfenum_SA                      = 194,
	pfenum_SN                      = 195,
	pfenum_RS                      = 196,
	pfenum_SC                      = 197,
	pfenum_SL                      = 198,
	pfenum_SG                      = 199,
	pfenum_SX                      = 200,
	pfenum_SK                      = 201,
	pfenum_SI                      = 202,
	pfenum_SB                      = 203,
	pfenum_SO                      = 204,
	pfenum_ZA                      = 205,
	pfenum_GS                      = 206,
	pfenum_SS                      = 207,
	pfenum_ES                      = 208,
	pfenum_LK                      = 209,
	pfenum_SD                      = 210,
	pfenum_SR                      = 211,
	pfenum_SJ                      = 212,
	pfenum_SZ                      = 213,
	pfenum_SE                      = 214,
	pfenum_CH                      = 215,
	pfenum_SY                      = 216,
	pfenum_TW                      = 217,
	pfenum_TJ                      = 218,
	pfenum_TZ                      = 219,
	pfenum_TH                      = 220,
	pfenum_TL                      = 221,
	pfenum_TG                      = 222,
	pfenum_TK                      = 223,
	pfenum_TO                      = 224,
	pfenum_TT                      = 225,
	pfenum_TN                      = 226,
	pfenum_TR                      = 227,
	pfenum_TM                      = 228,
	pfenum_TC                      = 229,
	pfenum_TV                      = 230,
	pfenum_UG                      = 231,
	pfenum_UA                      = 232,
	pfenum_AE                      = 233,
	pfenum_GB                      = 234,
	pfenum_US                      = 235,
	pfenum_UM                      = 236,
	pfenum_UY                      = 237,
	pfenum_UZ                      = 238,
	pfenum_VU                      = 239,
	pfenum_VE                      = 240,
	pfenum_VN                      = 241,
	pfenum_VG                      = 242,
	pfenum_VI                      = 243,
	pfenum_WF                      = 244,
	pfenum_EH                      = 245,
	pfenum_YE                      = 246,
	pfenum_ZM                      = 247,
	pfenum_ZW                      = 248,
	pfenum_MAX                     = 249,
};

enum class ECurrency : uint8
{
	pfenum_AED                     = 0,
	pfenum_AFN                     = 1,
	pfenum_ALL                     = 2,
	pfenum_AMD                     = 3,
	pfenum_ANG                     = 4,
	pfenum_AOA                     = 5,
	pfenum_ARS                     = 6,
	pfenum_AUD                     = 7,
	pfenum_AWG                     = 8,
	pfenum_AZN                     = 9,
	pfenum_BAM                     = 10,
	pfenum_BBD                     = 11,
	pfenum_BDT                     = 12,
	pfenum_BGN                     = 13,
	pfenum_BHD                     = 14,
	pfenum_BIF                     = 15,
	pfenum_BMD                     = 16,
	pfenum_BND                     = 17,
	pfenum_BOB                     = 18,
	pfenum_BRL                     = 19,
	pfenum_BSD                     = 20,
	pfenum_BTN                     = 21,
	pfenum_BWP                     = 22,
	pfenum_BYR                     = 23,
	pfenum_BZD                     = 24,
	pfenum_CAD                     = 25,
	pfenum_CDF                     = 26,
	pfenum_CHF                     = 27,
	pfenum_CLP                     = 28,
	pfenum_CNY                     = 29,
	pfenum_COP                     = 30,
	pfenum_CRC                     = 31,
	pfenum_CUC                     = 32,
	pfenum_CUP                     = 33,
	pfenum_CVE                     = 34,
	pfenum_CZK                     = 35,
	pfenum_DJF                     = 36,
	pfenum_DKK                     = 37,
	pfenum_DOP                     = 38,
	pfenum_DZD                     = 39,
	pfenum_EGP                     = 40,
	pfenum_ERN                     = 41,
	pfenum_ETB                     = 42,
	pfenum_EUR                     = 43,
	pfenum_FJD                     = 44,
	pfenum_FKP                     = 45,
	pfenum_GBP                     = 46,
	pfenum_GEL                     = 47,
	pfenum_GGP                     = 48,
	pfenum_GHS                     = 49,
	pfenum_GIP                     = 50,
	pfenum_GMD                     = 51,
	pfenum_GNF                     = 52,
	pfenum_GTQ                     = 53,
	pfenum_GYD                     = 54,
	pfenum_HKD                     = 55,
	pfenum_HNL                     = 56,
	pfenum_HRK                     = 57,
	pfenum_HTG                     = 58,
	pfenum_HUF                     = 59,
	pfenum_IDR                     = 60,
	pfenum_ILS                     = 61,
	pfenum_IMP                     = 62,
	pfenum_INR                     = 63,
	pfenum_IQD                     = 64,
	pfenum_IRR                     = 65,
	pfenum_ISK                     = 66,
	pfenum_JEP                     = 67,
	pfenum_JMD                     = 68,
	pfenum_JOD                     = 69,
	pfenum_JPY                     = 70,
	pfenum_KES                     = 71,
	pfenum_KGS                     = 72,
	pfenum_KHR                     = 73,
	pfenum_KMF                     = 74,
	pfenum_KPW                     = 75,
	pfenum_KRW                     = 76,
	pfenum_KWD                     = 77,
	pfenum_KYD                     = 78,
	pfenum_KZT                     = 79,
	pfenum_LAK                     = 80,
	pfenum_LBP                     = 81,
	pfenum_LKR                     = 82,
	pfenum_LRD                     = 83,
	pfenum_LSL                     = 84,
	pfenum_LYD                     = 85,
	pfenum_MAD                     = 86,
	pfenum_MDL                     = 87,
	pfenum_MGA                     = 88,
	pfenum_MKD                     = 89,
	pfenum_MMK                     = 90,
	pfenum_MNT                     = 91,
	pfenum_MOP                     = 92,
	pfenum_MRO                     = 93,
	pfenum_MUR                     = 94,
	pfenum_MVR                     = 95,
	pfenum_MWK                     = 96,
	pfenum_MXN                     = 97,
	pfenum_MYR                     = 98,
	pfenum_MZN                     = 99,
	pfenum_NAD                     = 100,
	pfenum_NGN                     = 101,
	pfenum_NIO                     = 102,
	pfenum_NOK                     = 103,
	pfenum_NPR                     = 104,
	pfenum_NZD                     = 105,
	pfenum_OMR                     = 106,
	pfenum_PAB                     = 107,
	pfenum_PEN                     = 108,
	pfenum_PGK                     = 109,
	pfenum_PHP                     = 110,
	pfenum_PKR                     = 111,
	pfenum_PLN                     = 112,
	pfenum_PYG                     = 113,
	pfenum_QAR                     = 114,
	pfenum_RON                     = 115,
	pfenum_RSD                     = 116,
	pfenum_RUB                     = 117,
	pfenum_RWF                     = 118,
	pfenum_SAR                     = 119,
	pfenum_SBD                     = 120,
	pfenum_SCR                     = 121,
	pfenum_SDG                     = 122,
	pfenum_SEK                     = 123,
	pfenum_SGD                     = 124,
	pfenum_SHP                     = 125,
	pfenum_SLL                     = 126,
	pfenum_SOS                     = 127,
	pfenum_SPL                     = 128,
	pfenum_SRD                     = 129,
	pfenum_STD                     = 130,
	pfenum_SVC                     = 131,
	pfenum_SYP                     = 132,
	pfenum_SZL                     = 133,
	pfenum_THB                     = 134,
	pfenum_TJS                     = 135,
	pfenum_TMT                     = 136,
	pfenum_TND                     = 137,
	pfenum_TOP                     = 138,
	pfenum_TRY                     = 139,
	pfenum_TTD                     = 140,
	pfenum_TVD                     = 141,
	pfenum_TWD                     = 142,
	pfenum_TZS                     = 143,
	pfenum_UAH                     = 144,
	pfenum_UGX                     = 145,
	pfenum_USD                     = 146,
	pfenum_UYU                     = 147,
	pfenum_UZS                     = 148,
	pfenum_VEF                     = 149,
	pfenum_VND                     = 150,
	pfenum_VUV                     = 151,
	pfenum_WST                     = 152,
	pfenum_XAF                     = 153,
	pfenum_XCD                     = 154,
	pfenum_XDR                     = 155,
	pfenum_XOF                     = 156,
	pfenum_XPF                     = 157,
	pfenum_YER                     = 158,
	pfenum_ZAR                     = 159,
	pfenum_ZMW                     = 160,
	pfenum_ZWD                     = 161,
	pfenum_MAX                     = 162,
};

enum class EEffectType : uint8
{
	pfenum_Allow                   = 0,
	pfenum_Deny                    = 1,
	pfenum_MAX                     = 2,
};

enum class EEmailVerificationStatus : uint8
{
	pfenum_Unverified              = 0,
	pfenum_Pending                 = 1,
	pfenum_Confirmed               = 2,
	pfenum_MAX                     = 3,
};

enum class EPushNotificationPlatform : uint8
{
	pfenum_ApplePushNotificationService = 0,
	pfenum_GoogleCloudMessaging    = 1,
	pfenum_MAX                     = 2,
};

enum class EResultTableNodeType : uint8
{
	pfenum_ItemId                  = 0,
	pfenum_TableId                 = 1,
	pfenum_MAX                     = 2,
};

enum class ESegmentCountryCode : uint8
{
	pfenum_AF                      = 0,
	pfenum_AX                      = 1,
	pfenum_AL                      = 2,
	pfenum_DZ                      = 3,
	pfenum_AS                      = 4,
	pfenum_AD                      = 5,
	pfenum_AO                      = 6,
	pfenum_AI                      = 7,
	pfenum_AQ                      = 8,
	pfenum_AG                      = 9,
	pfenum_AR                      = 10,
	pfenum_AM                      = 11,
	pfenum_AW                      = 12,
	pfenum_AU                      = 13,
	pfenum_AT                      = 14,
	pfenum_AZ                      = 15,
	pfenum_BS                      = 16,
	pfenum_BH                      = 17,
	pfenum_BD                      = 18,
	pfenum_BB                      = 19,
	pfenum_BY                      = 20,
	pfenum_BE                      = 21,
	pfenum_BZ                      = 22,
	pfenum_BJ                      = 23,
	pfenum_BM                      = 24,
	pfenum_BT                      = 25,
	pfenum_BO                      = 26,
	pfenum_BQ                      = 27,
	pfenum_BA                      = 28,
	pfenum_BW                      = 29,
	pfenum_BV                      = 30,
	pfenum_BR                      = 31,
	pfenum_IO                      = 32,
	pfenum_BN                      = 33,
	pfenum_BG                      = 34,
	pfenum_BF                      = 35,
	pfenum_BI                      = 36,
	pfenum_KH                      = 37,
	pfenum_CM                      = 38,
	pfenum_CA                      = 39,
	pfenum_CV                      = 40,
	pfenum_KY                      = 41,
	pfenum_CF                      = 42,
	pfenum_TD                      = 43,
	pfenum_CL                      = 44,
	pfenum_CN                      = 45,
	pfenum_CX                      = 46,
	pfenum_CC                      = 47,
	pfenum_CO                      = 48,
	pfenum_KM                      = 49,
	pfenum_CG                      = 50,
	pfenum_CD                      = 51,
	pfenum_CK                      = 52,
	pfenum_CR                      = 53,
	pfenum_CI                      = 54,
	pfenum_HR                      = 55,
	pfenum_CU                      = 56,
	pfenum_CW                      = 57,
	pfenum_CY                      = 58,
	pfenum_CZ                      = 59,
	pfenum_DK                      = 60,
	pfenum_DJ                      = 61,
	pfenum_DM                      = 62,
	pfenum_DO                      = 63,
	pfenum_EC                      = 64,
	pfenum_EG                      = 65,
	pfenum_SV                      = 66,
	pfenum_GQ                      = 67,
	pfenum_ER                      = 68,
	pfenum_EE                      = 69,
	pfenum_ET                      = 70,
	pfenum_FK                      = 71,
	pfenum_FO                      = 72,
	pfenum_FJ                      = 73,
	pfenum_FI                      = 74,
	pfenum_FR                      = 75,
	pfenum_GF                      = 76,
	pfenum_PF                      = 77,
	pfenum_TF                      = 78,
	pfenum_GA                      = 79,
	pfenum_GM                      = 80,
	pfenum_GE                      = 81,
	pfenum_DE                      = 82,
	pfenum_GH                      = 83,
	pfenum_GI                      = 84,
	pfenum_GR                      = 85,
	pfenum_GL                      = 86,
	pfenum_GD                      = 87,
	pfenum_GP                      = 88,
	pfenum_GU                      = 89,
	pfenum_GT                      = 90,
	pfenum_GG                      = 91,
	pfenum_GN                      = 92,
	pfenum_GW                      = 93,
	pfenum_GY                      = 94,
	pfenum_HT                      = 95,
	pfenum_HM                      = 96,
	pfenum_VA                      = 97,
	pfenum_HN                      = 98,
	pfenum_HK                      = 99,
	pfenum_HU                      = 100,
	pfenum_IS                      = 101,
	pfenum_IN                      = 102,
	pfenum_ID                      = 103,
	pfenum_IR                      = 104,
	pfenum_IQ                      = 105,
	pfenum_IE                      = 106,
	pfenum_IM                      = 107,
	pfenum_IL                      = 108,
	pfenum_IT                      = 109,
	pfenum_JM                      = 110,
	pfenum_JP                      = 111,
	pfenum_JE                      = 112,
	pfenum_JO                      = 113,
	pfenum_KZ                      = 114,
	pfenum_KE                      = 115,
	pfenum_KI                      = 116,
	pfenum_KP                      = 117,
	pfenum_KR                      = 118,
	pfenum_KW                      = 119,
	pfenum_KG                      = 120,
	pfenum_LA                      = 121,
	pfenum_LV                      = 122,
	pfenum_LB                      = 123,
	pfenum_LS                      = 124,
	pfenum_LR                      = 125,
	pfenum_LY                      = 126,
	pfenum_LI                      = 127,
	pfenum_LT                      = 128,
	pfenum_LU                      = 129,
	pfenum_MO                      = 130,
	pfenum_MK                      = 131,
	pfenum_MG                      = 132,
	pfenum_MW                      = 133,
	pfenum_MY                      = 134,
	pfenum_MV                      = 135,
	pfenum_ML                      = 136,
	pfenum_MT                      = 137,
	pfenum_MH                      = 138,
	pfenum_MQ                      = 139,
	pfenum_MR                      = 140,
	pfenum_MU                      = 141,
	pfenum_YT                      = 142,
	pfenum_MX                      = 143,
	pfenum_FM                      = 144,
	pfenum_MD                      = 145,
	pfenum_MC                      = 146,
	pfenum_MN                      = 147,
	pfenum_ME                      = 148,
	pfenum_MS                      = 149,
	pfenum_MA                      = 150,
	pfenum_MZ                      = 151,
	pfenum_MM                      = 152,
	pfenum_NA                      = 153,
	pfenum_NR                      = 154,
	pfenum_NP                      = 155,
	pfenum_NL                      = 156,
	pfenum_NC                      = 157,
	pfenum_NZ                      = 158,
	pfenum_NI                      = 159,
	pfenum_NE                      = 160,
	pfenum_NG                      = 161,
	pfenum_NU                      = 162,
	pfenum_NF                      = 163,
	pfenum_MP                      = 164,
	pfenum_NO                      = 165,
	pfenum_OM                      = 166,
	pfenum_PK                      = 167,
	pfenum_PW                      = 168,
	pfenum_PS                      = 169,
	pfenum_PA                      = 170,
	pfenum_PG                      = 171,
	pfenum_PY                      = 172,
	pfenum_PE                      = 173,
	pfenum_PH                      = 174,
	pfenum_PN                      = 175,
	pfenum_PL                      = 176,
	pfenum_PT                      = 177,
	pfenum_PR                      = 178,
	pfenum_QA                      = 179,
	pfenum_RE                      = 180,
	pfenum_RO                      = 181,
	pfenum_RU                      = 182,
	pfenum_RW                      = 183,
	pfenum_BL                      = 184,
	pfenum_SH                      = 185,
	pfenum_KN                      = 186,
	pfenum_LC                      = 187,
	pfenum_MF                      = 188,
	pfenum_PM                      = 189,
	pfenum_VC                      = 190,
	pfenum_WS                      = 191,
	pfenum_SM                      = 192,
	pfenum_ST                      = 193,
	pfenum_SA                      = 194,
	pfenum_SN                      = 195,
	pfenum_RS                      = 196,
	pfenum_SC                      = 197,
	pfenum_SL                      = 198,
	pfenum_SG                      = 199,
	pfenum_SX                      = 200,
	pfenum_SK                      = 201,
	pfenum_SI                      = 202,
	pfenum_SB                      = 203,
	pfenum_SO                      = 204,
	pfenum_ZA                      = 205,
	pfenum_GS                      = 206,
	pfenum_SS                      = 207,
	pfenum_ES                      = 208,
	pfenum_LK                      = 209,
	pfenum_SD                      = 210,
	pfenum_SR                      = 211,
	pfenum_SJ                      = 212,
	pfenum_SZ                      = 213,
	pfenum_SE                      = 214,
	pfenum_CH                      = 215,
	pfenum_SY                      = 216,
	pfenum_TW                      = 217,
	pfenum_TJ                      = 218,
	pfenum_TZ                      = 219,
	pfenum_TH                      = 220,
	pfenum_TL                      = 221,
	pfenum_TG                      = 222,
	pfenum_TK                      = 223,
	pfenum_TO                      = 224,
	pfenum_TT                      = 225,
	pfenum_TN                      = 226,
	pfenum_TR                      = 227,
	pfenum_TM                      = 228,
	pfenum_TC                      = 229,
	pfenum_TV                      = 230,
	pfenum_UG                      = 231,
	pfenum_UA                      = 232,
	pfenum_AE                      = 233,
	pfenum_GB                      = 234,
	pfenum_US                      = 235,
	pfenum_UM                      = 236,
	pfenum_UY                      = 237,
	pfenum_UZ                      = 238,
	pfenum_VU                      = 239,
	pfenum_VE                      = 240,
	pfenum_VN                      = 241,
	pfenum_VG                      = 242,
	pfenum_VI                      = 243,
	pfenum_WF                      = 244,
	pfenum_EH                      = 245,
	pfenum_YE                      = 246,
	pfenum_ZM                      = 247,
	pfenum_ZW                      = 248,
	pfenum_MAX                     = 249,
};

enum class ESegmentCurrency : uint8
{
	pfenum_AED                     = 0,
	pfenum_AFN                     = 1,
	pfenum_ALL                     = 2,
	pfenum_AMD                     = 3,
	pfenum_ANG                     = 4,
	pfenum_AOA                     = 5,
	pfenum_ARS                     = 6,
	pfenum_AUD                     = 7,
	pfenum_AWG                     = 8,
	pfenum_AZN                     = 9,
	pfenum_BAM                     = 10,
	pfenum_BBD                     = 11,
	pfenum_BDT                     = 12,
	pfenum_BGN                     = 13,
	pfenum_BHD                     = 14,
	pfenum_BIF                     = 15,
	pfenum_BMD                     = 16,
	pfenum_BND                     = 17,
	pfenum_BOB                     = 18,
	pfenum_BRL                     = 19,
	pfenum_BSD                     = 20,
	pfenum_BTN                     = 21,
	pfenum_BWP                     = 22,
	pfenum_BYR                     = 23,
	pfenum_BZD                     = 24,
	pfenum_CAD                     = 25,
	pfenum_CDF                     = 26,
	pfenum_CHF                     = 27,
	pfenum_CLP                     = 28,
	pfenum_CNY                     = 29,
	pfenum_COP                     = 30,
	pfenum_CRC                     = 31,
	pfenum_CUC                     = 32,
	pfenum_CUP                     = 33,
	pfenum_CVE                     = 34,
	pfenum_CZK                     = 35,
	pfenum_DJF                     = 36,
	pfenum_DKK                     = 37,
	pfenum_DOP                     = 38,
	pfenum_DZD                     = 39,
	pfenum_EGP                     = 40,
	pfenum_ERN                     = 41,
	pfenum_ETB                     = 42,
	pfenum_EUR                     = 43,
	pfenum_FJD                     = 44,
	pfenum_FKP                     = 45,
	pfenum_GBP                     = 46,
	pfenum_GEL                     = 47,
	pfenum_GGP                     = 48,
	pfenum_GHS                     = 49,
	pfenum_GIP                     = 50,
	pfenum_GMD                     = 51,
	pfenum_GNF                     = 52,
	pfenum_GTQ                     = 53,
	pfenum_GYD                     = 54,
	pfenum_HKD                     = 55,
	pfenum_HNL                     = 56,
	pfenum_HRK                     = 57,
	pfenum_HTG                     = 58,
	pfenum_HUF                     = 59,
	pfenum_IDR                     = 60,
	pfenum_ILS                     = 61,
	pfenum_IMP                     = 62,
	pfenum_INR                     = 63,
	pfenum_IQD                     = 64,
	pfenum_IRR                     = 65,
	pfenum_ISK                     = 66,
	pfenum_JEP                     = 67,
	pfenum_JMD                     = 68,
	pfenum_JOD                     = 69,
	pfenum_JPY                     = 70,
	pfenum_KES                     = 71,
	pfenum_KGS                     = 72,
	pfenum_KHR                     = 73,
	pfenum_KMF                     = 74,
	pfenum_KPW                     = 75,
	pfenum_KRW                     = 76,
	pfenum_KWD                     = 77,
	pfenum_KYD                     = 78,
	pfenum_KZT                     = 79,
	pfenum_LAK                     = 80,
	pfenum_LBP                     = 81,
	pfenum_LKR                     = 82,
	pfenum_LRD                     = 83,
	pfenum_LSL                     = 84,
	pfenum_LYD                     = 85,
	pfenum_MAD                     = 86,
	pfenum_MDL                     = 87,
	pfenum_MGA                     = 88,
	pfenum_MKD                     = 89,
	pfenum_MMK                     = 90,
	pfenum_MNT                     = 91,
	pfenum_MOP                     = 92,
	pfenum_MRO                     = 93,
	pfenum_MUR                     = 94,
	pfenum_MVR                     = 95,
	pfenum_MWK                     = 96,
	pfenum_MXN                     = 97,
	pfenum_MYR                     = 98,
	pfenum_MZN                     = 99,
	pfenum_NAD                     = 100,
	pfenum_NGN                     = 101,
	pfenum_NIO                     = 102,
	pfenum_NOK                     = 103,
	pfenum_NPR                     = 104,
	pfenum_NZD                     = 105,
	pfenum_OMR                     = 106,
	pfenum_PAB                     = 107,
	pfenum_PEN                     = 108,
	pfenum_PGK                     = 109,
	pfenum_PHP                     = 110,
	pfenum_PKR                     = 111,
	pfenum_PLN                     = 112,
	pfenum_PYG                     = 113,
	pfenum_QAR                     = 114,
	pfenum_RON                     = 115,
	pfenum_RSD                     = 116,
	pfenum_RUB                     = 117,
	pfenum_RWF                     = 118,
	pfenum_SAR                     = 119,
	pfenum_SBD                     = 120,
	pfenum_SCR                     = 121,
	pfenum_SDG                     = 122,
	pfenum_SEK                     = 123,
	pfenum_SGD                     = 124,
	pfenum_SHP                     = 125,
	pfenum_SLL                     = 126,
	pfenum_SOS                     = 127,
	pfenum_SPL                     = 128,
	pfenum_SRD                     = 129,
	pfenum_STD                     = 130,
	pfenum_SVC                     = 131,
	pfenum_SYP                     = 132,
	pfenum_SZL                     = 133,
	pfenum_THB                     = 134,
	pfenum_TJS                     = 135,
	pfenum_TMT                     = 136,
	pfenum_TND                     = 137,
	pfenum_TOP                     = 138,
	pfenum_TRY                     = 139,
	pfenum_TTD                     = 140,
	pfenum_TVD                     = 141,
	pfenum_TWD                     = 142,
	pfenum_TZS                     = 143,
	pfenum_UAH                     = 144,
	pfenum_UGX                     = 145,
	pfenum_USD                     = 146,
	pfenum_UYU                     = 147,
	pfenum_UZS                     = 148,
	pfenum_VEF                     = 149,
	pfenum_VND                     = 150,
	pfenum_VUV                     = 151,
	pfenum_WST                     = 152,
	pfenum_XAF                     = 153,
	pfenum_XCD                     = 154,
	pfenum_XDR                     = 155,
	pfenum_XOF                     = 156,
	pfenum_XPF                     = 157,
	pfenum_YER                     = 158,
	pfenum_ZAR                     = 159,
	pfenum_ZMW                     = 160,
	pfenum_ZWD                     = 161,
	pfenum_MAX                     = 162,
};

enum class ESegmentFilterComparison : uint8
{
	pfenum_GreaterThan             = 0,
	pfenum_LessThan                = 1,
	pfenum_EqualTo                 = 2,
	pfenum_NotEqualTo              = 3,
	pfenum_GreaterThanOrEqual      = 4,
	pfenum_LessThanOrEqual         = 5,
	pfenum_Exists                  = 6,
	pfenum_Contains                = 7,
	pfenum_NotContains             = 8,
	pfenum_MAX                     = 9,
};

enum class ESegmentLoginIdentityProvider : uint8
{
	pfenum_Unknown                 = 0,
	pfenum_PlayFab                 = 1,
	pfenum_Custom                  = 2,
	pfenum_GameCenter              = 3,
	pfenum_GooglePlay              = 4,
	pfenum_Steam                   = 5,
	pfenum_XBoxLive                = 6,
	pfenum_PSN                     = 7,
	pfenum_Kongregate              = 8,
	pfenum_Facebook                = 9,
	pfenum_IOSDevice               = 10,
	pfenum_AndroidDevice           = 11,
	pfenum_Twitch                  = 12,
	pfenum_WindowsHello            = 13,
	pfenum_GameServer              = 14,
	pfenum_CustomServer            = 15,
	pfenum_NintendoSwitch          = 16,
	pfenum_FacebookInstantGames    = 17,
	pfenum_OpenIdConnect           = 18,
	pfenum_Apple                   = 19,
	pfenum_NintendoSwitchAccount   = 20,
	pfenum_MAX                     = 21,
};

enum class ESegmentPushNotificationDevicePlatform : uint8
{
	pfenum_ApplePushNotificationService = 0,
	pfenum_GoogleCloudMessaging    = 1,
	pfenum_MAX                     = 2,
};

enum class EStatisticVersionArchivalStatus : uint8
{
	pfenum_NotScheduled            = 0,
	pfenum_Scheduled               = 1,
	pfenum_Queued                  = 2,
	pfenum_InProgress              = 3,
	pfenum_Complete                = 4,
	pfenum_MAX                     = 5,
};

enum class EStatisticVersionStatus : uint8
{
	pfenum_Active                  = 0,
	pfenum_SnapshotPending         = 1,
	pfenum_Snapshot                = 2,
	pfenum_ArchivalPending         = 3,
	pfenum_Archived                = 4,
	pfenum_MAX                     = 5,
};

enum class ESubscriptionProviderStatus : uint8
{
	pfenum_NoError                 = 0,
	pfenum_Cancelled               = 1,
	pfenum_UnknownError            = 2,
	pfenum_BillingError            = 3,
	pfenum_ProductUnavailable      = 4,
	pfenum_CustomerDidNotAcceptPriceChange = 5,
	pfenum_FreeTrial               = 6,
	pfenum_PaymentPending          = 7,
	pfenum_MAX                     = 8,
};

enum class ETitleActivationStatus : uint8
{
	pfenum_None                    = 0,
	pfenum_ActivatedTitleKey       = 1,
	pfenum_PendingSteam            = 2,
	pfenum_ActivatedSteam          = 3,
	pfenum_RevokedSteam            = 4,
	pfenum_MAX                     = 5,
};

enum class EUserOrigination : uint8
{
	pfenum_Organic                 = 0,
	pfenum_Steam                   = 1,
	pfenum_Google                  = 2,
	pfenum_Amazon                  = 3,
	pfenum_Facebook                = 4,
	pfenum_Kongregate              = 5,
	pfenum_GamersFirst             = 6,
	pfenum_Unknown                 = 7,
	pfenum_IOS                     = 8,
	pfenum_LoadTest                = 9,
	pfenum_Android                 = 10,
	pfenum_PSN                     = 11,
	pfenum_GameCenter              = 12,
	pfenum_CustomId                = 13,
	pfenum_XboxLive                = 14,
	pfenum_Parse                   = 15,
	pfenum_Twitch                  = 16,
	pfenum_ServerCustomId          = 17,
	pfenum_NintendoSwitchDeviceId  = 18,
	pfenum_FacebookInstantGamesId  = 19,
	pfenum_OpenIdConnect           = 20,
	pfenum_Apple                   = 21,
	pfenum_NintendoSwitchAccount   = 22,
	pfenum_GooglePlayGames         = 23,
	pfenum_MAX                     = 24,
};

enum class EPfTriggerType : uint8
{
	pfenum_HTTP                    = 0,
	pfenum_Queue                   = 1,
	pfenum_MAX                     = 2,
};

enum class EDisplayPropertyType : uint8
{
	pfenum_None                    = 0,
	pfenum_QueryDateTime           = 1,
	pfenum_QueryDouble             = 2,
	pfenum_QueryString             = 3,
	pfenum_SearchString            = 4,
	pfenum_MAX                     = 5,
};

enum class EAnalysisTaskState : uint8
{
	pfenum_Waiting                 = 0,
	pfenum_ReadyForSubmission      = 1,
	pfenum_SubmittingToPipeline    = 2,
	pfenum_Running                 = 3,
	pfenum_Completed               = 4,
	pfenum_Failed                  = 5,
	pfenum_Canceled                = 6,
	pfenum_MAX                     = 7,
};

enum class EExperimentState : uint8
{
	pfenum_New                     = 0,
	pfenum_Started                 = 1,
	pfenum_Stopped                 = 2,
	pfenum_Deleted                 = 3,
	pfenum_MAX                     = 4,
};

enum class EAzureRegion : uint8
{
	pfenum_AustraliaEast           = 0,
	pfenum_AustraliaSoutheast      = 1,
	pfenum_BrazilSouth             = 2,
	pfenum_CentralUs               = 3,
	pfenum_EastAsia                = 4,
	pfenum_EastUs                  = 5,
	pfenum_EastUs2                 = 6,
	pfenum_JapanEast               = 7,
	pfenum_JapanWest               = 8,
	pfenum_NorthCentralUs          = 9,
	pfenum_NorthEurope             = 10,
	pfenum_SouthCentralUs          = 11,
	pfenum_SoutheastAsia           = 12,
	pfenum_WestEurope              = 13,
	pfenum_WestUs                  = 14,
	pfenum_SouthAfricaNorth        = 15,
	pfenum_WestCentralUs           = 16,
	pfenum_KoreaCentral            = 17,
	pfenum_FranceCentral           = 18,
	pfenum_WestUs2                 = 19,
	pfenum_CentralIndia            = 20,
	pfenum_UaeNorth                = 21,
	pfenum_UkSouth                 = 22,
	pfenum_MAX                     = 23,
};

enum class EAzureVmFamily : uint8
{
	pfenum_A                       = 0,
	pfenum_Av2                     = 1,
	pfenum_Dv2                     = 2,
	pfenum_Dv3                     = 3,
	pfenum_F                       = 4,
	pfenum_Fsv2                    = 5,
	pfenum_Dasv4                   = 6,
	pfenum_Dav4                    = 7,
	pfenum_Dadsv5                  = 8,
	pfenum_Eav4                    = 9,
	pfenum_Easv4                   = 10,
	pfenum_Ev4                     = 11,
	pfenum_Esv4                    = 12,
	pfenum_Dsv3                    = 13,
	pfenum_Dsv2                    = 14,
	pfenum_NCasT4_v3               = 15,
	pfenum_Ddv4                    = 16,
	pfenum_Ddsv4                   = 17,
	pfenum_HBv3                    = 18,
	pfenum_MAX                     = 19,
};

enum class ECancellationReason : uint8
{
	pfenum_Requested               = 0,
	pfenum_Internal                = 1,
	pfenum_Timeout                 = 2,
	pfenum_MAX                     = 3,
};

enum class EOsPlatform : uint8
{
	pfenum_Windows                 = 0,
	pfenum_Linux                   = 1,
	pfenum_MAX                     = 2,
};

enum class EProtocolType : uint8
{
	pfenum_TCP                     = 0,
	pfenum_UDP                     = 1,
	pfenum_MAX                     = 2,
};

enum class ERoutingType : uint8
{
	pfenum_Microsoft               = 0,
	pfenum_Internet                = 1,
	pfenum_MAX                     = 2,
};

enum class EServerType : uint8
{
	pfenum_Container               = 0,
	pfenum_Process                 = 1,
	pfenum_MAX                     = 2,
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
	uint8                                        Pad_37FF[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3803[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3806[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3808[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_380A[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_380B[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_380D[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_380F[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatisticResetIntervalOption     VersionChangeInterval;                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3810[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3813[0x3];                                     // Fixing Size After Last Property
	int32                                        Revision;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3814[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3816[0x7];                                     // Fixing Size After Last Property
	class FString                                ServerIPV4Address;                                 // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerIPV6Address;                                 // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPort;                                        // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3818[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3819[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_381B[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_381C[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_381D[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_381E[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3820[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3821[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3822[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3823[0x3];                                     // Fixing Size After Last Property
	int32                                        MaxBatchSize;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondsToLive;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3824[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3825[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3827[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3829[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_382A[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_382B[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_382F[0x6];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminSubtractUserVirtualCurrencyRequest
struct FAdminSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3830[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3832[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3834[0x7];                                     // Fixing Size After Last Property
	class FString                                FriendlyName;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SecretKey;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionRequest
struct FAdminUpdatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon
{
public:
	enum class EStatisticAggregationMethod       AggregationMethod;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3835[0x7];                                     // Fixing Size After Last Property
	class FString                                StatisticName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStatisticResetIntervalOption     VersionChangeInterval;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3836[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.AdminUpdatePolicyRequest
struct FAdminUpdatePolicyRequest : public FPlayFabRequestCommon
{
public:
	bool                                         OverwritePolicy;                                   // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3838[0x7];                                     // Fixing Size After Last Property
	class FString                                PolicyName;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PolicyVersion;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3839[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_383B[0x7];                                     // Fixing Size After Last Property
	class FString                                Name;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Parameter;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Schedule;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScheduledTaskType                Type;                                              // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383C[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_383D[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_383E[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_383F[0x6];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3840[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3841[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3842[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3843[0x4];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.ClientConsumeItemRequest
struct FClientConsumeItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumeCount;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3844[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3845[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3847[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    Error;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExecutionTimeSeconds;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3848[0x4];                                     // Fixing Size After Last Property
	class FString                                FunctionName;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FunctionResultTooLarge;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3849[0x3];                                     // Fixing Size After Last Property
	int32                                        HttpRequestsIssued;                                // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Logs;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         LogsTooLarge;                                      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384A[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_384C[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_384E[0x4];                                     // Fixing Size After Last Property
	TArray<class UPlayFabJsonObject*>            Games;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PlayerCount;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384F[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardResult
struct FClientGetLeaderboardResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextReset;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3850[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerResult
struct FClientGetFriendLeaderboardAroundPlayerResult : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            Leaderboard;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                NextReset;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3851[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3853[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3854[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3855[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3856[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3857[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3858[0x4];                                     // Fixing Size After Last Property
	class FString                                ServerIPV4Address;                                 // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerIPV6Address;                                 // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPort;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3859[0x4];                                     // Fixing Size After Last Property
	class FString                                ServerPublicDNSName;                               // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMatchmakeStatus                  Status;                                            // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385A[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_385B[0x4];                                     // Fixing Size After Last Property
	class FString                                OrderID;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderData;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProviderToken;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PurchaseConfirmationPageURL;                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PurchaseCurrency;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchasePrice;                                     // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransactionStatus                Status;                                            // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385C[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_385D[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_385F[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3860[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3862[0x2];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3863[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3864[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientCurrentGamesRequest
struct FClientCurrentGamesRequest : public FPlayFabRequestCommon
{
public:
	class FString                                BuildVersion;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameMode;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERegion                           Region;                                            // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3865[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3866[0x3];                                     // Fixing Size After Last Property
	int32                                        MaxResultsCount;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3868[0x4];                                     // Fixing Size After Last Property
	class FString                                StatisticName;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3869[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_386B[0x3];                                     // Fixing Size After Last Property
	int32                                        MaxResultsCount;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386C[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_386D[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_386F[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3870[0x4];                                     // Fixing Size After Last Property
	class FString                                StatisticName;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3872[0x3];                                     // Fixing Size After Last Property
	int32                                        Version;                                           // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterRequest
struct FClientGetLeaderboardAroundCharacterRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3873[0x4];                                     // Fixing Size After Last Property
	class FString                                StatisticName;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerRequest
struct FClientGetLeaderboardAroundPlayerRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3874[0x4];                                     // Fixing Size After Last Property
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3875[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3877[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3878[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_387A[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_387B[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_387C[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_387D[0x7];                                     // Fixing Size After Last Property
	class FString                                OS;                                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkAppleRequest
struct FClientLinkAppleRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387E[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_387F[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkFacebookAccountRequest
struct FClientLinkFacebookAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3880[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdRequest
struct FClientLinkFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FacebookInstantGamesSignature;                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3881[0x7];                                     // Fixing Size Of Struct
};

// 0x60 (0x68 - 0x8)
// ScriptStruct PlayFab.ClientLinkGameCenterAccountRequest
struct FClientLinkGameCenterAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3882[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3884[0x7];                                     // Fixing Size After Last Property
	class FString                                ServerAuthCode;                                    // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkGooglePlayGamesServicesAccountRequest
struct FClientLinkGooglePlayGamesServicesAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3885[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3886[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3887[0x7];                                     // Fixing Size After Last Property
	class FString                                KongregateId;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkNintendoServiceAccountRequest
struct FClientLinkNintendoServiceAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3888[0x7];                                     // Fixing Size After Last Property
	class FString                                IdentityToken;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdRequest
struct FClientLinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3889[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_388A[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_388B[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_388D[0x7];                                     // Fixing Size After Last Property
	class FString                                SteamTicket;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TicketIsServiceSpecific;                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388E[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkTwitchAccountRequest
struct FClientLinkTwitchAccountRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388F[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ClientLinkXboxAccountRequest
struct FClientLinkXboxAccountRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLink;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3890[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3891[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3892[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3893[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3894[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3896[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3897[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3899[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerAuthCode;                                    // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetEmail;                                          // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389A[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithGooglePlayGamesServicesRequest
struct FClientLoginWithGooglePlayGamesServicesRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389B[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_389C[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_389E[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_389F[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38A0[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38A1[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38A2[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IssuerId;                                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A3[0x4];                                     // Fixing Size After Last Property
	class FString                                PlayerSecret;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectUri;                                       // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithSteamRequest
struct FClientLoginWithSteamRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A4[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncryptedRequest;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InfoRequestParameters;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerSecret;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SteamTicket;                                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TicketIsServiceSpecific;                           // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A5[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x50 - 0x8)
// ScriptStruct PlayFab.ClientLoginWithTwitchRequest
struct FClientLoginWithTwitchRequest : public FPlayFabRequestCommon
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreateAccount;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A6[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38A7[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38A8[0x6];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38A9[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38AA[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38AB[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38AC[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38AD[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38AE[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38B3[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38B4[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38B5[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38B6[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38B7[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38BA[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38BD[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38BE[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    Error;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExecutionTimeSeconds;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38BF[0x4];                                     // Fixing Size After Last Property
	class FString                                FunctionName;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FunctionResultTooLarge;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C0[0x3];                                     // Fixing Size After Last Property
	int32                                        HttpRequestsIssued;                                // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Logs;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         LogsTooLarge;                                      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C1[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38C5[0x4];                                     // Fixing Size After Last Property
	class FString                                FunctionName;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FunctionResultTooLarge;                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38C7[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38C8[0x2];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38C9[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38CE[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38CF[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.DataDeleteFilesResponse
struct FDataDeleteFilesResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D0[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataFinalizeFileUploadsResponse
struct FDataFinalizeFileUploadsResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D1[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataGetFilesResponse
struct FDataGetFilesResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D2[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataGetObjectsResponse
struct FDataGetObjectsResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Objects;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D3[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.DataInitiateFileUploadsResponse
struct FDataInitiateFileUploadsResponse : public FPlayFabResultCommon
{
public:
	class UPlayFabJsonObject*                    Entity;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D4[0x4];                                     // Fixing Size After Last Property
	TArray<class UPlayFabJsonObject*>            UploadDetails;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.DataSetObjectsResponse
struct FDataSetObjectsResponse : public FPlayFabResultCommon
{
public:
	int32                                        ProfileVersion;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D5[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38D8[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38DB[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38DC[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38DD[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.DataSetObjectsRequest
struct FDataSetObjectsRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Entity;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpectedProfileVersion;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38DE[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38DF[0x4];                                     // Fixing Size After Last Property
	class FString                                CollectionId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DurationInSeconds;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38E0[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38E3[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38E8[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38EB[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_38EF[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38F0[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38F2[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38F3[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38F4[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38F9[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_38FA[0x4];                                     // Fixing Size After Last Property
	class FString                                CollectionId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DeleteEmptyStacks;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38FB[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3900[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3901[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3905[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3907[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3908[0x7];                                     // Fixing Size Of Struct
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.EconomySubtractInventoryItemsRequest
struct FEconomySubtractInventoryItemsRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3909[0x4];                                     // Fixing Size After Last Property
	class FString                                CollectionId;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DeleteEmptyStacks;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390A[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_390B[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DeleteEmptyStacks;                                 // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390C[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_390D[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3912[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3917[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3918[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3919[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_391D[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_391F[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3920[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3922[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.GroupsUpdateGroupRoleResponse
struct FGroupsUpdateGroupRoleResponse : public FPlayFabResultCommon
{
public:
	class FString                                OperationReason;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProfileVersion;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOperationTypes                   SetResult;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3923[0x3];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3925[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3928[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3929[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_392A[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_392B[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_392C[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayFab.InsightsInsightsSetStorageRetentionRequest
struct FInsightsInsightsSetStorageRetentionRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RetentionDays;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_392D[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_392E[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_392F[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3930[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3931[0x7];                                     // Fixing Size After Last Property
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3932[0x7];                                     // Fixing Size After Last Property
	class FString                                ContainerRunCommand;                               // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreationTime;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomGameContainerImage;                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LinuxInstrumentationConfiguration;                 // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3933[0x4];                                     // Fixing Size After Last Property
	class FString                                OsPlatform;                                        // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3934[0x6];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerRequest
struct FMultiplayerCreateBuildWithCustomContainerRequest : public FPlayFabRequestCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3935[0x7];                                     // Fixing Size After Last Property
	class FString                                BuildName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3936[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    ContainerImageReference;                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerRunCommand;                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LinuxInstrumentationConfiguration;                 // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3937[0x4];                                     // Fixing Size After Last Property
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3938[0x6];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerResponse
struct FMultiplayerCreateBuildWithManagedContainerResponse : public FPlayFabResultCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3939[0x7];                                     // Fixing Size After Last Property
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393A[0x7];                                     // Fixing Size After Last Property
	class FString                                CreationTime;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GameWorkingDirectory;                              // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393B[0x4];                                     // Fixing Size After Last Property
	class FString                                OsPlatform;                                        // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393C[0x6];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerRequest
struct FMultiplayerCreateBuildWithManagedContainerRequest : public FPlayFabRequestCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393D[0x7];                                     // Fixing Size After Last Property
	class FString                                BuildName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393E[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GameWorkingDirectory;                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_393F[0x4];                                     // Fixing Size After Last Property
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3940[0x6];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    WindowsCrashDumpConfiguration;                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithProcessBasedServerResponse
struct FMultiplayerCreateBuildWithProcessBasedServerResponse : public FPlayFabResultCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3941[0x7];                                     // Fixing Size After Last Property
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3942[0x7];                                     // Fixing Size After Last Property
	class FString                                CreationTime;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GameWorkingDirectory;                              // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOSPreview;                                       // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3943[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    MetaData;                                          // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3944[0x4];                                     // Fixing Size After Last Property
	class FString                                OsPlatform;                                        // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3945[0x6];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    VmStartupScriptConfiguration;                      // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct PlayFab.MultiplayerCreateBuildWithProcessBasedServerRequest
struct FMultiplayerCreateBuildWithProcessBasedServerRequest : public FPlayFabRequestCommon
{
public:
	bool                                         AreAssetsReadonly;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3946[0x7];                                     // Fixing Size After Last Property
	class FString                                BuildName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GameWorkingDirectory;                              // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOSPreview;                                       // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3947[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    MetaData;                                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MonitoringApplicationConfiguration;                // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3948[0x4];                                     // Fixing Size After Last Property
	class FString                                OsPlatform;                                        // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamingForAssetDownloads;                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3949[0x6];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_394A[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LobbyData;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394B[0x4];                                     // Fixing Size After Last Property
	TArray<class UPlayFabJsonObject*>            Members;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Owner;                                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOwnerMigrationPolicy             OwnerMigrationPolicy;                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394C[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    SearchData;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseConnections;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394D[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_394E[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_394F[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3951[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3952[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3953[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3954[0x7];                                     // Fixing Size After Last Property
	class FString                                BuildId;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildName;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildStatus;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainerFlavor                  ContainerFlavor;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3955[0x7];                                     // Fixing Size After Last Property
	class FString                                ContainerRunCommand;                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreationTime;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomGameContainerImage;                          // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameAssetReferences;                               // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            GameCertificateReferences;                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    InstrumentationConfiguration;                      // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MetaData;                                          // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiplayerServerCountPerVm;                       // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3956[0x4];                                     // Fixing Size After Last Property
	class FString                                OsPlatform;                                        // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Ports;                                             // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            RegionConfigurations;                              // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ServerResourceConstraints;                         // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StartMultiplayerServerCommand;                     // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureVmSize                      VmSize;                                            // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3957[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3958[0x4];                                     // Fixing Size After Last Property
	class FString                                Created;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    Creator;                                           // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GiveUpAfterSeconds;                                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3959[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_395A[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    TimeToMatchStatisticsInSeconds;                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointResponse
struct FMultiplayerGetRemoteLoginEndpointResponse : public FPlayFabResultCommon
{
public:
	class FString                                IPV4Address;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395B[0x4];                                     // Fixing Size Of Struct
};

// 0x80 (0x88 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketResult
struct FMultiplayerGetServerBackfillTicketResult : public FPlayFabResultCommon
{
public:
	class FString                                CancellationReasonString;                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Created;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GiveUpAfterSeconds;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395C[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_395D[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_395E[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListAssetSummariesResponse
struct FMultiplayerListAssetSummariesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            AssetSummaries;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395F[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListBuildAliasesResponse
struct FMultiplayerListBuildAliasesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BuildAliases;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3960[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListBuildSummariesResponse
struct FMultiplayerListBuildSummariesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            BuildSummaries;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3961[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListCertificateSummariesResponse
struct FMultiplayerListCertificateSummariesResponse : public FPlayFabResultCommon
{
public:
	TArray<class UPlayFabJsonObject*>            CertificateSummaries;                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3962[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListContainerImagesResponse
struct FMultiplayerListContainerImagesResponse : public FPlayFabResultCommon
{
public:
	class FString                                Images;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3963[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3964[0x4];                                     // Fixing Size After Last Property
	TArray<class UPlayFabJsonObject*>            QosServers;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                SkipToken;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct PlayFab.MultiplayerListQosServersForTitleResponse
struct FMultiplayerListQosServersForTitleResponse : public FPlayFabResultCommon
{
public:
	int32                                        PageSize;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3965[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3966[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3968[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_396D[0x7];                                     // Fixing Size After Last Property
	class FString                                MatchID;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QueueName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnMemberAttributes;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396E[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketRequest
struct FMultiplayerGetMatchmakingTicketRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EscapeObject;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396F[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3970[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3971[0x7];                                     // Fixing Size After Last Property
	class FString                                ArrangementString;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3972[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    MemberData;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberEntity;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOwnerMigrationPolicy             OwnerMigrationPolicy;                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseConnections;                                    // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3973[0x6];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3974[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3975[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListBuildAliasesRequest
struct FMultiplayerListBuildAliasesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3976[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListBuildSummariesRequest
struct FMultiplayerListBuildSummariesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3978[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListCertificateSummariesRequest
struct FMultiplayerListCertificateSummariesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3979[0x4];                                     // Fixing Size After Last Property
	class FString                                SkipToken;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.MultiplayerListContainerImagesRequest
struct FMultiplayerListContainerImagesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_397A[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_397B[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_397D[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_397E[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_397F[0x3];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3980[0x3];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3982[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    LobbyData;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyDataToDelete;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LobbyId;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3983[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    MemberData;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MemberDataToDelete;                                // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    MemberEntity;                                      // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMembershipLock                   MembershipLock;                                    // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3984[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3985[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3986[0x7];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    Entity;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct PlayFab.ProfilesGetEntityProfilesRequest
struct FProfilesGetEntityProfilesRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DataAsObject;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3987[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3988[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3989[0x4];                                     // Fixing Size After Last Property
	class FString                                VirtualCurrency;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerAddCharacterVirtualCurrencyRequest
struct FServerAddCharacterVirtualCurrencyRequest : public FPlayFabRequestCommon
{
public:
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398A[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_398C[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_398D[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_398E[0x4];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct PlayFab.ServerConsumeItemRequest
struct FServerConsumeItemRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumeCount;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_398F[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3990[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    Error;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExecutionTimeSeconds;                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3991[0x4];                                     // Fixing Size After Last Property
	class FString                                FunctionName;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    FunctionResult;                                    // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FunctionResultTooLarge;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3992[0x3];                                     // Fixing Size After Last Property
	int32                                        HttpRequestsIssued;                                // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPlayFabJsonObject*>            Logs;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         LogsTooLarge;                                      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3993[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3994[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_3995[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3996[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3997[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_3999[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_399A[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_399B[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_399C[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_399D[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_399E[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_399F[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_39A0[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_39A3[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_39A4[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_39A8[0x7];                                     // Fixing Size After Last Property
	class FString                                PlayFabId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECloudScriptRevisionOption        RevisionSelection;                                 // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A9[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39AA[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39AD[0x7];                                     // Fixing Size Of Struct
};

// 0x58 (0x60 - 0x8)
// ScriptStruct PlayFab.ServerGetFriendLeaderboardRequest
struct FServerGetFriendLeaderboardRequest : public FPlayFabRequestCommon
{
public:
	class UPlayFabJsonObject*                    CustomTags;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EExternalFriendSources            ExternalPlatformFriends;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B0[0x3];                                     // Fixing Size After Last Property
	int32                                        MaxResultsCount;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B1[0x4];                                     // Fixing Size After Last Property
	class FString                                StatisticName;                                     // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B2[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39B3[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39B4[0x4];                                     // Fixing Size After Last Property
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartPosition;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B5[0x4];                                     // Fixing Size After Last Property
	class FString                                StatisticName;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B6[0x3];                                     // Fixing Size After Last Property
	int32                                        Version;                                           // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterRequest
struct FServerGetLeaderboardAroundCharacterRequest : public FPlayFabRequestCommon
{
public:
	class FString                                CharacterId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResultsCount;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B7[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39B8[0x4];                                     // Fixing Size After Last Property
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                    ProfileConstraints;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StatisticName;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpecificVersion;                                // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39B9[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39BA[0x3];                                     // Fixing Size After Last Property
	int32                                        MaxBatchSize;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondsToLive;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39BB[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39BC[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39BD[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39BE[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_39BF[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C0[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C1[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C2[0x3];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C3[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C4[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C5[0x7];                                     // Fixing Size After Last Property
	class FString                                PlayFabId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                XboxToken;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct PlayFab.ServerLoginWithServerCustomIdRequest
struct FServerLoginWithServerCustomIdRequest : public FPlayFabRequestCommon
{
public:
	bool                                         CreateAccount;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39C6[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C7[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C8[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39C9[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39CA[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_39CB[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39CC[0x7];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_39CD[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39CE[0x4];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39CF[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39D0[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39D1[0x7];                                     // Fixing Size After Last Property
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
	uint8                                        Pad_39D3[0x7];                                     // Fixing Size After Last Property
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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

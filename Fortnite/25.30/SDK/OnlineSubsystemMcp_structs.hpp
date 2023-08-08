#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESocialCommsPermission : uint8
{
	Nobody                         = 0,
	FriendsOnly                    = 1,
	FriendsAndTeammates            = 2,
	Everybody                      = 3,
	ESocialCommsPermission_MAX     = 4,
};

enum class EOnlineLinkModerationStatus : uint8
{
	Unmoderated                    = 0,
	Approved                       = 1,
	Denied                         = 2,
	EOnlineLinkModerationStatus_MAX = 3,
};

enum class ESocialProfilePrivacySettingLevel : uint8
{
	Public                         = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	ESocialProfilePrivacySettingLevel_MAX = 3,
};

enum class ESocialProfilePrivacySettingBadges : uint8
{
	FriendsOnly                    = 0,
	Private                        = 1,
	ESocialProfilePrivacySettingBadges_MAX = 2,
};

enum class EMutualFriendsPrivacyPolicy : uint8
{
	All                            = 0,
	Friends                        = 1,
	None                           = 2,
	InvalidOrMax                   = 3,
	EMutualFriendsPrivacyPolicy_MAX = 4,
};

enum class ESupervisedSettingsRestrictiveOrder : uint8
{
	FirstRestrictive               = 0,
	FirstPermissive                = 1,
	LowRestrictive                 = 2,
	LowPermissive                  = 3,
	FalseRestrictive               = 4,
	FalsePermissive                = 5,
	None                           = 6,
	ESupervisedSettingsRestrictiveOrder_MAX = 7,
};

enum class ESupervisedSettingsValueType : uint8
{
	Boolean                        = 0,
	Numeric                        = 1,
	Option                         = 2,
	None                           = 3,
	ESupervisedSettingsValueType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
struct FOnlineDiscoveryModeSetDef
{
public:
	struct FOnlineLinkId                         ModeSetId;                                         // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubModeLinkType;                                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOnlineLinkId>                 SubModeLinkIds;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemMcp.OnlineDiscoverySurfaceDevelopmentLinkCodes
struct FOnlineDiscoverySurfaceDevelopmentLinkCodes
{
public:
	class FName                                  SurfaceName;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1869[0x4];                                     // Fixing Size After Last Property
	TArray<class FString>                        DevelopmentLinkCodes;                              // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OnlineSubsystemMcp.OnlineISOLanguageInfo
struct FOnlineISOLanguageInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Config, NativeAccessSpecifierPublic)
	class FString                                LanguageId;                                        // 0x18(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BackendId;                                         // 0x28(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct OnlineSubsystemMcp.OnlineISORegionInfo
struct FOnlineISORegionInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Config, NativeAccessSpecifierPublic)
	class FString                                RegionId;                                          // 0x18(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BackendId;                                         // 0x28(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequestLegacy
struct FJsonToxicityEvaluationRequestLegacy
{
public:
	class FString                                Text;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequestLegacy
struct FJsonToxicityBulkEvaluationRequestLegacy
{
public:
	TArray<class FString>                        Texts;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationRequest
struct FJsonToxicityEvaluationRequest
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
struct FJsonToxicityBulkEvaluationRequest
{
public:
	TArray<class FString>                        Names;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityEvaluationResponse
struct FJsonToxicityEvaluationResponse
{
public:
	bool                                         Toxic;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
struct FJsonToxicityBulkEvaluationResponse
{
public:
	TArray<bool>                                 IsToxic;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

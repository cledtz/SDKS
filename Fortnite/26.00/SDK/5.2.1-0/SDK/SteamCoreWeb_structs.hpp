#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESubsystemWeb : uint8
{
	SteamCoreWeb                   = 0,
	Apps                           = 1,
	Broadcast                      = 2,
	CheatReporting                 = 3,
	Community                      = 4,
	Econ                           = 5,
	EconMarket                     = 6,
	Economy                        = 7,
	GameInventory                  = 8,
	GameNotifications              = 9,
	GameServers                    = 10,
	GameServerStats                = 11,
	Inventory                      = 12,
	LobbyMatchmaking               = 13,
	Leaderboards                   = 14,
	MicroTxn                       = 15,
	News                           = 16,
	PlayerService                  = 17,
	PublishedFile                  = 18,
	PublishedItemSearch            = 19,
	PublishedItemVoting            = 20,
	RemoteStorage                  = 21,
	User                           = 22,
	UserAuth                       = 23,
	UserStats                      = 24,
	Workshop                       = 25,
	ESubsystemWeb_MAX              = 26,
};

enum class ESteamValueType : uint8
{
	STRING                         = 0,
	NUMBER                         = 1,
	BOOL                           = 2,
	ESteamValueType_MAX            = 3,
};

enum class ESteamJsonResult : uint8
{
	Found                          = 0,
	NotFound                       = 1,
	ESteamJsonResult_MAX           = 2,
};

enum class ESteamCoreWebLobbyType : uint8
{
	Private                        = 0,
	FriendsOnly                    = 1,
	TypePublic                     = 2,
	TypeInvisible                  = 3,
	ESteamCoreWebLobbyType_MAX     = 4,
};

enum class EVanityUrlType : uint8
{
	Individual                     = 0,
	Group                          = 1,
	OfficialGameGroup              = 2,
	EVanityUrlType_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct SteamCoreWeb.WebAppsGetAppList
struct FWebAppsGetAppList
{
public:
	class FString                                AppID;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SteamCoreWeb.SteamCoreJson
struct FSteamCoreJson
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Number;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bool;                                              // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamValueType                   Type;                                              // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D6[0x2];                                     // Fixing Size Of Struct
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELobbyBeaconJoinState : uint8
{
	None                           = 0,
	SentJoinRequest                = 1,
	JoinRequestAcknowledged        = 2,
	ELobbyBeaconJoinState_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x18 - 0xC)
// ScriptStruct Lobby.LobbyPlayerStateActorInfo
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_1BA2[0x4];                                     // Fixing Size After Last Property 
	class ULobbyBeaconPlayerState*               LobbyPlayerState;                                  // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct Lobby.LobbyPlayerStateInfoArray
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FLobbyPlayerStateActorInfo>    Players;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class ULobbyBeaconState*                     ParentState;                                       // 0x118(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}



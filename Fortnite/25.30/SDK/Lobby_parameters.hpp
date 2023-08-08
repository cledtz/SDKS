#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
struct ULobbyBeaconClient_ServerSetPartyOwner_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      InPartyOwnerId;                                    // 0x30(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
struct ULobbyBeaconClient_ServerNotifyJoiningServer_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
struct ULobbyBeaconClient_ServerLoginPlayer_Params
{
public:
	class FString                                InSessionId;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x10(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UrlString;                                         // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerKickPlayer
struct ULobbyBeaconClient_ServerKickPlayer_Params
{
public:
	struct FUniqueNetIdRepl                      PlayerToKick;                                      // 0x0(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Reason;                                            // 0x30(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
struct ULobbyBeaconClient_ServerDisconnectFromLobby_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerCheat
struct ULobbyBeaconClient_ServerCheat_Params
{
public:
	class FString                                Msg;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientWasKicked
struct ULobbyBeaconClient_ClientWasKicked_Params
{
public:
	class FText                                  KickReason;                                        // 0x0(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
struct ULobbyBeaconClient_ClientSetInviteFlags_Params
{
public:
	struct FJoinabilitySettings                  Settings;                                          // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
struct ULobbyBeaconClient_ClientPlayerLeft_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
struct ULobbyBeaconClient_ClientPlayerJoined_Params
{
public:
	class FText                                  NewPlayerName;                                     // 0x0(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x18(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientLoginComplete
struct ULobbyBeaconClient_ClientLoginComplete_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E3[0x7];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientJoinGame
struct ULobbyBeaconClient_ClientJoinGame_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
struct ULobbyBeaconClient_ClientAckJoiningServer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
struct ULobbyBeaconPlayerState_OnRep_UniqueId_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
struct ULobbyBeaconPlayerState_OnRep_PartyOwner_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
struct ULobbyBeaconPlayerState_OnRep_InLobby_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
struct ULobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
struct ULobbyBeaconState_OnRep_LobbyStarted_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

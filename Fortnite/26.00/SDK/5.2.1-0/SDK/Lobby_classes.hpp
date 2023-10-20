#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3A8 - 0x320)
// Class Lobby.LobbyBeaconClient
class ULobbyBeaconClient : public UOnlineBeaconClient
{
public:
	class ULobbyBeaconState*                     LobbyState;                                        // 0x320(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULobbyBeaconPlayerState*               PlayerState;                                       // 0x328(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x1];                                      // Fixing Size After Last Property 
	enum class ELobbyBeaconJoinState             LobbyJoinServerState;                              // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B5B[0x76];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULobbyBeaconClient* GetDefaultObj();

	void ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const class FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
	void ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, class FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const class FString& Msg);
	void ClientWasKicked(class FText& KickReason);
	void ClientSetInviteFlags(struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(class FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// 0x40 (0x2F8 - 0x2B8)
// Class Lobby.LobbyBeaconHost
class ULobbyBeaconHost : public UOnlineBeaconHostObject
{
public:
	uint8                                        Pad_B5F[0x8];                                      // Fixing Size After Last Property 
	TSoftClassPtr<class ULobbyBeaconState>       LobbyStateClass;                                   // 0x2C0(0x30)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULobbyBeaconState*                     LobbyState;                                        // 0x2F0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULobbyBeaconHost* GetDefaultObj();

};

// 0xD0 (0x360 - 0x290)
// Class Lobby.LobbyBeaconPlayerState
class ULobbyBeaconPlayerState : public UInfo
{
public:
	class FText                                  DisplayName;                                       // 0x290(0x18)(Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x2A8(0x30)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PartyOwnerUniqueId;                                // 0x2D8(0x30)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLobby;                                          // 0x308(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B64[0x7];                                      // Fixing Size After Last Property 
	class UOnlineBeaconClient*                   ClientActor;                                       // 0x310(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B65[0x48];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULobbyBeaconPlayerState* GetDefaultObj();

	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// 0x1A8 (0x438 - 0x290)
// Class Lobby.LobbyBeaconState
class ULobbyBeaconState : public UInfo
{
public:
	int32                                        MaxPlayers;                                        // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6A[0x4];                                      // Fixing Size After Last Property 
	TSubclassOf<class ULobbyBeaconPlayerState>   LobbyBeaconPlayerStateClass;                       // 0x298(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6B[0x8];                                      // Fixing Size After Last Property 
	bool                                         bLobbyStarted;                                     // 0x2A8(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6C[0x3];                                      // Fixing Size After Last Property 
	float                                        WaitForPlayersTimeRemaining;                       // 0x2AC(0x4)(Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray            Players;                                           // 0x2B0(0x120)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6D[0x68];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class ULobbyBeaconState* GetDefaultObj();

	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}


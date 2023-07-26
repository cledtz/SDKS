#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3A8 - 0x320)
// Class Lobby.LobbyBeaconClient
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                     LobbyState;                                        // 0x320(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*               PlayerState;                                       // 0x328(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E99[0x1];                                     // Fixing Size After Last Property..
	enum class ELobbyBeaconJoinState             LobbyJoinServerState;                              // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E9A[0x76];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconClient");
		return Clss;
	}

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

// 0x38 (0x2F0 - 0x2B8)
// Class Lobby.LobbyBeaconHost
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_3E9B[0x8];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class ALobbyBeaconState>       LobbyStateClass;                                   // 0x2C0(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                     LobbyState;                                        // 0x2E8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconHost");
		return Clss;
	}

};

// 0xD0 (0x360 - 0x290)
// Class Lobby.LobbyBeaconPlayerState
class ALobbyBeaconPlayerState : public AInfo
{
public:
	class FText                                  DisplayName;                                       // 0x290(0x18)(Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x2A8(0x30)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PartyOwnerUniqueId;                                // 0x2D8(0x30)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLobby;                                          // 0x308(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E9C[0x7];                                     // Fixing Size After Last Property..
	class AOnlineBeaconClient*                   ClientActor;                                       // 0x310(0x8)(Net, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E9D[0x48];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconPlayerState");
		return Clss;
	}

	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// 0x1A8 (0x438 - 0x290)
// Class Lobby.LobbyBeaconState
class ALobbyBeaconState : public AInfo
{
public:
	int32                                        MaxPlayers;                                        // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E9E[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class ALobbyBeaconPlayerState>   LobbyBeaconPlayerStateClass;                       // 0x298(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E9F[0x8];                                     // Fixing Size After Last Property..
	bool                                         bLobbyStarted;                                     // 0x2A8(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EA0[0x3];                                     // Fixing Size After Last Property..
	float                                        WaitForPlayersTimeRemaining;                       // 0x2AC(0x4)(Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray            Players;                                           // 0x2B0(0x120)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EA1[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LobbyBeaconState");
		return Clss;
	}

	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

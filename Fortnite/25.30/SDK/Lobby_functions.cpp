#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InPartyOwnerId                                                   (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerSetPartyOwner");

	Params::ULobbyBeaconClient_ServerSetPartyOwner_Params Parms;

	Parms.InUniqueId = InUniqueId;
	Parms.InPartyOwnerId = InPartyOwnerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void ULobbyBeaconClient::ServerNotifyJoiningServer()
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerNotifyJoiningServer");

	Params::ULobbyBeaconClient_ServerNotifyJoiningServer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      InSessionId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UrlString                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ServerLoginPlayer(const class FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerLoginPlayer");

	Params::ULobbyBeaconClient_ServerLoginPlayer_Params Parms;

	Parms.InSessionId = InSessionId;
	Parms.InUniqueId = InUniqueId;
	Parms.UrlString = UrlString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            PlayerToKick                                                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Reason                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, class FText& Reason)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerKickPlayer");

	Params::ULobbyBeaconClient_ServerKickPlayer_Params Parms;

	Parms.PlayerToKick = PlayerToKick;
	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void ULobbyBeaconClient::ServerDisconnectFromLobby()
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerDisconnectFromLobby");

	Params::ULobbyBeaconClient_ServerDisconnectFromLobby_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                      Msg                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ServerCheat(const class FString& Msg)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerCheat");

	Params::ULobbyBeaconClient_ServerCheat_Params Parms;

	Parms.Msg = Msg;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class FText                        KickReason                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientWasKicked(class FText& KickReason)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientWasKicked");

	Params::ULobbyBeaconClient_ClientWasKicked_Params Parms;

	Parms.KickReason = KickReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FJoinabilitySettings        Settings                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientSetInviteFlags(struct FJoinabilitySettings& Settings)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientSetInviteFlags");

	Params::ULobbyBeaconClient_ClientSetInviteFlags_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerLeft");

	Params::ULobbyBeaconClient_ClientPlayerLeft_Params Parms;

	Parms.InUniqueId = InUniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class FText                        NewPlayerName                                                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientPlayerJoined(class FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerJoined");

	Params::ULobbyBeaconClient_ClientPlayerJoined_Params Parms;

	Parms.NewPlayerName = NewPlayerName;
	Parms.InUniqueId = InUniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientLoginComplete");

	Params::ULobbyBeaconClient_ClientLoginComplete_Params Parms;

	Parms.InUniqueId = InUniqueId;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ULobbyBeaconClient::ClientJoinGame()
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientJoinGame");

	Params::ULobbyBeaconClient_ClientJoinGame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void ULobbyBeaconClient::ClientAckJoiningServer()
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientAckJoiningServer");

	Params::ULobbyBeaconClient_ClientAckJoiningServer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconPlayerState::OnRep_UniqueId()
{
	static auto Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_UniqueId");

	Params::ULobbyBeaconPlayerState_OnRep_UniqueId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static auto Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_PartyOwner");

	Params::ULobbyBeaconPlayerState_OnRep_PartyOwner_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconPlayerState::OnRep_InLobby()
{
	static auto Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_InLobby");

	Params::ULobbyBeaconPlayerState_OnRep_InLobby_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static auto Func = Class->GetFunction("LobbyBeaconState", "OnRep_WaitForPlayersTimeRemaining");

	Params::ULobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconState::OnRep_LobbyStarted()
{
	static auto Func = Class->GetFunction("LobbyBeaconState", "OnRep_LobbyStarted");

	Params::ULobbyBeaconState_OnRep_LobbyStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

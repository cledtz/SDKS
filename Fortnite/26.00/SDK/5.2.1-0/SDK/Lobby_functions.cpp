#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Lobby.LobbyBeaconClient
// (Actor)

class UClass* ULobbyBeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyBeaconClient");

	return Clss;
}


// LobbyBeaconClient Lobby.Default__LobbyBeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ULobbyBeaconClient* ULobbyBeaconClient::GetDefaultObj()
{
	static class ULobbyBeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyBeaconClient*>(ULobbyBeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InPartyOwnerId                                                   (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerSetPartyOwner");

	Params::ULobbyBeaconClient_ServerSetPartyOwner_Params Parms{};

	Parms.InUniqueId = InUniqueId;
	Parms.InPartyOwnerId = InPartyOwnerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void ULobbyBeaconClient::ServerNotifyJoiningServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerNotifyJoiningServer");

	Params::ULobbyBeaconClient_ServerNotifyJoiningServer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      InSessionId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UrlString                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ServerLoginPlayer(const class FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerLoginPlayer");

	Params::ULobbyBeaconClient_ServerLoginPlayer_Params Parms{};

	Parms.InSessionId = InSessionId;
	Parms.InUniqueId = InUniqueId;
	Parms.UrlString = UrlString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            PlayerToKick                                                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Reason                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerKickPlayer");

	Params::ULobbyBeaconClient_ServerKickPlayer_Params Parms{};

	Parms.PlayerToKick = PlayerToKick;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void ULobbyBeaconClient::ServerDisconnectFromLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerDisconnectFromLobby");

	Params::ULobbyBeaconClient_ServerDisconnectFromLobby_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                      Msg                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ServerCheat(const class FString& Msg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ServerCheat");

	Params::ULobbyBeaconClient_ServerCheat_Params Parms{};

	Parms.Msg = Msg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class FText                        KickReason                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientWasKicked(class FText& KickReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientWasKicked");

	Params::ULobbyBeaconClient_ClientWasKicked_Params Parms{};

	Parms.KickReason = KickReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FJoinabilitySettings        Settings                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientSetInviteFlags(struct FJoinabilitySettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientSetInviteFlags");

	Params::ULobbyBeaconClient_ClientSetInviteFlags_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerLeft");

	Params::ULobbyBeaconClient_ClientPlayerLeft_Params Parms{};

	Parms.InUniqueId = InUniqueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class FText                        NewPlayerName                                                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientPlayerJoined(class FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerJoined");

	Params::ULobbyBeaconClient_ClientPlayerJoined_Params Parms{};

	Parms.NewPlayerName = NewPlayerName;
	Parms.InUniqueId = InUniqueId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULobbyBeaconClient::ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientLoginComplete");

	Params::ULobbyBeaconClient_ClientLoginComplete_Params Parms{};

	Parms.InUniqueId = InUniqueId;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ULobbyBeaconClient::ClientJoinGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientJoinGame");

	Params::ULobbyBeaconClient_ClientJoinGame_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void ULobbyBeaconClient::ClientAckJoiningServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconClient", "ClientAckJoiningServer");

	Params::ULobbyBeaconClient_ClientAckJoiningServer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Lobby.LobbyBeaconHost
// (Actor)

class UClass* ULobbyBeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyBeaconHost");

	return Clss;
}


// LobbyBeaconHost Lobby.Default__LobbyBeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class ULobbyBeaconHost* ULobbyBeaconHost::GetDefaultObj()
{
	static class ULobbyBeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyBeaconHost*>(ULobbyBeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class Lobby.LobbyBeaconPlayerState
// (Actor)

class UClass* ULobbyBeaconPlayerState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyBeaconPlayerState");

	return Clss;
}


// LobbyBeaconPlayerState Lobby.Default__LobbyBeaconPlayerState
// (Public, ClassDefaultObject, ArchetypeObject)

class ULobbyBeaconPlayerState* ULobbyBeaconPlayerState::GetDefaultObj()
{
	static class ULobbyBeaconPlayerState* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyBeaconPlayerState*>(ULobbyBeaconPlayerState::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconPlayerState::OnRep_UniqueId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_UniqueId");

	Params::ULobbyBeaconPlayerState_OnRep_UniqueId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_PartyOwner");

	Params::ULobbyBeaconPlayerState_OnRep_PartyOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconPlayerState::OnRep_InLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_InLobby");

	Params::ULobbyBeaconPlayerState_OnRep_InLobby_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Lobby.LobbyBeaconState
// (Actor)

class UClass* ULobbyBeaconState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyBeaconState");

	return Clss;
}


// LobbyBeaconState Lobby.Default__LobbyBeaconState
// (Public, ClassDefaultObject, ArchetypeObject)

class ULobbyBeaconState* ULobbyBeaconState::GetDefaultObj()
{
	static class ULobbyBeaconState* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyBeaconState*>(ULobbyBeaconState::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconState", "OnRep_WaitForPlayersTimeRemaining");

	Params::ULobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (Final, Native, Protected)
// Parameters:

void ULobbyBeaconState::OnRep_LobbyStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyBeaconState", "OnRep_LobbyStarted");

	Params::ULobbyBeaconState_OnRep_LobbyStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UACCommon.UACNetworkComponent
// (None)

class UClass* UUACNetworkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UACNetworkComponent");

	return Clss;
}


// UACNetworkComponent UACCommon.Default__UACNetworkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUACNetworkComponent* UUACNetworkComponent::GetDefaultObj()
{
	static class UUACNetworkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUACNetworkComponent*>(UUACNetworkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function UACCommon.UACNetworkComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              EnhPacketType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Data                                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendPacketToServer(uint8 EnhPacketType, TArray<uint8>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetworkComponent", "SendPacketToServer");

	Params::UUACNetworkComponent_SendPacketToServer_Params Parms{};

	Parms.EnhPacketType = EnhPacketType;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UACCommon.UACNetworkComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// uint8                              EnhPacketType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Data                                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendPacketToClient(uint8 EnhPacketType, TArray<uint8>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetworkComponent", "SendPacketToClient");

	Params::UUACNetworkComponent_SendPacketToClient_Params Parms{};

	Parms.EnhPacketType = EnhPacketType;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UACCommon.UACNetworkComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32                             SessionKey                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendClientHello(uint32 SessionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetworkComponent", "SendClientHello");

	Params::UUACNetworkComponent_SendClientHello_Params Parms{};

	Parms.SessionKey = SessionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



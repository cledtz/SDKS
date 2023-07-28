#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FServerReplicationRPCParameterProxyParameter                                                   (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UNetworkPredictionComponent::ServerReceiveClientInput(struct FServerReplicationRPCParameter& ProxyParameter)
{
	static auto Func = Class->GetFunction("NetworkPredictionComponent", "ServerReceiveClientInput");

	Params::UNetworkPredictionComponent_ServerReceiveClientInput_Params Parms;

	Parms.ProxyParameter = ProxyParameter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

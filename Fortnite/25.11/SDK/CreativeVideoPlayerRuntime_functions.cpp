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


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ServerLeaveFullscreenMode()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ServerLeaveFullscreenMode");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ServerLeaveFullscreenMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ServerEnterFullscreenMode()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ServerEnterFullscreenMode");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ServerEnterFullscreenMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds
// (Final, Native, Private)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::OnFullscreenUIEnds()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "OnFullscreenUIEnds");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_OnFullscreenUIEnds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased
// (Final, Native, Private)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::HandleEnterFullscreenActionReleased()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "HandleEnterFullscreenActionReleased");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_HandleEnterFullscreenActionReleased_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed
// (Final, Native, Private)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::HandleEnterFullscreenActionPressed()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "HandleEnterFullscreenActionPressed");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_HandleEnterFullscreenActionPressed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ExitFullscreenState()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ExitFullscreenState");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ExitFullscreenState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCreativeVideoPlayerFullscreenOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFullscreenGameplayAbility::EnterFullscreenStateWithOptions(const struct FCreativeVideoPlayerFullscreenOptions& Options)
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "EnterFullscreenStateWithOptions");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions_Params Parms;

	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::EnterFullscreenState()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "EnterFullscreenState");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ClientTransitionToFullscreenVideo()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ClientTransitionToFullscreenVideo");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ClientTransitionToFullscreenVideo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ClientLeaveFullscreenVideo()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ClientLeaveFullscreenVideo");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ClientLeaveFullscreenVideo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary.ShutdownFullscreenVideoMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFunctionLibrary::ShutdownFullscreenVideoMode(class AController* Controller)
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFunctionLibrary", "ShutdownFullscreenVideoMode");

	Params::UCreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode_Params Parms;

	Parms.Controller = Controller;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

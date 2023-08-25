#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
// (None)

class UClass* UCreativeVideoPlayerFullscreenGameplayAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeVideoPlayerFullscreenGameplayAbility");

	return Clss;
}


// CreativeVideoPlayerFullscreenGameplayAbility CreativeVideoPlayerRuntime.Default__CreativeVideoPlayerFullscreenGameplayAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeVideoPlayerFullscreenGameplayAbility* UCreativeVideoPlayerFullscreenGameplayAbility::GetDefaultObj()
{
	static class UCreativeVideoPlayerFullscreenGameplayAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeVideoPlayerFullscreenGameplayAbility*>(UCreativeVideoPlayerFullscreenGameplayAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.SetExternalComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaTexture*               ExtMediaTexture                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSourceBus*             ExtSourceBus                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaSoundComponent*        ExtMediaSoundComponent                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFullscreenGameplayAbility::SetExternalComponents(class UMediaTexture* ExtMediaTexture, class USoundSourceBus* ExtSourceBus, class UMediaSoundComponent* ExtMediaSoundComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "SetExternalComponents");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_SetExternalComponents_Params Parms{};

	Parms.ExtMediaTexture = ExtMediaTexture;
	Parms.ExtSourceBus = ExtSourceBus;
	Parms.ExtMediaSoundComponent = ExtMediaSoundComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ServerLeaveFullscreenMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ServerLeaveFullscreenMode");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ServerLeaveFullscreenMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ServerEnterFullscreenMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ServerEnterFullscreenMode");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ServerEnterFullscreenMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds
// (Final, Native, Private)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::OnFullscreenUIEnds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "OnFullscreenUIEnds");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_OnFullscreenUIEnds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased
// (Final, Native, Private)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::HandleEnterFullscreenActionReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "HandleEnterFullscreenActionReleased");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_HandleEnterFullscreenActionReleased_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed
// (Final, Native, Private)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::HandleEnterFullscreenActionPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "HandleEnterFullscreenActionPressed");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_HandleEnterFullscreenActionPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ExitFullscreenState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ExitFullscreenState");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ExitFullscreenState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCreativeVideoPlayerFullscreenOptionsOptions                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFullscreenGameplayAbility::EnterFullscreenStateWithOptions(const struct FCreativeVideoPlayerFullscreenOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "EnterFullscreenStateWithOptions");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenStateWithOptions_Params Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::EnterFullscreenState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "EnterFullscreenState");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_EnterFullscreenState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ClientTransitionToFullscreenVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ClientTransitionToFullscreenVideo");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ClientTransitionToFullscreenVideo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UCreativeVideoPlayerFullscreenGameplayAbility::ClientLeaveFullscreenVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullscreenGameplayAbility", "ClientLeaveFullscreenVideo");

	Params::UCreativeVideoPlayerFullscreenGameplayAbility_ClientLeaveFullscreenVideo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
// (None)

class UClass* UCreativeVideoPlayerFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeVideoPlayerFunctionLibrary");

	return Clss;
}


// CreativeVideoPlayerFunctionLibrary CreativeVideoPlayerRuntime.Default__CreativeVideoPlayerFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeVideoPlayerFunctionLibrary* UCreativeVideoPlayerFunctionLibrary::GetDefaultObj()
{
	static class UCreativeVideoPlayerFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeVideoPlayerFunctionLibrary*>(UCreativeVideoPlayerFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary.ShutdownFullscreenVideoMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFunctionLibrary::ShutdownFullscreenVideoMode(class UController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFunctionLibrary", "ShutdownFullscreenVideoMode");

	Params::UCreativeVideoPlayerFunctionLibrary_ShutdownFullscreenVideoMode_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
// (None)

class UClass* UCreativeVideoPlayerWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeVideoPlayerWorldSubsystem");

	return Clss;
}


// CreativeVideoPlayerWorldSubsystem CreativeVideoPlayerRuntime.Default__CreativeVideoPlayerWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeVideoPlayerWorldSubsystem* UCreativeVideoPlayerWorldSubsystem::GetDefaultObj()
{
	static class UCreativeVideoPlayerWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeVideoPlayerWorldSubsystem*>(UCreativeVideoPlayerWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}



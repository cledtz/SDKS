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


// Function DynamicUI.DynamicUITransitionableWidgetInterface.BroadcastTransitionCompleted
// (Native, Protected, BlueprintCallable)
// Parameters:

void UDynamicUITransitionableWidgetInterface::BroadcastTransitionCompleted()
{
	static auto Func = Class->GetFunction("DynamicUITransitionableWidgetInterface", "BroadcastTransitionCompleted");

	Params::UDynamicUITransitionableWidgetInterface_BroadcastTransitionCompleted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicUI.DynamicUIDirectorBase.RemoveScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIDirectorBase::RemoveScene(class UDynamicUIScene* Scene)
{
	static auto Func = Class->GetFunction("DynamicUIDirectorBase", "RemoveScene");

	Params::UDynamicUIDirectorBase_RemoveScene_Params Parms;

	Parms.Scene = Scene;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayerController* UDynamicUIDirectorBase::GetOwningLocalPlayerController()
{
	static auto Func = Class->GetFunction("DynamicUIDirectorBase", "GetOwningLocalPlayerController");

	Params::UDynamicUIDirectorBase_GetOwningLocalPlayerController_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UDynamicUIDirectorBase::GetOwningLocalPlayer()
{
	static auto Func = Class->GetFunction("DynamicUIDirectorBase", "GetOwningLocalPlayer");

	Params::UDynamicUIDirectorBase_GetOwningLocalPlayer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DynamicUI.DynamicUIDirectorBase.GetOwnedEventRouter
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayEventRouterComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayEventRouterComponent* UDynamicUIDirectorBase::GetOwnedEventRouter()
{
	static auto Func = Class->GetFunction("DynamicUIDirectorBase", "GetOwnedEventRouter");

	Params::UDynamicUIDirectorBase_GetOwnedEventRouter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DynamicUI.DynamicUIDirectorBase.AddScene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIDirectorBase::AddScene(class UDynamicUIScene* Scene)
{
	static auto Func = Class->GetFunction("DynamicUIDirectorBase", "AddScene");

	Params::UDynamicUIDirectorBase_AddScene_Params Parms;

	Parms.Scene = Scene;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicUI.DynamicUIManager.RemoveScenes
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDynamicUIScene*>     Scenes                                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UPlayerController*           Player                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::RemoveScenes(const TArray<class UDynamicUIScene*>& Scenes, class UPlayerController*& Player)
{
	static auto Func = Class->GetFunction("DynamicUIManager", "RemoveScenes");

	Params::UDynamicUIManager_RemoveScenes_Params Parms;

	Parms.Scenes = Scenes;
	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicUI.DynamicUIManager.RemoveSceneFromFirstLocalPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::RemoveSceneFromFirstLocalPlayer(class UDynamicUIScene* Scene)
{
	static auto Func = Class->GetFunction("DynamicUIManager", "RemoveSceneFromFirstLocalPlayer");

	Params::UDynamicUIManager_RemoveSceneFromFirstLocalPlayer_Params Parms;

	Parms.Scene = Scene;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicUI.DynamicUIManager.RemoveScene
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           Player                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::RemoveScene(class UDynamicUIScene* Scene, class UPlayerController*& Player)
{
	static auto Func = Class->GetFunction("DynamicUIManager", "RemoveScene");

	Params::UDynamicUIManager_RemoveScene_Params Parms;

	Parms.Scene = Scene;
	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicUI.DynamicUIManager.AddSceneToFirstLocalPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::AddSceneToFirstLocalPlayer(class UDynamicUIScene* Scene)
{
	static auto Func = Class->GetFunction("DynamicUIManager", "AddSceneToFirstLocalPlayer");

	Params::UDynamicUIManager_AddSceneToFirstLocalPlayer_Params Parms;

	Parms.Scene = Scene;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicUI.DynamicUIManager.AddScenes
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDynamicUIScene*>     Scenes                                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UPlayerController*           Player                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::AddScenes(const TArray<class UDynamicUIScene*>& Scenes, class UPlayerController*& Player)
{
	static auto Func = Class->GetFunction("DynamicUIManager", "AddScenes");

	Params::UDynamicUIManager_AddScenes_Params Parms;

	Parms.Scenes = Scenes;
	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicUI.DynamicUIManager.AddScene
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicUIScene*             Scene                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           Player                                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicUIManager::AddScene(class UDynamicUIScene* Scene, class UPlayerController*& Player)
{
	static auto Func = Class->GetFunction("DynamicUIManager", "AddScene");

	Params::UDynamicUIManager_AddScene_Params Parms;

	Parms.Scene = Scene;
	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

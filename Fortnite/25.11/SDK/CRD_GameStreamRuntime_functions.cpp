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


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.RemoveFromEndGameQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeGameStreamDeviceComponent::RemoveFromEndGameQueue()
{
	static auto Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "RemoveFromEndGameQueue");

	Params::UCreativeGameStreamDeviceComponent_RemoveFromEndGameQueue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.OnMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NewMinigameState                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeGameStreamDeviceComponent::OnMinigameStateChanged(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState)
{
	static auto Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "OnMinigameStateChanged");

	Params::UCreativeGameStreamDeviceComponent_OnMinigameStateChanged_Params Parms;

	Parms.Minigame = Minigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.IsWithinPublishedPlayspace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeGameStreamDeviceComponent::IsWithinPublishedPlayspace()
{
	static auto Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "IsWithinPublishedPlayspace");

	Params::UCreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortMinigameLogicComponent* InMinigameLogicComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeGameStreamDeviceComponent::Init(class UFortMinigameLogicComponent* InMinigameLogicComponent)
{
	static auto Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "Init");

	Params::UCreativeGameStreamDeviceComponent_Init_Params Parms;

	Parms.InMinigameLogicComponent = InMinigameLogicComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// SparseDelegateFunction CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.CreativeGameStreamDeviceComponentSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCreativeGameStreamDeviceComponent*CreativeGameStreamDeviceComponent                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeGameStreamDeviceComponent::CreativeGameStreamDeviceComponentSignature__DelegateSignature(class UCreativeGameStreamDeviceComponent* CreativeGameStreamDeviceComponent)
{
	static auto Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "CreativeGameStreamDeviceComponentSignature__DelegateSignature");

	Params::UCreativeGameStreamDeviceComponent_CreativeGameStreamDeviceComponentSignature__DelegateSignature_Params Parms;

	Parms.CreativeGameStreamDeviceComponent = CreativeGameStreamDeviceComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.AddToEndGameQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeGameStreamDeviceComponent::AddToEndGameQueue()
{
	static auto Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "AddToEndGameQueue");

	Params::UCreativeGameStreamDeviceComponent_AddToEndGameQueue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent.OnMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortMinigame*               InMinigame                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NewMinigameState                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeGameStreamDeviceCoordinatorComponent::OnMinigameStateChanged(class AFortMinigame* InMinigame, enum class EFortMinigameState NewMinigameState)
{
	static auto Func = Class->GetFunction("CreativeGameStreamDeviceCoordinatorComponent", "OnMinigameStateChanged");

	Params::UCreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged_Params Parms;

	Parms.InMinigame = InMinigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
// (None)

class UClass* UCreativeGameStreamDeviceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeGameStreamDeviceComponent");

	return Clss;
}


// CreativeGameStreamDeviceComponent CRD_GameStreamRuntime.Default__CreativeGameStreamDeviceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeGameStreamDeviceComponent* UCreativeGameStreamDeviceComponent::GetDefaultObj()
{
	static class UCreativeGameStreamDeviceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeGameStreamDeviceComponent*>(UCreativeGameStreamDeviceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.RemoveFromEndGameQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeGameStreamDeviceComponent::RemoveFromEndGameQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "RemoveFromEndGameQueue");

	Params::UCreativeGameStreamDeviceComponent_RemoveFromEndGameQueue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.OnMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NewMinigameState                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeGameStreamDeviceComponent::OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "OnMinigameStateChanged");

	Params::UCreativeGameStreamDeviceComponent_OnMinigameStateChanged_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.IsWithinPublishedPlayspace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreativeGameStreamDeviceComponent::IsWithinPublishedPlayspace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "IsWithinPublishedPlayspace");

	Params::UCreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortMinigameLogicComponent* InMinigameLogicComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeGameStreamDeviceComponent::Init(class UFortMinigameLogicComponent* InMinigameLogicComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "Init");

	Params::UCreativeGameStreamDeviceComponent_Init_Params Parms{};

	Parms.InMinigameLogicComponent = InMinigameLogicComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// SparseDelegateFunction CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.CreativeGameStreamDeviceComponentSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCreativeGameStreamDeviceComponent*CreativeGameStreamDeviceComponent                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeGameStreamDeviceComponent::CreativeGameStreamDeviceComponentSignature__DelegateSignature(class UCreativeGameStreamDeviceComponent* CreativeGameStreamDeviceComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "CreativeGameStreamDeviceComponentSignature__DelegateSignature");

	Params::UCreativeGameStreamDeviceComponent_CreativeGameStreamDeviceComponentSignature__DelegateSignature_Params Parms{};

	Parms.CreativeGameStreamDeviceComponent = CreativeGameStreamDeviceComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.AddToEndGameQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCreativeGameStreamDeviceComponent::AddToEndGameQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "AddToEndGameQueue");

	Params::UCreativeGameStreamDeviceComponent_AddToEndGameQueue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
// (None)

class UClass* UCreativeGameStreamDeviceCoordinatorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeGameStreamDeviceCoordinatorComponent");

	return Clss;
}


// CreativeGameStreamDeviceCoordinatorComponent CRD_GameStreamRuntime.Default__CreativeGameStreamDeviceCoordinatorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeGameStreamDeviceCoordinatorComponent* UCreativeGameStreamDeviceCoordinatorComponent::GetDefaultObj()
{
	static class UCreativeGameStreamDeviceCoordinatorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeGameStreamDeviceCoordinatorComponent*>(UCreativeGameStreamDeviceCoordinatorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent.OnMinigameStateChanged
// (Final, Native, Private)
// Parameters:
// class UFortMinigame*               InMinigame                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      NewMinigameState                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeGameStreamDeviceCoordinatorComponent::OnMinigameStateChanged(class UFortMinigame* InMinigame, enum class EFortMinigameState NewMinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeGameStreamDeviceCoordinatorComponent", "OnMinigameStateChanged");

	Params::UCreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged_Params Parms{};

	Parms.InMinigame = InMinigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



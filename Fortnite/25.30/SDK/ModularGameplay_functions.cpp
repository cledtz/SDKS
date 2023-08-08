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


// Function ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UActor>        ActorClass                                                       (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 DelegateToRemove                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkComponentManager::UnregisterClassInitStateDelegate(TSoftClassPtr<class UActor> ActorClass, FDelegateProperty_ DelegateToRemove)
{
	static auto Func = Class->GetFunction("GameFrameworkComponentManager", "UnregisterClassInitStateDelegate");

	Params::UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Params Parms;

	Parms.ActorClass = ActorClass;
	Parms.DelegateToRemove = DelegateToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 DelegateToRemove                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkComponentManager::UnregisterActorInitStateDelegate(class UActor* Actor, FDelegateProperty_ DelegateToRemove)
{
	static auto Func = Class->GetFunction("GameFrameworkComponentManager", "UnregisterActorInitStateDelegate");

	Params::UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Params Parms;

	Parms.Actor = Actor;
	Parms.DelegateToRemove = DelegateToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Receiver                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EventName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyInGameWorlds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFrameworkComponentManager::SendExtensionEvent(class UActor* Receiver, class FName EventName, bool bOnlyInGameWorlds)
{
	static auto Func = Class->GetFunction("GameFrameworkComponentManager", "SendExtensionEvent");

	Params::UGameFrameworkComponentManager_SendExtensionEvent_Params Parms;

	Parms.Receiver = Receiver;
	Parms.EventName = EventName;
	Parms.bOnlyInGameWorlds = bOnlyInGameWorlds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Receiver                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFrameworkComponentManager::RemoveReceiver(class UActor* Receiver)
{
	static auto Func = Class->GetFunction("GameFrameworkComponentManager", "RemoveReceiver");

	Params::UGameFrameworkComponentManager_RemoveReceiver_Params Parms;

	Parms.Receiver = Receiver;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UActor>        ActorClass                                                       (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FeatureName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                RequiredState                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCallImmediately                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkComponentManager::RegisterAndCallForClassInitState(TSoftClassPtr<class UActor> ActorClass, class FName FeatureName, const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately)
{
	static auto Func = Class->GetFunction("GameFrameworkComponentManager", "RegisterAndCallForClassInitState");

	Params::UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Params Parms;

	Parms.ActorClass = ActorClass;
	Parms.FeatureName = FeatureName;
	Parms.RequiredState = RequiredState;
	Parms.Delegate = Delegate;
	Parms.bCallImmediately = bCallImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FeatureName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                RequiredState                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCallImmediately                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkComponentManager::RegisterAndCallForActorInitState(class UActor* Actor, class FName FeatureName, const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately)
{
	static auto Func = Class->GetFunction("GameFrameworkComponentManager", "RegisterAndCallForActorInitState");

	Params::UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Params Parms;

	Parms.Actor = Actor;
	Parms.FeatureName = FeatureName;
	Parms.RequiredState = RequiredState;
	Parms.Delegate = Delegate;
	Parms.bCallImmediately = bCallImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Receiver                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddOnlyInGameWorlds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFrameworkComponentManager::AddReceiver(class UActor* Receiver, bool bAddOnlyInGameWorlds)
{
	static auto Func = Class->GetFunction("GameFrameworkComponentManager", "AddReceiver");

	Params::UGameFrameworkComponentManager_AddReceiver_Params Parms;

	Parms.Receiver = Receiver;
	Parms.bAddOnlyInGameWorlds = bAddOnlyInGameWorlds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate
// (Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkInitStateInterface::UnregisterInitStateDelegate(FDelegateProperty_ Delegate)
{
	static auto Func = Class->GetFunction("GameFrameworkInitStateInterface", "UnregisterInitStateDelegate");

	Params::UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Params Parms;

	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                RequiredState                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCallImmediately                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkInitStateInterface::RegisterAndCallForInitStateChange(const struct FGameplayTag& RequiredState, FDelegateProperty_ Delegate, bool bCallImmediately)
{
	static auto Func = Class->GetFunction("GameFrameworkInitStateInterface", "RegisterAndCallForInitStateChange");

	Params::UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Params Parms;

	Parms.RequiredState = RequiredState;
	Parms.Delegate = Delegate;
	Parms.bCallImmediately = bCallImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                DesiredState                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameFrameworkInitStateInterface::HasReachedInitState(const struct FGameplayTag& DesiredState)
{
	static auto Func = Class->GetFunction("GameFrameworkInitStateInterface", "HasReachedInitState");

	Params::UGameFrameworkInitStateInterface_HasReachedInitState_Params Parms;

	Parms.DesiredState = DesiredState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.GetInitState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UGameFrameworkInitStateInterface::GetInitState()
{
	static auto Func = Class->GetFunction("GameFrameworkInitStateInterface", "GetInitState");

	Params::UGameFrameworkInitStateInterface_GetInitState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UGameFrameworkInitStateInterface::GetFeatureName()
{
	static auto Func = Class->GetFunction("GameFrameworkInitStateInterface", "GetFeatureName");

	Params::UGameFrameworkInitStateInterface_GetFeatureName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

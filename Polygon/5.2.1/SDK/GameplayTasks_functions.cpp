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


// Function GameplayTasks.GameplayTask.ReadyForActivation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayTask::ReadyForActivation()
{
	static auto Func = Class->GetFunction("GameplayTask", "ReadyForActivation");

	Params::UGameplayTask_ReadyForActivation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("GameplayTask", "GenericGameplayTaskDelegate__DelegateSignature");

	Params::UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayTasks.GameplayTask.EndTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayTask::EndTask()
{
	static auto Func = Class->GetFunction("GameplayTask", "EndTask");

	Params::UGameplayTask_EndTask_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<class UGameplayTask*>       PreviousSimulatedTasks                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGameplayTasksComponent::OnRep_SimulatedTasks(TArray<class UGameplayTask*>& PreviousSimulatedTasks)
{
	static auto Func = Class->GetFunction("GameplayTasksComponent", "OnRep_SimulatedTasks");

	Params::UGameplayTasksComponent_OnRep_SimulatedTasks_Params Parms;

	Parms.PreviousSimulatedTasks = PreviousSimulatedTasks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface>TaskOwner                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask*               Task                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class UGameplayTaskResource>>AdditionalRequiredResources                                      (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class UGameplayTaskResource>>AdditionalClaimedResources                                       (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
// enum class EGameplayTaskRunResult  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask* Task, uint8 Priority, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalRequiredResources, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalClaimedResources)
{
	static auto Func = Class->GetFunction("GameplayTasksComponent", "K2_RunGameplayTask");

	Params::UGameplayTasksComponent_K2_RunGameplayTask_Params Parms;

	Parms.TaskOwner = TaskOwner;
	Parms.Task = Task;
	Parms.Priority = Priority;
	Parms.AdditionalRequiredResources = AdditionalRequiredResources;
	Parms.AdditionalClaimedResources = AdditionalClaimedResources;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface>InTaskOwner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class UGameplayTaskResource>>ResourceClasses                                                  (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// uint8                              Priority                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ClaimResource* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResources(TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner, const TArray<TSubclassOf<class UGameplayTaskResource>>& ResourceClasses, uint8 Priority, class FName TaskInstanceName)
{
	static auto Func = Class->GetFunction("GameplayTask_ClaimResource", "ClaimResources");

	Params::UGameplayTask_ClaimResource_ClaimResources_Params Parms;

	Parms.InTaskOwner = InTaskOwner;
	Parms.ResourceClasses = ResourceClasses;
	Parms.Priority = Priority;
	Parms.TaskInstanceName = TaskInstanceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface>InTaskOwner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayTaskResource>ResourceClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Priority                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ClaimResource* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResource(TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner, TSubclassOf<class UGameplayTaskResource> ResourceClass, uint8 Priority, class FName TaskInstanceName)
{
	static auto Func = Class->GetFunction("GameplayTask_ClaimResource", "ClaimResource");

	Params::UGameplayTask_ClaimResource_ClaimResource_Params Parms;

	Parms.InTaskOwner = InTaskOwner;
	Parms.ResourceClass = ResourceClass;
	Parms.Priority = Priority;
	Parms.TaskInstanceName = TaskInstanceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface>TaskOwner                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    SpawnRotation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UActor>          Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSpawnOnlyOnAuthority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_SpawnActor*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, TSubclassOf<class UActor> Class, bool bSpawnOnlyOnAuthority)
{
	static auto Func = Class->GetFunction("GameplayTask_SpawnActor", "SpawnActor");

	Params::UGameplayTask_SpawnActor_SpawnActor_Params Parms;

	Parms.TaskOwner = TaskOwner;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;
	Parms.Class = Class;
	Parms.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class UActor* SpawnedActor)
{
	static auto Func = Class->GetFunction("GameplayTask_SpawnActor", "FinishSpawningActor");

	Params::UGameplayTask_SpawnActor_FinishSpawningActor_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SpawnedActor = SpawnedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class UActor** SpawnedActor)
{
	static auto Func = Class->GetFunction("GameplayTask_SpawnActor", "BeginSpawningActor");

	Params::UGameplayTask_SpawnActor_BeginSpawningActor_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface>TaskOwner                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Priority                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_WaitDelay*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, float Time, uint8 Priority)
{
	static auto Func = Class->GetFunction("GameplayTask_WaitDelay", "TaskWaitDelay");

	Params::UGameplayTask_WaitDelay_TaskWaitDelay_Params Parms;

	Parms.TaskOwner = TaskOwner;
	Parms.Time = Time;
	Parms.Priority = Priority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("GameplayTask_WaitDelay", "TaskDelayDelegate__DelegateSignature");

	Params::UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

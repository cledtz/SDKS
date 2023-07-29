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


// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              OutState                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              CurrentState                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              OnDemandState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldProcess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimationSharingStateProcessor::ProcessActorState(int32* OutState, class UActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool* bShouldProcess)
{
	static auto Func = Class->GetFunction("AnimationSharingStateProcessor", "ProcessActorState");

	Params::UAnimationSharingStateProcessor_ProcessActorState_Params Parms;

	Parms.InActor = InActor;
	Parms.CurrentState = CurrentState;
	Parms.OnDemandState = OnDemandState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutState != nullptr)
		*OutState = Parms.OutState;

	if (bShouldProcess != nullptr)
		*bShouldProcess = Parms.bShouldProcess;

}


// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UEnum*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static auto Func = Class->GetFunction("AnimationSharingStateProcessor", "GetAnimationStateEnum");

	Params::UAnimationSharingStateProcessor_GetAnimationStateEnum_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              Actors                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAnimSharingStateInstance::GetInstancedActors(TArray<class UActor*>* Actors)
{
	static auto Func = Class->GetFunction("AnimSharingStateInstance", "GetInstancedActors");

	Params::UAnimSharingStateInstance_GetInstancedActors_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Actors != nullptr)
		*Actors = Parms.Actors;

}


// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeleton*                   SharingSkeleton                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimationSharingManager::RegisterActorWithSkeletonBP(class UActor* InActor, class USkeleton* SharingSkeleton)
{
	static auto Func = Class->GetFunction("AnimationSharingManager", "RegisterActorWithSkeletonBP");

	Params::UAnimationSharingManager_RegisterActorWithSkeletonBP_Params Parms;

	Parms.InActor = InActor;
	Parms.SharingSkeleton = SharingSkeleton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationSharingManager*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("AnimationSharingManager", "GetAnimationSharingManager");

	Params::UAnimationSharingManager_GetAnimationSharingManager_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationSharingSetup*      Setup                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnimationSharingManager::CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)
{
	static auto Func = Class->GetFunction("AnimationSharingManager", "CreateAnimationSharingManager");

	Params::UAnimationSharingManager_CreateAnimationSharingManager_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Setup = Setup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnimationSharingManager::AnimationSharingEnabled()
{
	static auto Func = Class->GetFunction("AnimationSharingManager", "AnimationSharingEnabled");

	Params::UAnimationSharingManager_AnimationSharingEnabled_Params Parms;


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

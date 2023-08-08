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


// Function AudioClustersRuntime.AudioClusterBehavior.OnStop
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UAudioClusterBehavior::OnStop()
{
	static auto Func = Class->GetFunction("AudioClusterBehavior", "OnStop");

	Params::UAudioClusterBehavior_OnStop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnStart
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UAudioClusterBehavior::OnStart()
{
	static auto Func = Class->GetFunction("AudioClusterBehavior", "OnStart");

	Params::UAudioClusterBehavior_OnStart_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnSizeUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClusterBehavior::OnSizeUpdated(int32 Size)
{
	static auto Func = Class->GetFunction("AudioClusterBehavior", "OnSizeUpdated");

	Params::UAudioClusterBehavior_OnSizeUpdated_Params Parms;

	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnPositionUpdated
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClusterBehavior::OnPositionUpdated(struct FVector& Position)
{
	static auto Func = Class->GetFunction("AudioClusterBehavior", "OnPositionUpdated");

	Params::UAudioClusterBehavior_OnPositionUpdated_Params Parms;

	Parms.Position = Position;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnActorRemoved
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClusterBehavior::OnActorRemoved(class UActor* Actor)
{
	static auto Func = Class->GetFunction("AudioClusterBehavior", "OnActorRemoved");

	Params::UAudioClusterBehavior_OnActorRemoved_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnActorAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClusterBehavior::OnActorAdded(class UActor* Actor)
{
	static auto Func = Class->GetFunction("AudioClusterBehavior", "OnActorAdded");

	Params::UAudioClusterBehavior_OnActorAdded_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.UpdateClusters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTimeSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClustersSubsystem::UpdateClusters(float DeltaTimeSeconds)
{
	static auto Func = Class->GetFunction("AudioClustersSubsystem", "UpdateClusters");

	Params::UAudioClustersSubsystem_UpdateClusters_Params Parms;

	Parms.DeltaTimeSeconds = DeltaTimeSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.Unregister
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioClusterActorInfo      ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::Unregister(struct FAudioClusterActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("AudioClustersSubsystem", "Unregister");

	Params::UAudioClustersSubsystem_Unregister_Params Parms;

	Parms.ActorInfo = ActorInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.SetParam
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::SetParam(struct FGameplayTag& Tag, double Value)
{
	static auto Func = Class->GetFunction("AudioClustersSubsystem", "SetParam");

	Params::UAudioClustersSubsystem_SetParam_Params Parms;

	Parms.Tag = Tag;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.SetListenerPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InListenerPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClustersSubsystem::SetListenerPosition(struct FVector& InListenerPosition)
{
	static auto Func = Class->GetFunction("AudioClustersSubsystem", "SetListenerPosition");

	Params::UAudioClustersSubsystem_SetListenerPosition_Params Parms;

	Parms.InListenerPosition = InListenerPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.RemoveConfigMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioClusterConfigMap*      Map                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::RemoveConfigMap(class UAudioClusterConfigMap* Map)
{
	static auto Func = Class->GetFunction("AudioClustersSubsystem", "RemoveConfigMap");

	Params::UAudioClustersSubsystem_RemoveConfigMap_Params Parms;

	Parms.Map = Map;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.RegisterOneShot
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioClusterOneShotInfo    OneShotInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::RegisterOneShot(struct FAudioClusterOneShotInfo& OneShotInfo)
{
	static auto Func = Class->GetFunction("AudioClustersSubsystem", "RegisterOneShot");

	Params::UAudioClustersSubsystem_RegisterOneShot_Params Parms;

	Parms.OneShotInfo = OneShotInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.Register
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioClusterActorInfo      ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::Register(struct FAudioClusterActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("AudioClustersSubsystem", "Register");

	Params::UAudioClustersSubsystem_Register_Params Parms;

	Parms.ActorInfo = ActorInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.AddConfigMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioClusterConfigMap*      Map                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::AddConfigMap(class UAudioClusterConfigMap* Map)
{
	static auto Func = Class->GetFunction("AudioClustersSubsystem", "AddConfigMap");

	Params::UAudioClustersSubsystem_AddConfigMap_Params Parms;

	Parms.Map = Map;

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

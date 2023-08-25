#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioClustersRuntime.AudioClusterConfig
// (None)

class UClass* UAudioClusterConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioClusterConfig");

	return Clss;
}


// AudioClusterConfig AudioClustersRuntime.Default__AudioClusterConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioClusterConfig* UAudioClusterConfig::GetDefaultObj()
{
	static class UAudioClusterConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioClusterConfig*>(UAudioClusterConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioClustersRuntime.AudioClusterConfigMap
// (None)

class UClass* UAudioClusterConfigMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioClusterConfigMap");

	return Clss;
}


// AudioClusterConfigMap AudioClustersRuntime.Default__AudioClusterConfigMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioClusterConfigMap* UAudioClusterConfigMap::GetDefaultObj()
{
	static class UAudioClusterConfigMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioClusterConfigMap*>(UAudioClusterConfigMap::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioClustersRuntime.AudioClusterBehavior
// (None)

class UClass* UAudioClusterBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioClusterBehavior");

	return Clss;
}


// AudioClusterBehavior AudioClustersRuntime.Default__AudioClusterBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioClusterBehavior* UAudioClusterBehavior::GetDefaultObj()
{
	static class UAudioClusterBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioClusterBehavior*>(UAudioClusterBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioClustersRuntime.AudioClusterBehavior.OnStop
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UAudioClusterBehavior::OnStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClusterBehavior", "OnStop");

	Params::UAudioClusterBehavior_OnStop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnStart
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UAudioClusterBehavior::OnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClusterBehavior", "OnStart");

	Params::UAudioClusterBehavior_OnStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnSizeUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClusterBehavior::OnSizeUpdated(int32 Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClusterBehavior", "OnSizeUpdated");

	Params::UAudioClusterBehavior_OnSizeUpdated_Params Parms{};

	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnPositionUpdated
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClusterBehavior::OnPositionUpdated(struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClusterBehavior", "OnPositionUpdated");

	Params::UAudioClusterBehavior_OnPositionUpdated_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnActorRemoved
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClusterBehavior::OnActorRemoved(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClusterBehavior", "OnActorRemoved");

	Params::UAudioClusterBehavior_OnActorRemoved_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioClustersRuntime.AudioClusterBehavior.OnActorAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClusterBehavior::OnActorAdded(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClusterBehavior", "OnActorAdded");

	Params::UAudioClusterBehavior_OnActorAdded_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioClustersRuntime.AudioClustersSubsystem
// (None)

class UClass* UAudioClustersSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioClustersSubsystem");

	return Clss;
}


// AudioClustersSubsystem AudioClustersRuntime.Default__AudioClustersSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioClustersSubsystem* UAudioClustersSubsystem::GetDefaultObj()
{
	static class UAudioClustersSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioClustersSubsystem*>(UAudioClustersSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioClustersRuntime.AudioClustersSubsystem.UpdateClusters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTimeSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClustersSubsystem::UpdateClusters(float DeltaTimeSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClustersSubsystem", "UpdateClusters");

	Params::UAudioClustersSubsystem_UpdateClusters_Params Parms{};

	Parms.DeltaTimeSeconds = DeltaTimeSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.Unregister
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioClusterActorInfo      ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::Unregister(struct FAudioClusterActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClustersSubsystem", "Unregister");

	Params::UAudioClustersSubsystem_Unregister_Params Parms{};

	Parms.ActorInfo = ActorInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClustersSubsystem", "SetParam");

	Params::UAudioClustersSubsystem_SetParam_Params Parms{};

	Parms.Tag = Tag;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.SetListenerPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InListenerPosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioClustersSubsystem::SetListenerPosition(struct FVector& InListenerPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClustersSubsystem", "SetListenerPosition");

	Params::UAudioClustersSubsystem_SetListenerPosition_Params Parms{};

	Parms.InListenerPosition = InListenerPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.RemoveConfigMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioClusterConfigMap*      Map                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::RemoveConfigMap(class UAudioClusterConfigMap* Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClustersSubsystem", "RemoveConfigMap");

	Params::UAudioClustersSubsystem_RemoveConfigMap_Params Parms{};

	Parms.Map = Map;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.RegisterOneShot
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioClusterOneShotInfo    OneShotInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::RegisterOneShot(struct FAudioClusterOneShotInfo& OneShotInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClustersSubsystem", "RegisterOneShot");

	Params::UAudioClustersSubsystem_RegisterOneShot_Params Parms{};

	Parms.OneShotInfo = OneShotInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.Register
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioClusterActorInfo      ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::Register(struct FAudioClusterActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClustersSubsystem", "Register");

	Params::UAudioClustersSubsystem_Register_Params Parms{};

	Parms.ActorInfo = ActorInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioClustersRuntime.AudioClustersSubsystem.AddConfigMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioClusterConfigMap*      Map                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioClustersSubsystem::AddConfigMap(class UAudioClusterConfigMap* Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioClustersSubsystem", "AddConfigMap");

	Params::UAudioClustersSubsystem_AddConfigMap_Params Parms{};

	Parms.Map = Map;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



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


// Function MusicBlocks.MusicSequencerHitComponent.ReplicateMusicSequencerHit
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UFortMusicSequencerInterface>HitInterface                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 Instigator                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::ReplicateMusicSequencerHit(class UObject* WorldContextObject, TScriptInterface<class UFortMusicSequencerInterface> HitInterface, class UController* Instigator)
{
	static auto Func = Class->GetFunction("MusicSequencerHitComponent", "ReplicateMusicSequencerHit");

	Params::UMusicSequencerHitComponent_ReplicateMusicSequencerHit_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.HitInterface = HitInterface;
	Parms.Instigator = Instigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitComponent.RegisterMusicSequencerActor
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UFortMusicSequencerInterface>Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::RegisterMusicSequencerActor(class UObject* WorldContextObject, TScriptInterface<class UFortMusicSequencerInterface> Actor)
{
	static auto Func = Class->GetFunction("MusicSequencerHitComponent", "RegisterMusicSequencerActor");

	Params::UMusicSequencerHitComponent_RegisterMusicSequencerActor_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitComponent.ProcessSequenceHitEvent
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FMusicSequencerHitEntry     Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::ProcessSequenceHitEvent(struct FMusicSequencerHitEntry& Event)
{
	static auto Func = Class->GetFunction("MusicSequencerHitComponent", "ProcessSequenceHitEvent");

	Params::UMusicSequencerHitComponent_ProcessSequenceHitEvent_Params Parms;

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitComponent.OnSequenceHitEventExpired
// (Final, Native, Protected)
// Parameters:
// struct FMusicSequencerHitHandle    ExpiredHandle                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMusicSequencerHitComponent::OnSequenceHitEventExpired(const struct FMusicSequencerHitHandle& ExpiredHandle)
{
	static auto Func = Class->GetFunction("MusicSequencerHitComponent", "OnSequenceHitEventExpired");

	Params::UMusicSequencerHitComponent_OnSequenceHitEventExpired_Params Parms;

	Parms.ExpiredHandle = ExpiredHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MusicBlocks.MusicSequencerHitComponent.AddSequenceHitEvent
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UFortMusicSequencerInterface>HitInterface                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 Instigator                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::AddSequenceHitEvent(TScriptInterface<class UFortMusicSequencerInterface> HitInterface, class UController* Instigator)
{
	static auto Func = Class->GetFunction("MusicSequencerHitComponent", "AddSequenceHitEvent");

	Params::UMusicSequencerHitComponent_AddSequenceHitEvent_Params Parms;

	Parms.HitInterface = HitInterface;
	Parms.Instigator = Instigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitComponent.AddMusicSequencerActor
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UFortMusicSequencerInterface>HitInterface                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::AddMusicSequencerActor(TScriptInterface<class UFortMusicSequencerInterface> HitInterface)
{
	static auto Func = Class->GetFunction("MusicSequencerHitComponent", "AddMusicSequencerActor");

	Params::UMusicSequencerHitComponent_AddMusicSequencerActor_Params Parms;

	Parms.HitInterface = HitInterface;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitActor.GetMusicSequencerHitComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMusicSequencerHitComponent* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMusicSequencerHitComponent* UMusicSequencerHitActor::GetMusicSequencerHitComponent()
{
	static auto Func = Class->GetFunction("MusicSequencerHitActor", "GetMusicSequencerHitComponent");

	Params::UMusicSequencerHitActor_GetMusicSequencerHitComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitAdderComponent.GetMusicSequencerHitActor
// (Final, Native, Public, Const)
// Parameters:
// class UMusicSequencerHitActor*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMusicSequencerHitActor* UMusicSequencerHitAdderComponent::GetMusicSequencerHitActor()
{
	static auto Func = Class->GetFunction("MusicSequencerHitAdderComponent", "GetMusicSequencerHitActor");

	Params::UMusicSequencerHitAdderComponent_GetMusicSequencerHitActor_Params Parms;


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

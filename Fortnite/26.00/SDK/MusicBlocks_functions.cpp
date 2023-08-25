#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MusicBlocks.MusicSequencerHitComponent
// (None)

class UClass* UMusicSequencerHitComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MusicSequencerHitComponent");

	return Clss;
}


// MusicSequencerHitComponent MusicBlocks.Default__MusicSequencerHitComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMusicSequencerHitComponent* UMusicSequencerHitComponent::GetDefaultObj()
{
	static class UMusicSequencerHitComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMusicSequencerHitComponent*>(UMusicSequencerHitComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MusicBlocks.MusicSequencerHitComponent.ReplicateMusicSequencerHit
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UFortMusicSequencerInterface>HitInterface                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 Instigator                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::ReplicateMusicSequencerHit(class UObject* WorldContextObject, TScriptInterface<class UFortMusicSequencerInterface> HitInterface, class UController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerHitComponent", "ReplicateMusicSequencerHit");

	Params::UMusicSequencerHitComponent_ReplicateMusicSequencerHit_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.HitInterface = HitInterface;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerHitComponent", "RegisterMusicSequencerActor");

	Params::UMusicSequencerHitComponent_RegisterMusicSequencerActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitComponent.ProcessSequenceHitEvent
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FMusicSequencerHitEntry     Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::ProcessSequenceHitEvent(struct FMusicSequencerHitEntry& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerHitComponent", "ProcessSequenceHitEvent");

	Params::UMusicSequencerHitComponent_ProcessSequenceHitEvent_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitComponent.OnSequenceHitEventExpired
// (Final, Native, Protected)
// Parameters:
// struct FMusicSequencerHitHandle    ExpiredHandle                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMusicSequencerHitComponent::OnSequenceHitEventExpired(const struct FMusicSequencerHitHandle& ExpiredHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerHitComponent", "OnSequenceHitEventExpired");

	Params::UMusicSequencerHitComponent_OnSequenceHitEventExpired_Params Parms{};

	Parms.ExpiredHandle = ExpiredHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MusicBlocks.MusicSequencerHitComponent.AddSequenceHitEvent
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UFortMusicSequencerInterface>HitInterface                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 Instigator                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::AddSequenceHitEvent(TScriptInterface<class UFortMusicSequencerInterface> HitInterface, class UController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerHitComponent", "AddSequenceHitEvent");

	Params::UMusicSequencerHitComponent_AddSequenceHitEvent_Params Parms{};

	Parms.HitInterface = HitInterface;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MusicBlocks.MusicSequencerHitComponent.AddMusicSequencerActor
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UFortMusicSequencerInterface>HitInterface                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerHitComponent::AddMusicSequencerActor(TScriptInterface<class UFortMusicSequencerInterface> HitInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerHitComponent", "AddMusicSequencerActor");

	Params::UMusicSequencerHitComponent_AddMusicSequencerActor_Params Parms{};

	Parms.HitInterface = HitInterface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MusicBlocks.MusicSequencerHitActor
// (Actor)

class UClass* UMusicSequencerHitActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MusicSequencerHitActor");

	return Clss;
}


// MusicSequencerHitActor MusicBlocks.Default__MusicSequencerHitActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMusicSequencerHitActor* UMusicSequencerHitActor::GetDefaultObj()
{
	static class UMusicSequencerHitActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMusicSequencerHitActor*>(UMusicSequencerHitActor::StaticClass()->DefaultObject);

	return Default;
}


// Function MusicBlocks.MusicSequencerHitActor.GetMusicSequencerHitComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMusicSequencerHitComponent* ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMusicSequencerHitComponent* UMusicSequencerHitActor::GetMusicSequencerHitComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerHitActor", "GetMusicSequencerHitComponent");

	Params::UMusicSequencerHitActor_GetMusicSequencerHitComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MusicBlocks.MusicSequencerHitAdderComponent
// (None)

class UClass* UMusicSequencerHitAdderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MusicSequencerHitAdderComponent");

	return Clss;
}


// MusicSequencerHitAdderComponent MusicBlocks.Default__MusicSequencerHitAdderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMusicSequencerHitAdderComponent* UMusicSequencerHitAdderComponent::GetDefaultObj()
{
	static class UMusicSequencerHitAdderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMusicSequencerHitAdderComponent*>(UMusicSequencerHitAdderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MusicBlocks.MusicSequencerHitAdderComponent.GetMusicSequencerHitActor
// (Final, Native, Public, Const)
// Parameters:
// class UMusicSequencerHitActor*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMusicSequencerHitActor* UMusicSequencerHitAdderComponent::GetMusicSequencerHitActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerHitAdderComponent", "GetMusicSequencerHitActor");

	Params::UMusicSequencerHitAdderComponent_GetMusicSequencerHitActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



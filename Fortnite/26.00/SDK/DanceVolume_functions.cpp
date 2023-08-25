#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DanceVolume.DanceSynchronizerComponent
// (None)

class UClass* UDanceSynchronizerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DanceSynchronizerComponent");

	return Clss;
}


// DanceSynchronizerComponent DanceVolume.Default__DanceSynchronizerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDanceSynchronizerComponent* UDanceSynchronizerComponent::GetDefaultObj()
{
	static class UDanceSynchronizerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDanceSynchronizerComponent*>(UDanceSynchronizerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function DanceVolume.DanceSynchronizerComponent.StopOwnerEmoteAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDanceSynchronizerComponent::StopOwnerEmoteAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "StopOwnerEmoteAudio");

	Params::UDanceSynchronizerComponent_StopOwnerEmoteAudio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DanceVolume.DanceSynchronizerComponent.SetTempo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewTempo                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDanceSynchronizerComponent::SetTempo(float NewTempo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "SetTempo");

	Params::UDanceSynchronizerComponent_SetTempo_Params Parms{};

	Parms.NewTempo = NewTempo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DanceVolume.DanceSynchronizerComponent.SetDanceBeatInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDanceBeatInfo              NewDanceBeatInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UDanceSynchronizerComponent::SetDanceBeatInfo(struct FDanceBeatInfo& NewDanceBeatInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "SetDanceBeatInfo");

	Params::UDanceSynchronizerComponent_SetDanceBeatInfo_Params Parms{};

	Parms.NewDanceBeatInfo = NewDanceBeatInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DanceVolume.DanceSynchronizerComponent.SetBeatSyncMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDanceBeatSyncMode      NewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDanceSynchronizerComponent::SetBeatSyncMode(enum class EDanceBeatSyncMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "SetBeatSyncMode");

	Params::UDanceSynchronizerComponent_SetBeatSyncMode_Params Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DanceVolume.DanceSynchronizerComponent.OnRep_SyncMode
// (Final, Native, Private)
// Parameters:

void UDanceSynchronizerComponent::OnRep_SyncMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "OnRep_SyncMode");

	Params::UDanceSynchronizerComponent_OnRep_SyncMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DanceVolume.DanceSynchronizerComponent.IsTempoSyncEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDanceSynchronizerComponent::IsTempoSyncEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "IsTempoSyncEnabled");

	Params::UDanceSynchronizerComponent_IsTempoSyncEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DanceVolume.DanceSynchronizerComponent.GetOwnerSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UDanceSynchronizerComponent::GetOwnerSkeletalMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "GetOwnerSkeletalMeshComponent");

	Params::UDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DanceVolume.DanceSynchronizerComponent.GetOwnerFortPlayerPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortPlayerPawn*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPlayerPawn* UDanceSynchronizerComponent::GetOwnerFortPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "GetOwnerFortPlayerPawn");

	Params::UDanceSynchronizerComponent_GetOwnerFortPlayerPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DanceVolume.DanceSynchronizerComponent.CalculateDanceMontagePlayRate
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              CurrentTempo                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                Montage                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDanceBeatInfo              DanceBeatInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDanceSynchronizerComponent::CalculateDanceMontagePlayRate(float CurrentTempo, class UAnimMontage* Montage, struct FDanceBeatInfo& DanceBeatInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceSynchronizerComponent", "CalculateDanceMontagePlayRate");

	Params::UDanceSynchronizerComponent_CalculateDanceMontagePlayRate_Params Parms{};

	Parms.CurrentTempo = CurrentTempo;
	Parms.Montage = Montage;
	Parms.DanceBeatInfo = DanceBeatInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DanceVolume.DanceVolumeLibrary
// (None)

class UClass* UDanceVolumeLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DanceVolumeLibrary");

	return Clss;
}


// DanceVolumeLibrary DanceVolume.Default__DanceVolumeLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDanceVolumeLibrary* UDanceVolumeLibrary::GetDefaultObj()
{
	static class UDanceVolumeLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDanceVolumeLibrary*>(UDanceVolumeLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function DanceVolume.DanceVolumeLibrary.GetLastEmoteExecuted
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortItemDefinition* UDanceVolumeLibrary::GetLastEmoteExecuted(class UController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceVolumeLibrary", "GetLastEmoteExecuted");

	Params::UDanceVolumeLibrary_GetLastEmoteExecuted_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DanceVolume.DanceVolumeLibrary.ForceStopMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFortPawn*                   FortPawn                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDanceVolumeLibrary::ForceStopMontage(class UFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DanceVolumeLibrary", "ForceStopMontage");

	Params::UDanceVolumeLibrary_ForceStopMontage_Params Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



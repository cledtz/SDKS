#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FNE_VolumeRuntime.FNE_Volume
// (Actor)

class UClass* UFNE_Volume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FNE_Volume");

	return Clss;
}


// FNE_Volume FNE_VolumeRuntime.Default__FNE_Volume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFNE_Volume* UFNE_Volume::GetDefaultObj()
{
	static class UFNE_Volume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFNE_Volume*>(UFNE_Volume::StaticClass()->DefaultObject);

	return Default;
}


// Class FNE_VolumeRuntime.FNE_VolumeComponent
// (None)

class UClass* UFNE_VolumeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FNE_VolumeComponent");

	return Clss;
}


// FNE_VolumeComponent FNE_VolumeRuntime.Default__FNE_VolumeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFNE_VolumeComponent* UFNE_VolumeComponent::GetDefaultObj()
{
	static class UFNE_VolumeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFNE_VolumeComponent*>(UFNE_VolumeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FNE_VolumeRuntime.FNE_VolumeComponent.SetEnableOverlap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFNE_VolumeComponent::SetEnableOverlap(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FNE_VolumeComponent", "SetEnableOverlap");

	Params::UFNE_VolumeComponent_SetEnableOverlap_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FNE_VolumeRuntime.FNE_VolumeComponent.HandlePlayspaceUserRemoved
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FPlayspaceUser              RemovedUser                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFNE_VolumeComponent::HandlePlayspaceUserRemoved(struct FPlayspaceUser& RemovedUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FNE_VolumeComponent", "HandlePlayspaceUserRemoved");

	Params::UFNE_VolumeComponent_HandlePlayspaceUserRemoved_Params Parms{};

	Parms.RemovedUser = RemovedUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FNE_VolumeRuntime.FNE_VolumeComponent.HandlePlayspaceUserAdded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FPlayspaceUser              AddedUser                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFNE_VolumeComponent::HandlePlayspaceUserAdded(struct FPlayspaceUser& AddedUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FNE_VolumeComponent", "HandlePlayspaceUserAdded");

	Params::UFNE_VolumeComponent_HandlePlayspaceUserAdded_Params Parms{};

	Parms.AddedUser = AddedUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateEndOverlap
// (Final, Native, Protected)
// Parameters:
// class UPlayerState*                TouchingPlayerState                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayVolume*             Volume                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFNE_VolumeComponent::HandleNotifyPlayerStateEndOverlap(class UPlayerState* TouchingPlayerState, class UGameplayVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FNE_VolumeComponent", "HandleNotifyPlayerStateEndOverlap");

	Params::UFNE_VolumeComponent_HandleNotifyPlayerStateEndOverlap_Params Parms{};

	Parms.TouchingPlayerState = TouchingPlayerState;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateBeginOverlap
// (Final, Native, Protected)
// Parameters:
// class UPlayerState*                TouchingPlayerState                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayVolume*             Volume                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFNE_VolumeComponent::HandleNotifyPlayerStateBeginOverlap(class UPlayerState* TouchingPlayerState, class UGameplayVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FNE_VolumeComponent", "HandleNotifyPlayerStateBeginOverlap");

	Params::UFNE_VolumeComponent_HandleNotifyPlayerStateBeginOverlap_Params Parms{};

	Parms.TouchingPlayerState = TouchingPlayerState;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFNE_Volume*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFNE_Volume* UFNE_VolumeComponent::GetSpawnedVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FNE_VolumeComponent", "GetSpawnedVolume");

	Params::UFNE_VolumeComponent_GetSpawnedVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FNE_VolumeRuntime.FNE_VolumeComponent.GetEnableOverlap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFNE_VolumeComponent::GetEnableOverlap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FNE_VolumeComponent", "GetEnableOverlap");

	Params::UFNE_VolumeComponent_GetEnableOverlap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerStates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPlayerState*>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UPlayerState*> UFNE_VolumeComponent::GetAllPlayerStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FNE_VolumeComponent", "GetAllPlayerStates");

	Params::UFNE_VolumeComponent_GetAllPlayerStates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



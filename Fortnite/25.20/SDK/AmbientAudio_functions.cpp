#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AmbientAudio.AmbientAudioComponent.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPriority                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioComponent::SetPriority(int32 InPriority)
{
	static auto Func = Class->GetFunction("AmbientAudioComponent", "SetPriority");

	Params::UAmbientAudioComponent_SetPriority_Params Parms;

	Parms.InPriority = InPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioComponent.SetCrossfadeTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InCrossfadeTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioComponent::SetCrossfadeTime(float InCrossfadeTime)
{
	static auto Func = Class->GetFunction("AmbientAudioComponent", "SetCrossfadeTime");

	Params::UAmbientAudioComponent_SetCrossfadeTime_Params Parms;

	Parms.InCrossfadeTime = InCrossfadeTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioComponent.SetAmbientAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAmbientAudioDataAsset*      InAmbientAsset                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioComponent::SetAmbientAsset(class UAmbientAudioDataAsset* InAmbientAsset)
{
	static auto Func = Class->GetFunction("AmbientAudioComponent", "SetAmbientAsset");

	Params::UAmbientAudioComponent_SetAmbientAsset_Params Parms;

	Parms.InAmbientAsset = InAmbientAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::RemoveGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static auto Func = Class->GetFunction("AmbientAudioSubsystem", "RemoveGameplayTag");

	Params::UAmbientAudioSubsystem_RemoveGameplayTag_Params Parms;

	Parms.GameplayTag = GameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CrossfadeOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::RemoveAmbientEntry(class FName AmbientName, float CrossfadeOverride)
{
	static auto Func = Class->GetFunction("AmbientAudioSubsystem", "RemoveAmbientEntry");

	Params::UAmbientAudioSubsystem_RemoveAmbientEntry_Params Parms;

	Parms.AmbientName = AmbientName;
	Parms.CrossfadeOverride = CrossfadeOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioSubsystem.GetAudioParameterComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioParameterComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioParameterComponent* UAmbientAudioSubsystem::GetAudioParameterComponent()
{
	static auto Func = Class->GetFunction("AmbientAudioSubsystem", "GetAudioParameterComponent");

	Params::UAmbientAudioSubsystem_GetAudioParameterComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::AddGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static auto Func = Class->GetFunction("AmbientAudioSubsystem", "AddGameplayTag");

	Params::UAmbientAudioSubsystem_AddGameplayTag_Params Parms;

	Parms.GameplayTag = GameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AmbientName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAmbientAudioDataAsset*      Asset                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CrossfadeTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAmbientAudioSubsystem::AddAmbientEntry(class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime)
{
	static auto Func = Class->GetFunction("AmbientAudioSubsystem", "AddAmbientEntry");

	Params::UAmbientAudioSubsystem_AddAmbientEntry_Params Parms;

	Parms.AmbientName = AmbientName;
	Parms.Asset = Asset;
	Parms.Priority = Priority;
	Parms.CrossfadeTime = CrossfadeTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function StormCaller.StormCallerComponent.UpdatePoiSavedOptions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InOutPoiSavedOptionKeys                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FText>                InOutPoiSavedOptionNames                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UPlaylistUserOptions*        UserOptions                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTagForPOI                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStormCallerComponent::UpdatePoiSavedOptions(TArray<class FString>& InOutPoiSavedOptionKeys, TArray<class FText>& InOutPoiSavedOptionNames, class UPlaylistUserOptions* UserOptions, struct FGameplayTag& GameplayTagForPOI)
{
	static auto Func = Class->GetFunction("StormCallerComponent", "UpdatePoiSavedOptions");

	Params::UStormCallerComponent_UpdatePoiSavedOptions_Params Parms;

	Parms.InOutPoiSavedOptionKeys = InOutPoiSavedOptionKeys;
	Parms.InOutPoiSavedOptionNames = InOutPoiSavedOptionNames;
	Parms.UserOptions = UserOptions;
	Parms.GameplayTagForPOI = GameplayTagForPOI;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormCaller.StormCallerComponent.SpawnInitialSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UStormCallerComponent::SpawnInitialSafeZone()
{
	static auto Func = Class->GetFunction("StormCallerComponent", "SpawnInitialSafeZone");

	Params::UStormCallerComponent_SpawnInitialSafeZone_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormCaller.StormCallerComponent.GetSafeZoneLocationBlockList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector4>            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector4> UStormCallerComponent::GetSafeZoneLocationBlockList()
{
	static auto Func = Class->GetFunction("StormCallerComponent", "GetSafeZoneLocationBlockList");

	Params::UStormCallerComponent_GetSafeZoneLocationBlockList_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function StormCaller.StormCallerComponent.GetRandomPoiVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPoiVolume*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPoiVolume* UStormCallerComponent::GetRandomPoiVolume()
{
	static auto Func = Class->GetFunction("StormCallerComponent", "GetRandomPoiVolume");

	Params::UStormCallerComponent_GetRandomPoiVolume_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function StormCaller.StormCallerComponent.GetPoiVolumeFromOptionIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OptionIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPoiVolume*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPoiVolume* UStormCallerComponent::GetPoiVolumeFromOptionIndex(int32 OptionIndex)
{
	static auto Func = Class->GetFunction("StormCallerComponent", "GetPoiVolumeFromOptionIndex");

	Params::UStormCallerComponent_GetPoiVolumeFromOptionIndex_Params Parms;

	Parms.OptionIndex = OptionIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function StormCaller.StormCallerComponent.ApplySavedPoiOptions
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              PoiSavedOptionKeys                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FText>                PoiSavedOptionName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortActorOptionsComponent*  ToyOptionsComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStormCallerComponent::ApplySavedPoiOptions(TArray<class FString>& PoiSavedOptionKeys, TArray<class FText>& PoiSavedOptionName, class UFortActorOptionsComponent* ToyOptionsComponent)
{
	static auto Func = Class->GetFunction("StormCallerComponent", "ApplySavedPoiOptions");

	Params::UStormCallerComponent_ApplySavedPoiOptions_Params Parms;

	Parms.PoiSavedOptionKeys = PoiSavedOptionKeys;
	Parms.PoiSavedOptionName = PoiSavedOptionName;
	Parms.ToyOptionsComponent = ToyOptionsComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StormCaller.StormCallerComponent.ApplyPOINamesToDataRegistry
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlaylistUserOptions*        UserOptions                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTagForPOI                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        MapCenterText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        RandomText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        BeaconText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UStormCallerComponent::ApplyPOINamesToDataRegistry(class UPlaylistUserOptions* UserOptions, struct FGameplayTag& GameplayTagForPOI, class FText& MapCenterText, class FText& RandomText, class FText& BeaconText)
{
	static auto Func = Class->GetFunction("StormCallerComponent", "ApplyPOINamesToDataRegistry");

	Params::UStormCallerComponent_ApplyPOINamesToDataRegistry_Params Parms;

	Parms.UserOptions = UserOptions;
	Parms.GameplayTagForPOI = GameplayTagForPOI;
	Parms.MapCenterText = MapCenterText;
	Parms.RandomText = RandomText;
	Parms.BeaconText = BeaconText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

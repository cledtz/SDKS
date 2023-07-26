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


// Function LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InItemGameplayTagsNotAllowed                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void AFortAthenaMutator_CR_CreativeAllowLootItem::SetItemGameplayTagsNotAllowed(struct FGameplayTagContainer& InItemGameplayTagsNotAllowed)
{
	static auto Func = Class->GetFunction("FortAthenaMutator_CR_CreativeAllowLootItem", "SetItemGameplayTagsNotAllowed");

	Params::AFortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed_Params Parms;

	Parms.InItemGameplayTagsNotAllowed = InItemGameplayTagsNotAllowed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootTierDataTable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* AFortAthenaMutator_CR_LootChoice::GetLootTierDataTable()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootTierDataTable");

	Params::AFortAthenaMutator_CR_LootChoice_GetLootTierDataTable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootSelectionString
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString AFortAthenaMutator_CR_LootChoice::GetLootSelectionString()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootSelectionString");

	Params::AFortAthenaMutator_CR_LootChoice_GetLootSelectionString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootPackageTable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* AFortAthenaMutator_CR_LootChoice::GetLootPackageTable()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootPackageTable");

	Params::AFortAthenaMutator_CR_LootChoice_GetLootPackageTable_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToRemove
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer AFortAthenaMutator_CR_LootChoice::GetContextTagsToRemove()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetContextTagsToRemove");

	Params::AFortAthenaMutator_CR_LootChoice_GetContextTagsToRemove_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToAdd
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer AFortAthenaMutator_CR_LootChoice::GetContextTagsToAdd()
{
	static auto Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetContextTagsToAdd");

	Params::AFortAthenaMutator_CR_LootChoice_GetContextTagsToAdd_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LootController.LootControllerNativeComponent.PrintDebugString
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      DebugString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               LogWarning                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::PrintDebugString(const class FString& DebugString, bool LogWarning)
{
	static auto Func = Class->GetFunction("LootControllerNativeComponent", "PrintDebugString");

	Params::ULootControllerNativeComponent_PrintDebugString_Params Parms;

	Parms.DebugString = DebugString;
	Parms.LogWarning = LogWarning;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LootController.LootControllerNativeComponent.IsThrottleEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULootControllerNativeComponent::IsThrottleEnabled()
{
	static auto Func = Class->GetFunction("LootControllerNativeComponent", "IsThrottleEnabled");

	Params::ULootControllerNativeComponent_IsThrottleEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LootController.LootControllerNativeComponent.IsRemoveLootEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULootControllerNativeComponent::IsRemoveLootEnabled()
{
	static auto Func = Class->GetFunction("LootControllerNativeComponent", "IsRemoveLootEnabled");

	Params::ULootControllerNativeComponent_IsRemoveLootEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LootController.LootControllerNativeComponent.AsyncGetActorsOfClass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::AsyncGetActorsOfClass(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass)
{
	static auto Func = Class->GetFunction("LootControllerNativeComponent", "AsyncGetActorsOfClass");

	Params::ULootControllerNativeComponent_AsyncGetActorsOfClass_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LootController.LootControllerNativeComponent.AddToArray
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FBuildingContainersFoundEntry>InOutBuildingContainersFoundArray                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InBuildingContainerFoundIndex                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBuildingContainersArrayEntryInBuildingContainerToAdd                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::AddToArray(TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int32 InBuildingContainerFoundIndex, struct FBuildingContainersArrayEntry& InBuildingContainerToAdd)
{
	static auto Func = Class->GetFunction("LootControllerNativeComponent", "AddToArray");

	Params::ULootControllerNativeComponent_AddToArray_Params Parms;

	Parms.InOutBuildingContainersFoundArray = InOutBuildingContainersFoundArray;
	Parms.InBuildingContainerFoundIndex = InBuildingContainerFoundIndex;
	Parms.InBuildingContainerToAdd = InBuildingContainerToAdd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

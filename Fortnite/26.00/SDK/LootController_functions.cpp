#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LootController.FortAthenaMutator_CR_CreativeAllowLootItem
// (Actor)

class UClass* UFortAthenaMutator_CR_CreativeAllowLootItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_CR_CreativeAllowLootItem");

	return Clss;
}


// FortAthenaMutator_CR_CreativeAllowLootItem LootController.Default__FortAthenaMutator_CR_CreativeAllowLootItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_CR_CreativeAllowLootItem* UFortAthenaMutator_CR_CreativeAllowLootItem::GetDefaultObj()
{
	static class UFortAthenaMutator_CR_CreativeAllowLootItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_CR_CreativeAllowLootItem*>(UFortAthenaMutator_CR_CreativeAllowLootItem::StaticClass()->DefaultObject);

	return Default;
}


// Function LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InItemGameplayTagsNotAllowed                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaMutator_CR_CreativeAllowLootItem::SetItemGameplayTagsNotAllowed(struct FGameplayTagContainer& InItemGameplayTagsNotAllowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_CR_CreativeAllowLootItem", "SetItemGameplayTagsNotAllowed");

	Params::UFortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed_Params Parms{};

	Parms.InItemGameplayTagsNotAllowed = InItemGameplayTagsNotAllowed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LootController.FortAthenaMutator_CR_LootChoice
// (Actor)

class UClass* UFortAthenaMutator_CR_LootChoice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_CR_LootChoice");

	return Clss;
}


// FortAthenaMutator_CR_LootChoice LootController.Default__FortAthenaMutator_CR_LootChoice
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_CR_LootChoice* UFortAthenaMutator_CR_LootChoice::GetDefaultObj()
{
	static class UFortAthenaMutator_CR_LootChoice* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_CR_LootChoice*>(UFortAthenaMutator_CR_LootChoice::StaticClass()->DefaultObject);

	return Default;
}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootTierDataTable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* UFortAthenaMutator_CR_LootChoice::GetLootTierDataTable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootTierDataTable");

	Params::UFortAthenaMutator_CR_LootChoice_GetLootTierDataTable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootSelectionString
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFortAthenaMutator_CR_LootChoice::GetLootSelectionString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootSelectionString");

	Params::UFortAthenaMutator_CR_LootChoice_GetLootSelectionString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetLootPackageTable
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* UFortAthenaMutator_CR_LootChoice::GetLootPackageTable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootPackageTable");

	Params::UFortAthenaMutator_CR_LootChoice_GetLootPackageTable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToRemove
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UFortAthenaMutator_CR_LootChoice::GetContextTagsToRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetContextTagsToRemove");

	Params::UFortAthenaMutator_CR_LootChoice_GetContextTagsToRemove_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToAdd
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UFortAthenaMutator_CR_LootChoice::GetContextTagsToAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetContextTagsToAdd");

	Params::UFortAthenaMutator_CR_LootChoice_GetContextTagsToAdd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LootController.LootControllerNativeComponent
// (None)

class UClass* ULootControllerNativeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootControllerNativeComponent");

	return Clss;
}


// LootControllerNativeComponent LootController.Default__LootControllerNativeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULootControllerNativeComponent* ULootControllerNativeComponent::GetDefaultObj()
{
	static class ULootControllerNativeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULootControllerNativeComponent*>(ULootControllerNativeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LootController.LootControllerNativeComponent.PrintDebugString
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      DebugString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               LogWarning                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::PrintDebugString(const class FString& DebugString, bool LogWarning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootControllerNativeComponent", "PrintDebugString");

	Params::ULootControllerNativeComponent_PrintDebugString_Params Parms{};

	Parms.DebugString = DebugString;
	Parms.LogWarning = LogWarning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LootController.LootControllerNativeComponent.IsThrottleEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULootControllerNativeComponent::IsThrottleEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootControllerNativeComponent", "IsThrottleEnabled");

	Params::ULootControllerNativeComponent_IsThrottleEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LootController.LootControllerNativeComponent.IsRemoveLootEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULootControllerNativeComponent::IsRemoveLootEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootControllerNativeComponent", "IsRemoveLootEnabled");

	Params::ULootControllerNativeComponent_IsRemoveLootEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LootController.LootControllerNativeComponent.AsyncGetActorsOfClass
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UActor>          ActorClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::AsyncGetActorsOfClass(class UObject* WorldContextObject, TSubclassOf<class UActor> ActorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootControllerNativeComponent", "AsyncGetActorsOfClass");

	Params::ULootControllerNativeComponent_AsyncGetActorsOfClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LootController.LootControllerNativeComponent.AddToArray
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FBuildingContainersFoundEntry>InOutBuildingContainersFoundArray                                (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              InBuildingContainerFoundIndex                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBuildingContainersArrayEntryInBuildingContainerToAdd                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULootControllerNativeComponent::AddToArray(TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int32 InBuildingContainerFoundIndex, struct FBuildingContainersArrayEntry& InBuildingContainerToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LootControllerNativeComponent", "AddToArray");

	Params::ULootControllerNativeComponent_AddToArray_Params Parms{};

	Parms.InOutBuildingContainersFoundArray = InOutBuildingContainersFoundArray;
	Parms.InBuildingContainerFoundIndex = InBuildingContainerFoundIndex;
	Parms.InBuildingContainerToAdd = InBuildingContainerToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



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


// Function UIChart.UIStateChartContext.BP_SetPlayerValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetPlayerValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, int32 Value)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerValue");

	Params::UUIStateChartContext_BP_SetPlayerValue_Params Parms;

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_SetPlayerStringValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetPlayerStringValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerStringValue");

	Params::UUIStateChartContext_BP_SetPlayerStringValue_Params Parms;

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_SetPlayerFloatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetPlayerFloatValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, float Value)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerFloatValue");

	Params::UUIStateChartContext_BP_SetPlayerFloatValue_Params Parms;

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_SetPlayerBoolValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetPlayerBoolValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, bool Value)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerBoolValue");

	Params::UUIStateChartContext_BP_SetPlayerBoolValue_Params Parms;

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_SetCommonStringValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetCommonStringValue(const struct FGameplayTag& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonStringValue");

	Params::UUIStateChartContext_BP_SetCommonStringValue_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_SetCommonIntValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetCommonIntValue(const struct FGameplayTag& Key, int32 Value)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonIntValue");

	Params::UUIStateChartContext_BP_SetCommonIntValue_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_SetCommonFloatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetCommonFloatValue(const struct FGameplayTag& Key, float Value)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonFloatValue");

	Params::UUIStateChartContext_BP_SetCommonFloatValue_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_SetCommonBoolValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetCommonBoolValue(const struct FGameplayTag& Key, bool Value)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonBoolValue");

	Params::UUIStateChartContext_BP_SetCommonBoolValue_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_FindEntry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUIStateChartContextEntry*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUIStateChartContextEntry* UUIStateChartContext::BP_FindEntry(const struct FGameplayTag& Key)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_FindEntry");

	Params::UUIStateChartContext_BP_FindEntry_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContext.BP_ClearPlayerValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ClearPlayerValue(class ULocalPlayer* LocalPlayer, struct FGameplayTag& Key)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_ClearPlayerValue");

	Params::UUIStateChartContext_BP_ClearPlayerValue_Params Parms;

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_ClearEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ClearEntry(const struct FGameplayTag& Key)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_ClearEntry");

	Params::UUIStateChartContext_BP_ClearEntry_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_ClearCommonValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ClearCommonValue(const struct FGameplayTag& Key)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_ClearCommonValue");

	Params::UUIStateChartContext_BP_ClearCommonValue_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_ApplyPlayerChanges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUIStateChartContextChangeSetContextChanges                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ApplyPlayerChanges(class ULocalPlayer* LocalPlayer, struct FUIStateChartContextChangeSet& ContextChanges)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_ApplyPlayerChanges");

	Params::UUIStateChartContext_BP_ApplyPlayerChanges_Params Parms;

	Parms.LocalPlayer = LocalPlayer;
	Parms.ContextChanges = ContextChanges;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContext.BP_ApplyCommonChanges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUIStateChartContextChangeSetContextChanges                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ApplyCommonChanges(struct FUIStateChartContextChangeSet& ContextChanges)
{
	static auto Func = Class->GetFunction("UIStateChartContext", "BP_ApplyCommonChanges");

	Params::UUIStateChartContext_BP_ApplyCommonChanges_Params Parms;

	Parms.ContextChanges = ContextChanges;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartContextEntry.IsEmptyForPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartContextEntry::IsEmptyForPlayer(class ULocalPlayer* InLocalPlayer)
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "IsEmptyForPlayer");

	Params::UUIStateChartContextEntry_IsEmptyForPlayer_Params Parms;

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUIStateChartContextEntry::GetPlayerValueAsString(class ULocalPlayer* InLocalPlayer)
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsString");

	Params::UUIStateChartContextEntry_GetPlayerValueAsString_Params Parms;

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUIStateChartContextEntry::GetPlayerValueAsInt(class ULocalPlayer* InLocalPlayer)
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsInt");

	Params::UUIStateChartContextEntry_GetPlayerValueAsInt_Params Parms;

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUIStateChartContextEntry::GetPlayerValueAsFloat(class ULocalPlayer* InLocalPlayer)
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsFloat");

	Params::UUIStateChartContextEntry_GetPlayerValueAsFloat_Params Parms;

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartContextEntry::GetPlayerValueAsBool(class ULocalPlayer* InLocalPlayer)
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsBool");

	Params::UUIStateChartContextEntry_GetPlayerValueAsBool_Params Parms;

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetCommonValueAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUIStateChartContextEntry::GetCommonValueAsString()
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsString");

	Params::UUIStateChartContextEntry_GetCommonValueAsString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetCommonValueAsInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUIStateChartContextEntry::GetCommonValueAsInt()
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsInt");

	Params::UUIStateChartContextEntry_GetCommonValueAsInt_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetCommonValueAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUIStateChartContextEntry::GetCommonValueAsFloat()
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsFloat");

	Params::UUIStateChartContextEntry_GetCommonValueAsFloat_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetCommonValueAsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartContextEntry::GetCommonValueAsBool()
{
	static auto Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsBool");

	Params::UUIStateChartContextEntry_GetCommonValueAsBool_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartManager.GetContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUIStateChartContext*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUIStateChartContext* UUIStateChartManager::GetContext()
{
	static auto Func = Class->GetFunction("UIStateChartManager", "GetContext");

	Params::UUIStateChartManager_GetContext_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartManager.BP_RemoveStateChart
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AnimationHints                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUIStateChartContextChangeSetContextChanges                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EUIStateTransitionUrgencyUrgency                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartManager::BP_RemoveStateChart(int32 Key, struct FGameplayTagContainer& AnimationHints, struct FUIStateChartContextChangeSet& ContextChanges, enum class EUIStateTransitionUrgency Urgency)
{
	static auto Func = Class->GetFunction("UIStateChartManager", "BP_RemoveStateChart");

	Params::UUIStateChartManager_BP_RemoveStateChart_Params Parms;

	Parms.Key = Key;
	Parms.AnimationHints = AnimationHints;
	Parms.ContextChanges = ContextChanges;
	Parms.Urgency = Urgency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartManager.BP_ReactivateStateChart
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AnimationHints                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                StateTag                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUIStateTransitionUrgencyUrgency                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartManager::BP_ReactivateStateChart(int32 Key, struct FGameplayTagContainer& AnimationHints, const struct FGameplayTag& StateTag, enum class EUIStateTransitionUrgency Urgency)
{
	static auto Func = Class->GetFunction("UIStateChartManager", "BP_ReactivateStateChart");

	Params::UUIStateChartManager_BP_ReactivateStateChart_Params Parms;

	Parms.Key = Key;
	Parms.AnimationHints = AnimationHints;
	Parms.StateTag = StateTag;
	Parms.Urgency = Urgency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIChart.UIStateChartManager.BP_DispatchTransitionEvent
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                TransitionTag                                                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                StateChartOwner                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AnimationHints                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUIStateChartContextChangeSetContextChanges                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EUIStateTransitionUrgencyUrgency                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBacktrack                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartManager::BP_DispatchTransitionEvent(const struct FGameplayTag& TransitionTag, class ULocalPlayer* StateChartOwner, struct FGameplayTagContainer& AnimationHints, struct FUIStateChartContextChangeSet& ContextChanges, enum class EUIStateTransitionUrgency Urgency, bool bBacktrack)
{
	static auto Func = Class->GetFunction("UIStateChartManager", "BP_DispatchTransitionEvent");

	Params::UUIStateChartManager_BP_DispatchTransitionEvent_Params Parms;

	Parms.TransitionTag = TransitionTag;
	Parms.StateChartOwner = StateChartOwner;
	Parms.AnimationHints = AnimationHints;
	Parms.ContextChanges = ContextChanges;
	Parms.Urgency = Urgency;
	Parms.bBacktrack = bBacktrack;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartManager.BP_DeactivateStateChart
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AnimationHints                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUIStateChartContextChangeSetContextChanges                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EUIStateTransitionUrgencyUrgency                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartManager::BP_DeactivateStateChart(int32 Key, struct FGameplayTagContainer& AnimationHints, struct FUIStateChartContextChangeSet& ContextChanges, enum class EUIStateTransitionUrgency Urgency)
{
	static auto Func = Class->GetFunction("UIStateChartManager", "BP_DeactivateStateChart");

	Params::UUIStateChartManager_BP_DeactivateStateChart_Params Parms;

	Parms.Key = Key;
	Parms.AnimationHints = AnimationHints;
	Parms.ContextChanges = ContextChanges;
	Parms.Urgency = Urgency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartManager.BP_AddStateChart
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class UUIStateChart*               StateChartAsset                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                OwningLocalPlayer                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AnimationHints                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                InitialStateTag                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUIStateTransitionUrgencyUrgency                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUIStateChartManager::BP_AddStateChart(class UUIStateChart* StateChartAsset, class ULocalPlayer* OwningLocalPlayer, struct FGameplayTagContainer& AnimationHints, const struct FGameplayTag& InitialStateTag, enum class EUIStateTransitionUrgency Urgency)
{
	static auto Func = Class->GetFunction("UIStateChartManager", "BP_AddStateChart");

	Params::UUIStateChartManager_BP_AddStateChart_Params Parms;

	Parms.StateChartAsset = StateChartAsset;
	Parms.OwningLocalPlayer = OwningLocalPlayer;
	Parms.AnimationHints = AnimationHints;
	Parms.InitialStateTag = InitialStateTag;
	Parms.Urgency = Urgency;

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

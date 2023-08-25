#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UIChart.UIStateSettings
// (None)

class UClass* UUIStateSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateSettings");

	return Clss;
}


// UIStateSettings UIChart.Default__UIStateSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateSettings* UUIStateSettings::GetDefaultObj()
{
	static class UUIStateSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateSettings*>(UUIStateSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateComponent
// (None)

class UClass* UUIStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateComponent");

	return Clss;
}


// UIStateComponent UIChart.Default__UIStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateComponent* UUIStateComponent::GetDefaultObj()
{
	static class UUIStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateComponent*>(UUIStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.ContextSetterUIStateComponent
// (None)

class UClass* UContextSetterUIStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextSetterUIStateComponent");

	return Clss;
}


// ContextSetterUIStateComponent UIChart.Default__ContextSetterUIStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextSetterUIStateComponent* UContextSetterUIStateComponent::GetDefaultObj()
{
	static class UContextSetterUIStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextSetterUIStateComponent*>(UContextSetterUIStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateComponentConfiguration
// (None)

class UClass* UUIStateComponentConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateComponentConfiguration");

	return Clss;
}


// UIStateComponentConfiguration UIChart.Default__UIStateComponentConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateComponentConfiguration* UUIStateComponentConfiguration::GetDefaultObj()
{
	static class UUIStateComponentConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateComponentConfiguration*>(UUIStateComponentConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.ContextSetterUIStateComponentConfiguration
// (None)

class UClass* UContextSetterUIStateComponentConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContextSetterUIStateComponentConfiguration");

	return Clss;
}


// ContextSetterUIStateComponentConfiguration UIChart.Default__ContextSetterUIStateComponentConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class UContextSetterUIStateComponentConfiguration* UContextSetterUIStateComponentConfiguration::GetDefaultObj()
{
	static class UContextSetterUIStateComponentConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<UContextSetterUIStateComponentConfiguration*>(UContextSetterUIStateComponentConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.GlobalViewModelUIStateComponent
// (None)

class UClass* UGlobalViewModelUIStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalViewModelUIStateComponent");

	return Clss;
}


// GlobalViewModelUIStateComponent UIChart.Default__GlobalViewModelUIStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalViewModelUIStateComponent* UGlobalViewModelUIStateComponent::GetDefaultObj()
{
	static class UGlobalViewModelUIStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalViewModelUIStateComponent*>(UGlobalViewModelUIStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.GlobalViewModelUIStateComponentConfiguration
// (None)

class UClass* UGlobalViewModelUIStateComponentConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalViewModelUIStateComponentConfiguration");

	return Clss;
}


// GlobalViewModelUIStateComponentConfiguration UIChart.Default__GlobalViewModelUIStateComponentConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalViewModelUIStateComponentConfiguration* UGlobalViewModelUIStateComponentConfiguration::GetDefaultObj()
{
	static class UGlobalViewModelUIStateComponentConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalViewModelUIStateComponentConfiguration*>(UGlobalViewModelUIStateComponentConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.StackingUIStateComponent
// (None)

class UClass* UStackingUIStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StackingUIStateComponent");

	return Clss;
}


// StackingUIStateComponent UIChart.Default__StackingUIStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UStackingUIStateComponent* UStackingUIStateComponent::GetDefaultObj()
{
	static class UStackingUIStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UStackingUIStateComponent*>(UStackingUIStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.InputConfigUIStateComponent
// (None)

class UClass* UInputConfigUIStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputConfigUIStateComponent");

	return Clss;
}


// InputConfigUIStateComponent UIChart.Default__InputConfigUIStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputConfigUIStateComponent* UInputConfigUIStateComponent::GetDefaultObj()
{
	static class UInputConfigUIStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputConfigUIStateComponent*>(UInputConfigUIStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.InputConfigUIStateComponentConfiguration
// (None)

class UClass* UInputConfigUIStateComponentConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputConfigUIStateComponentConfiguration");

	return Clss;
}


// InputConfigUIStateComponentConfiguration UIChart.Default__InputConfigUIStateComponentConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputConfigUIStateComponentConfiguration* UInputConfigUIStateComponentConfiguration::GetDefaultObj()
{
	static class UInputConfigUIStateComponentConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputConfigUIStateComponentConfiguration*>(UInputConfigUIStateComponentConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.SceneUIStateComponent
// (None)

class UClass* USceneUIStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SceneUIStateComponent");

	return Clss;
}


// SceneUIStateComponent UIChart.Default__SceneUIStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USceneUIStateComponent* USceneUIStateComponent::GetDefaultObj()
{
	static class USceneUIStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USceneUIStateComponent*>(USceneUIStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.SceneUIStateComponentConfiguration
// (None)

class UClass* USceneUIStateComponentConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SceneUIStateComponentConfiguration");

	return Clss;
}


// SceneUIStateComponentConfiguration UIChart.Default__SceneUIStateComponentConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class USceneUIStateComponentConfiguration* USceneUIStateComponentConfiguration::GetDefaultObj()
{
	static class USceneUIStateComponentConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<USceneUIStateComponentConfiguration*>(USceneUIStateComponentConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.SplitScreenUIStateComponentBase
// (None)

class UClass* USplitScreenUIStateComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplitScreenUIStateComponentBase");

	return Clss;
}


// SplitScreenUIStateComponentBase UIChart.Default__SplitScreenUIStateComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USplitScreenUIStateComponentBase* USplitScreenUIStateComponentBase::GetDefaultObj()
{
	static class USplitScreenUIStateComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USplitScreenUIStateComponentBase*>(USplitScreenUIStateComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.SplitScreenUIStateComponentBaseConfiguration
// (None)

class UClass* USplitScreenUIStateComponentBaseConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplitScreenUIStateComponentBaseConfiguration");

	return Clss;
}


// SplitScreenUIStateComponentBaseConfiguration UIChart.Default__SplitScreenUIStateComponentBaseConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class USplitScreenUIStateComponentBaseConfiguration* USplitScreenUIStateComponentBaseConfiguration::GetDefaultObj()
{
	static class USplitScreenUIStateComponentBaseConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<USplitScreenUIStateComponentBaseConfiguration*>(USplitScreenUIStateComponentBaseConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.StackingUIStateComponentSharedData
// (None)

class UClass* UStackingUIStateComponentSharedData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StackingUIStateComponentSharedData");

	return Clss;
}


// StackingUIStateComponentSharedData UIChart.Default__StackingUIStateComponentSharedData
// (Public, ClassDefaultObject, ArchetypeObject)

class UStackingUIStateComponentSharedData* UStackingUIStateComponentSharedData::GetDefaultObj()
{
	static class UStackingUIStateComponentSharedData* Default = nullptr;

	if (!Default)
		Default = static_cast<UStackingUIStateComponentSharedData*>(UStackingUIStateComponentSharedData::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateConfiguration
// (None)

class UClass* UUIStateConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateConfiguration");

	return Clss;
}


// UIStateConfiguration UIChart.Default__UIStateConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateConfiguration* UUIStateConfiguration::GetDefaultObj()
{
	static class UUIStateConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateConfiguration*>(UUIStateConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIState
// (None)

class UClass* UUIState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIState");

	return Clss;
}


// UIState UIChart.Default__UIState
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIState* UUIState::GetDefaultObj()
{
	static class UUIState* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIState*>(UUIState::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateChart
// (None)

class UClass* UUIStateChart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChart");

	return Clss;
}


// UIStateChart UIChart.Default__UIStateChart
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChart* UUIStateChart::GetDefaultObj()
{
	static class UUIStateChart* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChart*>(UUIStateChart::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateChartContext
// (None)

class UClass* UUIStateChartContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartContext");

	return Clss;
}


// UIStateChartContext UIChart.Default__UIStateChartContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartContext* UUIStateChartContext::GetDefaultObj()
{
	static class UUIStateChartContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartContext*>(UUIStateChartContext::StaticClass()->DefaultObject);

	return Default;
}


// Function UIChart.UIStateChartContext.BP_SetPlayerValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetPlayerValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerValue");

	Params::UUIStateChartContext_BP_SetPlayerValue_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_SetPlayerStringValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetPlayerStringValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerStringValue");

	Params::UUIStateChartContext_BP_SetPlayerStringValue_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_SetPlayerFloatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetPlayerFloatValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerFloatValue");

	Params::UUIStateChartContext_BP_SetPlayerFloatValue_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_SetPlayerBoolValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetPlayerBoolValue(class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerBoolValue");

	Params::UUIStateChartContext_BP_SetPlayerBoolValue_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_SetCommonStringValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetCommonStringValue(const struct FGameplayTag& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonStringValue");

	Params::UUIStateChartContext_BP_SetCommonStringValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_SetCommonIntValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetCommonIntValue(const struct FGameplayTag& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonIntValue");

	Params::UUIStateChartContext_BP_SetCommonIntValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_SetCommonFloatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetCommonFloatValue(const struct FGameplayTag& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonFloatValue");

	Params::UUIStateChartContext_BP_SetCommonFloatValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_SetCommonBoolValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_SetCommonBoolValue(const struct FGameplayTag& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonBoolValue");

	Params::UUIStateChartContext_BP_SetCommonBoolValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_FindEntry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUIStateChartContextEntry*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUIStateChartContextEntry* UUIStateChartContext::BP_FindEntry(const struct FGameplayTag& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_FindEntry");

	Params::UUIStateChartContext_BP_FindEntry_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContext.BP_ClearPlayerValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ClearPlayerValue(class ULocalPlayer* LocalPlayer, struct FGameplayTag& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_ClearPlayerValue");

	Params::UUIStateChartContext_BP_ClearPlayerValue_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_ClearEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ClearEntry(const struct FGameplayTag& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_ClearEntry");

	Params::UUIStateChartContext_BP_ClearEntry_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_ClearCommonValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Key                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ClearCommonValue(const struct FGameplayTag& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_ClearCommonValue");

	Params::UUIStateChartContext_BP_ClearCommonValue_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_ApplyPlayerChanges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUIStateChartContextChangeSetContextChanges                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ApplyPlayerChanges(class ULocalPlayer* LocalPlayer, struct FUIStateChartContextChangeSet& ContextChanges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_ApplyPlayerChanges");

	Params::UUIStateChartContext_BP_ApplyPlayerChanges_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.ContextChanges = ContextChanges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIChart.UIStateChartContext.BP_ApplyCommonChanges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUIStateChartContextChangeSetContextChanges                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUIStateChartContext::BP_ApplyCommonChanges(struct FUIStateChartContextChangeSet& ContextChanges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContext", "BP_ApplyCommonChanges");

	Params::UUIStateChartContext_BP_ApplyCommonChanges_Params Parms{};

	Parms.ContextChanges = ContextChanges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UIChart.UIStateChartContextEntry
// (None)

class UClass* UUIStateChartContextEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartContextEntry");

	return Clss;
}


// UIStateChartContextEntry UIChart.Default__UIStateChartContextEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartContextEntry* UUIStateChartContextEntry::GetDefaultObj()
{
	static class UUIStateChartContextEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartContextEntry*>(UUIStateChartContextEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function UIChart.UIStateChartContextEntry.IsEmptyForPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartContextEntry::IsEmptyForPlayer(class ULocalPlayer* InLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "IsEmptyForPlayer");

	Params::UUIStateChartContextEntry_IsEmptyForPlayer_Params Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUIStateChartContextEntry::GetPlayerValueAsString(class ULocalPlayer* InLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsString");

	Params::UUIStateChartContextEntry_GetPlayerValueAsString_Params Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUIStateChartContextEntry::GetPlayerValueAsInt(class ULocalPlayer* InLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsInt");

	Params::UUIStateChartContextEntry_GetPlayerValueAsInt_Params Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUIStateChartContextEntry::GetPlayerValueAsFloat(class ULocalPlayer* InLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsFloat");

	Params::UUIStateChartContextEntry_GetPlayerValueAsFloat_Params Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetPlayerValueAsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                InLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartContextEntry::GetPlayerValueAsBool(class ULocalPlayer* InLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsBool");

	Params::UUIStateChartContextEntry_GetPlayerValueAsBool_Params Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetCommonValueAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUIStateChartContextEntry::GetCommonValueAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsString");

	Params::UUIStateChartContextEntry_GetCommonValueAsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetCommonValueAsInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UUIStateChartContextEntry::GetCommonValueAsInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsInt");

	Params::UUIStateChartContextEntry_GetCommonValueAsInt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetCommonValueAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUIStateChartContextEntry::GetCommonValueAsFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsFloat");

	Params::UUIStateChartContextEntry_GetCommonValueAsFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIChart.UIStateChartContextEntry.GetCommonValueAsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUIStateChartContextEntry::GetCommonValueAsBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsBool");

	Params::UUIStateChartContextEntry_GetCommonValueAsBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UIChart.UIStateChartManager
// (None)

class UClass* UUIStateChartManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartManager");

	return Clss;
}


// UIStateChartManager UIChart.Default__UIStateChartManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartManager* UUIStateChartManager::GetDefaultObj()
{
	static class UUIStateChartManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartManager*>(UUIStateChartManager::StaticClass()->DefaultObject);

	return Default;
}


// Function UIChart.UIStateChartManager.GetContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUIStateChartContext*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUIStateChartContext* UUIStateChartManager::GetContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartManager", "GetContext");

	Params::UUIStateChartManager_GetContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartManager", "BP_RemoveStateChart");

	Params::UUIStateChartManager_BP_RemoveStateChart_Params Parms{};

	Parms.Key = Key;
	Parms.AnimationHints = AnimationHints;
	Parms.ContextChanges = ContextChanges;
	Parms.Urgency = Urgency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartManager", "BP_ReactivateStateChart");

	Params::UUIStateChartManager_BP_ReactivateStateChart_Params Parms{};

	Parms.Key = Key;
	Parms.AnimationHints = AnimationHints;
	Parms.StateTag = StateTag;
	Parms.Urgency = Urgency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartManager", "BP_DispatchTransitionEvent");

	Params::UUIStateChartManager_BP_DispatchTransitionEvent_Params Parms{};

	Parms.TransitionTag = TransitionTag;
	Parms.StateChartOwner = StateChartOwner;
	Parms.AnimationHints = AnimationHints;
	Parms.ContextChanges = ContextChanges;
	Parms.Urgency = Urgency;
	Parms.bBacktrack = bBacktrack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartManager", "BP_DeactivateStateChart");

	Params::UUIStateChartManager_BP_DeactivateStateChart_Params Parms{};

	Parms.Key = Key;
	Parms.AnimationHints = AnimationHints;
	Parms.ContextChanges = ContextChanges;
	Parms.Urgency = Urgency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIStateChartManager", "BP_AddStateChart");

	Params::UUIStateChartManager_BP_AddStateChart_Params Parms{};

	Parms.StateChartAsset = StateChartAsset;
	Parms.OwningLocalPlayer = OwningLocalPlayer;
	Parms.AnimationHints = AnimationHints;
	Parms.InitialStateTag = InitialStateTag;
	Parms.Urgency = Urgency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UIChart.UIStateChartManagerEntry
// (None)

class UClass* UUIStateChartManagerEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartManagerEntry");

	return Clss;
}


// UIStateChartManagerEntry UIChart.Default__UIStateChartManagerEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartManagerEntry* UUIStateChartManagerEntry::GetDefaultObj()
{
	static class UUIStateChartManagerEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartManagerEntry*>(UUIStateChartManagerEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateChartManagerPlayer
// (None)

class UClass* UUIStateChartManagerPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartManagerPlayer");

	return Clss;
}


// UIStateChartManagerPlayer UIChart.Default__UIStateChartManagerPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartManagerPlayer* UUIStateChartManagerPlayer::GetDefaultObj()
{
	static class UUIStateChartManagerPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartManagerPlayer*>(UUIStateChartManagerPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateBacktrackStep
// (None)

class UClass* UUIStateBacktrackStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateBacktrackStep");

	return Clss;
}


// UIStateBacktrackStep UIChart.Default__UIStateBacktrackStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateBacktrackStep* UUIStateBacktrackStep::GetDefaultObj()
{
	static class UUIStateBacktrackStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateBacktrackStep*>(UUIStateBacktrackStep::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateChartRegion
// (None)

class UClass* UUIStateChartRegion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartRegion");

	return Clss;
}


// UIStateChartRegion UIChart.Default__UIStateChartRegion
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartRegion* UUIStateChartRegion::GetDefaultObj()
{
	static class UUIStateChartRegion* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartRegion*>(UUIStateChartRegion::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateChartResourceCollection
// (None)

class UClass* UUIStateChartResourceCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartResourceCollection");

	return Clss;
}


// UIStateChartResourceCollection UIChart.Default__UIStateChartResourceCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartResourceCollection* UUIStateChartResourceCollection::GetDefaultObj()
{
	static class UUIStateChartResourceCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartResourceCollection*>(UUIStateChartResourceCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateChartTransition
// (None)

class UClass* UUIStateChartTransition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartTransition");

	return Clss;
}


// UIStateChartTransition UIChart.Default__UIStateChartTransition
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartTransition* UUIStateChartTransition::GetDefaultObj()
{
	static class UUIStateChartTransition* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartTransition*>(UUIStateChartTransition::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateChartTransitionOperation
// (None)

class UClass* UUIStateChartTransitionOperation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartTransitionOperation");

	return Clss;
}


// UIStateChartTransitionOperation UIChart.Default__UIStateChartTransitionOperation
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartTransitionOperation* UUIStateChartTransitionOperation::GetDefaultObj()
{
	static class UUIStateChartTransitionOperation* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartTransitionOperation*>(UUIStateChartTransitionOperation::StaticClass()->DefaultObject);

	return Default;
}


// Class UIChart.UIStateChartTransitionOperationGroup
// (None)

class UClass* UUIStateChartTransitionOperationGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIStateChartTransitionOperationGroup");

	return Clss;
}


// UIStateChartTransitionOperationGroup UIChart.Default__UIStateChartTransitionOperationGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIStateChartTransitionOperationGroup* UUIStateChartTransitionOperationGroup::GetDefaultObj()
{
	static class UUIStateChartTransitionOperationGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIStateChartTransitionOperationGroup*>(UUIStateChartTransitionOperationGroup::StaticClass()->DefaultObject);

	return Default;
}

}



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


// Function AutoSettingsInput.InputLabel.UpdateLabel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputLabel::UpdateLabel()
{
	static auto Func = Class->GetFunction("InputLabel", "UpdateLabel");

	Params::UInputLabel_UpdateLabel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputLabel.MappingsChanged
// (Final, Native, Private)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputLabel::MappingsChanged(class UPlayerController* Player)
{
	static auto Func = Class->GetFunction("InputLabel", "MappingsChanged");

	Params::UInputLabel_MappingsChanged_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMapping.UpdateMapping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputMapping::UpdateMapping()
{
	static auto Func = Class->GetFunction("InputMapping", "UpdateMapping");

	Params::UInputMapping_UpdateMapping_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMapping.UpdateLabel
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UInputMapping::UpdateLabel()
{
	static auto Func = Class->GetFunction("InputMapping", "UpdateLabel");

	Params::UInputMapping_UpdateLabel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMapping.ChordCaptured
// (Final, Native, Private)
// Parameters:
// struct FCapturedInput              CapturedInput                                                    (Parm, NativeAccessSpecifierPublic)

void UInputMapping::ChordCaptured(const struct FCapturedInput& CapturedInput)
{
	static auto Func = Class->GetFunction("InputMapping", "ChordCaptured");

	Params::UInputMapping_ChordCaptured_Params Parms;

	Parms.CapturedInput = CapturedInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMapping.BindChord
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FCapturedInput              CapturedInput                                                    (Parm, NativeAccessSpecifierPublic)

void UInputMapping::BindChord(const struct FCapturedInput& CapturedInput)
{
	static auto Func = Class->GetFunction("InputMapping", "BindChord");

	Params::UInputMapping_BindChord_Params Parms;

	Parms.CapturedInput = CapturedInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.AutoSettingsInputProjectConfig.LoadKeyIcons
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       KeyIconTags                                                      (Parm, NativeAccessSpecifierPublic)
// TArray<class UTexture*>            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTexture*> UAutoSettingsInputProjectConfig::LoadKeyIcons(const struct FGameplayTagContainer& KeyIconTags)
{
	static auto Func = Class->GetFunction("AutoSettingsInputProjectConfig", "LoadKeyIcons");

	Params::UAutoSettingsInputProjectConfig_LoadKeyIcons_Params Parms;

	Parms.KeyIconTags = KeyIconTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyGroupStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UAutoSettingsInputProjectConfig::GetKeyGroupStatic(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("AutoSettingsInputProjectConfig", "GetKeyGroupStatic");

	Params::UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyFriendlyNameStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAutoSettingsInputProjectConfig::GetKeyFriendlyNameStatic(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("AutoSettingsInputProjectConfig", "GetKeyFriendlyNameStatic");

	Params::UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Params Parms;

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.AutoSettingsPlayer.SaveInputMappings
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FPlayerInputMappings        InputMappings                                                    (Parm, NativeAccessSpecifierPublic)

void UAutoSettingsPlayer::SaveInputMappings(const struct FPlayerInputMappings& InputMappings)
{
	static auto Func = Class->GetFunction("AutoSettingsPlayer", "SaveInputMappings");

	Params::UAutoSettingsPlayer_SaveInputMappings_Params Parms;

	Parms.InputMappings = InputMappings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.AutoSettingsPlayer.GetUniquePlayerIdentifier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAutoSettingsPlayer::GetUniquePlayerIdentifier()
{
	static auto Func = Class->GetFunction("AutoSettingsPlayer", "GetUniquePlayerIdentifier");

	Params::UAutoSettingsPlayer_GetUniquePlayerIdentifier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.AutoSettingsPlayer.GetInputMappings
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPlayerInputMappings        InputMappings                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAutoSettingsPlayer::GetInputMappings(struct FPlayerInputMappings* InputMappings)
{
	static auto Func = Class->GetFunction("AutoSettingsPlayer", "GetInputMappings");

	Params::UAutoSettingsPlayer_GetInputMappings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InputMappings != nullptr)
		*InputMappings = Parms.InputMappings;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.AutoSettingsPlayer.GetDefaultInputMappingPreset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FInputMappingPreset         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputMappingPreset UAutoSettingsPlayer::GetDefaultInputMappingPreset()
{
	static auto Func = Class->GetFunction("AutoSettingsPlayer", "GetDefaultInputMappingPreset");

	Params::UAutoSettingsPlayer_GetDefaultInputMappingPreset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.BindCaptureButton.StartCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBindCapturePrompt*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBindCapturePrompt* UBindCaptureButton::StartCapture()
{
	static auto Func = Class->GetFunction("BindCaptureButton", "StartCapture");

	Params::UBindCaptureButton_StartCapture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.BindCaptureButton.InitializePrompt
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UBindCapturePrompt*          PromptWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBindCaptureButton::InitializePrompt(class UBindCapturePrompt* PromptWidget)
{
	static auto Func = Class->GetFunction("BindCaptureButton", "InitializePrompt");

	Params::UBindCaptureButton_InitializePrompt_Params Parms;

	Parms.PromptWidget = PromptWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.BindCaptureButton.ChordCaptured
// (Final, Native, Private)
// Parameters:
// struct FCapturedInput              CapturedInput                                                    (Parm, NativeAccessSpecifierPublic)

void UBindCaptureButton::ChordCaptured(const struct FCapturedInput& CapturedInput)
{
	static auto Func = Class->GetFunction("BindCaptureButton", "ChordCaptured");

	Params::UBindCaptureButton_ChordCaptured_Params Parms;

	Parms.CapturedInput = CapturedInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.BindCapturePrompt.IsKeyAllowed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FKey                        PrimaryKey                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBindCapturePrompt::IsKeyAllowed(const struct FKey& PrimaryKey)
{
	static auto Func = Class->GetFunction("BindCapturePrompt", "IsKeyAllowed");

	Params::UBindCapturePrompt_IsKeyAllowed_Params Parms;

	Parms.PrimaryKey = PrimaryKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.BindCapturePrompt.GetKeyGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UBindCapturePrompt::GetKeyGroup()
{
	static auto Func = Class->GetFunction("BindCapturePrompt", "GetKeyGroup");

	Params::UBindCapturePrompt_GetKeyGroup_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.BindCapturePrompt.Cancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBindCapturePrompt::Cancel()
{
	static auto Func = Class->GetFunction("BindCapturePrompt", "Cancel");

	Params::UBindCapturePrompt_Cancel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.GlobalKeyIconTagManager.SetGlobalKeyIconTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InGlobalIconTags                                                 (Parm, NativeAccessSpecifierPublic)

void UGlobalKeyIconTagManager::SetGlobalKeyIconTags(const struct FGameplayTagContainer& InGlobalIconTags)
{
	static auto Func = Class->GetFunction("GlobalKeyIconTagManager", "SetGlobalKeyIconTags");

	Params::UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Params Parms;

	Parms.InGlobalIconTags = InGlobalIconTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.GlobalKeyIconTagManager.GetIconForKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        InKey                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       IconTags                                                         (Parm, NativeAccessSpecifierPublic)
// float                              AxisScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UGlobalKeyIconTagManager::GetIconForKey(const struct FKey& InKey, const struct FGameplayTagContainer& IconTags, float AxisScale)
{
	static auto Func = Class->GetFunction("GlobalKeyIconTagManager", "GetIconForKey");

	Params::UGlobalKeyIconTagManager_GetIconForKey_Params Parms;

	Parms.InKey = InKey;
	Parms.IconTags = IconTags;
	Parms.AxisScale = AxisScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.SetPlayerKeyGroupStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                KeyGroup                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingManager::SetPlayerKeyGroupStatic(class UPlayerController* Player, const struct FGameplayTag& KeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "SetPlayerKeyGroupStatic");

	Params::UInputMappingManager_SetPlayerKeyGroupStatic_Params Parms;

	Parms.Player = Player;
	Parms.KeyGroup = KeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputMappingPreset         Preset                                                           (Parm, NativeAccessSpecifierPublic)

void UInputMappingManager::SetPlayerInputPresetStatic(class UPlayerController* Player, const struct FInputMappingPreset& Preset)
{
	static auto Func = Class->GetFunction("InputMappingManager", "SetPlayerInputPresetStatic");

	Params::UInputMappingManager_SetPlayerInputPresetStatic_Params Parms;

	Parms.Player = Player;
	Parms.Preset = Preset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetByTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                PresetTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingManager::SetPlayerInputPresetByTag(class UPlayerController* Player, const struct FGameplayTag& PresetTag)
{
	static auto Func = Class->GetFunction("InputMappingManager", "SetPlayerInputPresetByTag");

	Params::UInputMappingManager_SetPlayerInputPresetByTag_Params Parms;

	Parms.Player = Player;
	Parms.PresetTag = PresetTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMappingManager.OnRegisteredPlayerControllerDestroyed
// (Final, Native, Private)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingManager::OnRegisteredPlayerControllerDestroyed(class UActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("InputMappingManager", "OnRegisteredPlayerControllerDestroyed");

	Params::UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMappingManager.InitializePlayerInputOverridesStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputMappingManager::InitializePlayerInputOverridesStatic(class UPlayerController* Player)
{
	static auto Func = Class->GetFunction("InputMappingManager", "InitializePlayerInputOverridesStatic");

	Params::UInputMappingManager_InitializePlayerInputOverridesStatic_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.GetPlayerMappingsByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputActionKeyMapping>Actions                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FInputAxisKeyMapping>Axes                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInputMappingManager::GetPlayerMappingsByKey(class UPlayerController* Player, const struct FKey& Key, TArray<struct FInputActionKeyMapping>* Actions, TArray<struct FInputAxisKeyMapping>* Axes)
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetPlayerMappingsByKey");

	Params::UInputMappingManager_GetPlayerMappingsByKey_Params Parms;

	Parms.Player = Player;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Actions != nullptr)
		*Actions = Parms.Actions;

	if (Axes != nullptr)
		*Axes = Parms.Axes;

}


// Function AutoSettingsInput.InputMappingManager.GetPlayerInputMappingsStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerInputMappings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FPlayerInputMappings UInputMappingManager::GetPlayerInputMappingsStatic(class UPlayerController* Player)
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetPlayerInputMappingsStatic");

	Params::UInputMappingManager_GetPlayerInputMappingsStatic_Params Parms;

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappingStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AxisName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAxisKeyMapping        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMappingStatic(class UPlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetPlayerAxisMappingStatic");

	Params::UInputMappingManager_GetPlayerAxisMappingStatic_Params Parms;

	Parms.Player = Player;
	Parms.AxisName = AxisName;
	Parms.Scale = Scale;
	Parms.MappingGroup = MappingGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AxisName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                KeyGroup                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePlayerKeyGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputAxisKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputAxisKeyMapping> UInputMappingManager::GetPlayerAxisMappings(class UPlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetPlayerAxisMappings");

	Params::UInputMappingManager_GetPlayerAxisMappings_Params Parms;

	Parms.Player = Player;
	Parms.AxisName = AxisName;
	Parms.Scale = Scale;
	Parms.MappingGroup = MappingGroup;
	Parms.KeyGroup = KeyGroup;
	Parms.bUsePlayerKeyGroup = bUsePlayerKeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AxisName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                KeyGroup                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePlayerKeyGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAxisKeyMapping        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMapping(class UPlayerController* Player, class FName AxisName, float Scale, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetPlayerAxisMapping");

	Params::UInputMappingManager_GetPlayerAxisMapping_Params Parms;

	Parms.Player = Player;
	Parms.AxisName = AxisName;
	Parms.Scale = Scale;
	Parms.MappingGroup = MappingGroup;
	Parms.KeyGroup = KeyGroup;
	Parms.bUsePlayerKeyGroup = bUsePlayerKeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappingStatic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionKeyMapping      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputActionKeyMapping UInputMappingManager::GetPlayerActionMappingStatic(class UPlayerController* Player, class FName ActionName, int32 MappingGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetPlayerActionMappingStatic");

	Params::UInputMappingManager_GetPlayerActionMappingStatic_Params Parms;

	Parms.Player = Player;
	Parms.ActionName = ActionName;
	Parms.MappingGroup = MappingGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                KeyGroup                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePlayerKeyGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputActionKeyMapping> UInputMappingManager::GetPlayerActionMappings(class UPlayerController* Player, class FName ActionName, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetPlayerActionMappings");

	Params::UInputMappingManager_GetPlayerActionMappings_Params Parms;

	Parms.Player = Player;
	Parms.ActionName = ActionName;
	Parms.MappingGroup = MappingGroup;
	Parms.KeyGroup = KeyGroup;
	Parms.bUsePlayerKeyGroup = bUsePlayerKeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.GetPlayerActionMapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                KeyGroup                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePlayerKeyGroup                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionKeyMapping      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputActionKeyMapping UInputMappingManager::GetPlayerActionMapping(class UPlayerController* Player, class FName ActionName, int32 MappingGroup, const struct FGameplayTag& KeyGroup, bool bUsePlayerKeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetPlayerActionMapping");

	Params::UInputMappingManager_GetPlayerActionMapping_Params Parms;

	Parms.Player = Player;
	Parms.ActionName = ActionName;
	Parms.MappingGroup = MappingGroup;
	Parms.KeyGroup = KeyGroup;
	Parms.bUsePlayerKeyGroup = bUsePlayerKeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.GetDefaultInputPresets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FInputMappingPreset> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputMappingPreset> UInputMappingManager::GetDefaultInputPresets()
{
	static auto Func = Class->GetFunction("InputMappingManager", "GetDefaultInputPresets");

	Params::UInputMappingManager_GetDefaultInputPresets_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverrideStatic
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAxisKeyMapping        NewMapping                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnyKeyGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingManager::AddPlayerAxisOverrideStatic(class UPlayerController* Player, struct FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "AddPlayerAxisOverrideStatic");

	Params::UInputMappingManager_AddPlayerAxisOverrideStatic_Params Parms;

	Parms.Player = Player;
	Parms.NewMapping = NewMapping;
	Parms.MappingGroup = MappingGroup;
	Parms.bAnyKeyGroup = bAnyKeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverride
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputAxisKeyMapping        NewMapping                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnyKeyGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingManager::AddPlayerAxisOverride(class UPlayerController* Player, struct FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "AddPlayerAxisOverride");

	Params::UInputMappingManager_AddPlayerAxisOverride_Params Parms;

	Parms.Player = Player;
	Parms.NewMapping = NewMapping;
	Parms.MappingGroup = MappingGroup;
	Parms.bAnyKeyGroup = bAnyKeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverrideStatic
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionKeyMapping      NewMapping                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnyKeyGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingManager::AddPlayerActionOverrideStatic(class UPlayerController* Player, struct FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "AddPlayerActionOverrideStatic");

	Params::UInputMappingManager_AddPlayerActionOverrideStatic_Params Parms;

	Parms.Player = Player;
	Parms.NewMapping = NewMapping;
	Parms.MappingGroup = MappingGroup;
	Parms.bAnyKeyGroup = bAnyKeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverride
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionKeyMapping      NewMapping                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              MappingGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAnyKeyGroup                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingManager::AddPlayerActionOverride(class UPlayerController* Player, struct FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup)
{
	static auto Func = Class->GetFunction("InputMappingManager", "AddPlayerActionOverride");

	Params::UInputMappingManager_AddPlayerActionOverride_Params Parms;

	Parms.Player = Player;
	Parms.NewMapping = NewMapping;
	Parms.MappingGroup = MappingGroup;
	Parms.bAnyKeyGroup = bAnyKeyGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.KeyLabel.UpdateKeyLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UKeyLabel::UpdateKeyLabel()
{
	static auto Func = Class->GetFunction("KeyLabel", "UpdateKeyLabel");

	Params::UKeyLabel_UpdateKeyLabel_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AutoSettingsInput.KeyLabel.OnGlobalKeyIconTagsModified
// (Final, Native, Private)
// Parameters:

void UKeyLabel::OnGlobalKeyIconTagsModified()
{
	static auto Func = Class->GetFunction("KeyLabel", "OnGlobalKeyIconTagsModified");

	Params::UKeyLabel_OnGlobalKeyIconTagsModified_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AutoSettingsInput.KeyLabel.HasValidKey
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKeyLabel::HasValidKey()
{
	static auto Func = Class->GetFunction("KeyLabel", "HasValidKey");

	Params::UKeyLabel_HasValidKey_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.KeyLabel.HasIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKeyLabel::HasIcon()
{
	static auto Func = Class->GetFunction("KeyLabel", "HasIcon");

	Params::UKeyLabel_HasIcon_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.KeyLabel.GetIconVisibility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UKeyLabel::GetIconVisibility()
{
	static auto Func = Class->GetFunction("KeyLabel", "GetIconVisibility");

	Params::UKeyLabel_GetIconVisibility_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.KeyLabel.GetIconBrush
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UKeyLabel::GetIconBrush()
{
	static auto Func = Class->GetFunction("KeyLabel", "GetIconBrush");

	Params::UKeyLabel_GetIconBrush_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.KeyLabel.GetIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UKeyLabel::GetIcon()
{
	static auto Func = Class->GetFunction("KeyLabel", "GetIcon");

	Params::UKeyLabel_GetIcon_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.KeyLabel.GetDisplayNameVisibility
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UKeyLabel::GetDisplayNameVisibility()
{
	static auto Func = Class->GetFunction("KeyLabel", "GetDisplayNameVisibility");

	Params::UKeyLabel_GetDisplayNameVisibility_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AutoSettingsInput.KeyLabel.GetDisplayName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UKeyLabel::GetDisplayName()
{
	static auto Func = Class->GetFunction("KeyLabel", "GetDisplayName");

	Params::UKeyLabel_GetDisplayName_Params Parms;


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

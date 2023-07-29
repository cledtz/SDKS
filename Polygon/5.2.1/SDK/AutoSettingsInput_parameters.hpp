#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function AutoSettingsInput.InputLabel.UpdateLabel
struct UInputLabel_UpdateLabel_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AutoSettingsInput.InputLabel.MappingsChanged
struct UInputLabel_MappingsChanged_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettingsInput.InputMapping.UpdateMapping
struct UInputMapping_UpdateMapping_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AutoSettingsInput.InputMapping.UpdateLabel
struct UInputMapping_UpdateLabel_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function AutoSettingsInput.InputMapping.ChordCaptured
struct UInputMapping_ChordCaptured_Params
{
public:
	struct FCapturedInput                        CapturedInput;                                     // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AutoSettingsInput.InputMapping.BindChord
struct UInputMapping_BindChord_Params
{
public:
	struct FCapturedInput                        CapturedInput;                                     // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AutoSettingsInput.AutoSettingsInputProjectConfig.LoadKeyIcons
struct UAutoSettingsInputProjectConfig_LoadKeyIcons_Params
{
public:
	struct FGameplayTagContainer                 KeyIconTags;                                       // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	TArray<class UTexture*>                      ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyGroupStatic
struct UAutoSettingsInputProjectConfig_GetKeyGroupStatic_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyFriendlyNameStatic
struct UAutoSettingsInputProjectConfig_GetKeyFriendlyNameStatic_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function AutoSettingsInput.AutoSettingsPlayer.SaveInputMappings
struct UAutoSettingsPlayer_SaveInputMappings_Params
{
public:
	struct FPlayerInputMappings                  InputMappings;                                     // 0x0(0xA0)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettingsInput.AutoSettingsPlayer.GetUniquePlayerIdentifier
struct UAutoSettingsPlayer_GetUniquePlayerIdentifier_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function AutoSettingsInput.AutoSettingsPlayer.GetInputMappings
struct UAutoSettingsPlayer_GetInputMappings_Params
{
public:
	struct FPlayerInputMappings                  InputMappings;                                     // 0x0(0xA0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7[0x7];                                       // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function AutoSettingsInput.AutoSettingsPlayer.GetDefaultInputMappingPreset
struct UAutoSettingsPlayer_GetDefaultInputMappingPreset_Params
{
public:
	struct FInputMappingPreset                   ReturnValue;                                       // 0x0(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AutoSettingsInput.BindCaptureButton.StartCapture
struct UBindCaptureButton_StartCapture_Params
{
public:
	class UBindCapturePrompt*                    ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AutoSettingsInput.BindCaptureButton.InitializePrompt
struct UBindCaptureButton_InitializePrompt_Params
{
public:
	class UBindCapturePrompt*                    PromptWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AutoSettingsInput.BindCaptureButton.ChordCaptured
struct UBindCaptureButton_ChordCaptured_Params
{
public:
	struct FCapturedInput                        CapturedInput;                                     // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AutoSettingsInput.BindCapturePrompt.IsKeyAllowed
struct UBindCapturePrompt_IsKeyAllowed_Params
{
public:
	struct FKey                                  PrimaryKey;                                        // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC[0x7];                                       // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function AutoSettingsInput.BindCapturePrompt.GetKeyGroup
struct UBindCapturePrompt_GetKeyGroup_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AutoSettingsInput.BindCapturePrompt.Cancel
struct UBindCapturePrompt_Cancel_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function AutoSettingsInput.GlobalKeyIconTagManager.SetGlobalKeyIconTags
struct UGlobalKeyIconTagManager_SetGlobalKeyIconTags_Params
{
public:
	struct FGameplayTagContainer                 InGlobalIconTags;                                  // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AutoSettingsInput.GlobalKeyIconTagManager.GetIconForKey
struct UGlobalKeyIconTagManager_GetIconForKey_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IconTags;                                          // 0x18(0x20)(Parm, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6[0x4];                                       // Fixing Size After Last Property
	class UTexture*                              ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettingsInput.InputMappingManager.SetPlayerKeyGroupStatic
struct UInputMappingManager_SetPlayerKeyGroupStatic_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetStatic
struct UInputMappingManager_SetPlayerInputPresetStatic_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputMappingPreset                   Preset;                                            // 0x8(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettingsInput.InputMappingManager.SetPlayerInputPresetByTag
struct UInputMappingManager_SetPlayerInputPresetByTag_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PresetTag;                                         // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AutoSettingsInput.InputMappingManager.OnRegisteredPlayerControllerDestroyed
struct UInputMappingManager_OnRegisteredPlayerControllerDestroyed_Params
{
public:
	class UActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettingsInput.InputMappingManager.InitializePlayerInputOverridesStatic
struct UInputMappingManager_InitializePlayerInputOverridesStatic_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C[0x7];                                      // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetPlayerMappingsByKey
struct UInputMappingManager_GetPlayerMappingsByKey_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>        Actions;                                           // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>          Axes;                                              // 0x30(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetPlayerInputMappingsStatic
struct UInputMappingManager_GetPlayerInputMappingsStatic_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerInputMappings                  ReturnValue;                                       // 0x8(0xA0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappingStatic
struct UInputMappingManager_GetPlayerAxisMappingStatic_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AxisName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                  ReturnValue;                                       // 0x18(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMappings
struct UInputMappingManager_GetPlayerAxisMappings_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AxisName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerKeyGroup;                                // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119[0x7];                                      // Fixing Size After Last Property
	TArray<struct FInputAxisKeyMapping>          ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetPlayerAxisMapping
struct UInputMappingManager_GetPlayerAxisMapping_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AxisName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerKeyGroup;                                // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E[0x7];                                      // Fixing Size After Last Property
	struct FInputAxisKeyMapping                  ReturnValue;                                       // 0x28(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappingStatic
struct UInputMappingManager_GetPlayerActionMappingStatic_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_128[0x4];                                      // Fixing Size After Last Property
	struct FInputActionKeyMapping                ReturnValue;                                       // 0x18(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetPlayerActionMappings
struct UInputMappingManager_GetPlayerActionMappings_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x14(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerKeyGroup;                                // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133[0x3];                                      // Fixing Size After Last Property
	TArray<struct FInputActionKeyMapping>        ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetPlayerActionMapping
struct UInputMappingManager_GetPlayerActionMapping_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActionName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          KeyGroup;                                          // 0x14(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerKeyGroup;                                // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D[0x3];                                      // Fixing Size After Last Property
	struct FInputActionKeyMapping                ReturnValue;                                       // 0x20(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AutoSettingsInput.InputMappingManager.GetDefaultInputPresets
struct UInputMappingManager_GetDefaultInputPresets_Params
{
public:
	TArray<struct FInputMappingPreset>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverrideStatic
struct UInputMappingManager_AddPlayerAxisOverrideStatic_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                  NewMapping;                                        // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyKeyGroup;                                      // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A[0x3];                                      // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function AutoSettingsInput.InputMappingManager.AddPlayerAxisOverride
struct UInputMappingManager_AddPlayerAxisOverride_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisKeyMapping                  NewMapping;                                        // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyKeyGroup;                                      // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159[0x3];                                      // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverrideStatic
struct UInputMappingManager_AddPlayerActionOverrideStatic_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                NewMapping;                                        // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyKeyGroup;                                      // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162[0x3];                                      // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function AutoSettingsInput.InputMappingManager.AddPlayerActionOverride
struct UInputMappingManager_AddPlayerActionOverride_Params
{
public:
	class UPlayerController*                     Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                NewMapping;                                        // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        MappingGroup;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnyKeyGroup;                                      // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B[0x3];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function AutoSettingsInput.KeyLabel.UpdateKeyLabel
struct UKeyLabel_UpdateKeyLabel_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AutoSettingsInput.KeyLabel.OnGlobalKeyIconTagsModified
struct UKeyLabel_OnGlobalKeyIconTagsModified_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AutoSettingsInput.KeyLabel.HasValidKey
struct UKeyLabel_HasValidKey_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettingsInput.KeyLabel.HasIcon
struct UKeyLabel_HasIcon_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettingsInput.KeyLabel.GetIconVisibility
struct UKeyLabel_GetIconVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function AutoSettingsInput.KeyLabel.GetIconBrush
struct UKeyLabel_GetIconBrush_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AutoSettingsInput.KeyLabel.GetIcon
struct UKeyLabel_GetIcon_Params
{
public:
	class UTexture*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AutoSettingsInput.KeyLabel.GetDisplayNameVisibility
struct UKeyLabel_GetDisplayNameVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AutoSettingsInput.KeyLabel.GetDisplayName
struct UKeyLabel_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

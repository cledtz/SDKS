#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBindingCaptureMode : uint8
{
	OnReleased                     = 0,
	OnPressed                      = 1,
	EBindingCaptureMode_MAX        = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct AutoSettingsInput.CapturedInput
struct FCapturedInput
{
public:
	struct FInputChord                           Chord;                                             // 0x0(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161[0x4];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AutoSettingsInput.KeyIconPair
struct FKeyIconPair
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              Icon;                                              // 0x18(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct AutoSettingsInput.KeyIconSet
struct FKeyIconSet
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	TMap<struct FKey, TSoftObjectPtr<class UTexture>> IconMap;                                           // 0x20(0x50)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FKeyIconPair>                  Icons;                                             // 0x70(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AutoSettingsInput.KeyGroup
struct FKeyGroup
{
public:
	struct FGameplayTag                          KeyGroupTag;                                       // 0x0(0x8)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGamepadKeys;                                   // 0x8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseNonGamepadKeys;                                // 0x9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166[0x6];                                      // Fixing Size After Last Property 
	TArray<struct FKey>                          Keys;                                              // 0x10(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AutoSettingsInput.KeyScale
struct FKeyScale
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x18(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169[0x4];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AutoSettingsInput.MappingGroupLink
struct FMappingGroupLink
{
public:
	TArray<int32>                                MappingGroups;                                     // 0x0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AutoSettingsInput.AxisAssociation
struct FAxisAssociation
{
public:
	struct FKey                                  AxisKey;                                           // 0x0(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  AnalogKey;                                         // 0x18(0x18)(Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKeyScale>                     ButtonKeys;                                        // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FKeyScale>                     BooleanKeys;                                       // 0x40(0x10)(ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AutoSettingsInput.KeyFriendlyName
struct FKeyFriendlyName
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FriendlyName;                                      // 0x18(0x18)(Edit, Config, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct AutoSettingsInput.ConfigActionKeyMapping
struct FConfigActionKeyMapping : public FInputActionKeyMapping
{
public:
	bool                                         bIsDefault;                                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x30 - 0x28)
// ScriptStruct AutoSettingsInput.ConfigAxisKeyMapping
struct FConfigAxisKeyMapping : public FInputAxisKeyMapping
{
public:
	bool                                         bIsDefault;                                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F[0x7];                                      // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AutoSettingsInput.InputMappingGroup
struct FInputMappingGroup
{
public:
	TArray<struct FConfigActionKeyMapping>       ActionMappings;                                    // 0x0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigAxisKeyMapping>         AxisMappings;                                      // 0x10(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigActionKeyMapping>       UnboundActionMappings;                             // 0x20(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FConfigAxisKeyMapping>         UnboundAxisMappings;                               // 0x30(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_174[0x10];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AutoSettingsInput.InputMappingLayout
struct FInputMappingLayout
{
public:
	TArray<struct FInputMappingGroup>            MappingGroups;                                     // 0x0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_175[0x10];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AutoSettingsInput.InputMappingPreset
struct FInputMappingPreset
{
public:
	struct FGameplayTag                          PresetTag;                                         // 0x0(0x8)(Edit, BlueprintVisible, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultMappings;                               // 0x8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177[0x7];                                      // Fixing Size After Last Property 
	struct FInputMappingLayout                   InputLayout;                                       // 0x10(0x20)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FInputMappingGroup>            MappingGroups;                                     // 0x30(0x10)(ZeroConstructor, Config, Deprecated, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AutoSettingsInput.PlayerInputMappings
struct FPlayerInputMappings
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerIndex;                                       // 0x10(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          BasePresetTag;                                     // 0x14(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNullBasePreset;                                   // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178[0x3];                                      // Fixing Size After Last Property 
	struct FInputMappingLayout                   MappingOverrides;                                  // 0x20(0x20)(NativeAccessSpecifierPublic)
	bool                                         Custom;                                            // 0x40(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179[0x7];                                      // Fixing Size After Last Property 
	struct FInputMappingPreset                   Preset;                                            // 0x48(0x40)(Deprecated, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PlayerKeyGroup;                                    // 0x88(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A[0x10];                                     // Fixing Size Of Struct
};

}



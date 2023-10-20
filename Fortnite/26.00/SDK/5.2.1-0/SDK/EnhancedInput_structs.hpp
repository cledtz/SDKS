#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInputActionValueType : uint8
{
	Boolean                        = 0,
	Axis1D                         = 1,
	Axis2D                         = 2,
	Axis3D                         = 3,
	EInputActionValueType_MAX      = 4,
};

enum class EMappingQueryResult : uint8
{
	Error_EnhancedInputNotEnabled  = 0,
	Error_InputContextNotInActiveContexts = 1,
	Error_InvalidAction            = 2,
	NotMappable                    = 3,
	MappingAvailable               = 4,
	EMappingQueryResult_MAX        = 5,
};

enum class EMappingQueryIssue : uint8
{
	NoIssue                        = 0,
	ReservedByAction               = 1,
	HidesExistingMapping           = 2,
	HiddenByExistingMapping        = 4,
	CollisionWithMappingInSameContext = 8,
	ForcesTypePromotion            = 16,
	ForcesTypeDemotion             = 32,
	EMappingQueryIssue_MAX         = 33,
};

enum class EPlayerMappableKeySettingBehaviors : uint8
{
	InheritSettingsFromAction      = 0,
	OverrideSettings               = 1,
	IgnoreSettings                 = 2,
	EPlayerMappableKeySettingBehaviors_MAX = 3,
};

enum class EInputMappingRebuildType : uint8
{
	None                           = 0,
	Rebuild                        = 1,
	RebuildWithFlush               = 2,
	EInputMappingRebuildType_MAX   = 3,
};

enum class EDeadZoneType : uint8
{
	Axial                          = 0,
	Radial                         = 1,
	EDeadZoneType_MAX              = 2,
};

enum class EFOVScalingType : uint8
{
	Standard                       = 0,
	UE4_BackCompat                 = 1,
	EFOVScalingType_MAX            = 2,
};

enum class EInputAxisSwizzle : uint8
{
	YXZ                            = 0,
	ZYX                            = 1,
	XZY                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	EInputAxisSwizzle_MAX          = 5,
};

enum class ETriggerState : uint8
{
	None                           = 0,
	Ongoing                        = 1,
	Triggered                      = 2,
	ETriggerState_MAX              = 3,
};

enum class ETriggerEvent : uint8
{
	None                           = 0,
	Triggered                      = 1,
	Started                        = 2,
	Ongoing                        = 4,
	Canceled                       = 8,
	Completed                      = 16,
	ETriggerEvent_MAX              = 17,
};

enum class ETriggerType : uint8
{
	Explicit                       = 0,
	Implicit                       = 1,
	Blocker                        = 2,
	ETriggerType_MAX               = 3,
};

enum class ETriggerEventsSupported : uint8
{
	None                           = 0,
	Instant                        = 1,
	Uninterruptible                = 2,
	Ongoing                        = 4,
	All                            = 7,
	ETriggerEventsSupported_MAX    = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct EnhancedInput.InputActionValue
struct FInputActionValue
{
public:
	uint8                                        Pad_485[0x20];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.MappingQueryIssue
struct FMappingQueryIssue
{
public:
	enum class EMappingQueryIssue                Issue;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_495[0x7];                                      // Fixing Size After Last Property 
	class UInputMappingContext*                  BlockingContext;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          BlockingAction;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeySlot
struct FPlayerMappableKeySlot
{
public:
	uint8                                        Pad_498[0x8];                                      // Fixing Size After Last Property 
	int32                                        SlotNumber;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_499[0x4];                                      // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
struct FPlayerMappableKeyOptions
{
public:
	class UObject*                               MetaData;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisplayCategory;                                   // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
struct FEnhancedActionKeyMapping
{
public:
	struct FPlayerMappableKeyOptions             PlayerMappableOptions;                             // 0x0(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class UInputAction*                          Action;                                            // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x68(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeIgnored : 1;                              // Mask: 0x1, PropSize: 0x10x80(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1B : 7;                                     // Fixing Bit-Field Size 
	enum class EPlayerMappableKeySettingBehaviors SettingBehavior;                                   // 0x81(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A9[0x6];                                      // Fixing Size After Last Property 
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x88(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsPlayerMappable : 1;                             // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4AA[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
struct FBlueprintEnhancedInputActionBinding
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B1[0x3];                                      // Fixing Size After Last Property 
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B2[0x4];                                      // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct EnhancedInput.DefaultContextSetting
struct FDefaultContextSetting
{
public:
	TSoftObjectPtr<class UInputMappingContext>   InputMappingContext;                               // 0x0(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9[0x4];                                      // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct EnhancedInput.ModifyContextOptions
struct FModifyContextOptions
{
public:
	uint8                                        bIgnoreAllPressedKeysUntilRelease : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceImmediately : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InjectedInputArray
struct FInjectedInputArray
{
public:
	uint8                                        Pad_4BD[0x10];                                     // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// ScriptStruct EnhancedInput.InputActionInstance
struct FInputActionInstance
{
public:
	class UInputAction*                          SourceAction;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4BE[0xB];                                      // Fixing Size After Last Property 
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x13(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastTriggeredWorldTime;                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_4C0[0x20];                                     // Fixing Size After Last Property 
	float                                        ElapsedProcessedTime;                              // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ElapsedTriggeredTime;                              // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
struct FBlueprintInputDebugKeyDelegateBinding
{
public:
	struct FInputChord                           InputChord;                                        // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputKeyEvent;                                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C5[0x3];                                      // Fixing Size After Last Property 
	class FName                                  FunctionNameToBind;                                // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExecuteWhenPaused;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C7[0x3];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputComboStepData
struct FInputComboStepData
{
public:
	class UInputAction*                          ComboStepAction;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ComboStepCompletionStates;                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CC[0x3];                                      // Fixing Size After Last Property 
	float                                        TimeToPressKey;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputCancelAction
struct FInputCancelAction
{
public:
	class UInputAction*                          CancelAction;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CancellationStates;                                // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CF[0x7];                                      // Fixing Size Of Struct
};

}



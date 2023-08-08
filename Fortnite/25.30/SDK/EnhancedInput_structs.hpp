#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPlayerMappableKeySlot : uint8
{
	First                          = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	Fifth                          = 4,
	Sixth                          = 5,
	Seventh                        = 6,
	Unspecified                    = 7,
	Max                            = 8,
};

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

enum class EInputActionAccumulationBehavior : uint8
{
	TakeHighestAbsoluteValue       = 0,
	Cumulative                     = 1,
	EInputActionAccumulationBehavior_MAX = 2,
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
	uint8                                        Pad_204C[0x20];                                    // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeyProfileCreationArgs
struct FPlayerMappableKeyProfileCreationArgs
{
public:
	TSubclassOf<class UEnhancedPlayerMappableKeyProfile> ProfileType;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ProfileIdentifier;                                 // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlatformUserId                       UserId;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        bSetAsCurrentProfile : 1;                          // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204E[0x7];                                     // Fixing Size Of Struct
};

// 0x88 (0x88 - 0x0)
// ScriptStruct EnhancedInput.PlayerKeyMapping
struct FPlayerKeyMapping
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2051[0x4];                                     // Fixing Size After Last Property
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	class FText                                  DisplayCategory;                                   // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	enum class EPlayerMappableKeySlot            Slot;                                              // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsDirty : 1;                                      // Mask: 0x1, PropSize: 0x10x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_191 : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_2052[0x6];                                     // Fixing Size After Last Property
	struct FKey                                  DefaultKey;                                        // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  CurrentKey;                                        // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHardwareDeviceIdentifier             HardwareDeviceId;                                  // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          AssociatedInputAction;                             // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EnhancedInput.MapPlayerKeyArgs
struct FMapPlayerKeyArgs
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerMappableKeySlot            Slot;                                              // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2055[0x3];                                     // Fixing Size After Last Property
	struct FKey                                  NewKey;                                            // 0x8(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HardwareDeviceId;                                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ProfileId;                                         // 0x24(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCreateMatchingSlotIfNeeded : 1;                   // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDeferOnSettingsChangedBroadcast : 1;              // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2056[0x7];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EnhancedInput.KeyMappingRow
struct FKeyMappingRow
{
public:
	TSet<struct FPlayerKeyMapping>               Mappings;                                          // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeyQueryOptions
struct FPlayerMappableKeyQueryOptions
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205A[0x4];                                     // Fixing Size After Last Property
	struct FKey                                  KeyToMatch;                                        // 0x8(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerMappableKeySlot            SlotToMatch;                                       // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMatchBasicKeyTypes : 1;                           // Mask: 0x1, PropSize: 0x10x21(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMatchKeyAxisType : 1;                             // Mask: 0x2, PropSize: 0x10x21(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_192 : 6;                                    // Fixing Bit-Field Size
	enum class EHardwareDevicePrimaryType        RequiredDeviceType;                                // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205B[0x1];                                     // Fixing Size After Last Property
	int32                                        RequiredDeviceFlags;                               // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.MappingQueryIssue
struct FMappingQueryIssue
{
public:
	enum class EMappingQueryIssue                Issue;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205D[0x7];                                     // Fixing Size After Last Property
	class UInputMappingContext*                  BlockingContext;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          BlockingAction;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeySlot
struct FPlayerMappableKeySlot
{
public:
	uint8                                        Pad_205E[0x8];                                     // Fixing Size After Last Property
	int32                                        SlotNumber;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205F[0x4];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
struct FPlayerMappableKeyOptions
{
public:
	class UObject*                               MetaData;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2061[0x4];                                     // Fixing Size After Last Property
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DisplayCategory;                                   // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
struct FEnhancedActionKeyMapping
{
public:
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class UInputAction*                          Action;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x28(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeIgnored : 1;                              // Mask: 0x1, PropSize: 0x10x40(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_193 : 7;                                    // Fixing Bit-Field Size
	enum class EPlayerMappableKeySettingBehaviors SettingBehavior;                                   // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2062[0x6];                                     // Fixing Size After Last Property
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
struct FBlueprintEnhancedInputActionBinding
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2066[0x3];                                     // Fixing Size After Last Property
	class FName                                  FunctionNameToBind;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EnhancedInput.DefaultContextSetting
struct FDefaultContextSetting
{
public:
	TSoftObjectPtr<class UInputMappingContext>   InputMappingContext;                               // 0x0(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2067[0x4];                                     // Fixing Size Of Struct
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
	uint8                                        Pad_2068[0x10];                                    // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// ScriptStruct EnhancedInput.InputActionInstance
struct FInputActionInstance
{
public:
	class UInputAction*                          SourceAction;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2069[0xB];                                     // Fixing Size After Last Property
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x13(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastTriggeredWorldTime;                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_206B[0x20];                                    // Fixing Size After Last Property
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
	uint8                                        Pad_206D[0x3];                                     // Fixing Size After Last Property
	class FName                                  FunctionNameToBind;                                // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExecuteWhenPaused;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206E[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputComboStepData
struct FInputComboStepData
{
public:
	class UInputAction*                          ComboStepAction;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ComboStepCompletionStates;                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2070[0x3];                                     // Fixing Size After Last Property
	float                                        TimeToPressKey;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputCancelAction
struct FInputCancelAction
{
public:
	class UInputAction*                          CancelAction;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CancellationStates;                                // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2071[0x7];                                     // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESpecialEventTODMModifyType : uint8
{
	Keep                           = 0,
	Hide                           = 1,
	Show                           = 2,
	Spawn                          = 3,
	Persistent                     = 4,
	ESpecialEventTODMModifyType_MAX = 5,
};

enum class EDestroyActorsAndComponentsMutator_ComponentNameComparisonType : uint8
{
	NameEquals                     = 0,
	NameStartsWith                 = 1,
	NameContains                   = 2,
	AdditionalStatNameEquals       = 3,
	AdditionalStatNameStartsWith   = 4,
	AdditionalStatNameContains     = 5,
	EDestroyActorsAndComponentsMutator_MAX = 6,
};

enum class EFakeKillRelevancyPlayerKillStep : uint8
{
	Initiated                      = 0,
	BlueprintNotified              = 1,
	VisualsPerformed               = 2,
	EFakeKillRelevancyPlayerKillStep_MAX = 3,
};

enum class EMutatorMovementMode : uint8
{
	None                           = 0,
	BuffetBubbles                  = 25,
	BuffetBubblesIntro             = 26,
	BuffetFlying                   = 27,
	BuffetFlyingRicochet           = 28,
	Rewind                         = 29,
	EMutatorMovementMode_MAX       = 30,
};

enum class EFortCustomTickComponentCondition : uint8
{
	WasRecentlyRendered            = 0,
	CameraDistance                 = 1,
	LocalPlayerDistance            = 2,
	Count                          = 3,
	EFortCustomTickComponentCondition_MAX = 4,
};

enum class ESpecialEventGameUserSettingsResult : uint8
{
	Success                        = 0,
	Failure                        = 1,
	ESpecialEventGameUserSettingsResult_MAX = 2,
};

enum class ESpecialEventPhaseState : uint8
{
	Unregistered                   = 0,
	Inactive                       = 1,
	Active                         = 2,
	Deactivated                    = 3,
	ESpecialEventPhaseState_MAX    = 4,
};

enum class ESpecialEventPhaseComponentNetModeType : uint8
{
	ClientControlled               = 0,
	Client                         = 1,
	DedicatedServer                = 2,
	ESpecialEventPhaseComponentNetModeType_MAX = 3,
};

enum class ESpecialEventRewindComponentState : uint8
{
	Stop                           = 0,
	Record                         = 1,
	Rewind                         = 2,
	ESpecialEventRewindComponentState_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialClientEvent
struct FSpecialClientEvent
{
public:
	class UFortPlayerControllerAthena*           PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSeconds;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTag;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B7B[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventStatDefinition
struct FSpecialEventStatDefinition
{
public:
	struct FGameplayTag                          LookupTag;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x40 - 0xC)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
struct FSpecialEventStatArrayEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_4B7E[0x4];                                     // Fixing Size After Last Property 
	class USpecialEventStatComponent*            StatComponent;                                     // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UActor*                                Owner;                                             // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        StatDefinitionIndex;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSpecialEventStatDefinition           StatDefinitionCopy;                                // 0x24(0x10)(BlueprintVisible, BlueprintReadOnly, RepSkip, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        Value;                                             // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4B7F[0x8];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventTODMSubphaseData
struct FSpecialEventTODMSubphaseData
{
public:
	float                                        PhaseTime;                                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpecialEventTODMModifyType       ModifyType;                                        // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B85[0x3];                                     // Fixing Size After Last Property 
	TSubclassOf<class UFortTimeOfDayManager>     SpawnClass;                                        // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeOfDay;                                         // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedFactor;                                       // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventTODMPhaseData
struct FSpecialEventTODMPhaseData
{
public:
	struct FGameplayTag                          PhaseTag;                                          // 0x0(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B88[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FSpecialEventTODMSubphaseData> SubphaseDataArray;                                 // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B89[0x8];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventMathEaseData
struct FSpecialEventMathEaseData
{
public:
	enum class EEasingFunc                       EasingFunc;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8A[0x3];                                     // Fixing Size After Last Property 
	float                                        BlendExp;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Steps;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
struct FDestroyActorsAndComponentsMutator_ComponentDefinition
{
public:
	class FString                                ComponentName;                                     // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDestroyActorsAndComponentsMutator_ComponentNameComparisonType NameComparisonType;                                // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnServer;                                  // 0x11(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnClient;                                  // 0x12(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPromoteChildrenOfDestroyedComponents;             // 0x13(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8C[0x4];                                     // Fixing Size Of Struct
};

// 0x70 (0x70 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
struct FDestroyActorsAndComponentsMutator_ActorDefinition
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UActor>                  SoftActorClass;                                    // 0x20(0x20)(Edit, DisableEditOnInstance, RepSkip, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartEnabled;                                     // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyActorOnServer;                             // 0x41(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyActorOnClient;                             // 0x42(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNetForceOnActorDestroy;                           // 0x43(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldModifyLevelOnActorDestroy;                  // 0x44(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8D[0x3];                                     // Fixing Size After Last Property 
	TArray<struct FDestroyActorsAndComponentsMutator_ComponentDefinition> ComponentDefinitions;                              // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	bool                                         bCurrentlyEnabled;                                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPermanentlyDisabled;                              // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8E[0x6];                                     // Fixing Size After Last Property 
	TArray<class UActor*>                        ActorsToProcess;                                   // 0x60(0x10)(ZeroConstructor, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyVictim
struct FFakeKillRelevancyVictim
{
public:
	class UFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DeathLocation;                                     // 0x8(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x38 - 0xC)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
struct FFakeKillRelevancyPlayerDataEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_4B8F[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FFakeKillRelevancyVictim>      Victims;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Reason;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhaseNum;                                          // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveNum;                                           // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelevancyDelay;                                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelevancyChangeServerWorldTime;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B90[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x120 - 0x108)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
struct FFakeKillRelevancyPlayerDataArray : public FFastArraySerializer
{
public:
	TArray<struct FFakeKillRelevancyPlayerDataEntry> Entries;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortControllerComponent_FakeKillRelevancy* ControllerComponent;                               // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
struct FFakeKillRelevancyPhaseData
{
public:
	uint8                                        Pad_4B91[0x10];                                    // Fixing Size After Last Property 
	struct FGameplayTag                          Reason;                                            // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumWavesExpected;                                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveNum;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelevancyDelay;                                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B92[0x10];                                    // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyBucket
struct FFakeKillRelevancyBucket
{
public:
	uint8                                        Pad_4B93[0x10];                                    // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
struct FFakeKillRelevancySupergroup
{
public:
	uint8                                        Pad_4B94[0x20];                                    // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
struct FFakeKillRelevancyTestParameters
{
public:
	uint8                                        Pad_4B95[0x38];                                    // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventMapData
struct FSpecialEventMapData
{
public:
	struct FGameplayTag                          MapTag;                                            // 0x0(0x4)(Edit, DisableEditOnInstance, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B96[0x4];                                     // Fixing Size After Last Property 
	TArray<class FName>                          MapNames;                                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	bool                                         bReplicatedHasBeenUnloaded;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenUnloaded;                                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B98[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FortDelayRTMMData
struct FFortDelayRTMMData
{
public:
	bool                                         bDelayRTTM;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B99[0x3];                                     // Fixing Size After Last Property 
	float                                        MinRTTMDelay;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRTTMDelay;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FortSpecialEventGEData
struct FFortSpecialEventGEData
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9A[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
struct FFortSpecialEventOverrideParts
{
public:
	TArray<class UCustomCharacterPart*>          OverrideParts;                                     // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FFortSpecialEventGEData               GameplayEffectToApplyOnSwap;                       // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
struct FBuffetBubblesReplicatedData
{
public:
	struct FTransform                            RelativeTransform;                                 // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeVelocity;                                  // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9C[0x8];                                     // Fixing Size Of Struct
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.BuffetBubblesDebugData
struct FBuffetBubblesDebugData
{
public:
	uint8                                        Pad_4B9D[0xF0];                                    // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
struct FBuffetFlyingRicochetReplicatedData
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9F[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Velocity;                                          // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.CustomTickComonentQualitySettings
struct FCustomTickComonentQualitySettings
{
public:
	int32                                        NumFramesToSkipBetweenEvaluations;                 // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinFramesToSkipBetweenCustomTicks;                 // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFramesToSkipBetweenCustomTicks;                 // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerDistance;                                     // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterDistance;                                     // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
struct FSpecialEventAudioHapticsAction
{
public:
	float                                        LoudnessFloor;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoudnessCeiling;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HapticsIntensity;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsLeftLarge : 1;                             // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsLeftSmall : 1;                             // Mask: 0x2, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsRightLarge : 1;                            // Mask: 0x4, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsRightSmall : 1;                            // Mask: 0x8, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA2[0xF];                                     // Fixing Size Of Struct
};

// 0x298 (0x298 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventCursorMode
struct FSpecialEventCursorMode
{
public:
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDebugCursorDrawing;                          // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA3[0x3];                                     // Fixing Size After Last Property 
	struct FSpecialEventMathEaseData             GamepadMoveEaseData;                               // 0xC(0xC)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FScalableFloat                        GamepadMoveSpeed;                                  // 0x18(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSpecialEventMathEaseData             TouchMoveEaseData;                                 // 0x40(0xC)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA4[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        TouchMoveSpeed;                                    // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        TouchDeadzoneTreshold;                             // 0x78(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TouchAttenuator;                                   // 0x7C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinCursorPercentForAdditiveRotationPitch;          // 0x80(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinCursorPercentForAdditiveRotationYaw;            // 0xA8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxAdditiveRotationPitch;                          // 0xD0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxAdditiveRotationYaw;                            // 0xF8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        AdditiveRotationInterpSpeed;                       // 0x120(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ZoomInInterpSpeed;                                 // 0x148(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ZoomOutInterpSpeed;                                // 0x170(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ZoomAdditiveFOV;                                   // 0x198(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        GamepadZoomMoveSpeed;                              // 0x1C0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TouchZoomMoveSpeed;                                // 0x1E8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bAllowTrace;                                       // 0x210(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x211(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA7[0x6];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        SweepRadius;                                       // 0x218(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TraceDistance;                                     // 0x240(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bTraceComplex;                                     // 0x268(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BAA[0x8];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventCursorStackEntry
struct FSpecialEventCursorStackEntry
{
public:
	struct FGameplayTag                          CursorModeTag;                                     // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                InstigatingObject;                                 // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventPhaseComponentNetModeInfo
struct FSpecialEventPhaseComponentNetModeInfo
{
public:
	enum class ESpecialEventPhaseComponentNetModeType NetModeType;                                       // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BAF[0x7];                                     // Fixing Size After Last Property 
	TSubclassOf<class UActorComponent>           ComponentClass;                                    // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentStateData
struct FSpecialEventRewindComponentStateData
{
public:
	enum class ESpecialEventRewindComponentState State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StateChangedCount;                                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB1[0x2];                                     // Fixing Size After Last Property 
	float                                        ServerWorldTime;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x10 - 0xC)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame
struct FSpecialEventRewindComponentFrame : public FFastArraySerializerItem
{
public:
	float                                        ServerWorldTime;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording
struct FSpecialEventRewindComponentRecording
{
public:
	uint8                                        Pad_4BB2[0x8];                                     // Fixing Size After Last Property 
	class USpecialEventRewindComponent*          RewindComponent;                                   // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        StartFrameIndex;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EndFrameIndex;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4BB3[0x8];                                     // Fixing Size Of Struct
};

// 0x20 (0x30 - 0x10)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame_PlayerPawn
struct FSpecialEventRewindComponentFrame_PlayerPawn : public FSpecialEventRewindComponentFrame
{
public:
	struct FVector_NetQuantize                   Location;                                          // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CompressedYaw;                                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        CompressedControlRotationPitch;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4BB5[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x118 - 0x108)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecordingFastArray_PlayerPawn
struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn : public FFastArraySerializer
{
public:
	TArray<struct FSpecialEventRewindComponentFrame_PlayerPawn> Frames;                                            // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording_PlayerPawn
struct FSpecialEventRewindComponentRecording_PlayerPawn : public FSpecialEventRewindComponentRecording
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.PhaseLevelEntryBase
struct FPhaseLevelEntryBase
{
public:
	uint8                                        Pad_4BB6[0x8];                                     // Fixing Size After Last Property 
	bool                                         bLoadLevelOnScriptStart;                           // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLevelStartsVisible;                               // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnloadLevelOnPhaseEnd;                            // 0xA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMakeVisibleOnPhaseStart;                          // 0xB(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB7[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 MakeVisibleAtPhaseTags;                            // 0x10(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UnloadLevelAtPhaseTags;                            // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB9[0x10];                                    // Fixing Size Of Struct
};

// 0x70 (0xD0 - 0x60)
// ScriptStruct SpecialEventGameplayRuntime.PhaseLevelEntry
struct FPhaseLevelEntry : public FPhaseLevelEntryBase
{
public:
	TSoftObjectPtr<class UWorld>                 LevelToLoad;                                       // 0x60(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LevelName;                                         // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExcludeFromServerPreload;                         // 0x90(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4BBB[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Location;                                          // 0x98(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              Rotation;                                          // 0xB0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class ULevelStreamingDynamic*                LevelInstance;                                     // 0xC8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x80 - 0x60)
// ScriptStruct SpecialEventGameplayRuntime.PhaseDataLayerEntry
struct FPhaseDataLayerEntry : public FPhaseLevelEntryBase
{
public:
	class UDataLayerAsset*                       DataLayerAsset;                                    // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRecursive;                                      // 0x68(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4BBD[0x17];                                    // Fixing Size Of Struct
};

// 0x68 (0x68 - 0x0)
// ScriptStruct SpecialEventGameplayRuntime.PhaseInfo
struct FPhaseInfo
{
public:
	TSubclassOf<class USpecialEventPhase>        PhaseActorClass;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PhaseTag;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SequenceTime;                                      // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetRelevancyMode;                                 // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpecialRelevancyMode             RelevancyMode;                                     // 0x11(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BBF[0x2];                                     // Fixing Size After Last Property 
	int32                                        NumOfSquadsInRelevancyGroup;                       // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequireLevelsFromPhaseTags;                        // 0x18(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bStartNextPhaseOnPhaseFinished;                    // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGarbageCollectAtPhaseStartOnServer;               // 0x39(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGarbageCollectAtPhaseStartOnClient;               // 0x3A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BC0[0x5];                                     // Fixing Size After Last Property 
	class USpecialEventPhase*                    PhaseActor;                                        // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPhaseLevelEntry>              Levels;                                            // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPhaseDataLayerEntry>          DataLayers;                                        // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct SpecialEventGameplayRuntime.SpecialEventStatArray
struct FSpecialEventStatArray : public FFastArraySerializer
{
public:
	TArray<struct FSpecialEventStatArrayEntry>   Stats;                                             // 0x108(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USpecialEventStatComponent*            StatComponent;                                     // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

}



#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELivingWorldPointProviderSpawnLimiterBehavior : uint8
{
	Lifetime                       = 0,
	Concurrent                     = 1,
	ELivingWorldPointProviderSpawnLimiterBehavior_MAX = 2,
};

enum class ELivingWorldCalendarEventConditionBehavior : uint8
{
	IsActive                       = 0,
	Ratio                          = 1,
	ELivingWorldCalendarEventConditionBehavior_MAX = 2,
};

enum class ELivingWorldCalendarEventConditionRatioBehavior : uint8
{
	Less                           = 0,
	LessOrEqual                    = 1,
	Greater                        = 2,
	GreaterOrEqual                 = 3,
	InBetween                      = 4,
	ELivingWorldCalendarEventConditionRatioBehavior_MAX = 5,
};

enum class EFortAthenaLivingWorldEventRuntimeDeactivationReason : uint8
{
	None                           = 0,
	NoValidEventData               = 1,
	RandomDeactivation             = 2,
	CalendarEvent                  = 3,
	MatchedPrefabAndNormalActor    = 4,
	ActorDescDoesntMatchAnySpawnerData = 5,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldTagTimer
struct FFortAthenaLivingWorldTagTimer
{
public:
	uint8                                        Pad_7AD1[0x8];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        Duration;                                          // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
struct FFortAthenaLivingWorldEventTagDensityRegistration
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AD2[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        Range;                                             // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DensityValue;                                      // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
struct FFortAthenaLivingWorldActorSpawnDescription
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortAthenaSpawnerDataBase> SpawnerData;                                       // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     SpawnerDataTagQuery;                               // 0x50(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ActorDensityValue;                                 // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        DensityComputationRangeOverride;                   // 0xC0(0x28)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration> TagDensityRegistrations;                           // 0xE8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortAthenaLivingWorldTagTimer> PostDestructionTagDensityPersistenceDuration;      // 0xF8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bPreloadOnClient;                                  // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AD3[0x7];                                     // Fixing Size Of Struct..
};

// 0x120 (0x120 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerData
struct FFortAthenaLivingWorldPrefabActorSpawnerData
{
public:
	struct FGuid                                 ActorSpawnerGuid;                                  // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortAthenaLivingWorldActorSpawnDescription ActorDescription;                                  // 0x10(0x110)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LagerRuntime.PointProviderTagDebugColor
struct FPointProviderTagDebugColor
{
public:
	struct FGameplayTagContainer                 Tags;                                              // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AD4[0x4];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
struct FFortAthenaLivingWorldPointProviderSpawnLimiter
{
public:
	uint8                                        Pad_7AD5[0x8];                                     // Fixing Size After Last Property..
	enum class ELivingWorldPointProviderSpawnLimiterBehavior Behavior;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AD6[0x7];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        MaxNumberOfSpawn;                                  // 0x10(0x28)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxNumberOfEventInstance;                          // 0x38(0x28)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bResetLimitWhenEnabling;                           // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AD7[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldConditionContainer
struct FFortAthenaLivingWorldConditionContainer
{
public:
	class UObject*                               Owner;                                             // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AD8[0x10];                                    // Fixing Size Of Struct..
};

// 0x58 (0x68 - 0x10)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresence
struct FFortAthenaLivingWorldCondition_TrackedPlayerPresence : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef         ActorRef;                                          // 0x10(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinDistanceToPlayer;                               // 0x18(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxDistanceToPlayer;                               // 0x40(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x88 (0x98 - 0x10)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldDensityCondition
struct FFortAthenaLivingWorldDensityCondition : public FWorldConditionCommonActorBase
{
public:
	struct FWorldConditionContextDataRef         ActorRef;                                          // 0x10(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x18(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AD9[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        Distance;                                          // 0x20(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxDensity;                                        // 0x48(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinDensity;                                        // 0x70(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldDespawnCondition
struct FFortAthenaLivingWorldDespawnCondition
{
public:
	struct FWorldConditionQueryDefinition        DespawnWorldCondition;                             // 0x0(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        TimeAsCandidateBeforeDespawn;                      // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeAsCandidateBeforeDespawnDeviation;             // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomDeathTag;                                // 0x20(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ADA[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DeathTagContainer;                                 // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLinearEncounterPlayerParticipationData
struct FFortAthenaLinearEncounterPlayerParticipationData
{
public:
	uint8                                        Pad_7ADB[0x40];                                    // Fixing Size Of Struct..
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldActorUpdateHandler
struct FFortAthenaLivingWorldActorUpdateHandler
{
public:
	class UFortAthenaLivingWorldManager*         LivingWorldManager;                                // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7ADC[0xA8];                                    // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LagerRuntime.FortLivingWorldEventTableVariation
struct FFortLivingWorldEventTableVariation
{
public:
	TSoftObjectPtr<class UDataTable>             EventTableVariation;                               // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        VariationWeight;                                   // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategory
struct FFortAthenaLivingWorldCategory : public FTableRowBase
{
public:
	TSoftObjectPtr<class UDataTable>             EventTable;                                        // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortLivingWorldEventTableVariation> EventTableVariations;                              // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	int32                                        MaxCount;                                          // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxSpawnedCount;                                   // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EventInstanceMaxCount;                             // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EventInstanceMaxSpawnedCount;                      // 0x4C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FWorldConditionQueryDefinition        CanSpawnCondition;                                 // 0x50(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        Priority;                                          // 0x68(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bExcludeFromGlobalAIBudget;                        // 0x6C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7ADD[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTagQuery                     RequirePlaylistTagQuery;                           // 0x70(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UFortAthenaLivingWorldEncounter>> Encounters;                                        // 0xB8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        IsEnabled;                                         // 0xC8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldTagDensityGridData
struct FFortAthenaLivingWorldTagDensityGridData
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ADE[0x4];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        GridCellSize;                                      // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategoryTableData
struct FFortAthenaLivingWorldCategoryTableData
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7ADF[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UDataTable>             CategoryTable;                                     // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        IsEnabled;                                         // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaActorDensityDebugInfo
struct FFortAthenaActorDensityDebugInfo
{
public:
	class FString                                ActorName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActorPosition;                                     // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            MinCellIndex;                                      // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            MaxCellIndex;                                      // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DensityValue;                                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE0[0x4];                                     // Fixing Size Of Struct..
};

// 0x98 (0x158 - 0xC0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldDensityGrid
struct FFortAthenaLivingWorldDensityGrid : public FFortSpatialGrid
{
public:
	uint8                                        Pad_7AE1[0x98];                                    // Fixing Size Of Struct..
};

// 0x78 (0x78 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEncounterStage
struct FFortAthenaLivingWorldEncounterStage
{
public:
	TSoftObjectPtr<class UDataTable>             EventTable;                                        // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaximumConcurrentNumberOfAI;                       // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxSpawnCountPerEventGeneration;                   // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
struct FFortAthenaLivingWorldEventDespawnCondition
{
public:
	bool                                         bCanBeDespawned;                                   // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE2[0x3];                                     // Fixing Size After Last Property..
	float                                        MinDistanceToPlayer;                               // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeAsCandidateBeforeDespawn;                      // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              CanStartDespawningPhaseStep;                       // 0xC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE3[0x3];                                     // Fixing Size After Last Property..
	int32                                        CanStartDespawningSafeZonePhase;                   // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDespawnWhenInCombatWithPlayer;                 // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanDespawnInTheStorm;                             // 0x15(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE4[0x2];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
struct FFortAthenaLivingWorldEventTagDensityCondition
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDensity;                                        // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDataEntry
struct FFortAthenaLivingWorldEventDataEntry
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEventData> EventData;                                         // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Weight;                                            // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LagerRuntime.LivingWorldCalendarEventCondition
struct FLivingWorldCalendarEventCondition
{
public:
	class FName                                  CalendarEventName;                                 // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELivingWorldCalendarEventConditionBehavior Behavior;                                          // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldEventBeActive;                               // 0x5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELivingWorldCalendarEventConditionRatioBehavior RatioBehavior;                                     // 0x6(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE5[0x1];                                     // Fixing Size After Last Property..
	float                                        RatioValue;                                        // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RatioMaxValue;                                     // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LagerRuntime.LivingWorldCalendarEventConditions
struct FLivingWorldCalendarEventConditions
{
public:
	TArray<struct FLivingWorldCalendarEventCondition> Conditions;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         IsActiveWithoutSeasonalManager;                    // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AE6[0x7];                                     // Fixing Size Of Struct..
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEvent
struct FFortAthenaLivingWorldEvent : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEventData> EventData;                                         // 0x8(0x28)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEventDataEntry> EventDatas;                                        // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        IsEnabled;                                         // 0x40(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxCount;                                          // 0x68(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxSpawnedCount;                                   // 0x78(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<float>                                EventInstanceMaxCount;                             // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<float>                                EventInstanceMaxSpawnedCount;                      // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0xA8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AE7[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                MinRespawnTime;                                    // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxRespawnTime;                                    // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                InstantDeathMinRespawnTime;                        // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                InstantDeathMaxRespawnTime;                        // 0xE0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bOnlyInSafeZone;                                   // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOnlyInNextSafeZone;                               // 0xF1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOnlyInNextSafeZoneIfStormShrinking;               // 0xF2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AE8[0x5];                                     // Fixing Size After Last Property..
	struct FWorldConditionQueryDefinition        CanSpawnCondition;                                 // 0xF8(0x18)(Edit, NativeAccessSpecifierPrivate)
	enum class EAthenaGamePhaseStep              ActivationGamePhaseStep;                           // 0x110(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AE9[0x3];                                     // Fixing Size After Last Property..
	int32                                        ActivationSafezoneIndex;                           // 0x114(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ActivationMinDelay;                                // 0x118(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ActivationMaxDelay;                                // 0x11C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DeactivationMinDelay;                              // 0x120(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DeactivationMaxDelay;                              // 0x124(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEventTagDensityCondition> TagDensityConditions;                              // 0x128(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                         bCheckForActorDensity;                             // 0x138(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AEA[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxActorDensityOverride;                           // 0x13C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinDistanceToPlayer;                               // 0x140(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxDistanceToPlayer;                               // 0x144(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCanSpawnWithoutMatchingPlayerDistance;            // 0x148(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AEB[0x3];                                     // Fixing Size After Last Property..
	float                                        RandomActivationChance;                            // 0x14C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortAthenaLivingWorldEventDespawnCondition DespawnCondition;                                  // 0x150(0x18)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldDespawnCondition> DespawnConditions;                                 // 0x168(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 RequirePlaylistTags;                               // 0x178(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FLivingWorldCalendarEventConditions   CalendarEventConditions;                           // 0x198(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct LagerRuntime.PointProviderFilterEntry
struct FPointProviderFilterEntry
{
public:
	struct FGameplayTagQuery                     ProviderFiltersTagQuery;                           // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLivingWorldCalendarEventConditions   CalendarEventConditions;                           // 0x48(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Weight;                                            // 0x60(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x140 - 0x110)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
struct FFortAthenaLivingWorldEventDataActorSpawnDescription : public FFortAthenaLivingWorldActorSpawnDescription
{
public:
	bool                                         bSpawnAroundDefaultPoint;                          // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateDefaultPosition;                            // 0x111(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSharePreviousActorEQSResult;                      // 0x112(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AEC[0x5];                                     // Fixing Size After Last Property..
	class UEnvQuery*                             SpawnAroundEnvironmentQuery;                       // 0x118(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvQueryRunMode                  SpawnAroundEnvironmentQueryRunMode;                // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AED[0x7];                                     // Fixing Size After Last Property..
	struct FSoftClassPath                        SpawnAroundNavigationSourceOverride;               // 0x128(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct LagerRuntime.FortLivingWorldConfigOverride
struct FFortLivingWorldConfigOverride
{
public:
	TSoftObjectPtr<class UWorld>                 SourceWorld;                                       // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistTag;                                       // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> LagerConfig;                                       // 0x48(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortReleaseVersion                   StartVersion;                                      // 0x70(0x4)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortReleaseVersion                   EndVersion;                                        // 0x74(0x4)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPlayerTracker
struct FFortAthenaLivingWorldPlayerTracker
{
public:
	TSet<class AFortAthenaAIBotController*>      TrackedBotControllers;                             // 0x0(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class AFortPlayerPawn*>               TrackedPlayerPawns;                                // 0x50(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class AController*>                   TrackedPlayerControllers;                          // 0x60(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7AEE[0x40];                                    // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
struct FFortAthenaLivingWorldPointProviderFilterRules
{
public:
	uint8                                        Pad_7AEF[0x30];                                    // Fixing Size Of Struct..
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPreloader
struct FFortAthenaLivingWorldPreloader
{
public:
	class UFortAthenaLivingWorldManager*         LivingWorldManager;                                // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UFortAthenaSpawnerDataBase>> LoadedSpawnerDataClass;                            // 0x8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class AActor>>            LoadedActorClasses;                                // 0x18(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AF0[0xB8];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
struct FFortAthenaLivingWorldTaggedSpawnActionClass
{
public:
	struct FGameplayTag                          SpawnActionTag;                                    // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AF1[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UFortAthenaLivingWorldSpawnAction> SpawnActionClass;                                  // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategoryTableDataList
struct FFortAthenaLivingWorldCategoryTableDataList
{
public:
	TArray<struct FFortAthenaLivingWorldCategoryTableData> CategoryTableDatas;                                // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
struct FLivingWorldSpawnAroundPlayerConfiguration
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> Encounter;                                         // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AFortAthenaPointAroundPlayerProvider>> PointProviderClasses;                              // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bRegisterReservoir;                                // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AF2[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LagerRuntime.LivingWorldSpawnAroundPlayerRuntimeData
struct FLivingWorldSpawnAroundPlayerRuntimeData
{
public:
	TArray<FInterfaceProperty_>                  PointAroundPlayerProviders;                        // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UFortAthenaLivingWorldEncounterInstance* Encounter;                                         // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldTagQueryToSeatMapping
struct FFortAthenaLivingWorldTagQueryToSeatMapping
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        SeatIndex;                                         // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AF3[0x4];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

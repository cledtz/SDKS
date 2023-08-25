#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWarEffortFundingStationType : uint8
{
	Final                          = 0,
	Tower                          = 1,
	Choice                         = 2,
	EWarEffortFundingStationType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortFundingOptionData
struct FWarEffortFundingOptionData
{
public:
	struct FGameplayTag                          OptionTag;                                         // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257[0x4];                                      // Fixing Size After Last Property 
	int64                                        CurrentFundingAmount;                              // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortFundingChoiceData
struct FWarEffortFundingChoiceData
{
public:
	struct FWarEffortFundingOptionData           Option1;                                           // 0x0(0x10)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWarEffortFundingOptionData           Option2;                                           // 0x10(0x10)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int64                                        TargetFundingAmount;                               // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortIndexedFundingData
struct FWarEffortIndexedFundingData
{
public:
	TArray<int64>                                CurrentFundingArray;                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int64                                        FinalFundingAmount;                                // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        TowerFundingAmount;                                // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortFundingMetadata
struct FWarEffortFundingMetadata : public FMeshMetaDataStruct
{
public:
	struct FWarEffortIndexedFundingData          IndexedFundingData;                                // 0x0(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FWarEffortFundingChoiceData>   FundingChoices;                                    // 0x20(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationSplinePointData
struct FCubeMovement_CorruptionGenerationSplinePointData
{
public:
	struct FTransform                            SplinePointTransform;                              // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplinePercentComplete;                             // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25B[0xC];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationTravelerData
struct FCubeMovement_CorruptionGenerationTravelerData
{
public:
	TArray<struct FCubeMovement_CorruptionGenerationSplinePointData> SplinePointData;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortScriptedObjectMovement_MovableObjectBase* PathTraveler;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationData
struct FCubeMovement_CorruptionGenerationData
{
public:
	TArray<struct FCubeMovement_CorruptionGenerationTravelerData> TravelerData;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.CorruptionCalendarEventData
struct FCorruptionCalendarEventData
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartPercent;                                      // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25C[0x4];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.CorruptionPauseEvent
struct FCorruptionPauseEvent
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PercentDurationToPause;                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25D[0x4];                                      // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.TravelerStepCorruptionOverrideData
struct FTravelerStepCorruptionOverrideData
{
public:
	TMap<class FString, float>                   PointGroupStepPercentOverrides;                    // 0x0(0x50)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortMutatorChoiceData
struct FWarEffortMutatorChoiceData
{
public:
	struct FGameplayTag                          FundingTag;                                        // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_260[0x4];                                      // Fixing Size After Last Property 
	TArray<TSoftObjectPtr<class UFortItemDefinition>> SoftRefsToLoad;                                    // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, struct FScalableFloat>     LootTableMods;                                     // 0x18(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortMutatorMetadata
struct FWarEffortMutatorMetadata : public FMeshMetaDataStruct
{
public:
	TArray<struct FGameplayTag>                  ActiveFundedItems;                                 // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  ActiveTryBeforeYouBuyItems;                        // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CorruptionGameplayCodeRuntime.WarEffortFundingData
struct FWarEffortFundingData
{
public:
	struct FGameplayTag                          FundingTag;                                        // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FundedPercent;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}



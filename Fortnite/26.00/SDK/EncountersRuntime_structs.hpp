#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EEncounterMobSpawnType : int32
{
	VolumeBased                    = 0,
	StaticPointBased               = 1,
	EEncounterMobSpawnType_MAX     = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xA0 - 0x0)
// ScriptStruct EncountersRuntime.EncounterMobSpawnInfo
struct FEncounterMobSpawnInfo
{
public:
	struct FScalableFloat                        LeashRadiusInner;                                  // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LeashRadiusOuter;                                  // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UEncounterMobAnchor>    EncounterAnchorPoint;                              // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEncounterMobSpawnType            MobSpawnType;                                      // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_439E[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 PointProviderFilterTags;                           // 0x60(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UFortAthenaLivingWorldStaticPointProvider>> StaticPointProviders;                              // 0x80(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UEnvQuery*                             PointProviderEQS;                                  // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAthenaLivingWorldVolume> PointProviderVolumeClass;                          // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct EncountersRuntime.EncounterMobSpawnData
struct FEncounterMobSpawnData
{
public:
	class FString                                DevNotes;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MobIdentifier;                                     // 0x10(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActiveOnStart;                                    // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A0[0x3];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> MobEncounterData;                                  // 0x18(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultSpawnInfo;                         // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A1[0x7];                                     // Fixing Size After Last Property 
	struct FEncounterMobSpawnInfo                MobSpawnInfo;                                      // 0x40(0xA0)(Edit, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct EncountersRuntime.EncounterMobInstance
struct FEncounterMobInstance
{
public:
	uint8                                        Pad_43A2[0x18];                                    // Fixing Size After Last Property 
	class UFortAthenaLivingWorldVolume*          VolumePointProvider;                               // 0x18(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A3[0x10];                                    // Fixing Size After Last Property 
	TArray<TScriptInterface<class UFortAthenaLivingWorldPointProviderInterface>> CurrentPointProviders;                             // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A4[0x18];                                    // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.EncounterGetVariableBoolStateTreeTaskInstanceData
struct FEncounterGetVariableBoolStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          VariableIdentifier;                                // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValue;                                            // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A5[0x3];                                     // Fixing Size After Last Property 
	class UActor*                                UserActor;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.EncounterGetVariableBoolStateTreeTask
struct FEncounterGetVariableBoolStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.EncounterGetVariableFloatStateTreeTaskInstanceData
struct FEncounterGetVariableFloatStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          VariableIdentifier;                                // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.EncounterGetVariableFloatStateTreeTask
struct FEncounterGetVariableFloatStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTaskInstanceData
struct FEncounterGetVariableGameplayTagStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          VariableIdentifier;                                // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Value;                                             // 0x4(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTask
struct FEncounterGetVariableGameplayTagStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.EncounterGetVariableIntStateTreeTaskInstanceData
struct FEncounterGetVariableIntStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          VariableIdentifier;                                // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.EncounterGetVariableIntStateTreeTask
struct FEncounterGetVariableIntStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTaskInstanceData
struct FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          VariableIdentifier;                                // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43B0[0x4];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UFortWorldItemDefinition> Value;                                             // 0x8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTask
struct FEncounterGetVariableItemDefinitionStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTaskInstanceData
struct FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          VariableIdentifier;                                // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43BD[0x4];                                     // Fixing Size After Last Property 
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> Value;                                             // 0x8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTask
struct FEncounterGetVariableLWMEncounterStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x58 (0x58 - 0x0)
// ScriptStruct EncountersRuntime.EncounterGetVariableTagQueryStateTreeTaskInstanceData
struct FEncounterGetVariableTagQueryStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          VariableIdentifier;                                // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C1[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagQuery                     Value;                                             // 0x8(0x48)(Edit, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.EncounterGetVariableTagQueryStateTreeTask
struct FEncounterGetVariableTagQueryStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x38 (0x38 - 0x0)
// ScriptStruct EncountersRuntime.EncounterPrefabEntry
struct FEncounterPrefabEntry
{
public:
	class UEncounterItemDefinition*              EncounterDefinition;                               // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EncounterIdentifierTag;                            // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C2[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        Weight;                                            // 0x10(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.EncounterVariable
struct FEncounterVariable
{
public:
	uint8                                        Pad_43C5[0x8];                                     // Fixing Size After Last Property 
	struct FGameplayTag                          VarName;                                           // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C6[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x20 - 0x10)
// ScriptStruct EncountersRuntime.EncounterVariable_Boolean
struct FEncounterVariable_Boolean : public FEncounterVariable
{
public:
	struct FDataTableRowHandle                   RowValue;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct EncountersRuntime.EncounterVariable_Float
struct FEncounterVariable_Float : public FEncounterVariable
{
public:
	struct FDataTableRowHandle                   RowValue;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct EncountersRuntime.EncounterVariable_GameplayTag
struct FEncounterVariable_GameplayTag : public FEncounterVariable
{
public:
	struct FDataTableRowHandle                   RowValue;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct EncountersRuntime.EncounterVariable_Integer
struct FEncounterVariable_Integer : public FEncounterVariable
{
public:
	struct FDataTableRowHandle                   RowValue;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct EncountersRuntime.EncounterVariable_ItemDefinition
struct FEncounterVariable_ItemDefinition : public FEncounterVariable
{
public:
	struct FDataTableRowHandle                   RowValue;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct EncountersRuntime.EncounterVariable_LWMEncounter
struct FEncounterVariable_LWMEncounter : public FEncounterVariable
{
public:
	struct FDataTableRowHandle                   RowValue;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct EncountersRuntime.EncounterVariable_TagQuery
struct FEncounterVariable_TagQuery : public FEncounterVariable
{
public:
	struct FDataTableRowHandle                   RowValue;                                          // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct EncountersRuntime.EncounterVarRow_Boolean
struct FEncounterVarRow_Boolean : public FTableRowBase
{
public:
	bool                                         bValue;                                            // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43CA[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct EncountersRuntime.EncounterVarRow_Float
struct FEncounterVarRow_Float : public FTableRowBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43CB[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct EncountersRuntime.EncounterVarRow_GameplayTag
struct FEncounterVarRow_GameplayTag : public FTableRowBase
{
public:
	struct FGameplayTag                          Value;                                             // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43CD[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x10 - 0x8)
// ScriptStruct EncountersRuntime.EncounterVarRow_Integer
struct FEncounterVarRow_Integer : public FTableRowBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43CE[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct EncountersRuntime.EncounterVarRow_ItemDefinition
struct FEncounterVarRow_ItemDefinition : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> Value;                                             // 0x8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct EncountersRuntime.EncounterVarRow_LWMEncounter
struct FEncounterVarRow_LWMEncounter : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> Value;                                             // 0x8(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct EncountersRuntime.EncounterVarRow_TagQuery
struct FEncounterVarRow_TagQuery : public FTableRowBase
{
public:
	struct FGameplayTagQuery                     Value;                                             // 0x8(0x48)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct EncountersRuntime.EndAllMobEncountersStateTreeTaskInstanceData
struct FEndAllMobEncountersStateTreeTaskInstanceData
{
public:
	class UActor*                                UserActor;                                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.EndAllMobEncountersStateTreeTask
struct FEndAllMobEncountersStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.PauseMobEncounterStateTreeTaskInstanceData
struct FPauseMobEncounterStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43D6[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                UserActor;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.PauseMobEncounterStateTreeTask
struct FPauseMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.ResumeMobEncounterStateTreeTaskInstanceData
struct FResumeMobEncounterStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43DB[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                UserActor;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.ResumeMobEncounterStateTreeTask
struct FResumeMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x130 (0x130 - 0x0)
// ScriptStruct EncountersRuntime.StartLWMEncounterStateTreeTaskInstanceData
struct FStartLWMEncounterStateTreeTaskInstanceData
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> LWMEncounter;                                      // 0x0(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     PointProviderTagQuery;                             // 0x20(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     AnchorPointTagQuery;                               // 0x68(0x48)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LeashRadiusInner;                                  // 0xB0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LeashRadiusOuter;                                  // 0xD8(0x28)(Edit, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x100(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStartLWMEncounterDelegateHandler*     DelegateHandler;                                   // 0x108(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortAthenaLivingWorldEncounterInstance> LWMInstance;                                       // 0x110(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UFortPawn>>      SpawnedMobPawns;                                   // 0x118(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UEncounterMobAnchor>    EncounterAnchorPoint;                              // 0x128(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.StartLWMEncounterStateTreeTask
struct FStartLWMEncounterStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.StartMobEncounterStateTreeTaskInstanceData
struct FStartMobEncounterStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43DC[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                UserActor;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct EncountersRuntime.StartMobEncounterStateTreeTask
struct FStartMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	bool                                         bStopEncounterOnExit;                              // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43DE[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EncountersRuntime.StopMobEncounterStateTreeTaskInstanceData
struct FStopMobEncounterStateTreeTaskInstanceData
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43DF[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                UserActor;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct EncountersRuntime.StopMobEncounterStateTreeTask
struct FStopMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{
public:
};

// 0x38 (0x38 - 0x0)
// ScriptStruct EncountersRuntime.EncounterRewardBehavior
struct FEncounterRewardBehavior
{
public:
	struct FVector                               RewardOffset;                                      // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RewardDirection;                                   // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RewardConeAngle;                                   // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RewardFlingMagnitude;                              // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct EncountersRuntime.EncounterObjectiveFilterCache
struct FEncounterObjectiveFilterCache : public FEventObjectiveFilterCache
{
public:
	uint8                                        Pad_43E0[0x10];                                    // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EncountersRuntime.EncounterVerbTransitionStateTreeTaskInstanceData
struct FEncounterVerbTransitionStateTreeTaskInstanceData
{
public:
	class UActor*                                UserActor;                                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E1[0x18];                                    // Fixing Size Of Struct
};

// 0x20 (0x40 - 0x20)
// ScriptStruct EncountersRuntime.EncounterVerbTransitionStateTreeTask
struct FEncounterVerbTransitionStateTreeTask : public FStateTreeTaskCommonBase
{
public:
	struct FStateTreeStateLink                   TransitionTo;                                      // 0x20(0x2)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43E2[0x6];                                     // Fixing Size After Last Property 
	TArray<struct FInstancedStruct>              Verbs;                                             // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        ValueThreshold;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43E4[0x4];                                     // Fixing Size Of Struct
};

}



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

enum class EBattleRoyaleBPAugmentLogVerbosity : uint8
{
	Log                            = 0,
	Verbose                        = 1,
	EBattleRoyaleBPAugmentLogVerbosity_MAX = 2,
};

enum class EFortBRAugmentSystemCastResult : uint8
{
	Valid                          = 0,
	Invalid                        = 1,
	EFortBRAugmentSystemCastResult_MAX = 2,
};

enum class EAugmentHoldInputRerollState : uint8
{
	Pressed                        = 0,
	Released                       = 1,
	EAugmentHoldInputRerollState_MAX = 2,
};

enum class EAugmentExecResult : uint8
{
	Success                        = 0,
	Failure                        = 1,
	EAugmentExecResult_MAX         = 2,
};

enum class ERollModifierOperation : uint8
{
	Add                            = 0,
	Multiply                       = 1,
	Zero                           = 2,
	ERollModifierOperation_MAX     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.FortAugmentPassiveUnlockResult
struct FFortAugmentPassiveUnlockResult
{
public:
	class UFortPlayerAugmentItemDefinition*      UnlockedAugment;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlreadyInInventory;                               // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E10[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.PlayerAugmentLockStatus
struct FPlayerAugmentLockStatus
{
public:
	class UFortPlayerAugmentItemDefinition*      PlayerAugmentItemDefinition;                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLocked;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasCollectedInThisMatch;                          // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E11[0x6];                                     // Fixing Size After Last Property..
	class AFortPlayerStateAthena*                SharedFromPlayer;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.PlayerAugmentChoiceDatum
struct FPlayerAugmentChoiceDatum
{
public:
	class UFortPlayerAugmentItemDefinition*      ItemDef;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ChoiceMetaTags;                                    // 0x8(0x20)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.FortAugmentRerollCost
struct FFortAugmentRerollCost
{
public:
	class UFortItemDefinition*                   ResourceCurrency;                                  // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Amount;                                            // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.PlayerAugmentGameplayEffectHandlesStackEntry
struct FPlayerAugmentGameplayEffectHandlesStackEntry
{
public:
	TArray<struct FActiveGameplayEffectHandle>   GEHandles;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.PlayerAugmentTrackedData
struct FPlayerAugmentTrackedData
{
public:
	uint8                                        Pad_3E12[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FFortAbilitySetHandle>         AbilitySetHandles;                                 // 0x8(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FPlayerAugmentGameplayEffectHandlesStackEntry> GEHandlesStack;                                    // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.FortDynamicRollResult
struct FFortDynamicRollResult
{
public:
	class UFortItemDefinition*                   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.CarryOverPlayerAugment
struct FCarryOverPlayerAugment
{
public:
	struct FPrimaryAssetId                       AugmentAssetId;                                    // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourcePlaylistName;                                // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.ReplicatedSharedPlayerAugment
struct FReplicatedSharedPlayerAugment
{
public:
	int32                                        PlayerAugmentIndex;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AFortPlayerStateAthena> SharedFromPlayer;                                  // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct PlayerAugmentsCodeRuntime.FortDynamicRollBaseWeightTableRow
struct FFortDynamicRollBaseWeightTableRow : public FTableRowBase
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseWeight;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E13[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayTag>                  ModTags;                                           // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOwningItemZerosWeight;                            // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E14[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxModifiedWeight;                                 // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinModifiedWeight;                                 // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E15[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x38 - 0x38)
// ScriptStruct PlayerAugmentsCodeRuntime.FortAugmentBaseWeightTableRow
struct FFortAugmentBaseWeightTableRow : public FFortDynamicRollBaseWeightTableRow
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct PlayerAugmentsCodeRuntime.FortDynamicRollWeightModifierTableRow
struct FFortDynamicRollWeightModifierTableRow : public FTableRowBase
{
public:
	struct FGameplayTag                          ActivatingPlayerTag;                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TargetModTag;                                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERollModifierOperation            WeightModifierOperation;                           // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E16[0x3];                                     // Fixing Size After Last Property..
	float                                        WeightModificationValue;                           // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct PlayerAugmentsCodeRuntime.FortAugmentWeightModificationDataRow
struct FFortAugmentWeightModificationDataRow : public FFortDynamicRollWeightModifierTableRow
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.DynamicRollModifiersActivatedByPlayerTagContainer
struct FDynamicRollModifiersActivatedByPlayerTagContainer
{
public:
	uint8                                        Pad_3E17[0x10];                                    // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// ScriptStruct PlayerAugmentsCodeRuntime.FortMcpCollectedPlayerAugmentProperties
struct FFortMcpCollectedPlayerAugmentProperties
{
public:
	uint8                                        Pad_3E18[0x1];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

enum class ECraftingObjectState : uint8
{
	Invalid                        = 0,
	Idle                           = 1,
	Crafting                       = 2,
	CraftingPaused                 = 3,
	CraftingPausedDecaying         = 4,
	Ready                          = 5,
	OverCrafting                   = 6,
	Resetting                      = 7,
	TotalStates                    = 8,
	ECraftingObjectState_MAX       = 9,
};

enum class ECraftingIngredientReqError : uint8
{
	None                           = 0,
	NoItem                         = 1,
	NotEnough                      = 2,
	ECraftingIngredientReqError_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct CraftingRuntime.CraftingMultiKey
struct FCraftingMultiKey
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CraftingRuntime.CraftingObjectSuccessEvent
struct FCraftingObjectSuccessEvent
{
public:
	class AActor*                                CraftingObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 Instigator;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FormulaRowName;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155C[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CraftingRuntime.CraftingObjectStateChangedEvent
struct FCraftingObjectStateChangedEvent
{
public:
	class AActor*                                CraftingObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCraftingMultiKey                     Key;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 Instigator;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftingObjectState              CraftingState;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155D[0x3];                                     // Fixing Size After Last Property..
	float                                        CraftingStateStartTime;                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraftingStateDuration;                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155E[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CraftingRuntime.CraftingObjectRepStateData
struct FCraftingObjectRepStateData
{
public:
	struct FCraftingMultiKey                     Key;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECraftingObjectState              CraftingObjectState;                               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155F[0x3];                                     // Fixing Size After Last Property..
	float                                        StateChangeServerTime;                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PausedCraftingTime;                                // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CraftingFormulaRow;                                // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumToCraft;                                        // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AFortPlayerController>  CraftingInstigator;                                // 0x1C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1560[0x4];                                     // Fixing Size Of Struct..
};

// 0x1F8 (0x1F8 - 0x0)
// ScriptStruct CraftingRuntime.CraftingObjectServerStateData
struct FCraftingObjectServerStateData
{
public:
	uint8                                        bNextResultsHandledExternally : 1;                 // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_19C : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1561[0x7];                                     // Fixing Size After Last Property..
	class AFortPickup*                           PendingPickupCraftingItem;                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PendingPickupCraftingFormula;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1562[0x4];                                     // Fixing Size After Last Property..
	struct FFortItemEntry                        PendingPickupCraftingItemEntry;                    // 0x18(0x1A0)(NativeAccessSpecifierPublic)
	int32                                        PendingPickupHeldCount;                            // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1563[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FFortItemEntry>                AllOfTheIngredientItems;                           // 0x1C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                NonConsumedIngredientItemIndices;                  // 0x1D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FItemAndCount>                 CraftingResults;                                   // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            InstigatorWhileCraftingAbilitySpecHandle;          // 0x1F0(0x4)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1564[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CraftingRuntime.CraftingIngredientRequirement
struct FCraftingIngredientRequirement
{
public:
	struct FGameplayTagContainer                 IngredientTags;                                    // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1565[0x4];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct CraftingRuntime.CraftingUpgradeRule
struct FCraftingUpgradeRule
{
public:
	struct FGameplayTagRequirements              SourceItemTags;                                    // 0x0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetItemTags;                                    // 0x40(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        UpgradeFlags;                                      // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1566[0x7];                                     // Fixing Size Of Struct..
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct CraftingRuntime.CraftingFormula
struct FCraftingFormula : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysKnownFormula : 1;                           // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInstantlyConsumeIngredients : 1;                  // Mask: 0x4, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_19D : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_1567[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          SourceObjectTag;                                   // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CategoryTag;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1568[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FCraftingIngredientRequirement> RequiredIngredients;                               // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  ResultLootTierKey;                                 // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1569[0x4];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortGameplayAbility>    WhileCraftingAbility;                              // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCraftingUpgradeRule>          UpgradeRules;                                      // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        OverrideCraftingTime;                              // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156A[0x4];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortGameplayAbility>    InstigatorWhileCraftingAbility;                    // 0x88(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CraftingRuntime.CraftingResult
struct FCraftingResult
{
public:
	class FName                                  ResultLootTierKey;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156B[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FItemAndCount>                 Results;                                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct CraftingRuntime.CraftingIngredientUIData
struct FCraftingIngredientUIData : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 IngredientTags;                                    // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UFortItemDefinition>> ItemDefs;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UObject>>        Icons;                                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CraftingRuntime.CraftingIngredientQueryState
struct FCraftingIngredientQueryState
{
public:
	struct FCraftingIngredientRequirement        Requirement;                                       // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Owned;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Missing;                                           // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CraftingRuntime.CraftingMessage
struct FCraftingMessage
{
public:
	class AActor*                                CraftingObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

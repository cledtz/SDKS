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

// 0xC (0xC - 0x0)
// ScriptStruct CraftingRuntime.CraftingObjectRepStateData
struct FCraftingObjectRepStateData
{
public:
	enum class ECraftingObjectState              CraftingObjectState;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B43[0x3];                                     // Fixing Size After Last Property..
	float                                        StateChangeServerTime;                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PausedCraftingTime;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CraftingRuntime.CraftingIngredientRequirement
struct FCraftingIngredientRequirement
{
public:
	struct FGameplayTagContainer                 IngredientTags;                                    // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B44[0x4];                                     // Fixing Size Of Struct..
};

// 0x88 (0x88 - 0x0)
// ScriptStruct CraftingRuntime.CraftingUpgradeRule
struct FCraftingUpgradeRule
{
public:
	struct FGameplayTagRequirements              SourceItemTags;                                    // 0x0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetItemTags;                                    // 0x40(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        UpgradeFlags;                                      // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B45[0x7];                                     // Fixing Size Of Struct..
};

// 0x80 (0x88 - 0x8)
// ScriptStruct CraftingRuntime.CraftingFormula
struct FCraftingFormula : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysKnownFormula : 1;                           // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInstantlyConsumeIngredients : 1;                  // Mask: 0x4, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_40F : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7B46[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          SourceObjectTag;                                   // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CategoryTag;                                       // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B47[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FCraftingIngredientRequirement> RequiredIngredients;                               // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  ResultLootTierKey;                                 // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B48[0x4];                                     // Fixing Size After Last Property..
	TSoftClassPtr<class UFortGameplayAbility>    WhileCraftingAbility;                              // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCraftingUpgradeRule>          UpgradeRules;                                      // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        OverrideCraftingTime;                              // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B49[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CraftingRuntime.CraftingResult
struct FCraftingResult
{
public:
	class FName                                  ResultLootTierKey;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B4A[0x4];                                     // Fixing Size After Last Property..
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

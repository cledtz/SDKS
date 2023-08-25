#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

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

// 0x8 (0x8 - 0x0)
// ScriptStruct DynamicRollTablesRuntime.FortDynamicRollResult
struct FFortDynamicRollResult
{
public:
	class UFortItemDefinition*                   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct DynamicRollTablesRuntime.FortDynamicRollBaseWeightTableRow
struct FFortDynamicRollBaseWeightTableRow : public FTableRowBase
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseWeight;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3638[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FGameplayTag>                  ModTags;                                           // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOwningItemZerosWeight;                            // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3639[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxModifiedWeight;                                 // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinModifiedWeight;                                 // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363A[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x18 - 0x8)
// ScriptStruct DynamicRollTablesRuntime.FortDynamicRollWeightModifierTableRow
struct FFortDynamicRollWeightModifierTableRow : public FTableRowBase
{
public:
	struct FGameplayTag                          ActivatingPlayerTag;                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TargetModTag;                                      // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERollModifierOperation            WeightModifierOperation;                           // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_363E[0x3];                                     // Fixing Size After Last Property 
	float                                        WeightModificationValue;                           // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DynamicRollTablesRuntime.DynamicRollModifiersActivatedByPlayerTagContainer
struct FDynamicRollModifiersActivatedByPlayerTagContainer
{
public:
	uint8                                        Pad_363F[0x10];                                    // Fixing Size Of Struct
};

}



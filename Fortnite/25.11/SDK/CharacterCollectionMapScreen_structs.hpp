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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct CharacterCollectionMapScreen.NPCServiceData
struct FNPCServiceData
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                Icon;                                              // 0x18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CharacterCollectionMapScreen.NPCServiceWidgetData
struct FNPCServiceWidgetData
{
public:
	struct FNPCServiceData                       ServiceData;                                       // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortResourceItemDefinition*           CostResource;                                      // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CostAmount;                                        // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F55[0x4];                                     // Fixing Size Of Struct..
};

// 0x68 (0x70 - 0x8)
// ScriptStruct CharacterCollectionMapScreen.NPCServiceDataRow
struct FNPCServiceDataRow : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 ServiceTags;                                       // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  PricingKey;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F56[0x4];                                     // Fixing Size After Last Property..
	struct FNPCServiceData                       ServiceData;                                       // 0x30(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct CharacterCollectionMapScreen.NPCSpecializationDataRow
struct FNPCSpecializationDataRow : public FTableRowBase
{
public:
	class FName                                  PricingKey;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F57[0x4];                                     // Fixing Size After Last Property..
	struct FNPCServiceData                       ServiceData;                                       // 0x10(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct CharacterCollectionMapScreen.CollectionScreenServiceData
struct FCollectionScreenServiceData
{
public:
	class UDataTable*                            ServiceDataTable;                                  // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            SpecializationDataTable;                           // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SeasonDataTableServicesTag;                        // 0x10(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SeasonDataTableSalesTag;                           // 0x14(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NpcPricingKeyRemapsTag;                            // 0x18(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F58[0x4];                                     // Fixing Size After Last Property..
	class UCurveTable*                           ItemCostTable;                                     // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveTable*                           ServiceCostTable;                                  // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AllowedServiceTagsForIcon;                         // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SpecializationTagRoot;                             // 0x50(0x4)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F59[0x4];                                     // Fixing Size After Last Property..
	class FText                                  ItemNameAndCountFmt;                               // 0x58(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

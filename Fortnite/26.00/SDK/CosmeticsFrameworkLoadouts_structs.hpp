#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct CosmeticsFrameworkLoadouts.CosmeticCustomizationInfo
struct FCosmeticCustomizationInfo
{
public:
	struct FGameplayTag                          ChannelTag;                                        // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariantTag;                                        // 0x4(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AdditionalData;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutSlot
struct FCosmeticBackendLoadoutSlot
{
public:
	struct FPrimaryAssetId                       SlotTemplate;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetId                       EquippedItem;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCosmeticCustomizationInfo>    CustomizationInfo;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CosmeticsFrameworkLoadouts.CosmeticBackendLoadout
struct FCosmeticBackendLoadout
{
public:
	TArray<struct FCosmeticBackendLoadoutSlot>   Slots;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UserTags;                                          // 0x10(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotRequirements
struct FCosmeticLoadoutSlotRequirements
{
public:
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DeniedTags;                                        // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UObject>>         AllowedItemClasses;                                // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

}



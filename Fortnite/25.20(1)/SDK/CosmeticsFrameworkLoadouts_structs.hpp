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

// 0x18 (0x18 - 0x0)
// ScriptStruct CosmeticsFrameworkLoadouts.CosmeticCustomizationInfo
struct FCosmeticCustomizationInfo
{
public:
	struct FGameplayTag                          ChannelTag;                                        // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariantTag;                                        // 0x4(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AdditionalData;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

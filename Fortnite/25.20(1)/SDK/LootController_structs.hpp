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

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LootController.BuildingContainersArrayEntry
struct FBuildingContainersArrayEntry
{
public:
	class UBuildingContainer*                    BuildingContainer;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C3[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SearchLootTierGroup;                               // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C4[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x78(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C5[0x8];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LootController.BuildingContainersFoundEntry
struct FBuildingContainersFoundEntry
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C6[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FBuildingContainersArrayEntry> BuildingContainers;                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

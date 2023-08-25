#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutItemDefinition
class UCosmeticLoadoutItemDefinition : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UCosmeticLoadoutItemDefinition* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema
class UCosmeticLoadoutSchema : public UPrimaryDataAsset
{
public:
	TArray<class UCosmeticLoadoutSlotTemplate*>  Slots;                                             // 0x30(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCosmeticLoadoutSchema* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate
class UCosmeticLoadoutSlotTemplate : public UPrimaryDataAsset
{
public:
	struct FGameplayTag                          SlotTag;                                           // 0x30(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_281C[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagContainer                 MetaTags;                                          // 0x38(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FCosmeticLoadoutSlotRequirements      Requirements;                                      // 0x58(0x50)(Edit, NativeAccessSpecifierPrivate)
	struct FPrimaryAssetId                       DefaultCosmeticItemId;                             // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCosmeticLoadoutSlotTemplate* GetDefaultObj();

	struct FGameplayTag GetSlotTag();
	struct FCosmeticLoadoutSlotRequirements GetRequirements();
	struct FGameplayTagContainer GetMetaTags();
	struct FPrimaryAssetId GetDefaultCosmeticItemId();
};

}



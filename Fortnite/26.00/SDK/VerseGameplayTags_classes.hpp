#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x70 - 0x58)
// Class VerseGameplayTags.EntityTagContainerComponent
class UEntityTagContainerComponent : public UEntityComponent
{
public:
	uint8                                        Pad_2C8B[0x8];                                     // Fixing Size After Last Property 
	struct FVerseGameplayTagContainer            InternalTags;                                      // 0x60(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEntityTagContainerComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class VerseGameplayTags.VerseGameplayTagBase
class UVerseGameplayTagBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseGameplayTagBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class VerseGameplayTags.TaggedObjectQueryWorldSubsystemBase
class UTaggedObjectQueryWorldSubsystemBase : public UWorldSubsystem
{
public:

	static class UClass* StaticClass();
	static class UTaggedObjectQueryWorldSubsystemBase* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class VerseGameplayTags.TagRegistrationHandler
class UTagRegistrationHandler : public UObject
{
public:
	uint8                                        Pad_2CA8[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UTagRegistrationHandler* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class VerseGameplayTags.VerseGameplayTagContainerBase
class UVerseGameplayTagContainerBase : public UObject
{
public:
	uint8                                        Pad_2CAB[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseGameplayTagContainerBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class VerseGameplayTags.VerseGameplayTagAssetInterface
class UVerseGameplayTagAssetInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UVerseGameplayTagAssetInterface* GetDefaultObj();

	bool HasMatchingGameplayTag(const struct FVerseGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(struct FVerseGameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct FVerseGameplayTagContainer* TagContainer);
};

// 0x18 (0xB8 - 0xA0)
// Class VerseGameplayTags.VerseTagMarkupComponent
class UVerseTagMarkupComponent : public UActorComponent
{
public:
	uint8                                        Pad_2CC9[0x8];                                     // Fixing Size After Last Property 
	struct FVerseGameplayTagContainer            InternalTags;                                      // 0xA8(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVerseTagMarkupComponent* GetDefaultObj();

};

}



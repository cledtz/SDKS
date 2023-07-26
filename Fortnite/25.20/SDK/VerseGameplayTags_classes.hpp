#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x78 - 0x60)
// Class VerseGameplayTags.EntityTagContainerComponent
class UEntityTagContainerComponent : public UEntityComponent
{
public:
	uint8                                        Pad_79C8[0x8];                                     // Fixing Size After Last Property..
	struct FVerseGameplayTagContainer            InternalTags;                                      // 0x68(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EntityTagContainerComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class VerseGameplayTags.VerseGameplayTagBase
class UVerseGameplayTagBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseGameplayTagBase");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class VerseGameplayTags.TaggedObjectQueryWorldSubsystemBase
class UTaggedObjectQueryWorldSubsystemBase : public UWorldSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TaggedObjectQueryWorldSubsystemBase");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class VerseGameplayTags.TagRegistrationHandler
class UTagRegistrationHandler : public UObject
{
public:
	uint8                                        Pad_79C9[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TagRegistrationHandler");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class VerseGameplayTags.VerseGameplayTagContainerBase
class UVerseGameplayTagContainerBase : public UObject
{
public:
	uint8                                        Pad_79CA[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseGameplayTagContainerBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class VerseGameplayTags.VerseGameplayTagAssetInterface
class UVerseGameplayTagAssetInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseGameplayTagAssetInterface");
		return Clss;
	}

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
	uint8                                        Pad_79CE[0x8];                                     // Fixing Size After Last Property..
	struct FVerseGameplayTagContainer            InternalTags;                                      // 0xA8(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseTagMarkupComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

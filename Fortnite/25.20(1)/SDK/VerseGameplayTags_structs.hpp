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

// 0x8 (0x8 - 0x0)
// ScriptStruct VerseGameplayTags.VerseGameplayTag
struct FVerseGameplayTag
{
public:
	TSubclassOf<class UVerseGameplayTagBase>     InternalTag;                                       // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VerseGameplayTags.VerseGameplayTagContainer
struct FVerseGameplayTagContainer
{
public:
	TArray<struct FVerseGameplayTag>             InternalTags;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct VerseGameplayTags.TaggedObjectFinderEntry
struct FTaggedObjectFinderEntry
{
public:
	struct FVerseGameplayTagContainer            RequiredTags;                                      // 0x0(0x10)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVerseGameplayTagContainer            PreferredTags;                                     // 0x10(0x10)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVerseGameplayTagContainer            ExclusionTags;                                     // 0x20(0x10)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

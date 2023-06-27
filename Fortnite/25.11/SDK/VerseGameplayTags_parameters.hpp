#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasMatchingGameplayTag
struct UVerseGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
public:
	struct FVerseGameplayTag                     TagToCheck;                                        // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D8[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct UVerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
public:
	struct FVerseGameplayTagContainer            TagContainer;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D9[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasAllMatchingGameplayTags
struct UVerseGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
public:
	struct FVerseGameplayTagContainer            TagContainer;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DA[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function VerseGameplayTags.VerseGameplayTagAssetInterface.GetOwnedGameplayTags
struct UVerseGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
public:
	struct FVerseGameplayTagContainer            TagContainer;                                      // 0x0(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

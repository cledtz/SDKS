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

// 0x14 (0x14 - 0x0)
// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
struct UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Params
{
public:
	struct FGameplayStatTag                      A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayStatTag                      B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42AD[0x3];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
struct UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Params
{
public:
	struct FGameplayStatTag                      A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayStatTag                      B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42AE[0x3];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

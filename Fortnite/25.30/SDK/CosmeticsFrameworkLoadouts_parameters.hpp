#pragma once

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

// 0x4 (0x4 - 0x0)
// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetSlotTag
struct UCosmeticLoadoutSlotTemplate_GetSlotTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetRequirements
struct UCosmeticLoadoutSlotTemplate_GetRequirements_Params
{
public:
	struct FCosmeticLoadoutSlotRequirements      ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetMetaTags
struct UCosmeticLoadoutSlotTemplate_GetMetaTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetDefaultCosmeticItemId
struct UCosmeticLoadoutSlotTemplate_GetDefaultCosmeticItemId_Params
{
public:
	struct FPrimaryAssetId                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

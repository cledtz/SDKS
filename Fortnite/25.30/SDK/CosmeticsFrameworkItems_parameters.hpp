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

// 0x0 (0x0 - 0x0)
// Function CosmeticsFrameworkItems.CosmeticDataComponent.ResetProperties
struct UCosmeticDataComponent_ResetProperties_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CosmeticsFrameworkItems.CosmeticDataComponent.BP_FindProperty
struct UCosmeticDataComponent_BP_FindProperty_Params
{
public:
	struct FGameplayTag                          SlotTag;                                           // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PropertyTag;                                       // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCosmeticPropertyBase                 OutProperty;                                       // 0x8(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD4[0x3];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function CosmeticsFrameworkItems.CosmeticDataComponent.BP_AddOrOverrideProperty
struct UCosmeticDataComponent_BP_AddOrOverrideProperty_Params
{
public:
	struct FGameplayTag                          SlotTag;                                           // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCosmeticPropertyBase                 Property;                                          // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD6[0x3];                                     // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

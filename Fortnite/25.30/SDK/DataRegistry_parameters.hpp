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

// 0xC (0xC - 0x0)
// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
struct UDataRegistrySubsystem_NotEqual_DataRegistryType_Params
{
public:
	struct FDataRegistryType                     A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistryType                     B;                                                 // 0x4(0x4)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A0[0x3];                                      // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
struct UDataRegistrySubsystem_NotEqual_DataRegistryId_Params
{
public:
	struct FDataRegistryId                       A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistryId                       B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A8[0x3];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
struct UDataRegistrySubsystem_IsValidDataRegistryType_Params
{
public:
	struct FDataRegistryType                     DataRegistryType;                                  // 0x0(0x4)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AD[0x3];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
struct UDataRegistrySubsystem_IsValidDataRegistryId_Params
{
public:
	struct FDataRegistryId                       DataRegistryId;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B1[0x3];                                      // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
struct UDataRegistrySubsystem_GetCachedItemFromLookupBP_Params
{
public:
	struct FDataRegistryId                       ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistryLookup                   ResolvedLookup;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowBase                         OutItem;                                           // 0x20(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B7[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
struct UDataRegistrySubsystem_GetCachedItemBP_Params
{
public:
	struct FDataRegistryId                       ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowBase                         OutItem;                                           // 0x8(0x8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BB[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
struct UDataRegistrySubsystem_FindCachedItemBP_Params
{
public:
	struct FDataRegistryId                       ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataRegistrySubsystemGetItemResult OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C1[0x7];                                      // Fixing Size After Last Property
	struct FTableRowBase                         OutItem;                                           // 0x10(0x8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
struct UDataRegistrySubsystem_EvaluateDataRegistryCurve_Params
{
public:
	struct FDataRegistryId                       ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputValue;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDataRegistrySubsystemGetItemResult OutResult;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C9[0x3];                                      // Fixing Size After Last Property
	float                                        OutValue;                                          // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
struct UDataRegistrySubsystem_EqualEqual_DataRegistryType_Params
{
public:
	struct FDataRegistryType                     A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistryType                     B;                                                 // 0x4(0x4)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CC[0x3];                                      // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
struct UDataRegistrySubsystem_EqualEqual_DataRegistryId_Params
{
public:
	struct FDataRegistryId                       A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistryId                       B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CF[0x3];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
struct UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Params
{
public:
	struct FDataRegistryType                     DataRegistryType;                                  // 0x0(0x4)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D1[0x4];                                      // Fixing Size After Last Property
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
struct UDataRegistrySubsystem_Conv_DataRegistryIdToString_Params
{
public:
	struct FDataRegistryId                       DataRegistryId;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
struct UDataRegistrySubsystem_AcquireItemBP_Params
{
public:
	struct FDataRegistryId                       ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           AcquireCallback;                                   // 0x8(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D7[0x3];                                      // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x18 (0x18 - 0x0)
// Function StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
struct UStructUtilsFunctionLibrary_SetInstancedStructValue_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3761[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function StructUtilsEngine.StructUtilsFunctionLibrary.Reset
struct UStructUtilsFunctionLibrary_Reset_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UScriptStruct*                         StructType;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
struct UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      A;                                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      B;                                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3762[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
struct UStructUtilsFunctionLibrary_MakeInstancedStruct_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3763[0x4];                                     // Fixing Size After Last Property..
	struct FInstancedStruct                      ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
struct UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3764[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
struct UStructUtilsFunctionLibrary_IsInstancedStructValid_Params
{
public:
	struct FInstancedStruct                      InstancedStruct;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EStructUtilsResult                ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3765[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
struct UStructUtilsFunctionLibrary_GetInstancedStructValue_Params
{
public:
	enum class EStructUtilsResult                ExecResult;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3766[0x7];                                     // Fixing Size After Last Property..
	struct FInstancedStruct                      InstancedStruct;                                   // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3767[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
struct UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params
{
public:
	struct FInstancedStruct                      A;                                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      B;                                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3768[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

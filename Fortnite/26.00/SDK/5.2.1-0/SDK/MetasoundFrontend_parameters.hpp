#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetTrigger
struct UMetasoundParameterPack_SetTrigger_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyIfExists;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFD[0x2];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetString
struct UMetasoundParameterPack_SetString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InValue;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyIfExists;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C02[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetInt
struct UMetasoundParameterPack_SetInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InValue;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyIfExists;                                      // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C07[0x2];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetFloat
struct UMetasoundParameterPack_SetFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyIfExists;                                      // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0C[0x2];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.SetBool
struct UMetasoundParameterPack_SetBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InValue;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyIfExists;                                      // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C10[0x1];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
struct UMetasoundParameterPack_MakeMetasoundParameterPack_Params
{
public:
	class UMetasoundParameterPack*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
struct UMetasoundParameterPack_HasTrigger_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C16[0x3];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasString
struct UMetasoundParameterPack_HasString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C20[0x3];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasInt
struct UMetasoundParameterPack_HasInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C42[0x3];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasFloat
struct UMetasoundParameterPack_HasFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C46[0x3];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.HasBool
struct UMetasoundParameterPack_HasBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C4A[0x3];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
struct UMetasoundParameterPack_GetTrigger_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C59[0x2];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetString
struct UMetasoundParameterPack_GetString_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C62[0x7];                                     // Fixing Size After Last Property 
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetInt
struct UMetasoundParameterPack_GetInt_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C67[0x3];                                     // Fixing Size After Last Property 
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetFloat
struct UMetasoundParameterPack_GetFloat_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C69[0x3];                                     // Fixing Size After Last Property 
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MetasoundFrontend.MetasoundParameterPack.GetBool
struct UMetasoundParameterPack_GetBool_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetParamResult                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C70[0x2];                                     // Fixing Size Of Struct
};

}
}



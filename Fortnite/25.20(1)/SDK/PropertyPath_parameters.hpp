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

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.SetStructRef
struct UPropertyPathTestObject_SetStructRef_Params
{
public:
	struct FPropertyPathTestStruct               InStruct;                                          // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.SetStructConstRef
struct UPropertyPathTestObject_SetStructConstRef_Params
{
public:
	struct FPropertyPathTestStruct               InStruct;                                          // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.SetStruct
struct UPropertyPathTestObject_SetStruct_Params
{
public:
	struct FPropertyPathTestStruct               InStruct;                                          // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PropertyPath.PropertyPathTestObject.SetFloat
struct UPropertyPathTestObject_SetFloat_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.GetStructRef
struct UPropertyPathTestObject_GetStructRef_Params
{
public:
	struct FPropertyPathTestStruct               ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.GetStructConstRef
struct UPropertyPathTestObject_GetStructConstRef_Params
{
public:
	struct FPropertyPathTestStruct               ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function PropertyPath.PropertyPathTestObject.GetStruct
struct UPropertyPathTestObject_GetStruct_Params
{
public:
	struct FPropertyPathTestStruct               ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function PropertyPath.PropertyPathTestObject.GetFloat
struct UPropertyPathTestObject_GetFloat_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint
struct UConstraintsScriptingLibrary_RemoveThisConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTickableConstraint*                   InTickableConstraint;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7A[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint
struct UConstraintsScriptingLibrary_RemoveConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InIndex;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7B[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.GetManager
struct UConstraintsScriptingLibrary_GetManager_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConstraintsManager*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray
struct UConstraintsScriptingLibrary_GetConstraintsArray_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTickableConstraint*>           ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle
struct UConstraintsScriptingLibrary_CreateTransformableHandle_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               InObject;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InAttachmentName;                                  // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7C[0x4];                                     // Fixing Size After Last Property..
	class UTransformableHandle*                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle
struct UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       InSceneComponent;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InSocketName;                                      // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7D[0x4];                                     // Fixing Size After Last Property..
	class UTransformableComponentHandle*         ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.CreateFromType
struct UConstraintsScriptingLibrary_CreateFromType_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformConstraintType          InType;                                            // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7E[0x7];                                     // Fixing Size After Last Property..
	class UTickableTransformConstraint*          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Constraints.ConstraintsScriptingLibrary.AddConstraint
struct UConstraintsScriptingLibrary_AddConstraint_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableHandle*                  InParentHandle;                                    // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableHandle*                  InChildHandle;                                     // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTickableTransformConstraint*          InConstraint;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7F[0x6];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x18 (0x18 - 0x0)
// Function Chooser.ChooserFunctionLibrary.MakeEvaluateChooser
struct UChooserFunctionLibrary_MakeEvaluateChooser_Params
{
public:
	class UChooserTable*                         Chooser;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Chooser.ChooserFunctionLibrary.GetChooserStructOutput
struct UChooserFunctionLibrary_GetChooserStructOutput_Params
{
public:
	struct FChooserEvaluationContext             Context;                                           // 0x0(0x48)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBaseMulti
struct UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Params
{
public:
	struct FChooserEvaluationContext             Context;                                           // 0x0(0x48)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      ObjectChooser;                                     // 0x48(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   ObjectClass;                                       // 0x58(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x60(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBase
struct UChooserFunctionLibrary_EvaluateObjectChooserBase_Params
{
public:
	struct FChooserEvaluationContext             Context;                                           // 0x0(0x48)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      ObjectChooser;                                     // 0x48(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   ObjectClass;                                       // 0x58(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Chooser.ChooserFunctionLibrary.EvaluateChooserMulti
struct UChooserFunctionLibrary_EvaluateChooserMulti_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChooserTable*                         ChooserTable;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   ObjectClass;                                       // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Chooser.ChooserFunctionLibrary.EvaluateChooser
struct UChooserFunctionLibrary_EvaluateChooser_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChooserTable*                         ChooserTable;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   ObjectClass;                                       // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Chooser.ChooserFunctionLibrary.AddChooserStructInput
struct UChooserFunctionLibrary_AddChooserStructInput_Params
{
public:
	struct FChooserEvaluationContext             Context;                                           // 0x0(0x48)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7F[0x4];                                      // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// Function Chooser.ChooserFunctionLibrary.AddChooserObjectInput
struct UChooserFunctionLibrary_AddChooserObjectInput_Params
{
public:
	struct FChooserEvaluationContext             Context;                                           // 0x0(0x48)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x48(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

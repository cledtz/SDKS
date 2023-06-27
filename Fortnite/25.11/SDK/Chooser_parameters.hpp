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

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

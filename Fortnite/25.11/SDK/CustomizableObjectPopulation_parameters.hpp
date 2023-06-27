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

// 0x20 (0x20 - 0x0)
// Function CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation
struct UCustomizableObjectPopulation_RegeneratePopulation_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8295[0x4];                                     // Fixing Size After Last Property..
	TArray<class UCustomizableObjectInstance*>   OutInstances;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumInstancesToGenerate;                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8296[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function CustomizableObjectPopulation.CustomizableObjectPopulation.GeneratePopulation
struct UCustomizableObjectPopulation_GeneratePopulation_Params
{
public:
	TArray<class UCustomizableObjectInstance*>   OutInstances;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumInstancesToGenerate;                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

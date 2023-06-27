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

// 0x14 (0x14 - 0x0)
// Function CosmeticsFrameworkEvents.CosmeticsEventTarget.RegisterOnCosmeticApplicationCompleted_BP
struct UCosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Flags;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCosmeticsEventHandle                 ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E8C[0x3];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

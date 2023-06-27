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

// 0x120 (0x120 - 0x0)
// Function EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetBlurl
struct UEpicMediaMetadataResolver_GetBlurl_Params
{
public:
	class FString                                InVUID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBlurlLive;                                      // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FE[0x7];                                     // Fixing Size After Last Property..
	struct FEpicMediaOptions                     InMediaOptions;                                    // 0x18(0x100)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x118(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FF[0x7];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

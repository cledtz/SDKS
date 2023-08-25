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

// 0x128 (0x128 - 0x0)
// Function EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetData
struct UEpicMediaMetadataResolver_GetData_Params
{
public:
	class FString                                UID;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLive;                                             // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE8[0x7];                                     // Fixing Size After Last Property 
	struct FEpicMediaOptions                     InMediaOptions;                                    // 0x18(0x108)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x120(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEA[0x7];                                     // Fixing Size Of Struct
};

// 0x128 (0x128 - 0x0)
// Function EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetBlurl
struct UEpicMediaMetadataResolver_GetBlurl_Params
{
public:
	class FString                                InVUID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBlurlLive;                                      // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEF[0x7];                                     // Fixing Size After Last Property 
	struct FEpicMediaOptions                     InMediaOptions;                                    // 0x18(0x108)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x120(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF0[0x7];                                     // Fixing Size Of Struct
};

}
}



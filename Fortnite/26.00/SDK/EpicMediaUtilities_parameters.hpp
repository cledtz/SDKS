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

// 0x8 (0x8 - 0x0)
// Function EpicMediaUtilities.EpicMediaServerTime.ServerRequestServerTime
struct UEpicMediaServerTime_ServerRequestServerTime_Params
{
public:
	double                                       RequestUtcTime;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EpicMediaUtilities.EpicMediaServerTime.GetTimeUtc
struct UEpicMediaServerTime_GetTimeUtc_Params
{
public:
	struct FDateTime                             OutDateTime;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E7D[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function EpicMediaUtilities.EpicMediaServerTime.ClientReportServerTime
struct UEpicMediaServerTime_ClientReportServerTime_Params
{
public:
	double                                       RequestUtcTime;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ServerUtcTime;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



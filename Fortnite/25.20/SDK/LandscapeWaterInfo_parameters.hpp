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

// 0x0 (0x0 - 0x0)
// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay
struct ALandscapeWaterInfo_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level
struct ALandscapeWaterInfo_C_Set_Flood_Water_Level_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo
struct ALandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FD6[0x4];                                     // Fixing Size After Last Property..
	class UWaterSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

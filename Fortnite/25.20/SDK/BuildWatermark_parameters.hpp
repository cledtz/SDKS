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
// Function BuildWatermark.BuildWatermark_C.Construct
struct UBuildWatermark_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
struct UBuildWatermark_C_HandlePartyJoined_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildWatermark.BuildWatermark_C.Destruct
struct UBuildWatermark_C_Destruct_Params
{
public:
};

// 0x250 (0x250 - 0x0)
// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
struct UBuildWatermark_C_HandlePlayerStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   PlayerInfo;                                        // 0x0(0x250)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
struct UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF0[0x4];                                     // Fixing Size After Last Property..
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF1[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF2[0x4];                                     // Fixing Size After Last Property..
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_PlayerInfo;                     // 0x30(0x250)(ConstParm, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

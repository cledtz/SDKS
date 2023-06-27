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

// 0x69 (0x69 - 0x0)
// Function BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.PrintParameter
struct UBP_AudioParameterComponent_Pawn_C_PrintParameter_Params
{
public:
	struct FAudioParameterQueryData              Parameter;                                         // 0x0(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         Condition;                                         // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.OnViewTargetSet
struct UBP_AudioParameterComponent_Pawn_C_OnViewTargetSet_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.ExecuteUbergraph_BP_AudioParameterComponent_Pawn
struct UBP_AudioParameterComponent_Pawn_C_ExecuteUbergraph_BP_AudioParameterComponent_Pawn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A045[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_Actor;                                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

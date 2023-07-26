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

// 0xD9 (0xD9 - 0x0)
// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnRemove
struct AGCNL_PurpleStuff_C_OnRemove_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE9 (0xE9 - 0x0)
// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnActive
struct AGCNL_PurpleStuff_C_OnActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80C4[0x7];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_Generic_C*          K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;   // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveBeginPlay
struct AGCNL_PurpleStuff_C_ReceiveBeginPlay_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveTick
struct AGCNL_PurpleStuff_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ExecuteUbergraph_GCNL_PurpleStuff
struct AGCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80C5[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xD0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80C6[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetShield_ReturnValue;                    // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_80C7[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_DeltaSeconds;                         // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

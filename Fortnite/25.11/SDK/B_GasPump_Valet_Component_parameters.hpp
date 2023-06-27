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
// Function B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveBeginPlay
struct UB_GasPump_Valet_Component_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveEndPlay
struct UB_GasPump_Valet_Component_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ExecuteUbergraph_B_GasPump_Valet_Component
struct UB_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79F2[0x3];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79F3[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79F4[0x1];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue;           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79F5[0x6];                                     // Fixing Size After Last Property..
	class UFortGameStateComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValet_GasPumpIndicatorManagerV2_C*    K2Node_DynamicCast_AsValet_Gas_Pump_Indicator_Manager_V2; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79F6[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

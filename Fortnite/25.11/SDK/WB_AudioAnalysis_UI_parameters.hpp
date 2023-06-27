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

// 0xB0 (0xB0 - 0x0)
// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddScalarParameter
struct UWB_AudioAnalysis_UI_C_AddScalarParameter_Params
{
public:
	struct FAudioAnalysisParameterScalar         Param;                                             // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC0 (0xC0 - 0x0)
// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddVectorParameter
struct UWB_AudioAnalysis_UI_C_AddVectorParameter_Params
{
public:
	struct FAudioAnalysisParameterVector         Param;                                             // 0x0(0xC0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ClearParameters
struct UWB_AudioAnalysis_UI_C_ClearParameters_Params
{
public:
};

// 0x1D0 (0x1D0 - 0x0)
// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI
struct UWB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A8C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A8D[0x4];                                     // Fixing Size After Last Property..
	struct FAudioAnalysisParameterScalar         K2Node_Event_Param_1;                              // 0x20(0xB0)(ConstParm)
	class UWB_AudioAnalysis_FloatGraph_C*        CallFunc_Array_Get_Item;                           // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A8E[0x4];                                     // Fixing Size After Last Property..
	struct FAudioAnalysisParameterVector         K2Node_Event_Param;                                // 0xE0(0xC0)(ConstParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A8F[0x7];                                     // Fixing Size After Last Property..
	class UWB_AudioAnalysis_FloatGraph_C*        CallFunc_Create_ReturnValue;                       // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWB_AudioAnalysis_FloatGraph_C*        CallFunc_Create_ReturnValue_1;                     // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

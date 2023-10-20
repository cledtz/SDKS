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

// 0x0 (0x0 - 0x0)
// Function BP_Item_Gear_Watch_02.BP_Item_Gear_Watch_02_C.ReceiveBeginPlay
struct UBP_Item_Gear_Watch_02_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Item_Gear_Watch_02.BP_Item_Gear_Watch_02_C.EnableFunctional
struct UBP_Item_Gear_Watch_02_C_EnableFunctional_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Item_Gear_Watch_02.BP_Item_Gear_Watch_02_C.SaveKillsProgress
struct UBP_Item_Gear_Watch_02_C_SaveKillsProgress_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_Item_Gear_Watch_02.BP_Item_Gear_Watch_02_C.OnAddedGameScore_Event
struct UBP_Item_Gear_Watch_02_C_OnAddedGameScore_Event_Params
{
public:
	TArray<struct FScoreInfoBlueprint>           ScoreInfos;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x68 (0x68 - 0x0)
// Function BP_Item_Gear_Watch_02.BP_Item_Gear_Watch_02_C.SaveWatchProgress_Success
struct UBP_Item_Gear_Watch_02_C_SaveWatchProgress_Success_Params
{
public:
	struct FClientExecuteCloudScriptResult       Result;                                            // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_Item_Gear_Watch_02.BP_Item_Gear_Watch_02_C.SaveWatchProgress_Failure
struct UBP_Item_Gear_Watch_02_C_SaveWatchProgress_Failure_Params
{
public:
	struct FPlayFabError                         Error;                                             // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               CustomData;                                        // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x260 (0x260 - 0x0)
// Function BP_Item_Gear_Watch_02.BP_Item_Gear_Watch_02_C.ExecuteUbergraph_BP_Item_Gear_Watch_02
struct UBP_Item_Gear_Watch_02_C_ExecuteUbergraph_BP_Item_Gear_Watch_02_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28C8[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28CA[0x3];                                     // Fixing Size After Last Property 
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Base*                  K2Node_DynamicCast_AsPG_Player_State_Base;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28CD[0x7];                                     // Fixing Size After Last Property 
	class UPG_PlayerState_Game*                  K2Node_DynamicCast_AsPG_Player_State_Game;         // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28CF[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x50(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D0[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D3[0x4];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D4[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D5[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D6[0x7];                                     // Fixing Size After Last Property 
	class UPawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_Game_Character*                    K2Node_DynamicCast_AsPG_Game_Character;            // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D7[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D8[0x5];                                     // Fixing Size After Last Property 
	TArray<struct FScoreInfoBlueprint>           K2Node_CustomEvent_ScoreInfos;                     // 0xC0(0x10)(ConstParm, ReferenceParm)
	struct FScoreInfoBlueprint                   CallFunc_Array_Get_Item_1;                         // 0xD0(0x10)(NoDestructor)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xE0(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D9[0x3];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue;               // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNumberField_ReturnValue_1;             // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28DB[0x4];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x118(0x18)(None)
	class UUserWidget*                           CallFunc_GetWidget_ReturnValue;                    // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Item_Gear_Watch_02_Display_C*      K2Node_DynamicCast_AsUI_Item_Gear_Watch_02_Display; // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28DC[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x144(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28DD[0x4];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28DE[0x3];                                     // Fixing Size After Last Property 
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x168(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x180(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FClientExecuteCloudScriptResult       K2Node_CustomEvent_result;                         // 0x190(0x60)(None)
	class UObject*                               K2Node_CustomEvent_customData_1;                   // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1F8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FPlayFabError                         K2Node_CustomEvent_error;                          // 0x200(0x38)(None)
	class UObject*                               K2Node_CustomEvent_customData;                     // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28DF[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28E0[0x3];                                     // Fixing Size After Last Property 
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



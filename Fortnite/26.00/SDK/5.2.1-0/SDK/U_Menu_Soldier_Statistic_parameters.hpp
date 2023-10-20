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

// 0xB0 (0xB0 - 0x0)
// Function U_Menu_Soldier_Statistic.U_Menu_Soldier_Statistic_C.ParsePlayerCombinedInfo
struct UU_Menu_Soldier_Statistic_C_ParsePlayerCombinedInfo_Params
{
public:
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_PlayerState_Menu*                  K2Node_DynamicCast_AsPG_Player_State_Menu;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D79[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7C[0x7];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7F[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(None)
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x98(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function U_Menu_Soldier_Statistic.U_Menu_Soldier_Statistic_C.OnUpdatePlayerCombinedInfo_Event
struct UU_Menu_Soldier_Statistic_C_OnUpdatePlayerCombinedInfo_Event_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CustomString;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function U_Menu_Soldier_Statistic.U_Menu_Soldier_Statistic_C.Construct
struct UU_Menu_Soldier_Statistic_C_Construct_Params
{
public:
};

// 0x5C (0x5C - 0x0)
// Function U_Menu_Soldier_Statistic.U_Menu_Soldier_Statistic_C.ExecuteUbergraph_U_Menu_Soldier_Statistic
struct UU_Menu_Soldier_Statistic_C_ExecuteUbergraph_U_Menu_Soldier_Statistic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D91[0x3];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_CustomEvent_ModifiedData;                   // 0x10(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_CustomString;                   // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Menu_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Menu;      // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D94[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D95[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}



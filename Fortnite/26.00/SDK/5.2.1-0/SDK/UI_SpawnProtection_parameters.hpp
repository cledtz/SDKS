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
// Function UI_SpawnProtection.UI_SpawnProtection_C.OnHealthProtection_Event
struct UUI_SpawnProtection_C_OnHealthProtection_Event_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UI_SpawnProtection.UI_SpawnProtection_C.OnPossessedPawnChanged_Event
struct UUI_SpawnProtection_C_OnPossessedPawnChanged_Event_Params
{
public:
	class UPawn*                                 OldPawn;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 NewPawn;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnProtection.UI_SpawnProtection_C.Construct
struct UUI_SpawnProtection_C_Construct_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function UI_SpawnProtection.UI_SpawnProtection_C.ExecuteUbergraph_UI_SpawnProtection
struct UUI_SpawnProtection_C_ExecuteUbergraph_UI_SpawnProtection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14BE[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14BF[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_Game_Character_C*               K2Node_DynamicCast_AsBP_PG_Game_Character;         // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHealthProtection_ReturnValue;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14C0[0x6];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14C1[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 K2Node_CustomEvent_OldPawn;                        // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 K2Node_CustomEvent_NewPawn;                        // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}



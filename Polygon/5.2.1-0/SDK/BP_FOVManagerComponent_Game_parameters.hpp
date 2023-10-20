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
// Function BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C.ReceiveBeginPlay
struct UBP_FOVManagerComponent_Game_C_ReceiveBeginPlay_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C.OnPossessedPawnChanged_Event
struct UBP_FOVManagerComponent_Game_C_OnPossessedPawnChanged_Event_Params
{
public:
	class UPawn*                                 OldPawn;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 NewPawn;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C.OnAiming_Event
struct UBP_FOVManagerComponent_Game_C_OnAiming_Event_Params
{
public:
	class UItem_Module_Optic*                    OpticItem;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C.ExecuteUbergraph_BP_FOVManagerComponent_Game
struct UBP_FOVManagerComponent_Game_C_ExecuteUbergraph_BP_FOVManagerComponent_Game_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2089[0x4];                                     // Fixing Size After Last Property 
	class UItem_Module_Optic*                    K2Node_CustomEvent_OpticItem;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_FOVManagerComponent_AimingInterpolation_C* CallFunc_CreateAction_ReturnValue;                 // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 K2Node_CustomEvent_OldPawn;                        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 K2Node_CustomEvent_NewPawn;                        // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_208C[0x7];                                     // Fixing Size After Last Property 
	class UPG_Game_Character*                    K2Node_DynamicCast_AsPG_Game_Character;            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_208D[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}



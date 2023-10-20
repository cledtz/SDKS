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
// Function BP_PG_PlayerState_Game.BP_PG_PlayerState_Game_C.ReceiveBeginPlay
struct UBP_PG_PlayerState_Game_C_ReceiveBeginPlay_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_PG_PlayerState_Game.BP_PG_PlayerState_Game_C.OnNotifyPossibilityUnlockModule_Event
struct UBP_PG_PlayerState_Game_C_OnNotifyPossibilityUnlockModule_Event_Params
{
public:
	class FString                                ModuleName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_PG_PlayerState_Game.BP_PG_PlayerState_Game_C.ExecuteUbergraph_BP_PG_PlayerState_Game
struct UBP_PG_PlayerState_Game_C_ExecuteUbergraph_BP_PG_PlayerState_Game_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A7[0x4];                                     // Fixing Size After Last Property 
	class FString                                K2Node_CustomEvent_ModuleName;                     // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UUI_Game_NotifyPossibilityUnlockModule_C* CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



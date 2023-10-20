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

// 0x18 (0x18 - 0x0)
// Function BP_Item_Accessory_Flashlight_01.BP_Item_Accessory_Flashlight_01_C.InpActEvt_Flashlight_K2Node_InputActionEvent_0
struct UBP_Item_Accessory_Flashlight_01_C_InpActEvt_Flashlight_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Item_Accessory_Flashlight_01.BP_Item_Accessory_Flashlight_01_C.ReceiveBeginPlay
struct UBP_Item_Accessory_Flashlight_01_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_Item_Accessory_Flashlight_01.BP_Item_Accessory_Flashlight_01_C.OnChangeEnableState
struct UBP_Item_Accessory_Flashlight_01_C_OnChangeEnableState_Params
{
public:
	bool                                         bPlaySound;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5B (0x5B - 0x0)
// Function BP_Item_Accessory_Flashlight_01.BP_Item_Accessory_Flashlight_01_C.ExecuteUbergraph_BP_Item_Accessory_Flashlight_01
struct UBP_Item_Accessory_Flashlight_01_C_ExecuteUbergraph_BP_Item_Accessory_Flashlight_01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AC2[0x4];                                     // Fixing Size After Last Property 
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPlaySound;                           // 0x22(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENetRole                          CallFunc_GetLocalRole_ReturnValue;                 // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENetRole                          CallFunc_GetLocalRole_ReturnValue_1;               // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENetRole                          CallFunc_GetLocalRole_ReturnValue_2;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AC7[0x3];                                     // Fixing Size After Last Property 
	class UPawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPG_Game_Character*                    K2Node_DynamicCast_AsPG_Game_Character;            // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENetRole                          CallFunc_GetLocalRole_ReturnValue_3;               // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ACA[0x6];                                     // Fixing Size After Last Property 
	class UItem_Gun_General*                     CallFunc_GetCurrentGun_ReturnValue;                // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



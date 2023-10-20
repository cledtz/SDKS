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

// 0x10 (0x10 - 0x0)
// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.AddNewItem
struct UUI_SpawnScreen_Loadout_Full_C_AddNewItem_Params
{
public:
	class UPlayFabJsonObject*                    Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_Item;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.Reset
struct UUI_SpawnScreen_Loadout_Full_C_Reset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_WeaponCustomization_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_C_BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_WeaponCustomization_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_General_K2Node_ComponentBoundEvent_1_OnClickBack__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_C_BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_General_K2Node_ComponentBoundEvent_1_OnClickBack__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.InventoryUpdated
struct UUI_SpawnScreen_Loadout_Full_C_InventoryUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.PreConstruct
struct UUI_SpawnScreen_Loadout_Full_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full
struct UUI_SpawnScreen_Loadout_Full_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D77[0x4];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D78[0x7];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7B[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_2; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7E[0x7];                                     // Fixing Size After Last Property 
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D81[0x7];                                     // Fixing Size After Last Property 
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}



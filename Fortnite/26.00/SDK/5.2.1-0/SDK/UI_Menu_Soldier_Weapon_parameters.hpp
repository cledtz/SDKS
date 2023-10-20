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

// 0x23 (0x23 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.SetActiveMenu
struct UUI_Menu_Soldier_Weapon_C_SetActiveMenu_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        L_Index;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D4D[0x5];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.GetSlotByItemClass
struct UUI_Menu_Soldier_Weapon_C_GetSlotByItemClass_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Slot;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_ItemClass;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D58[0x6];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D5A[0x7];                                     // Fixing Size After Last Property 
	class UUserWidget*                           K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.ParsePlayerInventory
struct UUI_Menu_Soldier_Weapon_C_ParsePlayerInventory_Params
{
public:
	struct FST_ItemInfo                          L_ItemInfo;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_ItemJson;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D67[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D69[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D6D[0x7];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x70(0x10)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.OnUpdatePlayerCombinedInfo_Event
struct UUI_Menu_Soldier_Weapon_C_OnUpdatePlayerCombinedInfo_Event_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CustomString;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.PreConstruct
struct UUI_Menu_Soldier_Weapon_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.BndEvt__UI_Solder_Customization_UI_SolderCustomizationSlot_PrimaryWeapon_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
struct UUI_Menu_Soldier_Weapon_C_BndEvt__UI_Solder_Customization_UI_SolderCustomizationSlot_PrimaryWeapon_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature_Params
{
public:
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.BndEvt__UI_Solder_Customization_UI_SolderCustomizationSlot_SecondaryWeapon_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature
struct UUI_Menu_Soldier_Weapon_C_BndEvt__UI_Solder_Customization_UI_SolderCustomizationSlot_SecondaryWeapon_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature_Params
{
public:
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.Construct
struct UUI_Menu_Soldier_Weapon_C_Construct_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function UI_Menu_Soldier_Weapon.UI_Menu_Soldier_Weapon_C.ExecuteUbergraph_UI_Menu_Soldier_Weapon
struct UUI_Menu_Soldier_Weapon_C_ExecuteUbergraph_UI_Menu_Soldier_Weapon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D84[0x2];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_CustomEvent_ModifiedData;                   // 0x10(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_CustomString;                   // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Menu_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Menu;      // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D85[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D87[0x6];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     K2Node_ComponentBoundEvent_Slot_1;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     K2Node_ComponentBoundEvent_Slot;                   // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}



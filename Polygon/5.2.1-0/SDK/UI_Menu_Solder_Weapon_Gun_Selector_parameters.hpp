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

// 0x40 (0x40 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.SetEquippedGun
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_SetEquippedGun_Params
{
public:
	struct FST_ItemInfo                          GunInfo;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemInfo                          L_EquippedWeaponInfo;                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19A5[0x7];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19A6[0x7];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.GetEquippedGunByItemClass
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_GetEquippedGunByItemClass_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* Gun;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19B9[0x7];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19BA[0x7];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.GetGunListByGunClass
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_GetGunListByGunClass_Params
{
public:
	enum class EGunClass                         GunClass;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19BE[0x7];                                     // Fixing Size After Last Property 
	class UListView*                             List;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGunClass                         Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19C0[0x7];                                     // Fixing Size After Last Property 
	class UListView*                             Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UListView*                             K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.SetActiveGunClass
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_SetActiveGunClass_Params
{
public:
	enum class EGunClass                         GunClass;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19DC[0x7];                                     // Fixing Size After Last Property 
	class UUI_Button_C*                          Button;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          L_Button;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGunClass                         L_GunClass;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19DF[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19E0[0x4];                                     // Fixing Size After Last Property 
	class UHorizontalBox*                        K2Node_DynamicCast_AsHorizontal_Box;               // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19E1[0x6];                                     // Fixing Size After Last Property 
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x60(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19E6[0x3];                                     // Fixing Size After Last Property 
	class UListView*                             CallFunc_GetGunListByGunClass_List;                // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19E8[0x4];                                     // Fixing Size After Last Property 
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_DynamicCast_AsUI_Button;                    // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.SetActiveGunSlot
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_SetActiveGunSlot_Params
{
public:
	enum class EGunSlot                          GunSlot;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          L_WeaponSlot;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunClass                         Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A08[0x5];                                     // Fixing Size After Last Property 
	class UUI_Button_C*                          Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable_2;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A09[0x2];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A0B[0x4];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A0D[0x4];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A18[0x7];                                     // Fixing Size After Last Property 
	class UUI_Button_C*                          K2Node_Select_Default_2;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xE9 (0xE9 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.AddGun
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_AddGun_Params
{
public:
	struct FST_ItemInfo                          GunInfo;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemInfo                          L_GunInfo;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A7F[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable;                                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A81[0x2];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A84[0x4];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A85[0x6];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A87[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue_1;             // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_1;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolField_ReturnValue;                 // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A88[0x4];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A8A[0x7];                                     // Fixing Size After Last Property 
	class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* CallFunc_SpawnObject_ReturnValue;                  // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UListView*                             CallFunc_GetGunListByGunClass_List;                // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default;                             // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UListView*                             K2Node_LowEntry_LocalVariable_Value__Object;       // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       CallFunc_GetListItems_ReturnValue;                 // 0xA0(0x10)(ConstParm, ReferenceParm)
	TArray<class UObject*>                       K2Node_LowEntry_LocalVariable_Value__1_Object;     // 0xB0(0x10)(ConstParm, ReferenceParm)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* K2Node_DynamicCast_AsBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry; // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A91[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable_1;                              // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A96[0x5];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Weapon_Gun_Slot_C*     K2Node_Select_Default_1;                           // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF1 (0xF1 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.Reset
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_Reset_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAE[0x4];                                     // Fixing Size After Last Property 
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x20(0x10)(ReferenceParm)
	class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* CallFunc_SpawnObject_ReturnValue;                  // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB1[0x4];                                     // Fixing Size After Last Property 
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x48(0x10)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB2[0x7];                                     // Fixing Size After Last Property 
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x60(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB5[0x7];                                     // Fixing Size After Last Property 
	class UListView*                             K2Node_DynamicCast_AsList_View;                    // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB6[0x7];                                     // Fixing Size After Last Property 
	class UListView*                             CallFunc_GetGunListByGunClass_List;                // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemInfo                          K2Node_MakeStruct_ST_ItemInfo;                     // 0xA0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AB9[0x2];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0xC0(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ABA[0x4];                                     // Fixing Size After Last Property 
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ABB[0x7];                                     // Fixing Size After Last Property 
	class UListView*                             K2Node_DynamicCast_AsList_View_1;                  // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Assault_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Assault_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_SMG_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_SMG_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Marksman_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Marksman_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Sniper_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Sniper_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Shotgun_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Shotgun_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_LMG_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_LMG_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Pistol_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Pistol_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature_Params
{
public:
	class UUI_Button_C*                          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.PreConstruct
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.Tick
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector
struct UUI_Menu_Solder_Weapon_Gun_Selector_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B04[0x4];                                     // Fixing Size After Last Property 
	class UTask_Menu_CameraTransition_C*         CallFunc_CreateAction_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTask_Menu_CameraTransition_C*         CallFunc_CreateAction_ReturnValue_1;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B06[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Temp_name_Variable_1;                              // 0x24(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B07[0x3];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_6;               // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B09[0x7];                                     // Fixing Size After Last Property 
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_5;               // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_4;               // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_3;               // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_2;               // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button_1;               // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_C*                          K2Node_ComponentBoundEvent_Button;                 // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B0E[0x3];                                     // Fixing Size After Last Property 
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x84(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



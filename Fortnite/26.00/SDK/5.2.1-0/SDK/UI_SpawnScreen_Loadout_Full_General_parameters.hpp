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
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.AddNewItem
struct UUI_SpawnScreen_Loadout_Full_General_C_AddNewItem_Params
{
public:
	class UPlayFabJsonObject*                    Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* L_CreatedItem;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_Item;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x201 (0x201 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.OnKeyDown
struct UUI_SpawnScreen_Loadout_Full_General_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x148(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.AddRequestEquipItem
struct UUI_SpawnScreen_Loadout_Full_General_C_AddRequestEquipItem_Params
{
public:
	class FString                                ItemInstanceId;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class EItemType                         ItemType;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemType                         L_ItemType;                                        // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_300E[0x6];                                     // Fixing Size After Last Property 
	class FString                                L_ItemInstanceId;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.GetListByItemClass
struct UUI_SpawnScreen_Loadout_Full_General_C_GetListByItemClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3013[0x7];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3014[0x7];                                     // Fixing Size After Last Property 
	class UScrollBox*                            K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.GetSlotByItemClass
struct UUI_SpawnScreen_Loadout_Full_General_C_GetSlotByItemClass_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_ItemClass;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3019[0x6];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_301A[0x7];                                     // Fixing Size After Last Property 
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.PreConstruct
struct UUI_SpawnScreen_Loadout_Full_General_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.Construct
struct UUI_SpawnScreen_Loadout_Full_General_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.BindItemDelegates
struct UUI_SpawnScreen_Loadout_Full_General_C_BindItemDelegates_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.Item_OnHovered_Event
struct UUI_SpawnScreen_Loadout_Full_General_C_Item_OnHovered_Event_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHover;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.BndEvt__UI_SpawnScreen_Loadout_Full_General_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_General_C_BndEvt__UI_SpawnScreen_Loadout_Full_General_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.SlotOnPressed_Event
struct UUI_SpawnScreen_Loadout_Full_General_C_SlotOnPressed_Event_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.SlotOnHovered_Event
struct UUI_SpawnScreen_Loadout_Full_General_C_SlotOnHovered_Event_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHover;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_PrimaryWeapon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_General_C_BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_PrimaryWeapon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_SecondaryWeapon_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_General_C_BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_SecondaryWeapon_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.Reset
struct UUI_SpawnScreen_Loadout_Full_General_C_Reset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.Back
struct UUI_SpawnScreen_Loadout_Full_General_C_Back_Params
{
public:
};

// 0x1F8 (0x1F8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_General
struct UUI_SpawnScreen_Loadout_Full_General_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_General_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3052[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3054[0x3];                                     // Fixing Size After Last Property 
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3056[0x3];                                     // Fixing Size After Last Property 
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun; // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3058[0x7];                                     // Fixing Size After Last Property 
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3059[0x4];                                     // Fixing Size After Last Property 
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_1; // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305B[0x2];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305C[0x7];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305E[0x7];                                     // Fixing Size After Last Property 
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305F[0x7];                                     // Fixing Size After Last Property 
	class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* K2Node_CustomEvent_Item_1;                         // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* K2Node_CustomEvent_Item;                           // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsHover_1;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3060[0x7];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3061[0x7];                                     // Fixing Size After Last Property 
	struct FST_ItemInfo                          K2Node_MakeStruct_ST_ItemInfo;                     // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* CallFunc_GetSlotByItemClass_Slot;                  // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General_1;      // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3063[0x7];                                     // Fixing Size After Last Property 
	struct FST_ItemInfo                          K2Node_MakeStruct_ST_ItemInfo_1;                   // 0x110(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_CustomEvent_Slot_1;                         // 0x120(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3064[0x4];                                     // Fixing Size After Last Property 
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_CustomEvent_Slot;                           // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsHover;                        // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3065[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x13C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3066[0x4];                                     // Fixing Size After Last Property 
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General_2;      // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3067[0x7];                                     // Fixing Size After Last Property 
	struct FST_ItemInfo                          K2Node_MakeStruct_ST_ItemInfo_2;                   // 0x160(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x170(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_ComponentBoundEvent_Slot_1;                 // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_ComponentBoundEvent_Slot;                   // 0x188(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_2;             // 0x190(0x10)(ReferenceParm, ContainsInstancedReference)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_2; // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3068[0x7];                                     // Fixing Size After Last Property 
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game_1;    // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3069[0x3];                                     // Fixing Size After Last Property 
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_306B[0x7];                                     // Fixing Size After Last Property 
	TArray<class FString>                        CallFunc_Map_Values_Values;                        // 0x1D8(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.OnClickBack__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_General_C_OnClickBack__DelegateSignature_Params
{
public:
};

}
}



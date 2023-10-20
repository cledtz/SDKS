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

// 0x48 (0x48 - 0x0)
// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.GetSlotByItemClass
struct UUI_Menu_Soldier_Gear_C_GetSlotByItemClass_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Slot;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_ItemClass;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EItemType                         Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B46[0x7];                                     // Fixing Size After Last Property 
	class UUserWidget*                           Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Temp_object_Variable_1;                            // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Temp_object_Variable_2;                            // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Temp_object_Variable_3;                            // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.Reset
struct UUI_Menu_Soldier_Gear_C_Reset_Params
{
public:
};

// 0xA1 (0xA1 - 0x0)
// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.ParsePlayerInventory
struct UUI_Menu_Soldier_Gear_C_ParsePlayerInventory_Params
{
public:
	struct FST_ItemInfo                          L_ItemInfo;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B6D[0x4];                                     // Fixing Size After Last Property 
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x38(0x10)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B6E[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetObjectField_ReturnValue;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBoolField_ReturnValue;                 // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasField_ReturnValue_1;                   // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B72[0x3];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UPlayFabJsonObject*>            CallFunc_GetObjectArrayField_ReturnValue;          // 0x68(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B75[0x4];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B77[0x7];                                     // Fixing Size After Last Property 
	class FString                                CallFunc_GetStringField_ReturnValue_1;             // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.PreConstruct
struct UUI_Menu_Soldier_Gear_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.Construct
struct UUI_Menu_Soldier_Gear_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.OnUpdatePlayerCombinedInfo_Event
struct UUI_Menu_Soldier_Gear_C_OnUpdatePlayerCombinedInfo_Event_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CustomString;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UUI_Menu_Soldier_Gear_C_BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.ExecuteUbergraph_UI_Menu_Soldier_Gear
struct UUI_Menu_Soldier_Gear_C_ExecuteUbergraph_UI_Menu_Soldier_Gear_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B87[0x4];                                     // Fixing Size After Last Property 
	class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B8A[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B8C[0x2];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EModifiedData>             K2Node_CustomEvent_ModifiedData;                   // 0x30(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_CustomString;                   // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Menu_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Menu;      // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B90[0x7];                                     // Fixing Size After Last Property 
	class UPlayFabJsonObject*                    CallFunc_GetPlayerCombinedInfo_ReturnValue;        // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B92[0x7];                                     // Fixing Size After Last Property 
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue;            // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}



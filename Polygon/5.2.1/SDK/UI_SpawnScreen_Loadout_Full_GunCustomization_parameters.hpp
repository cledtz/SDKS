#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.Reset
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_Reset_Params
{
public:
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_1;                     // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_2;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_2;                   // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_3;            // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_3;                     // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_4;            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_4;                     // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_3;                   // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_4;                   // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_5;            // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_5;                     // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_5;                   // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x201 (0x201 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.OnKeyDown
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x148(0xB8)()
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.AddRequestSetModule
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_AddRequestSetModule_Params
{
public:
	class FString                                ItemInstanceId;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class EGunModuleType                    ModuleType;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunModuleType                    L_ModuleType;                                      // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A91[0x6];                                      // Fixing Size After Last Property
	class FString                                L_ItemInstanceId;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.AddNewModule
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_AddNewModule_Params
{
public:
	class UPlayFabJsonObject*                    Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    L_Item;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.SelectModuleSlot
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_SelectModuleSlot_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A99[0x4];                                      // Fixing Size After Last Property
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A9B[0x4];                                      // Fixing Size After Last Property
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A9C[0x4];                                      // Fixing Size After Last Property
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A9F[0x7];                                      // Fixing Size After Last Property
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Module; // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.GetModuleSlotByItemClass
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_GetModuleSlotByItemClass_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Module_General;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.GetModuleListByItemClass
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_GetModuleListByItemClass_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          List;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Module_General;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.GrabModulesInfo
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_GrabModulesInfo_Params
{
public:
	class UPlayFabJsonObject*                    GunJsonInfo;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Item_Module_C* L_CreatedItem;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        L_NotAvailableModules;                             // 0x10(0x10)(Edit, BlueprintVisible)
	class UClass*                                L_Module;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.PreConstruct
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.ResetWeapon
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_ResetWeapon_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.FullReset
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_FullReset_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Optic_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Optic_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Barrel_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Barrel_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Underbarrel_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Underbarrel_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Accessory_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Accessory_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Skin_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Skin_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Strap_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Strap_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature_Params
{
public:
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.Back
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_Back_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_GunCustomization
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_GunCustomization_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ADE[0x3];                                      // Fixing Size After Last Property
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ADF[0x7];                                      // Fixing Size After Last Property
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Map_Values_Values;                        // 0x30(0x10)(ReferenceParm)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_5;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_4;                 // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_3;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_2;                 // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_1;                 // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot;                   // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.OnClickBack__DelegateSignature
struct UUI_SpawnScreen_Loadout_Full_GunCustomization_C_OnClickBack__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

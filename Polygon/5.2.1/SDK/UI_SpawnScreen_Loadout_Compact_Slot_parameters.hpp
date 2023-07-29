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

// 0x49 (0x49 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.SetItemInfo
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_SetItemInfo_Params
{
public:
	class UPlayFabJsonObject*                    ItemInfo;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_0[0x7];                                        // Fixing Size After Last Property
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x28(0x10)()
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1[0x7];                                        // Fixing Size After Last Property
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Gun_General;        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.SetIsSelected
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_SetIsSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2[0x2];                                        // Fixing Size After Last Property
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.Reset
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_Reset_Params
{
public:
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x0(0xD0)()
};

// 0x8 (0x8 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.OnLoaded_FF6FB6ED43BE833837F94184A6F34782
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_OnLoaded_FF6FB6ED43BE833837F94184A6F34782_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.ParseModules
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_ParseModules_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.AsyncLoadIcon
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_AsyncLoadIcon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.BndEvt__UI_SpawnScreen_Loadout_ItemSlot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_BndEvt__UI_SpawnScreen_Loadout_ItemSlot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.PreConstruct
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact_Slot
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact_Slot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5[0x4];                                        // Fixing Size After Last Property
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6[0x7];                                        // Fixing Size After Last Property
	TSoftObjectPtr<class UTexture2D>             K2Node_CustomEvent_Icon;                           // 0x30(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7[0x7];                                        // Fixing Size After Last Property
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.OnClicked__DelegateSignature
struct UUI_SpawnScreen_Loadout_Compact_Slot_C_OnClicked__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x59 (0x59 - 0x0)
// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.SetWatchInfo
struct UUI_Menu_Solder_Gear_Watch_Slot_C_SetWatchInfo_Params
{
public:
	struct FST_ItemInfo                          ItemInfo;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                L_WatchClass;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EC4[0x6];                                     // Fixing Size After Last Property
	class UClass*                                K2Node_ClassDynamicCast_AsItem_Watch_General;      // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EC5[0x7];                                     // Fixing Size After Last Property
	class FString                                CallFunc_GetStringField_ReturnValue;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x48(0x10)()
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.BndEvt__UI_Menu_Solder_Gear_Watch_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Menu_Solder_Gear_Watch_Slot_C_BndEvt__UI_Menu_Solder_Gear_Watch_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.Click
struct UUI_Menu_Solder_Gear_Watch_Slot_C_Click_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.ExecuteUbergraph_UI_Menu_Solder_Gear_Watch_Slot
struct UUI_Menu_Solder_Gear_Watch_Slot_C_ExecuteUbergraph_UI_Menu_Solder_Gear_Watch_Slot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.OnClicked__DelegateSignature
struct UUI_Menu_Solder_Gear_Watch_Slot_C_OnClicked__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

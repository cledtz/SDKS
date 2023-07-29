#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.SetWatchInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInfo                ItemInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_WatchClass                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Watch_General                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          ()
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Gear_Watch_Slot_C::SetWatchInfo(const struct FST_ItemInfo& ItemInfo, class UClass* L_WatchClass, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsItem_Watch_General, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_GetStringField_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_Menu_Solder_Gear_Watch_Slot_C", "SetWatchInfo");

	Params::UUI_Menu_Solder_Gear_Watch_Slot_C_SetWatchInfo_Params Parms;

	Parms.ItemInfo = ItemInfo;
	Parms.L_WatchClass = L_WatchClass;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsItem_Watch_General = K2Node_ClassDynamicCast_AsItem_Watch_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.BndEvt__UI_Menu_Solder_Gear_Watch_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Gear_Watch_Slot_C::BndEvt__UI_Menu_Solder_Gear_Watch_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Solder_Gear_Watch_Slot_C", "BndEvt__UI_Menu_Solder_Gear_Watch_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Gear_Watch_Slot_C_BndEvt__UI_Menu_Solder_Gear_Watch_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.Click
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Gear_Watch_Slot_C::Click()
{
	static auto Func = Class->GetFunction("UI_Menu_Solder_Gear_Watch_Slot_C", "Click");

	Params::UUI_Menu_Solder_Gear_Watch_Slot_C_Click_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.ExecuteUbergraph_UI_Menu_Solder_Gear_Watch_Slot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Gear_Watch_Slot_C::ExecuteUbergraph_UI_Menu_Solder_Gear_Watch_Slot(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("UI_Menu_Solder_Gear_Watch_Slot_C", "ExecuteUbergraph_UI_Menu_Solder_Gear_Watch_Slot");

	Params::UUI_Menu_Solder_Gear_Watch_Slot_C_ExecuteUbergraph_UI_Menu_Solder_Gear_Watch_Slot_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Gear_Watch_Slot.UI_Menu_Solder_Gear_Watch_Slot_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Gear_Watch_Slot_C::OnClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_Menu_Solder_Gear_Watch_Slot_C", "OnClicked__DelegateSignature");

	Params::UUI_Menu_Solder_Gear_Watch_Slot_C_OnClicked__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

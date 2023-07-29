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


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.SetItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          ItemInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          ()
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_Slot_C::SetItemInfo(class UPlayFabJsonObject* ItemInfo, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "SetItemInfo");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_SetItemInfo_Params Parms;

	Parms.ItemInfo = ItemInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_Slot_C::SetIsSelected(bool IsSelected, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "SetIsSelected");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_SetIsSelected_Params Parms;

	Parms.IsSelected = IsSelected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()

void UUI_SpawnScreen_Loadout_Compact_Slot_C::Reset(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "Reset");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_Reset_Params Parms;

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.OnLoaded_FF6FB6ED43BE833837F94184A6F34782
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_Slot_C::OnLoaded_FF6FB6ED43BE833837F94184A6F34782(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "OnLoaded_FF6FB6ED43BE833837F94184A6F34782");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_OnLoaded_FF6FB6ED43BE833837F94184A6F34782_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.ParseModules
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_Slot_C::ParseModules()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "ParseModules");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_ParseModules_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.AsyncLoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_Slot_C::AsyncLoadIcon(TSoftObjectPtr<class UTexture2D> Icon)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "AsyncLoadIcon");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_AsyncLoadIcon_Params Parms;

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_Slot_C::BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_Slot_C::BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_BndEvt__UI_SpawnScreen_Loadout_Compact_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.BndEvt__UI_SpawnScreen_Loadout_ItemSlot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_Slot_C::BndEvt__UI_SpawnScreen_Loadout_ItemSlot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "BndEvt__UI_SpawnScreen_Loadout_ItemSlot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_BndEvt__UI_SpawnScreen_Loadout_ItemSlot_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_Slot_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "PreConstruct");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact_Slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_Icon                                          (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_Slot_C::ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact_Slot(int32 EntryPoint, class UObject* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_Icon, bool CallFunc_Not_PreBool_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact_Slot");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact_Slot_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact_Slot.UI_SpawnScreen_Loadout_Compact_Slot_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_Slot_C::OnClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_Slot_C", "OnClicked__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_Slot_C_OnClicked__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

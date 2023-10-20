#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C
// (None)

class UClass* UUI_SpawnScreen_Loadout_Compact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SpawnScreen_Loadout_Compact_C");

	return Clss;
}


// UI_SpawnScreen_Loadout_Compact_C UI_SpawnScreen_Loadout_Compact.Default__UI_SpawnScreen_Loadout_Compact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SpawnScreen_Loadout_Compact_C* UUI_SpawnScreen_Loadout_Compact_C::GetDefaultObj()
{
	static class UUI_SpawnScreen_Loadout_Compact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SpawnScreen_Loadout_Compact_C*>(UUI_SpawnScreen_Loadout_Compact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.AddNewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Compact_Item_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_C::AddNewItem(class UPlayFabJsonObject* Item, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, class UUI_SpawnScreen_Loadout_Compact_Item_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "AddNewItem");

	Params::UUI_SpawnScreen_Loadout_Compact_C_AddNewItem_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.GetSlotByItemClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Compact_Slot_C*ItemSlot                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_ItemClass                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Compact_Slot_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_C::GetSlotByItemClass(class UClass* ItemClass, class UUI_SpawnScreen_Loadout_Compact_Slot_C** ItemSlot, class UClass* L_ItemClass, enum class EGunSlot Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUI_SpawnScreen_Loadout_Compact_Slot_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "GetSlotByItemClass");

	Params::UUI_SpawnScreen_Loadout_Compact_C_GetSlotByItemClass_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.L_ItemClass = L_ItemClass;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlot != nullptr)
		*ItemSlot = Parms.ItemSlot;

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.Get_Image_Info_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Compact_ToolTipInfo_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_SpawnScreen_Loadout_Compact_C::Get_Image_Info_ToolTipWidget(class UUI_SpawnScreen_Loadout_Compact_ToolTipInfo_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "Get_Image_Info_ToolTipWidget");

	Params::UUI_SpawnScreen_Loadout_Compact_C_Get_Image_Info_ToolTipWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "PreConstruct");

	Params::UUI_SpawnScreen_Loadout_Compact_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.BndEvt__UI_SpawnScreen_Loadout_UI_SpawnScreen_Loadout_ItemSlot_Primary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::BndEvt__UI_SpawnScreen_Loadout_UI_SpawnScreen_Loadout_ItemSlot_Primary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "BndEvt__UI_SpawnScreen_Loadout_UI_SpawnScreen_Loadout_ItemSlot_Primary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_C_BndEvt__UI_SpawnScreen_Loadout_UI_SpawnScreen_Loadout_ItemSlot_Primary_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.BndEvt__UI_SpawnScreen_Loadout_UI_SpawnScreen_Loadout_ItemSlot_Secondary_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::BndEvt__UI_SpawnScreen_Loadout_UI_SpawnScreen_Loadout_ItemSlot_Secondary_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "BndEvt__UI_SpawnScreen_Loadout_UI_SpawnScreen_Loadout_ItemSlot_Secondary_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_C_BndEvt__UI_SpawnScreen_Loadout_UI_SpawnScreen_Loadout_ItemSlot_Secondary_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.BndEvt__UI_SpawnScreen_Loadout_Button_Open_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::BndEvt__UI_SpawnScreen_Loadout_Button_Open_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "BndEvt__UI_SpawnScreen_Loadout_Button_Open_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_C_BndEvt__UI_SpawnScreen_Loadout_Button_Open_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.BndEvt__UI_SpawnScreen_Loadout_Button_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::BndEvt__UI_SpawnScreen_Loadout_Button_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "BndEvt__UI_SpawnScreen_Loadout_Button_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_C_BndEvt__UI_SpawnScreen_Loadout_Button_Close_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.BndEvt__UI_SpawnScreen_Loadout_Button_Close_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::BndEvt__UI_SpawnScreen_Loadout_Button_Close_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "BndEvt__UI_SpawnScreen_Loadout_Button_Close_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_C_BndEvt__UI_SpawnScreen_Loadout_Button_Close_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.OpenChangeWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::OpenChangeWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "OpenChangeWeapon");

	Params::UUI_SpawnScreen_Loadout_Compact_C_OpenChangeWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.BndEvt__UI_SpawnScreen_Loadout_Button_Loadout_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::BndEvt__UI_SpawnScreen_Loadout_Button_Loadout_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "BndEvt__UI_SpawnScreen_Loadout_Button_Loadout_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_C_BndEvt__UI_SpawnScreen_Loadout_Button_Loadout_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "Reset");

	Params::UUI_SpawnScreen_Loadout_Compact_C_Reset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.BndEvt__UI_SpawnScreen_Loadout_Compact_Button_FullLoadout_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::BndEvt__UI_SpawnScreen_Loadout_Compact_Button_FullLoadout_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "BndEvt__UI_SpawnScreen_Loadout_Compact_Button_FullLoadout_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_C_BndEvt__UI_SpawnScreen_Loadout_Compact_Button_FullLoadout_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.BndEvt__UI_SpawnScreen_Loadout_Compact_Button_FullLoadout_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::BndEvt__UI_SpawnScreen_Loadout_Compact_Button_FullLoadout_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "BndEvt__UI_SpawnScreen_Loadout_Compact_Button_FullLoadout_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Compact_C_BndEvt__UI_SpawnScreen_Loadout_Compact_Button_FullLoadout_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.ForceClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Compact_C::ForceClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "ForceClose");

	Params::UUI_SpawnScreen_Loadout_Compact_C_ForceClose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Compact.UI_SpawnScreen_Loadout_Compact_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Compact_Slot_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Compact_C::ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1, bool K2Node_DynamicCast_bSuccess_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32 Temp_int_Variable, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UUI_SpawnScreen_Loadout_Compact_Slot_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Compact_C", "ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact");

	Params::UUI_SpawnScreen_Loadout_Compact_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Compact_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1 = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



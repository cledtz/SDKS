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


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.AddNewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Gun_C*L_CreatedItem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          L_Item                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::AddNewItem(class UPlayFabJsonObject* Item, class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* L_CreatedItem, class UPlayFabJsonObject* L_Item)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "AddNewItem");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_AddNewItem_Params Parms;

	Parms.Item = Item;
	Parms.L_CreatedItem = L_CreatedItem;
	Parms.L_Item = L_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UUI_SpawnScreen_Loadout_Full_General_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "OnKeyDown");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_OnKeyDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.AddRequestEquipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemInstanceId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EItemType               ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               L_ItemType                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      L_ItemInstanceId                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::AddRequestEquipItem(const class FString& ItemInstanceId, enum class EItemType ItemType, enum class EItemType L_ItemType, const class FString& L_ItemInstanceId, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Map_Remove_ReturnValue)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "AddRequestEquipItem");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_AddRequestEquipItem_Params Parms;

	Parms.ItemInstanceId = ItemInstanceId;
	Parms.ItemType = ItemType;
	Parms.L_ItemType = L_ItemType;
	Parms.L_ItemInstanceId = L_ItemInstanceId;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.GetListByItemClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  ScrollBox                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::GetListByItemClass(class UClass* Class, class UScrollBox** ScrollBox, enum class EGunSlot Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UScrollBox* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "GetListByItemClass");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_GetListByItemClass_Params Parms;

	Parms.Class = Class;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ScrollBox != nullptr)
		*ScrollBox = Parms.ScrollBox;

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.GetSlotByItemClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*Slot                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_ItemClass                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::GetSlotByItemClass(class UClass* ItemClass, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C** Slot, class UClass* L_ItemClass, enum class EGunSlot Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "GetSlotByItemClass");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_GetSlotByItemClass_Params Parms;

	Parms.ItemClass = ItemClass;
	Parms.L_ItemClass = L_ItemClass;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "PreConstruct");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_General_C::Construct()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "Construct");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.BindItemDelegates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Item_Gun_C*Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::BindItemDelegates(class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "BindItemDelegates");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_BindItemDelegates_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.Item_OnHovered_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Item_Gun_C*Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHover                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::Item_OnHovered_Event(class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item, bool IsHover)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "Item_OnHovered_Event");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_Item_OnHovered_Event_Params Parms;

	Parms.Item = Item;
	Parms.IsHover = IsHover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.BndEvt__UI_SpawnScreen_Loadout_Full_General_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_General_C::BndEvt__UI_SpawnScreen_Loadout_Full_General_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "BndEvt__UI_SpawnScreen_Loadout_Full_General_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_BndEvt__UI_SpawnScreen_Loadout_Full_General_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.SlotOnPressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::SlotOnPressed_Event(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "SlotOnPressed_Event");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_SlotOnPressed_Event_Params Parms;

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.SlotOnHovered_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHover                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::SlotOnHovered_Event(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot, bool IsHover)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "SlotOnHovered_Event");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_SlotOnHovered_Event_Params Parms;

	Parms.Slot = Slot;
	Parms.IsHover = IsHover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_PrimaryWeapon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_PrimaryWeapon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_PrimaryWeapon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_PrimaryWeapon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params Parms;

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_SecondaryWeapon_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_SecondaryWeapon_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* Slot)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_SecondaryWeapon_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_BndEvt__UI_SpawnScreen_Loadout_Full_General_UI_SpawnScreen_Loadout_Full_Slot_SecondaryWeapon_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params Parms;

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_General_C::Reset()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "Reset");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_Reset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_General_C::Back()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "Back");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_Back_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_General
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_1     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Gun_C*K2Node_CustomEvent_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Gun_C*K2Node_CustomEvent_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHover_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInfo                K2Node_MakeStruct_ST_ItemInfo                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*CallFunc_GetSlotByItemClass_Slot                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInfo                K2Node_MakeStruct_ST_ItemInfo_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*K2Node_CustomEvent_Slot_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*K2Node_CustomEvent_Slot                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHover                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInfo                K2Node_MakeStruct_ST_ItemInfo_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*K2Node_ComponentBoundEvent_Slot_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*K2Node_ComponentBoundEvent_Slot                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_2                            (ReferenceParm, ContainsInstancedReference)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C*K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_2     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Values_Values                                       (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_General_C::ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_General(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_IsDesignTime, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_2, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_3, class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* K2Node_CustomEvent_Item_1, class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_IsHover_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, const struct FST_ItemInfo& K2Node_MakeStruct_ST_ItemInfo, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* CallFunc_GetSlotByItemClass_Slot, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General_1, bool K2Node_ClassDynamicCast_bSuccess_1, const struct FST_ItemInfo& K2Node_MakeStruct_ST_ItemInfo_1, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_CustomEvent_Slot_1, int32 Temp_int_Array_Index_Variable_2, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_CustomEvent_Slot, bool K2Node_CustomEvent_IsHover, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General_2, bool K2Node_ClassDynamicCast_bSuccess_2, const struct FST_ItemInfo& K2Node_MakeStruct_ST_ItemInfo_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_ComponentBoundEvent_Slot_1, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_ComponentBoundEvent_Slot, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_2, class UUI_SpawnScreen_Loadout_Full_Slot_Gun_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_2, bool K2Node_DynamicCast_bSuccess_4, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game_1, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class FString>& CallFunc_Map_Values_Values, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_General");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_General_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun = K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_1 = K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_IsHover_1 = K2Node_CustomEvent_IsHover_1;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_ST_ItemInfo = K2Node_MakeStruct_ST_ItemInfo;
	Parms.CallFunc_GetSlotByItemClass_Slot = CallFunc_GetSlotByItemClass_Slot;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General_1 = K2Node_ClassDynamicCast_AsItem_Gun_General_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_ST_ItemInfo_1 = K2Node_MakeStruct_ST_ItemInfo_1;
	Parms.K2Node_CustomEvent_Slot_1 = K2Node_CustomEvent_Slot_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CustomEvent_Slot = K2Node_CustomEvent_Slot;
	Parms.K2Node_CustomEvent_IsHover = K2Node_CustomEvent_IsHover;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General_2 = K2Node_ClassDynamicCast_AsItem_Gun_General_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_ST_ItemInfo_2 = K2Node_MakeStruct_ST_ItemInfo_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_Slot_1 = K2Node_ComponentBoundEvent_Slot_1;
	Parms.K2Node_ComponentBoundEvent_Slot = K2Node_ComponentBoundEvent_Slot;
	Parms.CallFunc_GetAllChildren_ReturnValue_2 = CallFunc_GetAllChildren_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_2 = K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Gun_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game_1 = K2Node_DynamicCast_AsBP_PG_Player_State_Game_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_General.UI_SpawnScreen_Loadout_Full_General_C.OnClickBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_General_C::OnClickBack__DelegateSignature()
{
	static auto Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_General_C", "OnClickBack__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_General_C_OnClickBack__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

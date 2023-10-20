#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shop_Weapon.UI_Shop_Weapon_C
// (None)

class UClass* UUI_Shop_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shop_Weapon_C");

	return Clss;
}


// UI_Shop_Weapon_C UI_Shop_Weapon.Default__UI_Shop_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shop_Weapon_C* UUI_Shop_Weapon_C::GetDefaultObj()
{
	static class UUI_Shop_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shop_Weapon_C*>(UUI_Shop_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.SetActivePage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_DynamicCast_AsUI_Button                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::SetActivePage(int32 Index, class UUI_Button_C* Button, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UWidget* CallFunc_Array_Get_Item, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "SetActivePage");

	Params::UUI_Shop_Weapon_C_SetActivePage_Params Parms{};

	Parms.Index = Index;
	Parms.Button = Button;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsUI_Button = K2Node_DynamicCast_AsUI_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.SetWeaponIsHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShopItem_C*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::SetWeaponIsHovered(class UUI_ShopItem_C* Weapon, bool IsHovered, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "SetWeaponIsHovered");

	Params::UUI_Shop_Weapon_C_SetWeaponIsHovered_Params Parms{};

	Parms.Weapon = Weapon;
	Parms.IsHovered = IsHovered;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.AddNewWeaponItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WeaponClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_ShopItem_C*              CreatedItem                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_ShopItem_C*              L_CreatedItem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_WeaponClass                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_ShopItem_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWrapBox*                    K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::AddNewWeaponItem(class UClass* WeaponClass, class UUI_ShopItem_C** CreatedItem, class UUI_ShopItem_C* L_CreatedItem, class UClass* L_WeaponClass, enum class EGunSlot Temp_byte_Variable, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ShopItem_C* CallFunc_Create_ReturnValue, class UWrapBox* K2Node_Select_Default, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "AddNewWeaponItem");

	Params::UUI_Shop_Weapon_C_AddNewWeaponItem_Params Parms{};

	Parms.WeaponClass = WeaponClass;
	Parms.L_CreatedItem = L_CreatedItem;
	Parms.L_WeaponClass = L_WeaponClass;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedItem != nullptr)
		*CreatedItem = Parms.CreatedItem;

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "PreConstruct");

	Params::UUI_Shop_Weapon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.IsHoveredDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShopItem_C*              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::IsHoveredDelegate_Event(class UUI_ShopItem_C* Item, bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "IsHoveredDelegate_Event");

	Params::UUI_Shop_Weapon_C_IsHoveredDelegate_Event_Params Parms{};

	Parms.Item = Item;
	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	Params::UUI_Shop_Weapon_C_BndEvt__UI_Button_Primary_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	Params::UUI_Shop_Weapon_C_BndEvt__UI_Button_Secondary_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.BndEvt__UI_Shop_Weapon_UI_Button_Modules_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::BndEvt__UI_Shop_Weapon_UI_Button_Modules_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "BndEvt__UI_Shop_Weapon_UI_Button_Modules_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UUI_Shop_Weapon_C_BndEvt__UI_Shop_Weapon_UI_Button_Modules_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shop_Weapon.UI_Shop_Weapon_C.ExecuteUbergraph_UI_Shop_Weapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShopItem_C*              K2Node_CustomEvent_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ShopItem_C*              CallFunc_AddNewWeaponItem_CreatedItem                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shop_Weapon_C::ExecuteUbergraph_UI_Shop_Weapon(int32 EntryPoint, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUI_ShopItem_C* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_IsHovered, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_ShopItem_C* CallFunc_AddNewWeaponItem_CreatedItem, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shop_Weapon_C", "ExecuteUbergraph_UI_Shop_Weapon");

	Params::UUI_Shop_Weapon_C_ExecuteUbergraph_UI_Shop_Weapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_AddNewWeaponItem_CreatedItem = CallFunc_AddNewWeaponItem_CreatedItem;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



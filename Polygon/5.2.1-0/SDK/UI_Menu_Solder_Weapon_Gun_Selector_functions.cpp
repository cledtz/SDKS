#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C
// (None)

class UClass* UUI_Menu_Solder_Weapon_Gun_Selector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Selector_C");

	return Clss;
}


// UI_Menu_Solder_Weapon_Gun_Selector_C UI_Menu_Solder_Weapon_Gun_Selector.Default__UI_Menu_Solder_Weapon_Gun_Selector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Solder_Weapon_Gun_Selector_C* UUI_Menu_Solder_Weapon_Gun_Selector_C::GetDefaultObj()
{
	static class UUI_Menu_Solder_Weapon_Gun_Selector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Solder_Weapon_Gun_Selector_C*>(UUI_Menu_Solder_Weapon_Gun_Selector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.SetEquippedGun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInfo                GunInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInfo                L_EquippedWeaponInfo                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::SetEquippedGun(const struct FST_ItemInfo& GunInfo, const struct FST_ItemInfo& L_EquippedWeaponInfo, enum class EGunSlot Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "SetEquippedGun");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_SetEquippedGun_Params Parms{};

	Parms.GunInfo = GunInfo;
	Parms.L_EquippedWeaponInfo = L_EquippedWeaponInfo;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.GetEquippedGunByItemClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C*Gun                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::GetEquippedGunByItemClass(class UClass* ItemClass, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C** Gun, enum class EGunSlot Temp_byte_Variable, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "GetEquippedGunByItemClass");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_GetEquippedGunByItemClass_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Gun != nullptr)
		*Gun = Parms.Gun;

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.GetGunListByGunClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGunClass               GunClass                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListView*                   List                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGunClass               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListView*                   Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UListView*                   K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::GetGunListByGunClass(enum class EGunClass GunClass, class UListView** List, enum class EGunClass Temp_byte_Variable, class UListView* Temp_object_Variable, class UListView* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "GetGunListByGunClass");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_GetGunListByGunClass_Params Parms{};

	Parms.GunClass = GunClass;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (List != nullptr)
		*List = Parms.List;

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.SetActiveGunClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGunClass               GunClass                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                L_Button                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGunClass               L_GunClass                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              K2Node_DynamicCast_AsHorizontal_Box                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListView*                   CallFunc_GetGunListByGunClass_List                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_DynamicCast_AsUI_Button                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::SetActiveGunClass(enum class EGunClass GunClass, class UUI_Button_C* Button, class UUI_Button_C* L_Button, enum class EGunClass L_GunClass, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UHorizontalBox* K2Node_DynamicCast_AsHorizontal_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UListView* CallFunc_GetGunListByGunClass_List, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item_1, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "SetActiveGunClass");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_SetActiveGunClass_Params Parms{};

	Parms.GunClass = GunClass;
	Parms.Button = Button;
	Parms.L_Button = L_Button;
	Parms.L_GunClass = L_GunClass;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Box = K2Node_DynamicCast_AsHorizontal_Box;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGunListByGunClass_List = CallFunc_GetGunListByGunClass_List;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsUI_Button = K2Node_DynamicCast_AsUI_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.SetActiveGunSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGunSlot                GunSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                L_WeaponSlot                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunClass               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::SetActiveGunSlot(enum class EGunSlot GunSlot, enum class EGunSlot L_WeaponSlot, enum class EGunClass Temp_byte_Variable, class UUI_Button_C* Temp_object_Variable, enum class EGunSlot Temp_byte_Variable_1, enum class EGunSlot Temp_byte_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default, int32 K2Node_Select_Default_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UUI_Button_C* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "SetActiveGunSlot");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_SetActiveGunSlot_Params Parms{};

	Parms.GunSlot = GunSlot;
	Parms.L_WeaponSlot = L_WeaponSlot;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.AddGun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInfo                GunInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInfo                L_GunInfo                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolField_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UListView*                   CallFunc_GetGunListByGunClass_List                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UListView*                   K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// TArray<class UObject*>             K2Node_LowEntry_LocalVariable_Value__1_Object                    (ConstParm, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C*K2Node_DynamicCast_AsBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Slot_C*K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::AddGun(const struct FST_ItemInfo& GunInfo, const struct FST_ItemInfo& L_GunInfo, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class EGunSlot Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool CallFunc_HasField_ReturnValue_1, bool CallFunc_GetBoolField_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* CallFunc_SpawnObject_ReturnValue, class UListView* CallFunc_GetGunListByGunClass_List, class UUI_Menu_Solder_Weapon_Gun_Selector_EquippedGun_C* K2Node_Select_Default, class UListView* K2Node_LowEntry_LocalVariable_Value__Object, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, TArray<class UObject*>& K2Node_LowEntry_LocalVariable_Value__1_Object, class UObject* CallFunc_Array_Get_Item, class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* K2Node_DynamicCast_AsBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, enum class EGunSlot Temp_byte_Variable_1, class UUI_Menu_Solder_Weapon_Gun_Slot_C* K2Node_Select_Default_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "AddGun");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_AddGun_Params Parms{};

	Parms.GunInfo = GunInfo;
	Parms.L_GunInfo = L_GunInfo;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_HasField_ReturnValue_1 = CallFunc_HasField_ReturnValue_1;
	Parms.CallFunc_GetBoolField_ReturnValue = CallFunc_GetBoolField_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetGunListByGunClass_List = CallFunc_GetGunListByGunClass_List;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__1_Object = K2Node_LowEntry_LocalVariable_Value__1_Object;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry = K2Node_DynamicCast_AsBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListView*                   K2Node_DynamicCast_AsList_View                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListView*                   CallFunc_GetGunListByGunClass_List                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FST_ItemInfo                K2Node_MakeStruct_ST_ItemInfo                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListView*                   K2Node_DynamicCast_AsList_View_1                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::Reset(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class UBP_Menu_Solder_Weapon_Gun_Selector_Item_Entry_C* CallFunc_SpawnObject_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UListView* K2Node_DynamicCast_AsList_View, bool K2Node_DynamicCast_bSuccess, class UListView* CallFunc_GetGunListByGunClass_List, const struct FST_ItemInfo& K2Node_MakeStruct_ST_ItemInfo, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UListView* K2Node_DynamicCast_AsList_View_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "Reset");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_Reset_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsList_View = K2Node_DynamicCast_AsList_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGunListByGunClass_List = CallFunc_GetGunListByGunClass_List;
	Parms.K2Node_MakeStruct_ST_ItemInfo = K2Node_MakeStruct_ST_ItemInfo;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsList_View_1 = K2Node_DynamicCast_AsList_View_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Assault_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Assault_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Assault_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Assault_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_SMG_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_SMG_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_SMG_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_SMG_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Marksman_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Marksman_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Marksman_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Marksman_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Sniper_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Sniper_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Sniper_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Sniper_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Shotgun_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Shotgun_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Shotgun_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Shotgun_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_LMG_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_LMG_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_LMG_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_LMG_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Pistol_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Button_C*                Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Pistol_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature(class UUI_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Pistol_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Selector_UI_Button_Pistol_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "PreConstruct");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "Tick");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Selector.UI_Menu_Solder_Weapon_Gun_Selector_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_CameraTransition_C*CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_CameraTransition_C*CallFunc_CreateAction_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_C*                K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Selector_C::ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector(int32 EntryPoint, class FName Temp_name_Variable, class UTask_Menu_CameraTransition_C* CallFunc_CreateAction_ReturnValue, class UTask_Menu_CameraTransition_C* CallFunc_CreateAction_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class FName Temp_name_Variable_1, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_6, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_5, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_4, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_3, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Selector_C", "ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector");

	Params::UUI_Menu_Solder_Weapon_Gun_Selector_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Selector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.CallFunc_CreateAction_ReturnValue_1 = CallFunc_CreateAction_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



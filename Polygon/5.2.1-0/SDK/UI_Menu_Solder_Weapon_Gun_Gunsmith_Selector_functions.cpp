#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C
// (None)

class UClass* UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C");

	return Clss;
}


// UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.Default__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C* UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::GetDefaultObj()
{
	static class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C*>(UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.GetAllModuleSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>Slots                                                            (Parm, OutParm, ContainsInstancedReference)
// TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::GetAllModuleSlots(TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>* Slots, TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "GetAllModuleSlots");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_GetAllModuleSlots_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Slots != nullptr)
		*Slots = Parms.Slots;

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.HideIncompatibleModuleSlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<enum class EGunModuleType>    L_CompatibleModuleTypes                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>CallFunc_GetAllModuleSlots_Slots                                 (ReferenceParm, ContainsInstancedReference)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EGunModuleType>  CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// enum class EGunModuleType          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*CallFunc_GetSlotByModuleType_Slot                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGunModulesInfo*             K2Node_DynamicCast_AsGun_Modules_Info                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGunModuleInfo              CallFunc_Array_Get_Item_2                                        (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::HideIncompatibleModuleSlots(TSet<enum class EGunModuleType> L_CompatibleModuleTypes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>& CallFunc_GetAllModuleSlots_Slots, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<enum class EGunModuleType>& CallFunc_Set_ToArray_Result, enum class EGunModuleType CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_GetSlotByModuleType_Slot, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UGunModulesInfo* K2Node_DynamicCast_AsGun_Modules_Info, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, const struct FGunModuleInfo& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "HideIncompatibleModuleSlots");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_HideIncompatibleModuleSlots_Params Parms{};

	Parms.L_CompatibleModuleTypes = L_CompatibleModuleTypes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetAllModuleSlots_Slots = CallFunc_GetAllModuleSlots_Slots;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetSlotByModuleType_Slot = CallFunc_GetSlotByModuleType_Slot;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsGun_Modules_Info = K2Node_DynamicCast_AsGun_Modules_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.OnUpdateGunData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          L_ContainerCustomData                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGunModulesInfo*             K2Node_DynamicCast_AsGun_Modules_Info                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetFieldNames_ReturnValue                               (ReferenceParm)
// struct FGunModuleInfo              CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*CallFunc_GetSlotByModuleType_Slot                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::OnUpdateGunData(class UPlayFabJsonObject* L_ContainerCustomData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UGunModulesInfo* K2Node_DynamicCast_AsGun_Modules_Info, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FString>& CallFunc_GetFieldNames_ReturnValue, const struct FGunModuleInfo& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetStringField_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_GetSlotByModuleType_Slot, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "OnUpdateGunData");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_OnUpdateGunData_Params Parms{};

	Parms.L_ContainerCustomData = L_ContainerCustomData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsGun_Modules_Info = K2Node_DynamicCast_AsGun_Modules_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_2 = CallFunc_GetObjectField_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetFieldNames_ReturnValue = CallFunc_GetFieldNames_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_GetSlotByModuleType_Slot = CallFunc_GetSlotByModuleType_Slot;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.GetSlotByModuleType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGunModuleType          ModuleType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*Slot                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>CallFunc_GetAllModuleSlots_Slots                                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::GetSlotByModuleType(enum class EGunModuleType ModuleType, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C** Slot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>& CallFunc_GetAllModuleSlots_Slots, int32 CallFunc_Array_Length_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "GetSlotByModuleType");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_GetSlotByModuleType_Params Parms{};

	Parms.ModuleType = ModuleType;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllModuleSlots_Slots = CallFunc_GetAllModuleSlots_Slots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>CallFunc_GetAllModuleSlots_Slots                                 (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::Reset(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C*>& CallFunc_GetAllModuleSlots_Slots, int32 CallFunc_Array_Length_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "Reset");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_Reset_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllModuleSlots_Slots = CallFunc_GetAllModuleSlots_Slots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "PreConstruct");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "Tick");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CustomString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_OnUpdatePlayerCombinedInfo_Event_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomString = CustomString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Button_OldModulesInfo_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C*CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerState*                CallFunc_GetPlayerState_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_ConstructJsonObject_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Menu*        K2Node_DynamicCast_AsPG_Player_State_Menu                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetNumberArrayField_ReturnValue                         (ReferenceParm)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DecodeJson_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_DateTimeFromIsoString_Result                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DateTimeFromIsoString_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_CustomEvent_ModifiedData                                  (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CustomString                                  (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalSeconds_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float Temp_real_Variable, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C* CallFunc_FindParentWidgetOfType_ReturnValue, class UPlayerState* CallFunc_GetPlayerState_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, TArray<float>& CallFunc_GetNumberArrayField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool CallFunc_HasField_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, bool CallFunc_DecodeJson_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, const class FString& CallFunc_GetStringField_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, const struct FDateTime& CallFunc_DateTimeFromIsoString_Result, bool CallFunc_DateTimeFromIsoString_ReturnValue, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_OldModulesInfo_C* CallFunc_Create_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.CallFunc_GetPlayerState_ReturnValue = CallFunc_GetPlayerState_ReturnValue;
	Parms.CallFunc_ConstructJsonObject_ReturnValue = CallFunc_ConstructJsonObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Menu = K2Node_DynamicCast_AsPG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_GetNumberArrayField_ReturnValue = CallFunc_GetNumberArrayField_ReturnValue;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_DecodeJson_ReturnValue = CallFunc_DecodeJson_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_2 = CallFunc_GetObjectField_ReturnValue_2;
	Parms.CallFunc_GetStringField_ReturnValue_1 = CallFunc_GetStringField_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_DateTimeFromIsoString_Result = CallFunc_DateTimeFromIsoString_Result;
	Parms.CallFunc_DateTimeFromIsoString_ReturnValue = CallFunc_DateTimeFromIsoString_ReturnValue;
	Parms.K2Node_CustomEvent_ModifiedData = K2Node_CustomEvent_ModifiedData;
	Parms.K2Node_CustomEvent_CustomString = K2Node_CustomEvent_CustomString;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetTotalSeconds_ReturnValue = CallFunc_GetTotalSeconds_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector.UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C.OnClickBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C::OnClickBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C", "OnClickBack__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_Selector_C_OnClickBack__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}



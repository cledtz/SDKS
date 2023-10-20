#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C
// (None)

class UClass* UUI_SpawnScreen_Loadout_Full_GunCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SpawnScreen_Loadout_Full_GunCustomization_C");

	return Clss;
}


// UI_SpawnScreen_Loadout_Full_GunCustomization_C UI_SpawnScreen_Loadout_Full_GunCustomization.Default__UI_SpawnScreen_Loadout_Full_GunCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SpawnScreen_Loadout_Full_GunCustomization_C* UUI_SpawnScreen_Loadout_Full_GunCustomization_C::GetDefaultObj()
{
	static class UUI_SpawnScreen_Loadout_Full_GunCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SpawnScreen_Loadout_Full_GunCustomization_C*>(UUI_SpawnScreen_Loadout_Full_GunCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Module_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Module_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Module_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Module_C*CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Module_C*CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_3                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_4                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Module_C*CallFunc_Create_ReturnValue_5                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_5                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::Reset(class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_1, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_3, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_4, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_4, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* CallFunc_Create_ReturnValue_5, class UPanelSlot* CallFunc_AddChild_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "Reset");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_Reset_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_AddChild_ReturnValue_3 = CallFunc_AddChild_ReturnValue_3;
	Parms.CallFunc_AddChild_ReturnValue_4 = CallFunc_AddChild_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_5 = CallFunc_GetOwningPlayer_ReturnValue_5;
	Parms.CallFunc_Create_ReturnValue_5 = CallFunc_Create_ReturnValue_5;
	Parms.CallFunc_AddChild_ReturnValue_5 = CallFunc_AddChild_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UUI_SpawnScreen_Loadout_Full_GunCustomization_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "OnKeyDown");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.AddRequestSetModule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemInstanceId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EGunModuleType          ModuleType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunModuleType          L_ModuleType                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      L_ItemInstanceId                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::AddRequestSetModule(const class FString& ItemInstanceId, enum class EGunModuleType ModuleType, enum class EGunModuleType L_ModuleType, const class FString& L_ItemInstanceId, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Map_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "AddRequestSetModule");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_AddRequestSetModule_Params Parms{};

	Parms.ItemInstanceId = ItemInstanceId;
	Parms.ModuleType = ModuleType;
	Parms.L_ModuleType = L_ModuleType;
	Parms.L_ItemInstanceId = L_ItemInstanceId;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.AddNewModule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          L_Item                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::AddNewModule(class UPlayFabJsonObject* Item, class UPlayFabJsonObject* L_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "AddNewModule");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_AddNewModule_Params Parms{};

	Parms.Item = Item;
	Parms.L_Item = L_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.SelectModuleSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Module    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::SelectModuleSlot(int32 Index, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Module, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "SelectModuleSlot");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_SelectModuleSlot_Params Parms{};

	Parms.Index = Index;
	Parms.Slot = Slot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Module = K2Node_DynamicCast_AsUI_Spawn_Screen_Loadout_Full_Slot_Module;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.GetModuleSlotByItemClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Module_General                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::GetModuleSlotByItemClass(class UClass* ItemClass, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C** Slot, class UClass* K2Node_ClassDynamicCast_AsItem_Module_General, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "GetModuleSlotByItemClass");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_GetModuleSlotByItemClass_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.K2Node_ClassDynamicCast_AsItem_Module_General = K2Node_ClassDynamicCast_AsItem_Module_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.GetModuleListByItemClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                List                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Module_General                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::GetModuleListByItemClass(class UClass* ItemClass, class UVerticalBox** List, class UClass* K2Node_ClassDynamicCast_AsItem_Module_General, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "GetModuleListByItemClass");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_GetModuleListByItemClass_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.K2Node_ClassDynamicCast_AsItem_Module_General = K2Node_ClassDynamicCast_AsItem_Module_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (List != nullptr)
		*List = Parms.List;

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.GrabModulesInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          GunJsonInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Item_Module_C*L_CreatedItem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              L_NotAvailableModules                                            (Edit, BlueprintVisible)
// class UClass*                      L_Module                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::GrabModulesInfo(class UPlayFabJsonObject* GunJsonInfo, class UUI_SpawnScreen_Loadout_Full_Item_Module_C* L_CreatedItem, const TArray<class UClass*>& L_NotAvailableModules, class UClass* L_Module)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "GrabModulesInfo");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_GrabModulesInfo_Params Parms{};

	Parms.GunJsonInfo = GunJsonInfo;
	Parms.L_CreatedItem = L_CreatedItem;
	Parms.L_NotAvailableModules = L_NotAvailableModules;
	Parms.L_Module = L_Module;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "PreConstruct");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.ResetWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::ResetWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "ResetWeapon");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_ResetWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.FullReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::FullReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "FullReset");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_FullReset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Optic_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Optic_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Optic_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Optic_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Barrel_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Barrel_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Barrel_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Barrel_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Underbarrel_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Underbarrel_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Underbarrel_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Underbarrel_K2Node_ComponentBoundEvent_9_OnPressed__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Accessory_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Accessory_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Accessory_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Accessory_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Skin_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Skin_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Skin_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Skin_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Strap_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Strap_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Strap_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_BndEvt__UI_SpawnScreen_Loadout_Full_WeaponCustomization_UI_SpawnScreen_Loadout_Full_Slot_Module_Strap_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "Back");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_Back_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_GunCustomization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Values_Values                                       (ReferenceParm)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*K2Node_ComponentBoundEvent_Slot_5                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*K2Node_ComponentBoundEvent_Slot_4                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*K2Node_ComponentBoundEvent_Slot_3                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*K2Node_ComponentBoundEvent_Slot_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*K2Node_ComponentBoundEvent_Slot_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*K2Node_ComponentBoundEvent_Slot                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_GunCustomization(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetStringField_ReturnValue, TArray<class FString>& CallFunc_Map_Values_Values, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_5, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_4, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_3, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_2, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot_1, class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* K2Node_ComponentBoundEvent_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_GunCustomization");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_GunCustomization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.K2Node_ComponentBoundEvent_Slot_5 = K2Node_ComponentBoundEvent_Slot_5;
	Parms.K2Node_ComponentBoundEvent_Slot_4 = K2Node_ComponentBoundEvent_Slot_4;
	Parms.K2Node_ComponentBoundEvent_Slot_3 = K2Node_ComponentBoundEvent_Slot_3;
	Parms.K2Node_ComponentBoundEvent_Slot_2 = K2Node_ComponentBoundEvent_Slot_2;
	Parms.K2Node_ComponentBoundEvent_Slot_1 = K2Node_ComponentBoundEvent_Slot_1;
	Parms.K2Node_ComponentBoundEvent_Slot = K2Node_ComponentBoundEvent_Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_GunCustomization.UI_SpawnScreen_Loadout_Full_GunCustomization_C.OnClickBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_GunCustomization_C::OnClickBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_GunCustomization_C", "OnClickBack__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_GunCustomization_C_OnClickBack__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}



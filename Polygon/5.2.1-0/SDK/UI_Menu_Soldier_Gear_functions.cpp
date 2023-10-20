#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C
// (None)

class UClass* UUI_Menu_Soldier_Gear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Soldier_Gear_C");

	return Clss;
}


// UI_Menu_Soldier_Gear_C UI_Menu_Soldier_Gear.Default__UI_Menu_Soldier_Gear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Soldier_Gear_C* UUI_Menu_Soldier_Gear_C::GetDefaultObj()
{
	static class UUI_Menu_Soldier_Gear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Soldier_Gear_C*>(UUI_Menu_Soldier_Gear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.GetSlotByItemClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Slot                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_ItemClass                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable_3                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::GetSlotByItemClass(class UClass* ItemClass, class UUserWidget** Slot, class UClass* L_ItemClass, enum class EItemType Temp_byte_Variable, class UUserWidget* Temp_object_Variable, class UUserWidget* Temp_object_Variable_1, class UUserWidget* Temp_object_Variable_2, class UUserWidget* Temp_object_Variable_3, class UUserWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "GetSlotByItemClass");

	Params::UUI_Menu_Soldier_Gear_C_GetSlotByItemClass_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.L_ItemClass = L_ItemClass;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Slot != nullptr)
		*Slot = Parms.Slot;

}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Soldier_Gear_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "Reset");

	Params::UUI_Menu_Soldier_Gear_C_Reset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.ParsePlayerInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInfo                L_ItemInfo                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolField_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UPlayFabJsonObject*>  CallFunc_GetObjectArrayField_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::ParsePlayerInventory(const struct FST_ItemInfo& L_ItemInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_GetStringField_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_HasField_ReturnValue, bool CallFunc_GetBoolField_ReturnValue, bool CallFunc_HasField_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPlayFabJsonObject* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "ParsePlayerInventory");

	Params::UUI_Menu_Soldier_Gear_C_ParsePlayerInventory_Params Parms{};

	Parms.L_ItemInfo = L_ItemInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_GetBoolField_ReturnValue = CallFunc_GetBoolField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue_1 = CallFunc_HasField_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_GetObjectArrayField_ReturnValue = CallFunc_GetObjectArrayField_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue_1 = CallFunc_GetStringField_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "PreConstruct");

	Params::UUI_Menu_Soldier_Gear_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Soldier_Gear_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "Construct");

	Params::UUI_Menu_Soldier_Gear_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.OnUpdatePlayerCombinedInfo_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EModifiedData>   ModifiedData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      CustomString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "OnUpdatePlayerCombinedInfo_Event");

	Params::UUI_Menu_Soldier_Gear_C_OnUpdatePlayerCombinedInfo_Event_Params Parms{};

	Parms.ModifiedData = ModifiedData;
	Parms.CustomString = CustomString;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Soldier_Gear_C::BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UUI_Menu_Soldier_Gear_C_BndEvt__UI_Menu_Soldier_Gear_UI_Menu_Solder_Gear_Watch_Slot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Soldier_Gear.UI_Menu_Soldier_Gear_C.ExecuteUbergraph_UI_Menu_Soldier_Gear
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Menu_Solder_Gear_Watch_Selector_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EModifiedData>   K2Node_CustomEvent_ModifiedData                                  (ConstParm, ReferenceParm)
// class FString                      K2Node_CustomEvent_CustomString                                  (ZeroConstructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Menu_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Menu                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetPlayerCombinedInfo_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Soldier_Gear_C::ExecuteUbergraph_UI_Menu_Soldier_Gear(int32 EntryPoint, class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_Create_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Soldier_Gear_C", "ExecuteUbergraph_UI_Menu_Soldier_Gear");

	Params::UUI_Menu_Soldier_Gear_C_ExecuteUbergraph_UI_Menu_Soldier_Gear_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_ModifiedData = K2Node_CustomEvent_ModifiedData;
	Parms.K2Node_CustomEvent_CustomString = K2Node_CustomEvent_CustomString;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Menu = K2Node_DynamicCast_AsBP_PG_Player_State_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCombinedInfo_ReturnValue = CallFunc_GetPlayerCombinedInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



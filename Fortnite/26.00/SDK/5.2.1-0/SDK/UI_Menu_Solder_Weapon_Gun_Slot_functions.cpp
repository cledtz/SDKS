#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C
// (None)

class UClass* UUI_Menu_Solder_Weapon_Gun_Slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Slot_C");

	return Clss;
}


// UI_Menu_Solder_Weapon_Gun_Slot_C UI_Menu_Solder_Weapon_Gun_Slot.Default__UI_Menu_Solder_Weapon_Gun_Slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Solder_Weapon_Gun_Slot_C* UUI_Menu_Solder_Weapon_Gun_Slot_C::GetDefaultObj()
{
	static class UUI_Menu_Solder_Weapon_Gun_Slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Solder_Weapon_Gun_Slot_C*>(UUI_Menu_Solder_Weapon_Gun_Slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.Reset
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "Reset");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_Reset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.SetGunCurrentLevel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              L_XpForNextLevel                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_Class                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Temp_int_Variable                                                (ReferenceParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Temp_int_Variable_1                                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Slot_C::SetGunCurrentLevel(int32 Level, int32 L_XpForNextLevel, class UClass* L_Class, TArray<int32>& Temp_int_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, float CallFunc_GetNumberField_ReturnValue, bool CallFunc_HasField_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, TArray<int32>& Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "SetGunCurrentLevel");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_SetGunCurrentLevel_Params Parms{};

	Parms.Level = Level;
	Parms.L_XpForNextLevel = L_XpForNextLevel;
	Parms.L_Class = L_Class;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_GetObjectField_ReturnValue_2 = CallFunc_GetObjectField_ReturnValue_2;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetNumberField_ReturnValue = CallFunc_GetNumberField_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.SetGunInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInfo                WeaponInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          L_ProgressCustomData                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      L_GunClass                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Temp_int_Variable                                                (ReferenceParm)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Temp_int_Variable_1                                              (ReferenceParm)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          CallFunc_GetObjectField_ReturnValue_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Temp_int_Variable_2                                              (ReferenceParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumberField_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_HasField_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Gun_General                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Slot_C::SetGunInfo(const struct FST_ItemInfo& WeaponInfo, class UPlayFabJsonObject* L_ProgressCustomData, class UClass* L_GunClass, TArray<int32>& Temp_int_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 K2Node_LowEntry_LocalVariable_Value__Object, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<int32>& Temp_int_Variable_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_2, TArray<int32>& Temp_int_Variable_2, int32 CallFunc_Array_Get_Item, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_GetNumberField_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_HasField_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "SetGunInfo");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_SetGunInfo_Params Parms{};

	Parms.WeaponInfo = WeaponInfo;
	Parms.L_ProgressCustomData = L_ProgressCustomData;
	Parms.L_GunClass = L_GunClass;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetObjectField_ReturnValue = CallFunc_GetObjectField_ReturnValue;
	Parms.CallFunc_GetObjectField_ReturnValue_1 = CallFunc_GetObjectField_ReturnValue_1;
	Parms.CallFunc_GetObjectField_ReturnValue_2 = CallFunc_GetObjectField_ReturnValue_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetNumberField_ReturnValue = CallFunc_GetNumberField_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_HasField_ReturnValue = CallFunc_HasField_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsItem_Gun_General = K2Node_ClassDynamicCast_AsItem_Gun_General;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnLoaded_503BF7D84280753A745D10BCFB457159
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Slot_C::OnLoaded_503BF7D84280753A745D10BCFB457159(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "OnLoaded_503BF7D84280753A745D10BCFB457159");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_OnLoaded_503BF7D84280753A745D10BCFB457159_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnSucceed_6B3CF19F4BF6A7EDC16A8990579E04C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::OnSucceed_6B3CF19F4BF6A7EDC16A8990579E04C4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "OnSucceed_6B3CF19F4BF6A7EDC16A8990579E04C4");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_OnSucceed_6B3CF19F4BF6A7EDC16A8990579E04C4_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "PreConstruct");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "Construct");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_Customization_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_BndEvt__UI_Menu_Solder_Weapon_Gun_Slot_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnClickBack_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::OnClickBack_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "OnClickBack_Event");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_OnClickBack_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.AsyncLoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   ItemIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Slot_C::AsyncLoadIcon(TSoftObjectPtr<class UTexture2D> ItemIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "AsyncLoadIcon");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_AsyncLoadIcon_Params Parms{};

	Parms.ItemIcon = ItemIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnDark_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Menu_Solder_Weapon_Gun_Slot_C::OnDark_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "OnDark_Event");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_OnDark_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGunSlot                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UTask_Menu_CameraTransition_C*CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_CameraTransitions_DarkenScreen_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_Menu_GeneralMenuScreen_SetActivePage_C*CallFunc_CreateAction_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Menu_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_2              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_ItemIcon                                      (HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Slot_C::ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Slot(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, enum class EGunSlot Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UTask_Menu_CameraTransition_C* CallFunc_CreateAction_ReturnValue, class UUI_CameraTransitions_DarkenScreen_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTask_Menu_GeneralMenuScreen_SetActivePage_C* CallFunc_CreateAction_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class FText K2Node_Select_Default, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1, bool K2Node_DynamicCast_bSuccess_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_2, bool K2Node_DynamicCast_bSuccess_3, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_ItemIcon, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Slot");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreateAction_ReturnValue_1 = CallFunc_CreateAction_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1 = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_2 = K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_ItemIcon = K2Node_CustomEvent_ItemIcon;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Menu_Solder_Weapon_Gun_Slot_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHover                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Slot_C::OnHovered__DelegateSignature(class UUI_Menu_Solder_Weapon_Gun_Slot_C* Slot, bool IsHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "OnHovered__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.IsHover = IsHover;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Menu_Solder_Weapon_Gun_Slot.UI_Menu_Solder_Weapon_Gun_Slot_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Menu_Solder_Weapon_Gun_Slot_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Slot_C::OnSelected__DelegateSignature(class UUI_Menu_Solder_Weapon_Gun_Slot_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Slot_C", "OnSelected__DelegateSignature");

	Params::UUI_Menu_Solder_Weapon_Gun_Slot_C_OnSelected__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}

}



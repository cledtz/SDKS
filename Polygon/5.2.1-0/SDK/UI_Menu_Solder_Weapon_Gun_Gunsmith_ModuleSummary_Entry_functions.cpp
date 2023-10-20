#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry.UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C
// (None)

class UClass* UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C");

	return Clss;
}


// UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry.Default__UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C* UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C::GetDefaultObj()
{
	static class UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C*>(UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry.UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C.ParseCharacteristic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UDataContainerValue_Bool*    K2Node_DynamicCast_AsBool                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    K2Node_LowEntry_LocalVariable_Value__1_Object                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_FText*   K2Node_DynamicCast_AsFText                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C::ParseCharacteristic(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FName Temp_name_Variable, const struct FLinearColor& Temp_struct_Variable_1, class FText K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default_1, class UDataContainerValue_Base* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__Object, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UDataContainerValue_Bool* K2Node_DynamicCast_AsBool, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName Temp_name_Variable_1, class UDataContainerValue_Base* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__1_Object, bool CallFunc_IsValid_ReturnValue_2, class UDataContainerValue_FText* K2Node_DynamicCast_AsFText, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C", "ParseCharacteristic");

	Params::UUI_Menu_Solder_Weapon_Gun_Gunsmith_ModuleSummary_Entry_C_ParseCharacteristic_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_DynamicCast_AsBool = K2Node_DynamicCast_AsBool;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_LowEntry_LocalVariable_Value__1_Object = K2Node_LowEntry_LocalVariable_Value__1_Object;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFText = K2Node_DynamicCast_AsFText;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



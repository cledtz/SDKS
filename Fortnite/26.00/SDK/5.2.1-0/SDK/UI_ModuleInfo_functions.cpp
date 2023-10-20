#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ModuleInfo.UI_ModuleInfo_C
// (None)

class UClass* UUI_ModuleInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ModuleInfo_C");

	return Clss;
}


// UI_ModuleInfo_C UI_ModuleInfo.Default__UI_ModuleInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ModuleInfo_C* UUI_ModuleInfo_C::GetDefaultObj()
{
	static class UUI_ModuleInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ModuleInfo_C*>(UUI_ModuleInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ModuleInfo.UI_ModuleInfo_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ModuleClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    CallFunc_FindDataContainerValue_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_FText*   K2Node_DynamicCast_AsFText                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ModuleInfo_C::SetDescription(class UClass* ModuleClass, bool CallFunc_IsValid_ReturnValue, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue, class UDataContainerValue_FText* K2Node_DynamicCast_AsFText, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModuleInfo_C", "SetDescription");

	Params::UUI_ModuleInfo_C_SetDescription_Params Parms{};

	Parms.ModuleClass = ModuleClass;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindDataContainerValue_ReturnValue = CallFunc_FindDataContainerValue_ReturnValue;
	Parms.K2Node_DynamicCast_AsFText = K2Node_DynamicCast_AsFText;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModuleInfo.UI_ModuleInfo_C.SetRare
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ModuleClass                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EItemRareType           L_Rare                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemRareType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Subtract_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetRareColor_NewParam                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsItem_Module_Skin                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ModuleInfo_C::SetRare(class UClass* ModuleClass, enum class EItemRareType L_Rare, class FText Temp_text_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class EItemRareType Temp_byte_Variable, uint8 CallFunc_Subtract_ByteByte_ReturnValue, class FText K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FLinearColor& CallFunc_GetRareColor_NewParam, class UClass* K2Node_ClassDynamicCast_AsItem_Module_Skin, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModuleInfo_C", "SetRare");

	Params::UUI_ModuleInfo_C_SetRare_Params Parms{};

	Parms.ModuleClass = ModuleClass;
	Parms.L_Rare = L_Rare;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Subtract_ByteByte_ReturnValue = CallFunc_Subtract_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetRareColor_NewParam = CallFunc_GetRareColor_NewParam;
	Parms.K2Node_ClassDynamicCast_AsItem_Module_Skin = K2Node_ClassDynamicCast_AsItem_Module_Skin;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModuleInfo.UI_ModuleInfo_C.FindModuleCharacteristic
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataContainerObjectWrapper DataContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FString                      CharacteristicKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    CallFunc_FindDataContainerValue_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Base*    K2Node_LowEntry_LocalVariable_Value__Object                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataContainerValue_Float*   K2Node_DynamicCast_AsFloat                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ModuleInfo_C::FindModuleCharacteristic(const struct FDataContainerObjectWrapper& DataContainer, const class FString& CharacteristicKey, float* Value, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UDataContainerValue_Base* CallFunc_FindDataContainerValue_ReturnValue, class UDataContainerValue_Base* K2Node_LowEntry_LocalVariable_Value__Object, bool CallFunc_IsValid_ReturnValue_1, class UDataContainerValue_Float* K2Node_DynamicCast_AsFloat, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModuleInfo_C", "FindModuleCharacteristic");

	Params::UUI_ModuleInfo_C_FindModuleCharacteristic_Params Parms{};

	Parms.DataContainer = DataContainer;
	Parms.CharacteristicKey = CharacteristicKey;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_FindDataContainerValue_ReturnValue = CallFunc_FindDataContainerValue_ReturnValue;
	Parms.K2Node_LowEntry_LocalVariable_Value__Object = K2Node_LowEntry_LocalVariable_Value__Object;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFloat = K2Node_DynamicCast_AsFloat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_ModuleInfo.UI_ModuleInfo_C.ParseModuleInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      GunClass                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CurrentModuleClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ComparisonModuleClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGunModuleInfo              L_ComparisonModuleInfo                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FGunModuleInfo              L_CurrentModuleInfo                                              (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGunModulesInfo*             K2Node_DynamicCast_AsGun_Modules_Info                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGunModuleInfo              CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindModuleCharacteristic_Value_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_11                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_12                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_13                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ModuleInfo_C::ParseModuleInfo(class UClass* GunClass, class UClass* CurrentModuleClass, class UClass* ComparisonModuleClass, const struct FGunModuleInfo& L_ComparisonModuleInfo, const struct FGunModuleInfo& L_CurrentModuleInfo, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_FindModuleCharacteristic_Value, float CallFunc_FindModuleCharacteristic_Value_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, float CallFunc_FindModuleCharacteristic_Value_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, float CallFunc_FindModuleCharacteristic_Value_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, float CallFunc_FindModuleCharacteristic_Value_4, float CallFunc_FindModuleCharacteristic_Value_5, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_5, float CallFunc_FindModuleCharacteristic_Value_6, float CallFunc_FindModuleCharacteristic_Value_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Add_DoubleDouble_ReturnValue_7, float CallFunc_FindModuleCharacteristic_Value_8, float CallFunc_FindModuleCharacteristic_Value_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, float CallFunc_FindModuleCharacteristic_Value_10, double CallFunc_NormalizeToRange_ReturnValue, float CallFunc_FindModuleCharacteristic_Value_11, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_Add_DoubleDouble_ReturnValue_8, double CallFunc_Add_DoubleDouble_ReturnValue_9, bool CallFunc_IsValidClass_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, class UGunModulesInfo* K2Node_DynamicCast_AsGun_Modules_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue_3, const struct FGunModuleInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_FindModuleCharacteristic_Value_12, double CallFunc_Add_DoubleDouble_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable, float CallFunc_FindModuleCharacteristic_Value_13, double CallFunc_Add_DoubleDouble_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_5, bool CallFunc_IsValidClass_ReturnValue_6, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double CallFunc_Add_DoubleDouble_ReturnValue_12, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double CallFunc_Add_DoubleDouble_ReturnValue_13, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_4, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_6, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_7, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_8, double CallFunc_Add_DoubleDouble_B_ImplicitCast_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModuleInfo_C", "ParseModuleInfo");

	Params::UUI_ModuleInfo_C_ParseModuleInfo_Params Parms{};

	Parms.GunClass = GunClass;
	Parms.CurrentModuleClass = CurrentModuleClass;
	Parms.ComparisonModuleClass = ComparisonModuleClass;
	Parms.L_ComparisonModuleInfo = L_ComparisonModuleInfo;
	Parms.L_CurrentModuleInfo = L_CurrentModuleInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FindModuleCharacteristic_Value = CallFunc_FindModuleCharacteristic_Value;
	Parms.CallFunc_FindModuleCharacteristic_Value_1 = CallFunc_FindModuleCharacteristic_Value_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_FindModuleCharacteristic_Value_2 = CallFunc_FindModuleCharacteristic_Value_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FindModuleCharacteristic_Value_3 = CallFunc_FindModuleCharacteristic_Value_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_FindModuleCharacteristic_Value_4 = CallFunc_FindModuleCharacteristic_Value_4;
	Parms.CallFunc_FindModuleCharacteristic_Value_5 = CallFunc_FindModuleCharacteristic_Value_5;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_5 = CallFunc_Add_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_FindModuleCharacteristic_Value_6 = CallFunc_FindModuleCharacteristic_Value_6;
	Parms.CallFunc_FindModuleCharacteristic_Value_7 = CallFunc_FindModuleCharacteristic_Value_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_6 = CallFunc_Add_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_7 = CallFunc_Add_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_FindModuleCharacteristic_Value_8 = CallFunc_FindModuleCharacteristic_Value_8;
	Parms.CallFunc_FindModuleCharacteristic_Value_9 = CallFunc_FindModuleCharacteristic_Value_9;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_FindModuleCharacteristic_Value_10 = CallFunc_FindModuleCharacteristic_Value_10;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_FindModuleCharacteristic_Value_11 = CallFunc_FindModuleCharacteristic_Value_11;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_8 = CallFunc_Add_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_9 = CallFunc_Add_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_IsValidClass_ReturnValue_2 = CallFunc_IsValidClass_ReturnValue_2;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGun_Modules_Info = K2Node_DynamicCast_AsGun_Modules_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue_3 = CallFunc_IsValidClass_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_4 = CallFunc_IsValidClass_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_FindModuleCharacteristic_Value_12 = CallFunc_FindModuleCharacteristic_Value_12;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_10 = CallFunc_Add_DoubleDouble_ReturnValue_10;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_FindModuleCharacteristic_Value_13 = CallFunc_FindModuleCharacteristic_Value_13;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_11 = CallFunc_Add_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_5 = CallFunc_IsValidClass_ReturnValue_5;
	Parms.CallFunc_IsValidClass_ReturnValue_6 = CallFunc_IsValidClass_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_12 = CallFunc_Add_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_13 = CallFunc_Add_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_1 = CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_2 = CallFunc_Add_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_3 = CallFunc_Add_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_3 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_4 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_4;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_5 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_5;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_6 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_6;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_7 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_7;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast_8 = CallFunc_Multiply_DoubleDouble_B_ImplicitCast_8;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_2 = CallFunc_Add_DoubleDouble_B_ImplicitCast_2;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_3 = CallFunc_Add_DoubleDouble_B_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModuleInfo.UI_ModuleInfo_C.Reset
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModuleInfo_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModuleInfo_C", "Reset");

	Params::UUI_ModuleInfo_C_Reset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
class UItemUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UItemUIFunctionLibrary_C* GetDefaultObj();

	void IsNullItem(class UObject* ItemObject, class UObject* __WorldContext, bool* Is_Null_Item, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void Truncate_Integer_Value(int32 Value, int32 Min_Fractional_Digits, int32 Max_Fractional_Digits, class UObject* __WorldContext, class FText* Formatted_Value, bool Temp_bool_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_2, class FText Temp_text_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class FText Temp_text_Variable_1, bool Temp_bool_Variable_4, class FText Temp_text_Variable_2, double K2Node_Select_Default, class FText Temp_text_Variable_3, double K2Node_Select_Default_1, double K2Node_Select_Default_2, bool Temp_bool_Variable_5, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Convert_Tier_To_Integer(enum class EFortItemTier Tier, class UObject* __WorldContext, int32* Numeric_Tier, enum class EFortItemTier Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 K2Node_Select_Default);
	void ParseLevelRequiredFromString(const class FString& InString, class UObject* __WorldContext, int32* OutInt, int32 CallFunc_FindSubstring_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue);
};

}



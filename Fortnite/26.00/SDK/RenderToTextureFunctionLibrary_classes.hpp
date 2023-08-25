#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C
class URenderToTextureFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URenderToTextureFunctionLibrary_C* GetDefaultObj();

	void Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, double Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	void Array_to_HLSL_Int_Array(enum class EIntTypes Type, class FString& Variable_Name, TArray<int32>& Int, TArray<struct FVector2D>& Int2, TArray<struct FVector>& Int3, TArray<struct FLinearColor>& Int4, class UObject* __WorldContext, class FString* String, const class FString& Curstring, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_BuildString_Int_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, const class FString& CallFunc_BuildString_Int_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_6, const class FString& CallFunc_BuildString_Int_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FVector2D& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const struct FLinearColor& CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, class FText CallFunc_Conv_DoubleToText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_Conv_DoubleToText_ReturnValue_4, class FText CallFunc_Conv_DoubleToText_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, int32 Temp_int_Loop_Counter_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, int32 CallFunc_Add_IntInt_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, int32 Temp_int_Array_Index_Variable_3, const struct FVector& CallFunc_Array_Get_Item_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, class FText CallFunc_Conv_DoubleToText_ReturnValue_6, class FText CallFunc_Conv_DoubleToText_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, class FText CallFunc_Conv_DoubleToText_ReturnValue_8, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_24, const class FString& CallFunc_Concat_StrStr_ReturnValue_25, bool Temp_bool_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_26, const class FString& CallFunc_Concat_StrStr_ReturnValue_27, bool Temp_bool_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_28, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_29, const class FString& CallFunc_Concat_StrStr_ReturnValue_30, const class FString& CallFunc_Concat_StrStr_ReturnValue_31, const class FString& CallFunc_BuildString_Int_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_32, const class FString& CallFunc_Concat_StrStr_ReturnValue_33, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_BuildString_Int_ReturnValue_5, const class FString& K2Node_Select_Default_2, bool Temp_bool_Variable_3, const class FString& K2Node_Select_Default_3, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_1, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_2, double CallFunc_Conv_DoubleToText_Value_ImplicitCast_3);
};

}



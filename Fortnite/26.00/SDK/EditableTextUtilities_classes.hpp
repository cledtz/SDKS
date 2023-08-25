#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EditableTextUtilities.EditableTextUtilities_C
class UEditableTextUtilities_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEditableTextUtilities_C* GetDefaultObj();

	void CheckIfNeedsTrimming(class FText Text, int32 Limit, class UObject* __WorldContext, class FText* TrimmedText, bool* WasTrimmed, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Left_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void LimitTextLength(class UWidget* EditableTextWidget, int32 Length, class UObject* __WorldContext, bool* WasTrimmed, class UEditableText* K2Node_DynamicCast_AsEditable_Text, bool K2Node_DynamicCast_bSuccess, class UEditableTextBox* K2Node_DynamicCast_AsText_Box, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_CheckIfNeedsTrimming_TrimmedText, bool CallFunc_CheckIfNeedsTrimming_WasTrimmed, class FText CallFunc_CheckIfNeedsTrimming_TrimmedText_1, bool CallFunc_CheckIfNeedsTrimming_WasTrimmed_1);
};

}



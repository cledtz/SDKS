#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x95 (0x315 - 0x280)
// WidgetBlueprintGeneratedClass UI_ItemCharacteristic_Parameter.UI_ItemCharacteristic_Parameter_C
class UUI_ItemCharacteristic_Parameter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Parameter_Difference;                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_PrimaryParameter;                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_SecondaryParameter;                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_Bottom;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Parameter;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Parameter_Difference;                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ParameterName;                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ParameterName;                                     // 0x2C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       MinParameter;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       MaxParameter;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         InvertColor;                                       // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3015[0x7];                                     // Fixing Size After Last Property 
	double                                       NewParameter;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OldParameter;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InterpParameter;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InterpParameterNormalized;                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Decimal_;                                          // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HideIfDefault;                                     // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ItemCharacteristic_Parameter_C* GetDefaultObj();

	void CalculateParameters(const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FLinearColor& K2Node_Select_Default, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast_2, float CallFunc_SetPercent_InPercent_ImplicitCast_3);
	void SetParameters(double CurrentParameter, double CompareParameter, bool InstantSet, bool L_InvertColor, double L_OldParameter, double L_NewParameter, bool Temp_bool_Variable, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_ItemCharacteristic_Parameter(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue);
};

}



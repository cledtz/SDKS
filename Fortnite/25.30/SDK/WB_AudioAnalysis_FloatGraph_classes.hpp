#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x328 - 0x2A8)
// WidgetBlueprintGeneratedClass WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
class UWB_AudioAnalysis_FloatGraph_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label_;                                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Position;                                          // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Calculated;                                        // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48C3[0x3];                                     // Fixing Size After Last Property
	class FName                                  Parameter;                                         // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                     Points;                                            // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NumPoints;                                         // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x30C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        VectorIndex;                                       // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialParameterCollection*          Collection;                                        // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WB_AudioAnalysis_FloatGraph_C");
		return Clss;
	}

	void OnPaint(struct FPaintContext& Context);
	void CalcWidgetSize(const struct FGeometry& Geom, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Set_Value(double Value, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Initialize_MPC(class FName Parameter, class UMaterialParameterCollection* Collection, int32 VectorIndex);
	void ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName K2Node_CustomEvent_Parameter, class UMaterialParameterCollection* K2Node_CustomEvent_Collection, int32 K2Node_CustomEvent_VectorIndex, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScalarParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class FText CallFunc_Conv_DoubleToText_ReturnValue, int32 Temp_int_Variable, double K2Node_Select_Default, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, double CallFunc_Set_Value_value_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, double K2Node_Select_Option_2_ImplicitCast, double K2Node_Select_Option_3_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

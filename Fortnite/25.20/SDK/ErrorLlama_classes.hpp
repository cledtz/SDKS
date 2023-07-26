#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2F0 - 0x2A8)
// WidgetBlueprintGeneratedClass ErrorLlama.ErrorLlama_C
class UErrorLlama_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Llama;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bFlippedTexture;                                   // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0CB[0x7];                                     // Fixing Size After Last Property..
	struct FVector2D                             CurLookAt2D;                                       // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CurInputType;                                      // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0CC[0x7];                                     // Fixing Size After Last Property..
	double                                       EyeInterpSpeed;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaterialInputScale;                                // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ErrorLlama_C");
		return Clss;
	}

	void HandleInputTypeChanged(enum class ECommonInputType NewInputType);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RandomizeColor();
	void HandleNormalizedInputDirection(const struct FVector2D& _2DInputVec);
	void ExecuteUbergraph_ErrorLlama(int32 EntryPoint, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, bool Temp_bool_Variable, double Temp_real_Variable_10, double Temp_real_Variable_11, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetMousePositionOnPlatform_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, double K2Node_Select_Default, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Variable, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, double CallFunc_Multiply_DoubleDouble_ReturnValue, double K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector2D& K2Node_CustomEvent_2DInputVec, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_Vector2DInterpTo_InterpSpeed_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

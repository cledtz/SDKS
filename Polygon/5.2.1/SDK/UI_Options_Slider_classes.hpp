#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2C1 - 0x280)
// WidgetBlueprintGeneratedClass UI_Options_Slider.UI_Options_Slider_C
class UUI_Options_Slider_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USlider*                               Slider;                                            // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  CVarName;                                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       MinValue;                                          // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       MaxValue;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       SelectValue;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         AutoApply;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Options_Slider_C");
		return Clss;
	}

	void ApplyValue(const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const struct FAutoSettingData& K2Node_MakeStruct_AutoSettingData, float CallFunc_SetFloatCVar_Value_ImplicitCast);
	void GetValue(double* Value);
	void SetValue(double Value, double CallFunc_FClamp_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Options_Slider(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, float CallFunc_GetFloatCVar_ReturnValue, float CallFunc_SetMinValue_InValue_ImplicitCast, float CallFunc_SetMaxValue_InValue_ImplicitCast, double K2Node_VariableSet_SelectValue_ImplicitCast, double CallFunc_SetValue_Value_ImplicitCast);
	void OnValueChanged__DelegateSignature(double Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x690 (0x7E0 - 0x150)
// Class AdvancedWidgets.RadialSlider
class URadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x154(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomDefaultValue;                            // 0x164(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D5[0x3];                                     // Fixing Size After Last Property
	float                                        CustomDefaultValue;                                // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D6[0x4];                                     // Fixing Size After Last Property
	struct FRuntimeFloatCurve                    SliderRange;                                       // 0x170(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<float>                                ValueTags;                                         // 0x1F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SliderHandleStartAngle;                            // 0x208(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderHandleEndAngle;                              // 0x20C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularOffset;                                     // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D8[0x4];                                     // Fixing Size After Last Property
	struct FVector2D                             HandStartEndRatio;                                 // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27D9[0x8];                                     // Fixing Size After Last Property
	struct FSliderStyle                          WidgetStyle;                                       // 0x230(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderBarColor;                                    // 0x730(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderProgressColor;                               // 0x740(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x750(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CenterBackgroundColor;                             // 0x760(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x770(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MouseUsesStep;                                     // 0x771(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiresControllerLock;                            // 0x772(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DB[0x1];                                     // Fixing Size After Last Property
	float                                        StepSize;                                          // 0x774(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x778(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseVerticalDrag;                                   // 0x779(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowSliderHandle;                                  // 0x77A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowSliderHand;                                    // 0x77B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DD[0x4];                                     // Fixing Size After Last Property
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x780(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x790(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x7A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x7B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x7C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_27DF[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RadialSlider");
		return Clss;
	}

	void SetValueTags(TArray<float>& InValueTags);
	void SetValue(float InValue);
	void SetUseVerticalDrag(bool InUseVerticalDrag);
	void SetStepSize(float InValue);
	void SetSliderRange(struct FRuntimeFloatCurve& InSliderRange);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderHandleStartAngle(float InValue);
	void SetSliderHandleEndAngle(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetShowSliderHandle(bool InShowSliderHandle);
	void SetShowSliderHand(bool InShowSliderHand);
	void SetLocked(bool InValue);
	void SetHandStartEndRatio(const struct FVector2D& InValue);
	void SetCustomDefaultValue(float InValue);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	void SetAngularOffset(float InValue);
	float GetValue();
	float GetNormalizedSliderHandlePosition();
	float GetCustomDefaultValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

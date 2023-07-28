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

// 0x538 (0x6B0 - 0x178)
// Class AudioWidgets.AudioMeter
class UAudioMeter : public UWidget
{
public:
	TArray<struct FMeterChannelInfo>             MeterChannelInfo;                                  // 0x178(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           MeterChannelInfoDelegate;                          // 0x188(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8548[0xC];                                     // Fixing Size After Last Property..
	struct FAudioMeterStyle                      WidgetStyle;                                       // 0x1A0(0x480)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x620(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8549[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          BackgroundColor;                                   // 0x624(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterBackgroundColor;                              // 0x634(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterValueColor;                                   // 0x644(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterPeakColor;                                    // 0x654(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterClippingColor;                                // 0x664(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterScaleColor;                                   // 0x674(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterScaleLabelColor;                              // 0x684(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854A[0x1C];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioMeter");
		return Clss;
	}

	void SetMeterValueColor(const struct FLinearColor& InValue);
	void SetMeterScaleLabelColor(const struct FLinearColor& InValue);
	void SetMeterScaleColor(const struct FLinearColor& InValue);
	void SetMeterPeakColor(const struct FLinearColor& InValue);
	void SetMeterClippingColor(const struct FLinearColor& InValue);
	void SetMeterChannelInfo(TArray<struct FMeterChannelInfo>& InMeterChannelInfo);
	void SetMeterBackgroundColor(const struct FLinearColor& InValue);
	void SetBackgroundColor(const struct FLinearColor& InValue);
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo();
};

// 0x208 (0x380 - 0x178)
// Class AudioWidgets.AudioRadialSlider
class UAudioRadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x17C(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioRadialSliderLayout          WidgetLayout;                                      // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854B[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CenterBackgroundColor;                             // 0x18C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderProgressColor;                               // 0x19C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderBarColor;                                    // 0x1AC(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854C[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             HandStartEndRatio;                                 // 0x1C0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  UnitsText;                                         // 0x1D0(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x1E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowLabelOnlyOnHover;                              // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUnitsText;                                     // 0x1F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnitsTextReadOnly;                               // 0x1FA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValueTextReadOnly;                               // 0x1FB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderThickness;                                   // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OutputRange;                                       // 0x200(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_854D[0x160];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioRadialSlider");
		return Clss;
	}

	void SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout);
	void SetValueTextReadOnly(bool bIsReadOnly);
	void SetUnitsTextReadOnly(bool bIsReadOnly);
	void SetUnitsText(class FText Units);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
	void SetSliderThickness(float InThickness);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetShowUnitsText(bool bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
	void SetOutputRange(const struct FVector2D& InOutputRange);
	void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	float GetSliderValue(float OutputValue);
	float GetOutputValue(float InSliderValue);
};

// 0x0 (0x380 - 0x380)
// Class AudioWidgets.AudioVolumeRadialSlider
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioVolumeRadialSlider");
		return Clss;
	}

};

// 0x0 (0x380 - 0x380)
// Class AudioWidgets.AudioFrequencyRadialSlider
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioFrequencyRadialSlider");
		return Clss;
	}

};

// 0x7B8 (0x930 - 0x178)
// Class AudioWidgets.AudioSliderBase
class UAudioSliderBase : public UWidget
{
public:
	float                                        Value;                                             // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854E[0x4];                                     // Fixing Size After Last Property..
	class FText                                  UnitsText;                                         // 0x180(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x198(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextLabelBackgroundColorDelegate;                  // 0x1A8(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowLabelOnlyOnHover;                              // 0x1B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUnitsText;                                     // 0x1B5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnitsTextReadOnly;                               // 0x1B6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValueTextReadOnly;                               // 0x1B7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1B8(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderBackgroundColor;                             // 0x1C4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderBackgroundColorDelegate;                     // 0x1D4(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderBarColor;                                    // 0x1E0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderBarColorDelegate;                            // 0x1F0(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderThumbColor;                                  // 0x1FC(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderThumbColorDelegate;                          // 0x20C(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WidgetBackgroundColor;                             // 0x218(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           WidgetBackgroundColorDelegate;                     // 0x228(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x234(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854F[0x3];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8550[0x6E8];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSliderBase");
		return Clss;
	}

	void SetWidgetBackgroundColor(const struct FLinearColor& InValue);
	void SetValueTextReadOnly(bool bIsReadOnly);
	void SetUnitsTextReadOnly(bool bIsReadOnly);
	void SetUnitsText(class FText Units);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
	void SetSliderThumbColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderBackgroundColor(const struct FLinearColor& InValue);
	void SetShowUnitsText(bool bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
	float GetSliderValue(float OutputValue);
	float GetOutputValue(float InSliderValue);
	float GetLinValue(float OutputValue);
};

// 0x10 (0x940 - 0x930)
// Class AudioWidgets.AudioSlider
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>            LinToOutputCurve;                                  // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCurveFloat>            OutputToLinCurve;                                  // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSlider");
		return Clss;
	}

};

// 0x0 (0x940 - 0x940)
// Class AudioWidgets.AudioVolumeSlider
class UAudioVolumeSlider : public UAudioSlider
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioVolumeSlider");
		return Clss;
	}

};

// 0x10 (0x940 - 0x930)
// Class AudioWidgets.AudioFrequencySlider
class UAudioFrequencySlider : public UAudioSliderBase
{
public:
	struct FVector2D                             OutputRange;                                       // 0x930(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioFrequencySlider");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAudioRadialSliderLayout : uint8
{
	Layout_LabelTop                = 0,
	Layout_LabelCenter             = 1,
	Layout_LabelBottom             = 2,
	Layout_MAX                     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct AudioWidgets.MeterChannelInfo
struct FMeterChannelInfo
{
public:
	float                                        MeterValue;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeakValue;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClippingValue;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x478 (0x480 - 0x8)
// ScriptStruct AudioWidgets.AudioMeterStyle
struct FAudioMeterStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_3751[0x8];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           MeterValueImage;                                   // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImage;                                   // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MeterBackgroundImage;                              // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MeterValueBackgroundImage;                         // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MeterPeakImage;                                    // 0x310(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             MeterSize;                                         // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MeterPadding;                                      // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeterValuePadding;                                 // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeakValueWidth;                                    // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ValueRangeDb;                                      // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowScale;                                        // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleSide;                                        // 0x409(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3753[0x2];                                     // Fixing Size After Last Property 
	float                                        ScaleHashOffset;                                   // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleHashWidth;                                    // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleHashHeight;                                   // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DecibelsPerHash;                                   // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3754[0x4];                                     // Fixing Size After Last Property 
	struct FSlateFontInfo                        Font;                                              // 0x420(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3755[0x8];                                     // Fixing Size Of Struct
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct AudioWidgets.AudioTextBoxStyle
struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_375A[0x8];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           BackgroundImage;                                   // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0xD0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_375B[0xC];                                     // Fixing Size Of Struct
};

// 0x6C8 (0x6D0 - 0x8)
// ScriptStruct AudioWidgets.AudioSliderStyle
struct FAudioSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_375C[0x8];                                     // Fixing Size After Last Property 
	struct FSliderStyle                          SliderStyle;                                       // 0x10(0x4A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x4B0(0xF0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           WidgetBackgroundImage;                             // 0x5A0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           SliderBackgroundColor;                             // 0x660(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_375E[0x4];                                     // Fixing Size After Last Property 
	struct FVector2D                             SliderBackgroundSize;                              // 0x678(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LabelPadding;                                      // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           SliderBarColor;                                    // 0x68C(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           SliderThumbColor;                                  // 0x6A0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           WidgetBackgroundColor;                             // 0x6B4(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_375F[0x8];                                     // Fixing Size Of Struct
};

// 0x148 (0x150 - 0x8)
// ScriptStruct AudioWidgets.AudioRadialSliderStyle
struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_37AE[0x8];                                     // Fixing Size After Last Property 
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x10(0xF0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           CenterBackgroundColor;                             // 0x100(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           SliderBarColor;                                    // 0x114(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           SliderProgressColor;                               // 0x128(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        LabelPadding;                                      // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultSliderRadius;                               // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B0[0xC];                                     // Fixing Size Of Struct
};

// 0x148 (0x150 - 0x8)
// ScriptStruct AudioWidgets.SampledSequenceViewerStyle
struct FSampledSequenceViewerStyle : public FSlateWidgetStyle
{
public:
	struct FSlateColor                           SequenceColor;                                     // 0x8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        SequenceLineThickness;                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           MajorGridLineColor;                                // 0x20(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           MinorGridLineColor;                                // 0x34(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ZeroCrossingLineColor;                             // 0x48(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ZeroCrossingLineThickness;                         // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SampleMarkersSize;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           SequenceBackgroundColor;                           // 0x64(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B6[0x8];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           BackgroundBrush;                                   // 0x80(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        DesiredWidth;                                      // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredHeight;                                     // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B9[0x8];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct AudioWidgets.PlayheadOverlayStyle
struct FPlayheadOverlayStyle : public FSlateWidgetStyle
{
public:
	struct FSlateColor                           PlayheadColor;                                     // 0x8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        PlayheadWidth;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredWidth;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredHeight;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x248 (0x250 - 0x8)
// ScriptStruct AudioWidgets.FixedSampleSequenceRulerStyle
struct FFixedSampleSequenceRulerStyle : public FSlateWidgetStyle
{
public:
	float                                        HandleWidth;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           HandleColor;                                       // 0xC(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HandleBrush;                                       // 0x20(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           TicksColor;                                        // 0xE0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           TicksTextColor;                                    // 0xF4(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        TicksTextFont;                                     // 0x108(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TicksTextOffset;                                   // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0x164(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C5[0x8];                                     // Fixing Size After Last Property 
	struct FSlateBrush                           BackgroundBrush;                                   // 0x180(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        DesiredWidth;                                      // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredHeight;                                     // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C6[0x8];                                     // Fixing Size Of Struct
};

// 0x90 (0x98 - 0x8)
// ScriptStruct AudioWidgets.SampledSequenceValueGridOverlayStyle
struct FSampledSequenceValueGridOverlayStyle : public FSlateWidgetStyle
{
public:
	struct FSlateColor                           GridColor;                                         // 0x8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        GridThickness;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           LabelTextColor;                                    // 0x20(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C8[0x4];                                     // Fixing Size After Last Property 
	struct FSlateFontInfo                        LabelTextFont;                                     // 0x38(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredWidth;                                      // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredHeight;                                     // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}



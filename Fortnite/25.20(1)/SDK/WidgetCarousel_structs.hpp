#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x538 (0x540 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_8824[0x8];                                     // Fixing Size After Last Property..
	struct FButtonStyle                          InnerButtonStyle;                                  // 0x10(0x3B0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonLeftImage;                         // 0x3C0(0xC0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonRightImage;                        // 0x480(0xC0)(NativeAccessSpecifierPublic)
};

// 0xBD8 (0xBE0 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_8825[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           HighlightBrush;                                    // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          LeftButtonStyle;                                   // 0xD0(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CenterButtonStyle;                                 // 0x480(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RightButtonStyle;                                  // 0x830(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

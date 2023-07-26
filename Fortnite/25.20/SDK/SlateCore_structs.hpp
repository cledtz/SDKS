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

enum class EUINavigationRule : uint8
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	CustomBoundary                 = 5,
	Invalid                        = 6,
	EUINavigationRule_MAX          = 7,
};

enum class EColorVisionDeficiency : uint8
{
	NormalVision                   = 0,
	Deuteranope                    = 1,
	Protanope                      = 2,
	Tritanope                      = 3,
	EColorVisionDeficiency_MAX     = 4,
};

enum class EButtonClickMethod : uint8
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4,
};

enum class EButtonTouchMethod : uint8
{
	DownAndUp                      = 0,
	Down                           = 1,
	PreciseTap                     = 2,
	EButtonTouchMethod_MAX         = 3,
};

enum class EButtonPressMethod : uint8
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3,
};

enum class EUINavigation : uint8
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8,
};

enum class EUINavigationAction : uint8
{
	Accept                         = 0,
	Back                           = 1,
	Num                            = 2,
	Invalid                        = 3,
	EUINavigationAction_MAX        = 4,
};

enum class ENavigationSource : uint8
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2,
};

enum class ENavigationGenesis : uint8
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3,
};

enum class EHorizontalAlignment : uint8
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,
};

enum class EVerticalAlignment : uint8
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,
};

enum class EMenuPlacement : uint8
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13,
};

enum class EOrientation : uint8
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,
};

enum class EScrollDirection : uint8
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,
};

enum class ETextCommit : uint8
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4,
};

enum class ESelectInfo : uint8
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4,
};

enum class ESlateDebuggingInputEvent : uint8
{
	MouseMove                      = 0,
	MouseEnter                     = 1,
	MouseLeave                     = 2,
	PreviewMouseButtonDown         = 3,
	MouseButtonDown                = 4,
	MouseButtonUp                  = 5,
	MouseButtonDoubleClick         = 6,
	MouseWheel                     = 7,
	TouchStart                     = 8,
	TouchEnd                       = 9,
	TouchForceChanged              = 10,
	TouchFirstMove                 = 11,
	TouchMoved                     = 12,
	DragDetected                   = 13,
	DragEnter                      = 14,
	DragLeave                      = 15,
	DragOver                       = 16,
	DragDrop                       = 17,
	DropMessage                    = 18,
	PreviewKeyDown                 = 19,
	KeyDown                        = 20,
	KeyUp                          = 21,
	KeyChar                        = 22,
	AnalogInput                    = 23,
	TouchGesture                   = 24,
	MotionDetected                 = 25,
	MAX                            = 26,
};

enum class ESlateDebuggingStateChangeEvent : uint8
{
	MouseCaptureGained             = 0,
	MouseCaptureLost               = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class ESlateDebuggingNavigationMethod : uint8
{
	Unknown                        = 0,
	Explicit                       = 1,
	CustomDelegateBound            = 2,
	CustomDelegateUnbound          = 3,
	NextOrPrevious                 = 4,
	HitTestGrid                    = 5,
	ESlateDebuggingNavigationMethod_MAX = 6,
};

enum class ESlateDebuggingFocusEvent : uint8
{
	FocusChanging                  = 0,
	FocusLost                      = 1,
	FocusReceived                  = 2,
	MAX                            = 3,
};

enum class EFontHinting : uint8
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5,
};

enum class EFontLoadingPolicy : uint8
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class EFontLayoutMethod : uint8
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2,
};

enum class ETextShapingMethod : uint8
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class EFocusCause : uint8
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6,
};

enum class EWidgetClipping : uint8
{
	Inherit                        = 0,
	ClipToBounds                   = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways             = 3,
	OnDemand                       = 4,
	EWidgetClipping_MAX            = 5,
};

enum class EFlowDirectionPreference : uint8
{
	Inherit                        = 0,
	Culture                        = 1,
	LeftToRight                    = 2,
	RightToLeft                    = 3,
	EFlowDirectionPreference_MAX   = 4,
};

enum class ESlateBrushDrawType : uint8
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	RoundedBox                     = 4,
	ESlateBrushDrawType_MAX        = 5,
};

enum class ESlateBrushTileType : uint8
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4,
};

enum class ESlateBrushMirrorType : uint8
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4,
};

enum class ESlateBrushImageType : uint8
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	Vector                         = 3,
	ESlateBrushImageType_MAX       = 4,
};

enum class ESlateBrushRoundingType : uint8
{
	FixedRadius                    = 0,
	HalfHeightRadius               = 1,
	ESlateBrushRoundingType_MAX    = 2,
};

enum class ESlateColorStylingMode : uint8
{
	UseColor_Specified             = 0,
	UseColor_ColorTable            = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_UseStyle              = 4,
	UseColor_MAX                   = 5,
};

enum class EConsumeMouseWheel : uint8
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3,
};

enum class ESlateParentWindowSearchMethod : uint8
{
	ActiveWindow                   = 0,
	MainWindow                     = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class ESlateCheckBoxType : uint8
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2,
};

enum class ECheckBoxState : uint8
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3,
};

enum class ETextOverflowPolicy : uint8
{
	Clip                           = 0,
	Ellipsis                       = 1,
	ETextOverflowPolicy_MAX        = 2,
};

enum class ETextTransformPolicy : uint8
{
	None                           = 0,
	ToLower                        = 1,
	ToUpper                        = 2,
	ETextTransformPolicy_MAX       = 3,
};

enum class EStyleColor : uint8
{
	Black                          = 0,
	Background                     = 1,
	Title                          = 2,
	WindowBorder                   = 3,
	Foldout                        = 4,
	Input                          = 5,
	InputOutline                   = 6,
	Recessed                       = 7,
	Panel                          = 8,
	Header                         = 9,
	Dropdown                       = 10,
	DropdownOutline                = 11,
	Hover                          = 12,
	Hover2                         = 13,
	White                          = 14,
	White25                        = 15,
	Highlight                      = 16,
	Primary                        = 17,
	PrimaryHover                   = 18,
	PrimaryPress                   = 19,
	Secondary                      = 20,
	Foreground                     = 21,
	ForegroundHover                = 22,
	ForegroundInverted             = 23,
	ForegroundHeader               = 24,
	Select                         = 25,
	SelectInactive                 = 26,
	SelectParent                   = 27,
	SelectHover                    = 28,
	Notifications                  = 29,
	AccentBlue                     = 30,
	AccentPurple                   = 31,
	AccentPink                     = 32,
	AccentRed                      = 33,
	AccentOrange                   = 34,
	AccentYellow                   = 35,
	AccentGreen                    = 36,
	AccentBrown                    = 37,
	AccentBlack                    = 38,
	AccentGray                     = 39,
	AccentWhite                    = 40,
	AccentFolder                   = 41,
	Warning                        = 42,
	Error                          = 43,
	Success                        = 44,
	User1                          = 45,
	User2                          = 46,
	User3                          = 47,
	User4                          = 48,
	User5                          = 49,
	User6                          = 50,
	User7                          = 51,
	User8                          = 52,
	User9                          = 53,
	User10                         = 54,
	User11                         = 55,
	User12                         = 56,
	User13                         = 57,
	User14                         = 58,
	User15                         = 59,
	User16                         = 60,
	MAX                            = 61,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.Geometry
struct FGeometry
{
public:
	uint8                                        Pad_12A0[0x38];                                    // Fixing Size Of Struct..
};

// 0x0 (0x8 - 0x8)
// ScriptStruct SlateCore.DeprecateSlateVector2D
struct FDeprecateSlateVector2D : public FVector2f
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Margin
struct FMargin
{
public:
	float                                        Left;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Top;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Right;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct SlateCore.SlateColor
struct FSlateColor
{
public:
	struct FLinearColor                          SpecifiedColor;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateColorStylingMode            ColorUseRule;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12A1[0x3];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SlateCore.SlateBrushOutlineSettings
struct FSlateBrushOutlineSettings
{
public:
	struct FVector4                              CornerRadii;                                       // 0x0(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           Color;                                             // 0x20(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushRoundingType           RoundingType;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBrushTransparency;                             // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A2[0x6];                                     // Fixing Size Of Struct..
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush
{
public:
	uint8                                        Pad_12A3[0x10];                                    // Fixing Size After Last Property..
	uint8                                        bIsDynamicallyLoaded : 1;                          // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasUObject : 1;                                   // Mask: 0x2, PropSize: 0x10x10(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_18D : 6;                                    // Fixing Bit-Field Size..
	enum class ESlateBrushDrawType               DrawAs;                                            // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushTileType               Tiling;                                            // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushMirrorType             Mirroring;                                         // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushImageType              ImageType;                                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A4[0x3];                                     // Fixing Size After Last Property..
	struct FDeprecateSlateVector2D               ImageSize;                                         // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           TintColor;                                         // 0x30(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A5[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrushOutlineSettings            OutlineSettings;                                   // 0x50(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               ResourceObject;                                    // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ResourceName;                                      // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox2f                                UVRegion;                                          // 0x9C(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12A6[0x10];                                    // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.InputEvent
struct FInputEvent
{
public:
	uint8                                        Pad_12A7[0x20];                                    // Fixing Size Of Struct..
};

// 0x58 (0x78 - 0x20)
// ScriptStruct SlateCore.PointerEvent
struct FPointerEvent : public FInputEvent
{
public:
	uint8                                        Pad_12A8[0x58];                                    // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.SlateWidgetStyle
struct FSlateWidgetStyle
{
public:
	uint8                                        Pad_12A9[0x8];                                     // Fixing Size Of Struct..
};

// 0x6D8 (0x6E0 - 0x8)
// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12AA[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           HorizontalBackgroundImage;                         // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalBackgroundImage;                           // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalTopSlotImage;                              // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HorizontalTopSlotImage;                            // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalBottomSlotImage;                           // 0x310(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HorizontalBottomSlotImage;                         // 0x3D0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x490(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x550(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DraggedThumbImage;                                 // 0x610(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x6D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AB[0xC];                                     // Fixing Size Of Struct..
};

// 0xC48 (0xC50 - 0x8)
// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12AC[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           SelectorFocusedBrush;                              // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveHoveredBrush;                                // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveBrush;                                       // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveHoveredBrush;                              // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveBrush;                                     // 0x310(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bUseParentRowBrush;                                // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AD[0xF];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           ParentRowBackgroundBrush;                          // 0x3E0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ParentRowBackgroundHoveredBrush;                   // 0x4A0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EvenRowBackgroundHoveredBrush;                     // 0x560(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EvenRowBackgroundBrush;                            // 0x620(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OddRowBackgroundHoveredBrush;                      // 0x6E0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OddRowBackgroundBrush;                             // 0x7A0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           TextColor;                                         // 0x860(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           SelectedTextColor;                                 // 0x874(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AE[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           DropIndicator_Above;                               // 0x890(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Onto;                                // 0x950(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Below;                               // 0xA10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveHighlightedBrush;                            // 0xAD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveHighlightedBrush;                          // 0xB90(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.SlateSound
struct FSlateSound
{
public:
	class UObject*                               ResourceObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12AF[0x10];                                    // Fixing Size Of Struct..
};

// 0x3A8 (0x3B0 - 0x8)
// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12B0[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           Normal;                                            // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Hovered;                                           // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Pressed;                                           // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           NormalForeground;                                  // 0x310(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           HoveredForeground;                                 // 0x324(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           PressedForeground;                                 // 0x338(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           DisabledForeground;                                // 0x34C(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FMargin                               NormalPadding;                                     // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PressedPadding;                                    // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x380(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x398(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x598 (0x5A0 - 0x8)
// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12B1[0x8];                                     // Fixing Size After Last Property..
	struct FButtonStyle                          ButtonStyle;                                       // 0x10(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DownArrowImage;                                    // 0x3C0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeprecateSlateVector2D               ShadowOffset;                                      // 0x480(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B2[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           MenuBorderBrush;                                   // 0x4A0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               MenuBorderPadding;                                 // 0x560(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               DownArrowPadding;                                  // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                DownArrowAlign;                                    // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B3[0xF];                                     // Fixing Size Of Struct..
};

// 0x5F8 (0x600 - 0x8)
// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12B4[0x8];                                     // Fixing Size After Last Property..
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x10(0x5A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x5B0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           SelectionChangeSlateSound;                         // 0x5C8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               MenuRowPadding;                                    // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings
{
public:
	int32                                        OutlineSize;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSeparateFillAlpha;                                // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyOutlineToDropShadows;                        // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B5[0x2];                                     // Fixing Size After Last Property..
	class UObject*                               OutlineMaterial;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OutlineColor;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo
{
public:
	class UObject*                               FontObject;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               FontMaterial;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontOutlineSettings                  OutlineSettings;                                   // 0x10(0x20)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B6[0x10];                                    // Fixing Size After Last Property..
	class FName                                  TypefaceFontName;                                  // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LetterSpacing;                                     // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkewAmount;                                        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B7[0x8];                                     // Fixing Size Of Struct..
};

// 0x2B8 (0x2C0 - 0x8)
// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x60(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B8[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundImageSelected;                           // 0x80(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageComposing;                          // 0x140(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CaretImage;                                        // 0x200(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x308 (0x310 - 0x8)
// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x60(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDeprecateSlateVector2D               ShadowOffset;                                      // 0x74(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x7C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           SelectedBackgroundColor;                           // 0x8C(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           HighlightColor;                                    // 0xA0(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B9[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           HighlightShape;                                    // 0xC0(0xC0)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StrikeBrush;                                       // 0x180(0xC0)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UnderlineBrush;                                    // 0x240(0xC0)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              TransformPolicy;                                   // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BA[0xE];                                     // Fixing Size Of Struct..
};

// 0xD78 (0xD80 - 0x8)
// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12BB[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundImageNormal;                             // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageHovered;                            // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageFocused;                            // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageReadOnly;                           // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x320(0x310)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x630(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0x644(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ReadOnlyForegroundColor;                           // 0x658(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           FocusedForegroundColor;                            // 0x66C(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               HScrollBarPadding;                                 // 0x680(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               VScrollBarPadding;                                 // 0x690(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x6A0(0x6E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x588 (0x590 - 0x8)
// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12BC[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveBackgroundBrush;                             // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBackgroundBrush;                            // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveFillBrush;                                   // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredFillBrush;                                  // 0x310(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveFillBrush;                                 // 0x3D0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ArrowsImage;                                       // 0x490(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x550(0x14)(NativeAccessSpecifierPublic)
	struct FMargin                               TextPadding;                                       // 0x564(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               InsetPadding;                                      // 0x574(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BD[0xC];                                     // Fixing Size Of Struct..
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.CharacterEvent
struct FCharacterEvent : public FInputEvent
{
public:
	uint8                                        Pad_12BE[0x8];                                     // Fixing Size Of Struct..
};

// 0x20 (0x40 - 0x20)
// ScriptStruct SlateCore.KeyEvent
struct FKeyEvent : public FInputEvent
{
public:
	uint8                                        Pad_12BF[0x20];                                    // Fixing Size Of Struct..
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.NavigationEvent
struct FNavigationEvent : public FInputEvent
{
public:
	uint8                                        Pad_12C0[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x48 - 0x40)
// ScriptStruct SlateCore.AnalogInputEvent
struct FAnalogInputEvent : public FKeyEvent
{
public:
	uint8                                        Pad_12C1[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.FocusEvent
struct FFocusEvent
{
public:
	uint8                                        Pad_12C2[0x8];                                     // Fixing Size Of Struct..
};

// 0x60 (0x80 - 0x20)
// ScriptStruct SlateCore.MotionEvent
struct FMotionEvent : public FInputEvent
{
public:
	uint8                                        Pad_12C3[0x60];                                    // Fixing Size Of Struct..
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct SlateCore.TableViewStyle
struct FTableViewStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12C4[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.FontData
struct FFontData
{
public:
	class FString                                FontFilename;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12C5[0x4];                                     // Fixing Size After Last Property..
	enum class EFontHinting                      Hinting;                                           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontLoadingPolicy                LoadingPolicy;                                     // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12C6[0x2];                                     // Fixing Size After Last Property..
	int32                                        SubFaceIndex;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12C7[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               FontFaceAsset;                                     // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C8[0x4];                                     // Fixing Size After Last Property..
	struct FFontData                             Font;                                              // 0x8(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Typeface
struct FTypeface
{
public:
	TArray<struct FTypefaceEntry>                Fonts;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.CompositeFallbackFont
struct FCompositeFallbackFont
{
public:
	struct FTypeface                             Typeface;                                          // 0x0(0x10)(NativeAccessSpecifierPublic)
	float                                        ScalingFactor;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C9[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x38 - 0x18)
// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont : public FCompositeFallbackFont
{
public:
	TArray<struct FInt32Range>                   CharacterRanges;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Cultures;                                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont
{
public:
	struct FTypeface                             DefaultTypeface;                                   // 0x0(0x10)(NativeAccessSpecifierPublic)
	struct FCompositeFallbackFont                FallbackTypeface;                                  // 0x10(0x18)(NativeAccessSpecifierPublic)
	TArray<struct FCompositeSubFont>             SubTypefaces;                                      // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.CaptureLostEvent
struct FCaptureLostEvent
{
public:
	uint8                                        Pad_12CA[0x8];                                     // Fixing Size Of Struct..
};

// 0xA08 (0xA10 - 0x8)
// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : public FSlateWidgetStyle
{
public:
	enum class ESlateCheckBoxType                CheckBoxType;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CB[0x7];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           UncheckedImage;                                    // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncheckedHoveredImage;                             // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncheckedPressedImage;                             // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedImage;                                      // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedHoveredImage;                               // 0x310(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedPressedImage;                               // 0x3D0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedImage;                                 // 0x490(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedHoveredImage;                          // 0x550(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedPressedImage;                          // 0x610(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x6D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImage;                                   // 0x6E0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundHoveredImage;                            // 0x7A0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundPressedImage;                            // 0x860(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x920(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           HoveredForeground;                                 // 0x934(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           PressedForeground;                                 // 0x948(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           CheckedForeground;                                 // 0x95C(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           CheckedHoveredForeground;                          // 0x970(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           CheckedPressedForeground;                          // 0x984(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           UndeterminedForeground;                            // 0x998(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderBackgroundColor;                             // 0x9AC(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           CheckedSlateSound;                                 // 0x9C0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           UncheckedSlateSound;                               // 0x9D8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x9F0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CC[0x8];                                     // Fixing Size Of Struct..
};

// 0x1F08 (0x1F10 - 0x8)
// ScriptStruct SlateCore.SegmentedControlStyle
struct FSegmentedControlStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12CD[0x8];                                     // Fixing Size After Last Property..
	struct FCheckBoxStyle                        ControlStyle;                                      // 0x10(0xA10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        FirstControlStyle;                                 // 0xA20(0xA10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        LastControlStyle;                                  // 0x1430(0xA10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundBrush;                                   // 0x1E40(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               UniformPadding;                                    // 0x1F00(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x6D8 (0x6E0 - 0x8)
// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12CE[0x8];                                     // Fixing Size After Last Property..
	struct FButtonStyle                          UnderlineStyle;                                    // 0x10(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x3C0(0x310)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x6D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1098 (0x10A0 - 0x8)
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12CF[0x8];                                     // Fixing Size After Last Property..
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x10(0xD80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0xD90(0x310)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x258 (0x260 - 0x8)
// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12D0[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundImage;                                   // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FillImage;                                         // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarqueeImage;                                      // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         EnableFillAnimation;                               // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D1[0xF];                                     // Fixing Size Of Struct..
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12D2[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           CollapsedImage;                                    // 0x10(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ExpandedImage;                                     // 0xD0(0xC0)(Edit, NativeAccessSpecifierPublic)
	float                                        RolloutAnimationSeconds;                           // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D3[0xC];                                     // Fixing Size Of Struct..
};

// 0x1108 (0x1110 - 0x8)
// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12D4[0x8];                                     // Fixing Size After Last Property..
	struct FEditableTextBoxStyle                 TextBoxStyle;                                      // 0x10(0xD80)(Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        ActiveFontInfo;                                    // 0xD90(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D5[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           UpArrowImage;                                      // 0xDF0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DownArrowImage;                                    // 0xEB0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlassImage;                                        // 0xF70(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ClearImage;                                        // 0x1030(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               ImagePadding;                                      // 0x10F0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignButtons;                                 // 0x1100(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignSearchResultButtons;                     // 0x1101(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignGlassImageAndClearButton;                // 0x1102(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D6[0xD];                                     // Fixing Size Of Struct..
};

// 0x498 (0x4A0 - 0x8)
// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12D7[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           NormalBarImage;                                    // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBarImage;                                   // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x310(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledThumbImage;                                // 0x3D0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        BarThickness;                                      // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D8[0xC];                                     // Fixing Size Of Struct..
};

// 0x868 (0x870 - 0x8)
// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12D9[0x8];                                     // Fixing Size After Last Property..
	struct FSliderStyle                          SliderStyle;                                       // 0x10(0x4A0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HighVolumeImage;                                   // 0x4B0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MidVolumeImage;                                    // 0x570(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LowVolumeImage;                                    // 0x630(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NoVolumeImage;                                     // 0x6F0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MutedImage;                                        // 0x7B0(0xC0)(Edit, NativeAccessSpecifierPublic)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12DA[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           Image;                                             // 0x10(0xC0)(Edit, NativeAccessSpecifierPublic)
	int16                                        Baseline;                                          // 0xD0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DB[0xE];                                     // Fixing Size Of Struct..
};

// 0x188 (0x190 - 0x8)
// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12DC[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           HandleNormalBrush;                                 // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HandleHighlightBrush;                              // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x6C8 (0x6D0 - 0x8)
// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12DD[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           SortPrimaryAscendingImage;                         // 0x10(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortPrimaryDescendingImage;                        // 0xD0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSecondaryAscendingImage;                       // 0x190(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSecondaryDescendingImage;                      // 0x250(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBrush;                                       // 0x310(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBrush;                                      // 0x3D0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownImage;                                 // 0x490(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownNormalBorderBrush;                     // 0x550(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownHoveredBorderBrush;                    // 0x610(0xC0)(Edit, NativeAccessSpecifierPublic)
};

// 0x10F8 (0x1100 - 0x8)
// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12DE[0x8];                                     // Fixing Size After Last Property..
	struct FTableColumnHeaderStyle               ColumnStyle;                                       // 0x10(0x6D0)(Edit, NativeAccessSpecifierPublic)
	struct FTableColumnHeaderStyle               LastColumnStyle;                                   // 0x6E0(0x6D0)(Edit, NativeAccessSpecifierPublic)
	struct FSplitterStyle                        ColumnSplitterStyle;                               // 0xDB0(0x190)(Edit, NativeAccessSpecifierPublic)
	float                                        SplitterHandleSize;                                // 0xF40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DF[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundBrush;                                   // 0xF50(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x1010(0x14)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E0[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           HorizontalSeparatorBrush;                          // 0x1030(0xC0)(Edit, NativeAccessSpecifierPublic)
	float                                        HorizontalSeparatorThickness;                      // 0x10F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E1[0xC];                                     // Fixing Size Of Struct..
};

// 0xC98 (0xCA0 - 0x8)
// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12E2[0x8];                                     // Fixing Size After Last Property..
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x10(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBrush;                                       // 0x3C0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorOverlayTabBrush;                              // 0x480(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorOverlayIconBrush;                             // 0x540(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ForegroundBrush;                                   // 0x600(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBrush;                                      // 0x6C0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ContentAreaBrush;                                  // 0x780(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TabWellBrush;                                      // 0x840(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TabTextStyle;                                      // 0x900(0x310)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               TabPadding;                                        // 0xC10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDeprecateSlateVector2D               IconSize;                                          // 0xC20(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverlapWidth;                                      // 0xC28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           FlashColor;                                        // 0xC2C(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           NormalForegroundColor;                             // 0xC40(0x14)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           HoveredForegroundColor;                            // 0xC54(0x14)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           ActiveForegroundColor;                             // 0xC68(0x14)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundForegroundColor;                         // 0xC7C(0x14)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        IconBorderPadding;                                 // 0xC90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E3[0xC];                                     // Fixing Size Of Struct..
};

// 0x328 (0x330 - 0x8)
// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : public FSlateWidgetStyle
{
public:
	float                                        BarThickness;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E4[0x4];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           TopShadowBrush;                                    // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LeftShadowBrush;                                   // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           RightShadowBrush;                                  // 0x250(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               HorizontalScrolledContentPadding;                  // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               VerticalScrolledContentPadding;                    // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12E5[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           TopShadowBrush;                                    // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1798 (0x17A0 - 0x8)
// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12E6[0x8];                                     // Fixing Size After Last Property..
	struct FButtonStyle                          MinimizeButtonStyle;                               // 0x10(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          MaximizeButtonStyle;                               // 0x3C0(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RestoreButtonStyle;                                // 0x770(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CloseButtonStyle;                                  // 0xB20(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TitleTextStyle;                                    // 0xED0(0x310)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveTitleBrush;                                  // 0x11E0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveTitleBrush;                                // 0x12A0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FlashTitleBrush;                                   // 0x1360(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0x1420(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E7[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           OutlineBrush;                                      // 0x1440(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           OutlineColor;                                      // 0x1500(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E8[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BorderBrush;                                       // 0x1520(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderColor;                                       // 0x15E0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E9[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundBrush;                                   // 0x1600(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChildBackgroundBrush;                              // 0x16C0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        WindowCornerRadius;                                // 0x1780(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               BorderPadding;                                     // 0x1784(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EA[0xC];                                     // Fixing Size Of Struct..
};

// 0x988 (0x988 - 0x0)
// ScriptStruct SlateCore.StyleColorList
struct FStyleColorList
{
public:
	struct FLinearColor                          StyleColors[0x3D];                                 // 0x0(0x3D0)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EB[0x5B8];                                   // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SlateCore.StyleTheme
struct FStyleTheme
{
public:
	uint8                                        Pad_12EC[0x48];                                    // Fixing Size Of Struct..
};

// 0x3A68 (0x3A70 - 0x8)
// ScriptStruct SlateCore.ToolBarStyle
struct FToolBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_12ED[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundBrush;                                   // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ExpandBrush;                                       // 0xD0(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SeparatorBrush;                                    // 0x190(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       LabelStyle;                                        // 0x250(0x310)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 EditableTextStyle;                                 // 0x560(0xD80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        ToggleButton;                                      // 0x12E0(0xA10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x1CF0(0x5A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          SettingsButtonStyle;                               // 0x2290(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FComboButtonStyle                     SettingsComboButton;                               // 0x2640(0x5A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        SettingsToggleButton;                              // 0x2BE0(0xA10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ButtonStyle;                                       // 0x35F0(0x3B0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               LabelPadding;                                      // 0x39A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        UniformBlockWidth;                                 // 0x39B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UniformBlockHeight;                                // 0x39B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumColumns;                                        // 0x39B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               IconPadding;                                       // 0x39BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SeparatorPadding;                                  // 0x39CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ComboButtonPadding;                                // 0x39DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x39EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CheckBoxPadding;                                   // 0x39FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               BlockPadding;                                      // 0x3A0C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               IndentedBlockPadding;                              // 0x3A1C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               BackgroundPadding;                                 // 0x3A2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDeprecateSlateVector2D               IconSize;                                          // 0x3A3C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLabels;                                       // 0x3A44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EE[0x3];                                     // Fixing Size After Last Property..
	float                                        ButtonContentMaxWidth;                             // 0x3A48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtonContentFillWidth;                            // 0x3A4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               IconPaddingWithVisibleLabel;                       // 0x3A50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               IconPaddingWithCollapsedLabel;                     // 0x3A60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

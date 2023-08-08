#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESlateVisibility : uint8
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5,
};

enum class EVirtualKeyboardType : uint8
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6,
};

enum class ESlateAccessibleBehavior : uint8
{
	NotAccessible                  = 0,
	Auto                           = 1,
	Summary                        = 2,
	Custom                         = 3,
	ToolTip                        = 4,
	ESlateAccessibleBehavior_MAX   = 5,
};

enum class ESlateSizeRule : uint8
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2,
};

enum class EDynamicBoxType : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Wrap                           = 2,
	VerticalWrap                   = 3,
	Radial                         = 4,
	Overlay                        = 5,
	EDynamicBoxType_MAX            = 6,
};

enum class EWidgetDesignFlags : uint8
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 4,
	Previewing                     = 8,
	EWidgetDesignFlags_MAX         = 9,
};

enum class EWidgetSpace : uint8
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2,
};

enum class EWidgetTimingPolicy : uint8
{
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2,
};

enum class EWidgetBlendMode : uint8
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3,
};

enum class EWidgetGeometryMode : uint8
{
	Plane                          = 0,
	Cylinder                       = 1,
	EWidgetGeometryMode_MAX        = 2,
};

enum class EWindowVisibility : uint8
{
	Visible                        = 0,
	SelfHitTestInvisible           = 1,
	EWindowVisibility_MAX          = 2,
};

enum class ETickMode : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	Automatic                      = 2,
	ETickMode_MAX                  = 3,
};

enum class EWidgetInteractionSource : uint8
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4,
};

enum class EDragPivot : uint8
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10,
};

enum class EWidgetTickFrequency : uint8
{
	Never                          = 0,
	Auto                           = 1,
	EWidgetTickFrequency_MAX       = 2,
};

enum class EWidgetAnimationEvent : uint8
{
	Started                        = 0,
	Finished                       = 1,
	EWidgetAnimationEvent_MAX      = 2,
};

enum class EUMGSequencePlayMode : uint8
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3,
};

enum class EBindingKind : uint8
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xB8 - 0x0)
// ScriptStruct UMG.EventReply
struct FEventReply
{
public:
	uint8                                        Pad_1F37[0xB8];                                    // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct UMG.WidgetTransform
struct FWidgetTransform
{
public:
	struct FVector2D                             Translation;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shear;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F38[0x4];                                     // Fixing Size Of Struct
};

// 0x3 (0x3 - 0x0)
// ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions
{
public:
	uint8                                        bOverride_TextShapingMethod : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_TextFlowDirection : 1;                   // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_17D : 6;                                    // Fixing Bit-Field Size
	enum class ETextShapingMethod                TextShapingMethod;                                 // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextFlowDirection                TextFlowDirection;                                 // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct UMG.PaintContext
struct FPaintContext
{
public:
	uint8                                        Pad_1F3A[0x30];                                    // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct UMG.AnimationEventBinding
struct FAnimationEventBinding
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetAnimationEvent             AnimationEvent;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3E[0x3];                                     // Fixing Size After Last Property
	class FName                                  UserTag;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3F[0x4];                                     // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// ScriptStruct UMG.WidgetChild
struct FWidgetChild
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UWidget>                WidgetPtr;                                         // 0x4(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F41[0x4];                                     // Fixing Size After Last Property
	class UWidget*                               Content;                                           // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct UMG.AnchorData
struct FAnchorData
{
public:
	struct FMargin                               Offsets;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                              Anchors;                                           // 0x10(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Alignment;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct UMG.WidgetEventField
struct FWidgetEventField
{
public:
	uint8                                        Pad_1F44[0x1];                                     // Fixing Size Of Struct
};

// 0x88 (0x88 - 0x0)
// ScriptStruct UMG.UserWidgetPool
struct FUserWidgetPool
{
public:
	TArray<class UUserWidget*>                   ActiveWidgets;                                     // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UUserWidget*>                   InactiveWidgets;                                   // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F46[0x68];                                    // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.RadialBoxSettings
struct FRadialBoxSettings
{
public:
	float                                        StartingAngle;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistributeItemsEvenly;                            // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4B[0x3];                                     // Fixing Size After Last Property
	float                                        AngleBetweenItems;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectorCentralAngle;                                // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct UMG.SlateChildSize
struct FSlateChildSize
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateSizeRule                    SizeRule;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4D[0x3];                                     // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData
{
public:
	enum class EUINavigationRule                 Rule;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4E[0x3];                                     // Fixing Size After Last Property
	class FName                                  WidgetToFocus;                                     // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                Widget;                                            // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CustomDelegate;                                    // 0x10(0xC)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct UMG.MovieScene2DTransformMask
struct FMovieScene2DTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct UMG.SequenceTickManagerWidgetData
struct FSequenceTickManagerWidgetData
{
public:
	uint8                                        Pad_1F4F[0x2];                                     // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotWidgetName;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AnimationGuid;                                     // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRootWidget;                                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F54[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct FBlueprintWidgetAnimationDelegateBinding
{
public:
	enum class EWidgetAnimationEvent             Action;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F56[0x3];                                     // Fixing Size After Last Property
	class FName                                  AnimationToBind;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionNameToBind;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UserTag;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct UMG.DynamicPropertyPath
struct FDynamicPropertyPath : public FCachedPropertyPath
{
public:
};

// 0x590 (0x590 - 0x0)
// ScriptStruct UMG.WidgetStateBitfield
struct FWidgetStateBitfield
{
public:
	uint8                                        Pad_1F58[0x590];                                   // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// ScriptStruct UMG.GameViewportWidgetSlot
struct FGameViewportWidgetSlot
{
public:
	struct FAnchors                              Anchors;                                           // 0x0(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Offsets;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Alignment;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5B[0x4];                                     // Fixing Size Of Struct
};

// 0x318 (0x320 - 0x8)
// ScriptStruct UMG.RichTextStyleRow
struct FRichTextStyleRow : public FTableRowBase
{
public:
	uint8                                        Pad_1F60[0x8];                                     // Fixing Size After Last Property
	struct FTextBlockStyle                       TextStyle;                                         // 0x10(0x310)(Edit, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct UMG.RichImageRow
struct FRichImageRow : public FTableRowBase
{
public:
	uint8                                        Pad_1F61[0x8];                                     // Fixing Size After Last Property
	struct FSlateBrush                           Brush;                                             // 0x10(0xC0)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0xC8 - 0xB8)
// ScriptStruct UMG.WidgetComponentInstanceData
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{
public:
	uint8                                        Pad_1F62[0x10];                                    // Fixing Size Of Struct
};

// 0x3C (0x3C - 0x0)
// ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex
{
public:
	struct FVector2f                             Position;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV0;                                               // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV1;                                               // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV2;                                               // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV3;                                               // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV4;                                               // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV5;                                               // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding
{
public:
	class FString                                ObjectName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x18(0x38)(NativeAccessSpecifierPublic)
	enum class EBindingKind                      Kind;                                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F66[0x7];                                     // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
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

enum class EUIFrameworkGameLayerType : uint8
{
	Viewport                       = 0,
	PlayerScreen                   = 1,
	EUIFrameworkGameLayerType_MAX  = 2,
};

enum class EUIFrameworkInputMode : uint8
{
	UI                             = 0,
	Game                           = 1,
	EUIFrameworkInputMode_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct UIFramework.UIFrameworkSimpleEventArgument
struct FUIFrameworkSimpleEventArgument
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIFrameworkWidget*                    Sender;                                            // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct UIFramework.UIFrameworkClickEventArgument
struct FUIFrameworkClickEventArgument : public FUIFrameworkSimpleEventArgument
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct UIFramework.UIFrameworkWidgetOwner
struct FUIFrameworkWidgetOwner
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstance*                         GameInstance;                                      // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                World;                                             // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UIFramework.UIFrameworkParentWidget
struct FUIFrameworkParentWidget
{
public:
	class UObject*                               Parent;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_284F[0x8];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// ScriptStruct UIFramework.UIFrameworkWidgetId
struct FUIFrameworkWidgetId
{
public:
	int64                                        Key;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1C (0x28 - 0xC)
// ScriptStruct UIFramework.UIFrameworkSlotBase
struct FUIFrameworkSlotBase : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_2850[0x4];                                     // Fixing Size After Last Property..
	class UUIFrameworkWidget*                    Widget;                                            // 0x10(0x8)(BlueprintVisible, ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUIFrameworkWidgetId                  WidgetId;                                          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUIFrameworkWidgetId                  LocalPreviousWidgetId;                             // 0x20(0x8)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct UIFramework.UIFrameworkSimpleSlot
struct FUIFrameworkSimpleSlot : public FUIFrameworkSlotBase
{
public:
	struct FMargin                               Padding;                                           // 0x28(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2851[0x6];                                     // Fixing Size Of Struct..
};

// 0x24 (0x30 - 0xC)
// ScriptStruct UIFramework.UIFrameworkWidgetTreeEntry
struct FUIFrameworkWidgetTreeEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_2852[0x4];                                     // Fixing Size After Last Property..
	class UUIFrameworkWidget*                    Parent;                                            // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUIFrameworkWidget*                    Child;                                             // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIFrameworkWidgetId                  ParentID;                                          // 0x20(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIFrameworkWidgetId                  ChildId;                                           // 0x28(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0x1F8 - 0x108)
// ScriptStruct UIFramework.UIFrameworkWidgetTree
struct FUIFrameworkWidgetTree : public FFastArraySerializer
{
public:
	uint8                                        Pad_2853[0x30];                                    // Fixing Size After Last Property..
	TArray<struct FUIFrameworkWidgetTreeEntry>   Entries;                                           // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class AActor*                                ReplicatedOwner;                                   // 0x148(0x8)(ZeroConstructor, Transient, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2854[0xA8];                                    // Fixing Size Of Struct..
};

// 0x8 (0x30 - 0x28)
// ScriptStruct UIFramework.UIFrameworkGameLayerSlot
struct FUIFrameworkGameLayerSlot : public FUIFrameworkSlotBase
{
public:
	int32                                        ZOrder;                                            // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIFrameworkInputMode             InputMode;                                         // 0x2C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUIFrameworkGameLayerType         Type;                                              // 0x2D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2855[0x2];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct UIFramework.UIFrameworkGameLayerSlotList
struct FUIFrameworkGameLayerSlotList : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkGameLayerSlot>     Entries;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UUIFrameworkPlayerComponent*           Owner;                                             // 0x118(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x48 (0x70 - 0x28)
// ScriptStruct UIFramework.UIFrameworkCanvasBoxSlot
struct FUIFrameworkCanvasBoxSlot : public FUIFrameworkSlotBase
{
public:
	struct FAnchors                              Anchors;                                           // 0x28(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Offsets;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Alignment;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSizeToContent;                                    // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2856[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct UIFramework.UIFrameworkCanvasBoxSlotList
struct FUIFrameworkCanvasBoxSlotList : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkCanvasBoxSlot>     Slots;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UUIFrameworkCanvasBox*                 Owner;                                             // 0x118(0x8)(ZeroConstructor, Transient, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct UIFramework.UIFrameworkImageBlockData
struct FUIFrameworkImageBlockData
{
public:
	struct FLinearColor                          Tint;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                ResourceObject;                                    // 0x10(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             DesiredSize;                                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushTileType               Tiling;                                            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTextureSize;                                   // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2857[0x6];                                     // Fixing Size Of Struct..
};

// 0x18 (0x40 - 0x28)
// ScriptStruct UIFramework.UIFrameworkOverlaySlot
struct FUIFrameworkOverlaySlot : public FUIFrameworkSlotBase
{
public:
	struct FMargin                               Padding;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2858[0x2];                                     // Fixing Size After Last Property..
	int32                                        Index;                                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct UIFramework.UIFrameworkOverlaySlotList
struct FUIFrameworkOverlaySlotList : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkOverlaySlot>       Slots;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UUIFrameworkOverlay*                   Owner;                                             // 0x118(0x8)(ZeroConstructor, Transient, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct UIFramework.UIFrameworkStackBoxSlot
struct FUIFrameworkStackBoxSlot : public FUIFrameworkSlotBase
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2859[0x2];                                     // Fixing Size After Last Property..
	struct FMargin                               Padding;                                           // 0x2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                       Size;                                              // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct UIFramework.UIFrameworkStackBoxSlotList
struct FUIFrameworkStackBoxSlotList : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkStackBoxSlot>      Slots;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UUIFrameworkStackBox*                  Owner;                                             // 0x118(0x8)(ZeroConstructor, Transient, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct UIFramework.UIFrameworkUserWidgetSlot
struct FUIFrameworkUserWidgetSlot : public FUIFrameworkSlotBase
{
public:
	class FName                                  SlotName;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_285A[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x120 - 0x108)
// ScriptStruct UIFramework.UIFrameworkUserWidgetSlotList
struct FUIFrameworkUserWidgetSlotList : public FFastArraySerializer
{
public:
	TArray<struct FUIFrameworkUserWidgetSlot>    Slots;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UUIFrameworkUserWidget*                Owner;                                             // 0x118(0x8)(ZeroConstructor, Transient, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

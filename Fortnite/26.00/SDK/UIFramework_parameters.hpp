#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkPlayerComponent.ServerRemoveWidgetRootFromTree
struct UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Params
{
public:
	struct FUIFrameworkWidgetId                  WidgetId;                                          // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkPlayerComponent.RemoveWidget
struct UUIFrameworkPlayerComponent_RemoveWidget_Params
{
public:
	class UUIFrameworkWidget*                    Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function UIFramework.UIFrameworkPlayerComponent.AddWidget
struct UUIFrameworkPlayerComponent_AddWidget_Params
{
public:
	struct FUIFrameworkGameLayerSlot             Widget;                                            // 0x0(0x30)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkWidget.OnRep_Visibility
struct UUIFrameworkWidget_OnRep_Visibility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkWidget.OnRep_IsEnabled
struct UUIFrameworkWidget_OnRep_IsEnabled_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function UIFramework.UIFrameworkButton.SetContent
struct UUIFrameworkButton_SetContent_Params
{
public:
	struct FUIFrameworkSimpleSlot                Content;                                           // 0x0(0x40)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkButton.ServerClick
struct UUIFrameworkButton_ServerClick_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkButton.OnRep_Slot
struct UUIFrameworkButton_OnRep_Slot_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkButton.HandleClick
struct UUIFrameworkButton_HandleClick_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function UIFramework.UIFrameworkButton.GetContent
struct UUIFrameworkButton_GetContent_Params
{
public:
	struct FUIFrameworkSimpleSlot                ReturnValue;                                       // 0x0(0x40)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkCanvasBox.RemoveWidget
struct UUIFrameworkCanvasBox_RemoveWidget_Params
{
public:
	class UUIFrameworkWidget*                    Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function UIFramework.UIFrameworkCanvasBox.AddWidget
struct UUIFrameworkCanvasBox_AddWidget_Params
{
public:
	struct FUIFrameworkCanvasBoxSlot             Widget;                                            // 0x0(0x70)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkColorBlock.SetDesiredSize
struct UUIFrameworkColorBlock_SetDesiredSize_Params
{
public:
	struct FVector2f                             DesiredSize;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkColorBlock.SetColor
struct UUIFrameworkColorBlock_SetColor_Params
{
public:
	struct FLinearColor                          Tint;                                              // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkColorBlock.OnRep_DesiredSize
struct UUIFrameworkColorBlock_OnRep_DesiredSize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkColorBlock.OnRep_Color
struct UUIFrameworkColorBlock_OnRep_Color_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkColorBlock.GetDesiredSize
struct UUIFrameworkColorBlock_GetDesiredSize_Params
{
public:
	struct FVector2f                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkColorBlock.GetColor
struct UUIFrameworkColorBlock_GetColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.SetTint
struct UUIFrameworkImageBlock_SetTint_Params
{
public:
	struct FLinearColor                          Tint;                                              // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.SetTiling
struct UUIFrameworkImageBlock_SetTiling_Params
{
public:
	enum class ESlateBrushTileType               OverflowPolicy;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.SetTexture
struct UUIFrameworkImageBlock_SetTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x20)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTextureSize;                                   // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D07[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.SetMaterial
struct UUIFrameworkImageBlock_SetMaterial_Params
{
public:
	TSoftObjectPtr<class UMaterialInterface>     Material;                                          // 0x0(0x20)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.SetDesiredSize
struct UUIFrameworkImageBlock_SetDesiredSize_Params
{
public:
	struct FVector2f                             DesiredSize;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.OnRep_Data
struct UUIFrameworkImageBlock_OnRep_Data_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.GetTint
struct UUIFrameworkImageBlock_GetTint_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.GetTiling
struct UUIFrameworkImageBlock_GetTiling_Params
{
public:
	enum class ESlateBrushTileType               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.GetDesiredSize
struct UUIFrameworkImageBlock_GetDesiredSize_Params
{
public:
	struct FVector2f                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UIFramework.UIFrameworkImageBlock.GeResourceObject
struct UUIFrameworkImageBlock_GeResourceObject_Params
{
public:
	TSoftObjectPtr<class UObject>                ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkOverlay.RemoveWidget
struct UUIFrameworkOverlay_RemoveWidget_Params
{
public:
	class UUIFrameworkWidget*                    Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function UIFramework.UIFrameworkOverlay.AddWidget
struct UUIFrameworkOverlay_AddWidget_Params
{
public:
	struct FUIFrameworkOverlaySlot               Widget;                                            // 0x0(0x40)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkSimpleButton.ServerClick
struct UUIFrameworkSimpleButton_ServerClick_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkSimpleButton.OnRep_Message
struct UUIFrameworkSimpleButton_OnRep_Message_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function UIFramework.UIFrameworkSimpleButton.OnClick
struct UUIFrameworkSimpleButton_OnClick_Params
{
public:
	struct FMVVMEventField                       Field;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkStackBox.RemoveWidget
struct UUIFrameworkStackBox_RemoveWidget_Params
{
public:
	class UUIFrameworkWidget*                    Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkStackBox.OnRep_Orientation
struct UUIFrameworkStackBox_OnRep_Orientation_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function UIFramework.UIFrameworkStackBox.AddWidget
struct UUIFrameworkStackBox_AddWidget_Params
{
public:
	struct FUIFrameworkStackBoxSlot              Widget;                                            // 0x0(0x48)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkTextBase.SetTextColor
struct UUIFrameworkTextBase_SetTextColor_Params
{
public:
	struct FLinearColor                          TextColor;                                         // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UIFramework.UIFrameworkTextBase.SetOverflowPolicy
struct UUIFrameworkTextBase_SetOverflowPolicy_Params
{
public:
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UIFramework.UIFrameworkTextBase.SetJustification
struct UUIFrameworkTextBase_SetJustification_Params
{
public:
	enum class ETextJustify                      Justification;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkTextBase.OnRep_TextColor
struct UUIFrameworkTextBase_OnRep_TextColor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkTextBase.OnRep_OverflowPolicy
struct UUIFrameworkTextBase_OnRep_OverflowPolicy_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkTextBase.OnRep_Message
struct UUIFrameworkTextBase_OnRep_Message_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkTextBase.OnRep_Justification
struct UUIFrameworkTextBase_OnRep_Justification_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkTextBase.GetTextColor
struct UUIFrameworkTextBase_GetTextColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function UIFramework.UIFrameworkTextBase.GetText
struct UUIFrameworkTextBase_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UIFramework.UIFrameworkTextBase.GetOverflowPolicy
struct UUIFrameworkTextBase_GetOverflowPolicy_Params
{
public:
	enum class ETextOverflowPolicy               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function UIFramework.UIFrameworkTextBase.GetJustification
struct UUIFrameworkTextBase_GetJustification_Params
{
public:
	enum class ETextJustify                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkTextBlock.SetShadowOffset
struct UUIFrameworkTextBlock_SetShadowOffset_Params
{
public:
	struct FVector2f                             ShadowOffset;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkTextBlock.SetShadowColor
struct UUIFrameworkTextBlock_SetShadowColor_Params
{
public:
	struct FLinearColor                          ShadowColor;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkTextBlock.OnRep_ShadowOffset
struct UUIFrameworkTextBlock_OnRep_ShadowOffset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UIFramework.UIFrameworkTextBlock.OnRep_ShadowColor
struct UUIFrameworkTextBlock_OnRep_ShadowColor_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UIFramework.UIFrameworkTextBlock.GetShadowOffset
struct UUIFrameworkTextBlock_GetShadowOffset_Params
{
public:
	struct FVector2f                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkTextBlock.GetShadowColor
struct UUIFrameworkTextBlock_GetShadowColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function UIFramework.UIFrameworkUserWidget.SetWidgetClass
struct UUIFrameworkUserWidget_SetWidgetClass_Params
{
public:
	TSoftClassPtr<class UWidget>                 Value;                                             // 0x0(0x20)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UIFramework.UIFrameworkUserWidget.SetNamedSlot
struct UUIFrameworkUserWidget_SetNamedSlot_Params
{
public:
	class FName                                  SlotName;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DA8[0x4];                                     // Fixing Size After Last Property 
	class UUIFrameworkWidget*                    Widget;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



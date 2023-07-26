#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function UIFramework.UIFrameworkPlayerComponent.ServerRemoveWidgetRootFromTree
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// struct FUIFrameworkWidgetId        WidgetId                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkPlayerComponent::ServerRemoveWidgetRootFromTree(const struct FUIFrameworkWidgetId& WidgetId)
{
	static auto Func = Class->GetFunction("UIFrameworkPlayerComponent", "ServerRemoveWidgetRootFromTree");

	Params::UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Params Parms;

	Parms.WidgetId = WidgetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkPlayerComponent.RemoveWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkPlayerComponent::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkPlayerComponent", "RemoveWidget");

	Params::UUIFrameworkPlayerComponent_RemoveWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkPlayerComponent.AddWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkGameLayerSlot   Widget                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkPlayerComponent::AddWidget(const struct FUIFrameworkGameLayerSlot& Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkPlayerComponent", "AddWidget");

	Params::UUIFrameworkPlayerComponent_AddWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkWidget.OnRep_Visibility
// (Final, Native, Private)
// Parameters:

void UUIFrameworkWidget::OnRep_Visibility()
{
	static auto Func = Class->GetFunction("UIFrameworkWidget", "OnRep_Visibility");

	Params::UUIFrameworkWidget_OnRep_Visibility_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkWidget.OnRep_IsEnabled
// (Final, Native, Private)
// Parameters:

void UUIFrameworkWidget::OnRep_IsEnabled()
{
	static auto Func = Class->GetFunction("UIFrameworkWidget", "OnRep_IsEnabled");

	Params::UUIFrameworkWidget_OnRep_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkButton.SetContent
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkSimpleSlot      Content                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkButton::SetContent(const struct FUIFrameworkSimpleSlot& Content)
{
	static auto Func = Class->GetFunction("UIFrameworkButton", "SetContent");

	Params::UUIFrameworkButton_SetContent_Params Parms;

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkButton.ServerClick
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkButton::ServerClick(class APlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("UIFrameworkButton", "ServerClick");

	Params::UUIFrameworkButton_ServerClick_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkButton.OnRep_Slot
// (Final, Native, Private)
// Parameters:

void UUIFrameworkButton::OnRep_Slot()
{
	static auto Func = Class->GetFunction("UIFrameworkButton", "OnRep_Slot");

	Params::UUIFrameworkButton_OnRep_Slot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkButton.HandleClick
// (Final, Native, Private)
// Parameters:

void UUIFrameworkButton::HandleClick()
{
	static auto Func = Class->GetFunction("UIFrameworkButton", "HandleClick");

	Params::UUIFrameworkButton_HandleClick_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkButton.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUIFrameworkSimpleSlot      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FUIFrameworkSimpleSlot UUIFrameworkButton::GetContent()
{
	static auto Func = Class->GetFunction("UIFrameworkButton", "GetContent");

	Params::UUIFrameworkButton_GetContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkCanvasBox.RemoveWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkCanvasBox::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkCanvasBox", "RemoveWidget");

	Params::UUIFrameworkCanvasBox_RemoveWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkCanvasBox.AddWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkCanvasBoxSlot   Widget                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkCanvasBox::AddWidget(const struct FUIFrameworkCanvasBoxSlot& Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkCanvasBox", "AddWidget");

	Params::UUIFrameworkCanvasBox_AddWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkColorBlock.SetDesiredSize
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2f                   DesiredSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkColorBlock::SetDesiredSize(const struct FVector2f& DesiredSize)
{
	static auto Func = Class->GetFunction("UIFrameworkColorBlock", "SetDesiredSize");

	Params::UUIFrameworkColorBlock_SetDesiredSize_Params Parms;

	Parms.DesiredSize = DesiredSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkColorBlock.SetColor
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkColorBlock::SetColor(const struct FLinearColor& Tint)
{
	static auto Func = Class->GetFunction("UIFrameworkColorBlock", "SetColor");

	Params::UUIFrameworkColorBlock_SetColor_Params Parms;

	Parms.Tint = Tint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkColorBlock.OnRep_DesiredSize
// (Final, Native, Private)
// Parameters:

void UUIFrameworkColorBlock::OnRep_DesiredSize()
{
	static auto Func = Class->GetFunction("UIFrameworkColorBlock", "OnRep_DesiredSize");

	Params::UUIFrameworkColorBlock_OnRep_DesiredSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkColorBlock.OnRep_Color
// (Final, Native, Private)
// Parameters:

void UUIFrameworkColorBlock::OnRep_Color()
{
	static auto Func = Class->GetFunction("UIFrameworkColorBlock", "OnRep_Color");

	Params::UUIFrameworkColorBlock_OnRep_Color_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkColorBlock.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2f                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2f UUIFrameworkColorBlock::GetDesiredSize()
{
	static auto Func = Class->GetFunction("UIFrameworkColorBlock", "GetDesiredSize");

	Params::UUIFrameworkColorBlock_GetDesiredSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkColorBlock.GetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UUIFrameworkColorBlock::GetColor()
{
	static auto Func = Class->GetFunction("UIFrameworkColorBlock", "GetColor");

	Params::UUIFrameworkColorBlock_GetColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkImageBlock.SetTint
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetTint(const struct FLinearColor& Tint)
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "SetTint");

	Params::UUIFrameworkImageBlock_SetTint_Params Parms;

	Parms.Tint = Tint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkImageBlock.SetTiling
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateBrushTileType     OverflowPolicy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetTiling(enum class ESlateBrushTileType OverflowPolicy)
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "SetTiling");

	Params::UUIFrameworkImageBlock_SetTiling_Params Parms;

	Parms.OverflowPolicy = OverflowPolicy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkImageBlock.SetTexture
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseTextureSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetTexture(TSoftObjectPtr<class UTexture2D> Texture, bool bUseTextureSize)
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "SetTexture");

	Params::UUIFrameworkImageBlock_SetTexture_Params Parms;

	Parms.Texture = Texture;
	Parms.bUseTextureSize = bUseTextureSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkImageBlock.SetMaterial
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>Material                                                         (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetMaterial(TSoftObjectPtr<class UMaterialInterface> Material)
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "SetMaterial");

	Params::UUIFrameworkImageBlock_SetMaterial_Params Parms;

	Parms.Material = Material;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkImageBlock.SetDesiredSize
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2f                   DesiredSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetDesiredSize(const struct FVector2f& DesiredSize)
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "SetDesiredSize");

	Params::UUIFrameworkImageBlock_SetDesiredSize_Params Parms;

	Parms.DesiredSize = DesiredSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkImageBlock.OnRep_Data
// (Final, Native, Private)
// Parameters:

void UUIFrameworkImageBlock::OnRep_Data()
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "OnRep_Data");

	Params::UUIFrameworkImageBlock_OnRep_Data_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkImageBlock.GetTint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UUIFrameworkImageBlock::GetTint()
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "GetTint");

	Params::UUIFrameworkImageBlock_GetTint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkImageBlock.GetTiling
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateBrushTileType     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateBrushTileType UUIFrameworkImageBlock::GetTiling()
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "GetTiling");

	Params::UUIFrameworkImageBlock_GetTiling_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkImageBlock.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2f                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2f UUIFrameworkImageBlock::GetDesiredSize()
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "GetDesiredSize");

	Params::UUIFrameworkImageBlock_GetDesiredSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkImageBlock.GeResourceObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UObject>      ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UObject> UUIFrameworkImageBlock::GeResourceObject()
{
	static auto Func = Class->GetFunction("UIFrameworkImageBlock", "GeResourceObject");

	Params::UUIFrameworkImageBlock_GeResourceObject_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkOverlay.RemoveWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkOverlay::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkOverlay", "RemoveWidget");

	Params::UUIFrameworkOverlay_RemoveWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkOverlay.AddWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkOverlaySlot     Widget                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkOverlay::AddWidget(const struct FUIFrameworkOverlaySlot& Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkOverlay", "AddWidget");

	Params::UUIFrameworkOverlay_AddWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkSimpleButton.ServerClick
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkSimpleButton::ServerClick(class APlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("UIFrameworkSimpleButton", "ServerClick");

	Params::UUIFrameworkSimpleButton_ServerClick_Params Parms;

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkSimpleButton.OnRep_Message
// (Final, Native, Private)
// Parameters:

void UUIFrameworkSimpleButton::OnRep_Message()
{
	static auto Func = Class->GetFunction("UIFrameworkSimpleButton", "OnRep_Message");

	Params::UUIFrameworkSimpleButton_OnRep_Message_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkSimpleButton.OnClick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMEventField             Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkSimpleButton::OnClick(const struct FMVVMEventField& Field)
{
	static auto Func = Class->GetFunction("UIFrameworkSimpleButton", "OnClick");

	Params::UUIFrameworkSimpleButton_OnClick_Params Parms;

	Parms.Field = Field;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkStackBox.RemoveWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkStackBox::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkStackBox", "RemoveWidget");

	Params::UUIFrameworkStackBox_RemoveWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkStackBox.OnRep_Orientation
// (Final, Native, Private)
// Parameters:

void UUIFrameworkStackBox::OnRep_Orientation()
{
	static auto Func = Class->GetFunction("UIFrameworkStackBox", "OnRep_Orientation");

	Params::UUIFrameworkStackBox_OnRep_Orientation_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkStackBox.AddWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkStackBoxSlot    Widget                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkStackBox::AddWidget(const struct FUIFrameworkStackBoxSlot& Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkStackBox", "AddWidget");

	Params::UUIFrameworkStackBox_AddWidget_Params Parms;

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBase.SetTextColor
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                TextColor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBase::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "SetTextColor");

	Params::UUIFrameworkTextBase_SetTextColor_Params Parms;

	Parms.TextColor = TextColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBase.SetOverflowPolicy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     OverflowPolicy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBase::SetOverflowPolicy(enum class ETextOverflowPolicy OverflowPolicy)
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "SetOverflowPolicy");

	Params::UUIFrameworkTextBase_SetOverflowPolicy_Params Parms;

	Parms.OverflowPolicy = OverflowPolicy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBase.SetJustification
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            Justification                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBase::SetJustification(enum class ETextJustify Justification)
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "SetJustification");

	Params::UUIFrameworkTextBase_SetJustification_Params Parms;

	Parms.Justification = Justification;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBase.OnRep_TextColor
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBase::OnRep_TextColor()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_TextColor");

	Params::UUIFrameworkTextBase_OnRep_TextColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBase.OnRep_OverflowPolicy
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBase::OnRep_OverflowPolicy()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_OverflowPolicy");

	Params::UUIFrameworkTextBase_OnRep_OverflowPolicy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBase.OnRep_Message
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBase::OnRep_Message()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_Message");

	Params::UUIFrameworkTextBase_OnRep_Message_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBase.OnRep_Justification
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBase::OnRep_Justification()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_Justification");

	Params::UUIFrameworkTextBase_OnRep_Justification_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBase.GetTextColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UUIFrameworkTextBase::GetTextColor()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "GetTextColor");

	Params::UUIFrameworkTextBase_GetTextColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBase.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UUIFrameworkTextBase::GetText()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "GetText");

	Params::UUIFrameworkTextBase_GetText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBase.GetOverflowPolicy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextOverflowPolicy     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextOverflowPolicy UUIFrameworkTextBase::GetOverflowPolicy()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "GetOverflowPolicy");

	Params::UUIFrameworkTextBase_GetOverflowPolicy_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBase.GetJustification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextJustify            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextJustify UUIFrameworkTextBase::GetJustification()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBase", "GetJustification");

	Params::UUIFrameworkTextBase_GetJustification_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBlock.SetShadowOffset
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2f                   ShadowOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBlock::SetShadowOffset(const struct FVector2f& ShadowOffset)
{
	static auto Func = Class->GetFunction("UIFrameworkTextBlock", "SetShadowOffset");

	Params::UUIFrameworkTextBlock_SetShadowOffset_Params Parms;

	Parms.ShadowOffset = ShadowOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBlock.SetShadowColor
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                ShadowColor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBlock::SetShadowColor(const struct FLinearColor& ShadowColor)
{
	static auto Func = Class->GetFunction("UIFrameworkTextBlock", "SetShadowColor");

	Params::UUIFrameworkTextBlock_SetShadowColor_Params Parms;

	Parms.ShadowColor = ShadowColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBlock.OnRep_ShadowOffset
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBlock::OnRep_ShadowOffset()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBlock", "OnRep_ShadowOffset");

	Params::UUIFrameworkTextBlock_OnRep_ShadowOffset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBlock.OnRep_ShadowColor
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBlock::OnRep_ShadowColor()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBlock", "OnRep_ShadowColor");

	Params::UUIFrameworkTextBlock_OnRep_ShadowColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkTextBlock.GetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2f                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2f UUIFrameworkTextBlock::GetShadowOffset()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBlock", "GetShadowOffset");

	Params::UUIFrameworkTextBlock_GetShadowOffset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBlock.GetShadowColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UUIFrameworkTextBlock::GetShadowColor()
{
	static auto Func = Class->GetFunction("UIFrameworkTextBlock", "GetShadowColor");

	Params::UUIFrameworkTextBlock_GetShadowColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkUserWidget.SetWidgetClass
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UWidget>       Value                                                            (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkUserWidget::SetWidgetClass(TSoftClassPtr<class UWidget> Value)
{
	static auto Func = Class->GetFunction("UIFrameworkUserWidget", "SetWidgetClass");

	Params::UUIFrameworkUserWidget_SetWidgetClass_Params Parms;

	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UIFramework.UIFrameworkUserWidget.SetNamedSlot
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SlotName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkUserWidget::SetNamedSlot(class FName SlotName, class UUIFrameworkWidget* Widget)
{
	static auto Func = Class->GetFunction("UIFrameworkUserWidget", "SetNamedSlot");

	Params::UUIFrameworkUserWidget_SetNamedSlot_Params Parms;

	Parms.SlotName = SlotName;
	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

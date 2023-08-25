#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UIFramework.UIFrameworkLocalSettings
// (None)

class UClass* UUIFrameworkLocalSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkLocalSettings");

	return Clss;
}


// UIFrameworkLocalSettings UIFramework.Default__UIFrameworkLocalSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkLocalSettings* UUIFrameworkLocalSettings::GetDefaultObj()
{
	static class UUIFrameworkLocalSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkLocalSettings*>(UUIFrameworkLocalSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class UIFramework.UIFrameworkPlayerComponent
// (None)

class UClass* UUIFrameworkPlayerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkPlayerComponent");

	return Clss;
}


// UIFrameworkPlayerComponent UIFramework.Default__UIFrameworkPlayerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkPlayerComponent* UUIFrameworkPlayerComponent::GetDefaultObj()
{
	static class UUIFrameworkPlayerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkPlayerComponent*>(UUIFrameworkPlayerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkPlayerComponent.ServerRemoveWidgetRootFromTree
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// struct FUIFrameworkWidgetId        WidgetId                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkPlayerComponent::ServerRemoveWidgetRootFromTree(const struct FUIFrameworkWidgetId& WidgetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkPlayerComponent", "ServerRemoveWidgetRootFromTree");

	Params::UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Params Parms{};

	Parms.WidgetId = WidgetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkPlayerComponent.RemoveWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkPlayerComponent::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkPlayerComponent", "RemoveWidget");

	Params::UUIFrameworkPlayerComponent_RemoveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkPlayerComponent.AddWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkGameLayerSlot   Widget                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkPlayerComponent::AddWidget(const struct FUIFrameworkGameLayerSlot& Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkPlayerComponent", "AddWidget");

	Params::UUIFrameworkPlayerComponent_AddWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UIFramework.UIFrameworkPresenter
// (None)

class UClass* UUIFrameworkPresenter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkPresenter");

	return Clss;
}


// UIFrameworkPresenter UIFramework.Default__UIFrameworkPresenter
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkPresenter* UUIFrameworkPresenter::GetDefaultObj()
{
	static class UUIFrameworkPresenter* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkPresenter*>(UUIFrameworkPresenter::StaticClass()->DefaultObject);

	return Default;
}


// Class UIFramework.UIFrameworkGameViewportPresenter
// (None)

class UClass* UUIFrameworkGameViewportPresenter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkGameViewportPresenter");

	return Clss;
}


// UIFrameworkGameViewportPresenter UIFramework.Default__UIFrameworkGameViewportPresenter
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkGameViewportPresenter* UUIFrameworkGameViewportPresenter::GetDefaultObj()
{
	static class UUIFrameworkGameViewportPresenter* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkGameViewportPresenter*>(UUIFrameworkGameViewportPresenter::StaticClass()->DefaultObject);

	return Default;
}


// Class UIFramework.UIFrameworkWidgetWrapperInterface
// (None)

class UClass* UUIFrameworkWidgetWrapperInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkWidgetWrapperInterface");

	return Clss;
}


// UIFrameworkWidgetWrapperInterface UIFramework.Default__UIFrameworkWidgetWrapperInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkWidgetWrapperInterface* UUIFrameworkWidgetWrapperInterface::GetDefaultObj()
{
	static class UUIFrameworkWidgetWrapperInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkWidgetWrapperInterface*>(UUIFrameworkWidgetWrapperInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class UIFramework.UIFrameworkWidget
// (None)

class UClass* UUIFrameworkWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkWidget");

	return Clss;
}


// UIFrameworkWidget UIFramework.Default__UIFrameworkWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkWidget* UUIFrameworkWidget::GetDefaultObj()
{
	static class UUIFrameworkWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkWidget*>(UUIFrameworkWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkWidget.OnRep_Visibility
// (Final, Native, Private)
// Parameters:

void UUIFrameworkWidget::OnRep_Visibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkWidget", "OnRep_Visibility");

	Params::UUIFrameworkWidget_OnRep_Visibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkWidget.OnRep_IsEnabled
// (Final, Native, Private)
// Parameters:

void UUIFrameworkWidget::OnRep_IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkWidget", "OnRep_IsEnabled");

	Params::UUIFrameworkWidget_OnRep_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UIFramework.UIFrameworkButton
// (None)

class UClass* UUIFrameworkButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkButton");

	return Clss;
}


// UIFrameworkButton UIFramework.Default__UIFrameworkButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkButton* UUIFrameworkButton::GetDefaultObj()
{
	static class UUIFrameworkButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkButton*>(UUIFrameworkButton::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkButton.SetContent
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkSimpleSlot      Content                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkButton::SetContent(const struct FUIFrameworkSimpleSlot& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkButton", "SetContent");

	Params::UUIFrameworkButton_SetContent_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkButton.ServerClick
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkButton::ServerClick(class UPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkButton", "ServerClick");

	Params::UUIFrameworkButton_ServerClick_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkButton.OnRep_Slot
// (Final, Native, Private)
// Parameters:

void UUIFrameworkButton::OnRep_Slot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkButton", "OnRep_Slot");

	Params::UUIFrameworkButton_OnRep_Slot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkButton.HandleClick
// (Final, Native, Private)
// Parameters:

void UUIFrameworkButton::HandleClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkButton", "HandleClick");

	Params::UUIFrameworkButton_HandleClick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkButton.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FUIFrameworkSimpleSlot      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FUIFrameworkSimpleSlot UUIFrameworkButton::GetContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkButton", "GetContent");

	Params::UUIFrameworkButton_GetContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UIFramework.UIFrameworkButtonWidget
// (None)

class UClass* UUIFrameworkButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkButtonWidget");

	return Clss;
}


// UIFrameworkButtonWidget UIFramework.Default__UIFrameworkButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkButtonWidget* UUIFrameworkButtonWidget::GetDefaultObj()
{
	static class UUIFrameworkButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkButtonWidget*>(UUIFrameworkButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class UIFramework.UIFrameworkCanvasBox
// (None)

class UClass* UUIFrameworkCanvasBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkCanvasBox");

	return Clss;
}


// UIFrameworkCanvasBox UIFramework.Default__UIFrameworkCanvasBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkCanvasBox* UUIFrameworkCanvasBox::GetDefaultObj()
{
	static class UUIFrameworkCanvasBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkCanvasBox*>(UUIFrameworkCanvasBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkCanvasBox.RemoveWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkCanvasBox::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkCanvasBox", "RemoveWidget");

	Params::UUIFrameworkCanvasBox_RemoveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkCanvasBox.AddWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkCanvasBoxSlot   Widget                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkCanvasBox::AddWidget(const struct FUIFrameworkCanvasBoxSlot& Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkCanvasBox", "AddWidget");

	Params::UUIFrameworkCanvasBox_AddWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UIFramework.UIFrameworkColorBlock
// (None)

class UClass* UUIFrameworkColorBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkColorBlock");

	return Clss;
}


// UIFrameworkColorBlock UIFramework.Default__UIFrameworkColorBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkColorBlock* UUIFrameworkColorBlock::GetDefaultObj()
{
	static class UUIFrameworkColorBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkColorBlock*>(UUIFrameworkColorBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkColorBlock.SetDesiredSize
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2f                   DesiredSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkColorBlock::SetDesiredSize(const struct FVector2f& DesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkColorBlock", "SetDesiredSize");

	Params::UUIFrameworkColorBlock_SetDesiredSize_Params Parms{};

	Parms.DesiredSize = DesiredSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkColorBlock.SetColor
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkColorBlock::SetColor(const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkColorBlock", "SetColor");

	Params::UUIFrameworkColorBlock_SetColor_Params Parms{};

	Parms.Tint = Tint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkColorBlock.OnRep_DesiredSize
// (Final, Native, Private)
// Parameters:

void UUIFrameworkColorBlock::OnRep_DesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkColorBlock", "OnRep_DesiredSize");

	Params::UUIFrameworkColorBlock_OnRep_DesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkColorBlock.OnRep_Color
// (Final, Native, Private)
// Parameters:

void UUIFrameworkColorBlock::OnRep_Color()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkColorBlock", "OnRep_Color");

	Params::UUIFrameworkColorBlock_OnRep_Color_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkColorBlock.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2f                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2f UUIFrameworkColorBlock::GetDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkColorBlock", "GetDesiredSize");

	Params::UUIFrameworkColorBlock_GetDesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkColorBlock.GetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UUIFrameworkColorBlock::GetColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkColorBlock", "GetColor");

	Params::UUIFrameworkColorBlock_GetColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UIFramework.UIFrameworkImageBlock
// (None)

class UClass* UUIFrameworkImageBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkImageBlock");

	return Clss;
}


// UIFrameworkImageBlock UIFramework.Default__UIFrameworkImageBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkImageBlock* UUIFrameworkImageBlock::GetDefaultObj()
{
	static class UUIFrameworkImageBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkImageBlock*>(UUIFrameworkImageBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkImageBlock.SetTint
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetTint(const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetTint");

	Params::UUIFrameworkImageBlock_SetTint_Params Parms{};

	Parms.Tint = Tint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkImageBlock.SetTiling
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateBrushTileType     OverflowPolicy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetTiling(enum class ESlateBrushTileType OverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetTiling");

	Params::UUIFrameworkImageBlock_SetTiling_Params Parms{};

	Parms.OverflowPolicy = OverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkImageBlock.SetTexture
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseTextureSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetTexture(TSoftObjectPtr<class UTexture2D> Texture, bool bUseTextureSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetTexture");

	Params::UUIFrameworkImageBlock_SetTexture_Params Parms{};

	Parms.Texture = Texture;
	Parms.bUseTextureSize = bUseTextureSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkImageBlock.SetMaterial
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>Material                                                         (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetMaterial(TSoftObjectPtr<class UMaterialInterface> Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetMaterial");

	Params::UUIFrameworkImageBlock_SetMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkImageBlock.SetDesiredSize
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2f                   DesiredSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkImageBlock::SetDesiredSize(const struct FVector2f& DesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "SetDesiredSize");

	Params::UUIFrameworkImageBlock_SetDesiredSize_Params Parms{};

	Parms.DesiredSize = DesiredSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkImageBlock.OnRep_Data
// (Final, Native, Private)
// Parameters:

void UUIFrameworkImageBlock::OnRep_Data()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "OnRep_Data");

	Params::UUIFrameworkImageBlock_OnRep_Data_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkImageBlock.GetTint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UUIFrameworkImageBlock::GetTint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "GetTint");

	Params::UUIFrameworkImageBlock_GetTint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkImageBlock.GetTiling
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateBrushTileType     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateBrushTileType UUIFrameworkImageBlock::GetTiling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "GetTiling");

	Params::UUIFrameworkImageBlock_GetTiling_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkImageBlock.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2f                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2f UUIFrameworkImageBlock::GetDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "GetDesiredSize");

	Params::UUIFrameworkImageBlock_GetDesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkImageBlock.GeResourceObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftObjectPtr<class UObject>      ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UObject> UUIFrameworkImageBlock::GeResourceObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkImageBlock", "GeResourceObject");

	Params::UUIFrameworkImageBlock_GeResourceObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UIFramework.UIFrameworkOverlay
// (None)

class UClass* UUIFrameworkOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkOverlay");

	return Clss;
}


// UIFrameworkOverlay UIFramework.Default__UIFrameworkOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkOverlay* UUIFrameworkOverlay::GetDefaultObj()
{
	static class UUIFrameworkOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkOverlay*>(UUIFrameworkOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkOverlay.RemoveWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkOverlay::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkOverlay", "RemoveWidget");

	Params::UUIFrameworkOverlay_RemoveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkOverlay.AddWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkOverlaySlot     Widget                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkOverlay::AddWidget(const struct FUIFrameworkOverlaySlot& Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkOverlay", "AddWidget");

	Params::UUIFrameworkOverlay_AddWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UIFramework.UIFrameworkSimpleButton
// (None)

class UClass* UUIFrameworkSimpleButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkSimpleButton");

	return Clss;
}


// UIFrameworkSimpleButton UIFramework.Default__UIFrameworkSimpleButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkSimpleButton* UUIFrameworkSimpleButton::GetDefaultObj()
{
	static class UUIFrameworkSimpleButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkSimpleButton*>(UUIFrameworkSimpleButton::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkSimpleButton.ServerClick
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkSimpleButton::ServerClick(class UPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkSimpleButton", "ServerClick");

	Params::UUIFrameworkSimpleButton_ServerClick_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkSimpleButton.OnRep_Message
// (Final, Native, Private)
// Parameters:

void UUIFrameworkSimpleButton::OnRep_Message()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkSimpleButton", "OnRep_Message");

	Params::UUIFrameworkSimpleButton_OnRep_Message_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkSimpleButton.OnClick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMEventField             Field                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkSimpleButton::OnClick(const struct FMVVMEventField& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkSimpleButton", "OnClick");

	Params::UUIFrameworkSimpleButton_OnClick_Params Parms{};

	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UIFramework.UIFrameworkStackBox
// (None)

class UClass* UUIFrameworkStackBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkStackBox");

	return Clss;
}


// UIFrameworkStackBox UIFramework.Default__UIFrameworkStackBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkStackBox* UUIFrameworkStackBox::GetDefaultObj()
{
	static class UUIFrameworkStackBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkStackBox*>(UUIFrameworkStackBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkStackBox.RemoveWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkStackBox::RemoveWidget(class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkStackBox", "RemoveWidget");

	Params::UUIFrameworkStackBox_RemoveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkStackBox.OnRep_Orientation
// (Final, Native, Private)
// Parameters:

void UUIFrameworkStackBox::OnRep_Orientation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkStackBox", "OnRep_Orientation");

	Params::UUIFrameworkStackBox_OnRep_Orientation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkStackBox.AddWidget
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FUIFrameworkStackBoxSlot    Widget                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUIFrameworkStackBox::AddWidget(const struct FUIFrameworkStackBoxSlot& Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkStackBox", "AddWidget");

	Params::UUIFrameworkStackBox_AddWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UIFramework.UIFrameworkTextBase
// (None)

class UClass* UUIFrameworkTextBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkTextBase");

	return Clss;
}


// UIFrameworkTextBase UIFramework.Default__UIFrameworkTextBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkTextBase* UUIFrameworkTextBase::GetDefaultObj()
{
	static class UUIFrameworkTextBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkTextBase*>(UUIFrameworkTextBase::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkTextBase.SetTextColor
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                TextColor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBase::SetTextColor(const struct FLinearColor& TextColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "SetTextColor");

	Params::UUIFrameworkTextBase_SetTextColor_Params Parms{};

	Parms.TextColor = TextColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBase.SetOverflowPolicy
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     OverflowPolicy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBase::SetOverflowPolicy(enum class ETextOverflowPolicy OverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "SetOverflowPolicy");

	Params::UUIFrameworkTextBase_SetOverflowPolicy_Params Parms{};

	Parms.OverflowPolicy = OverflowPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBase.SetJustification
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            Justification                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBase::SetJustification(enum class ETextJustify Justification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "SetJustification");

	Params::UUIFrameworkTextBase_SetJustification_Params Parms{};

	Parms.Justification = Justification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBase.OnRep_TextColor
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBase::OnRep_TextColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_TextColor");

	Params::UUIFrameworkTextBase_OnRep_TextColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBase.OnRep_OverflowPolicy
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBase::OnRep_OverflowPolicy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_OverflowPolicy");

	Params::UUIFrameworkTextBase_OnRep_OverflowPolicy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBase.OnRep_Message
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBase::OnRep_Message()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_Message");

	Params::UUIFrameworkTextBase_OnRep_Message_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBase.OnRep_Justification
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBase::OnRep_Justification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "OnRep_Justification");

	Params::UUIFrameworkTextBase_OnRep_Justification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBase.GetTextColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UUIFrameworkTextBase::GetTextColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "GetTextColor");

	Params::UUIFrameworkTextBase_GetTextColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBase.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UUIFrameworkTextBase::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "GetText");

	Params::UUIFrameworkTextBase_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBase.GetOverflowPolicy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextOverflowPolicy     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextOverflowPolicy UUIFrameworkTextBase::GetOverflowPolicy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "GetOverflowPolicy");

	Params::UUIFrameworkTextBase_GetOverflowPolicy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBase.GetJustification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextJustify            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextJustify UUIFrameworkTextBase::GetJustification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBase", "GetJustification");

	Params::UUIFrameworkTextBase_GetJustification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UIFramework.UIFrameworkTextBlock
// (None)

class UClass* UUIFrameworkTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkTextBlock");

	return Clss;
}


// UIFrameworkTextBlock UIFramework.Default__UIFrameworkTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkTextBlock* UUIFrameworkTextBlock::GetDefaultObj()
{
	static class UUIFrameworkTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkTextBlock*>(UUIFrameworkTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkTextBlock.SetShadowOffset
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2f                   ShadowOffset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBlock::SetShadowOffset(const struct FVector2f& ShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBlock", "SetShadowOffset");

	Params::UUIFrameworkTextBlock_SetShadowOffset_Params Parms{};

	Parms.ShadowOffset = ShadowOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBlock.SetShadowColor
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                ShadowColor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkTextBlock::SetShadowColor(const struct FLinearColor& ShadowColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBlock", "SetShadowColor");

	Params::UUIFrameworkTextBlock_SetShadowColor_Params Parms{};

	Parms.ShadowColor = ShadowColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBlock.OnRep_ShadowOffset
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBlock::OnRep_ShadowOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBlock", "OnRep_ShadowOffset");

	Params::UUIFrameworkTextBlock_OnRep_ShadowOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBlock.OnRep_ShadowColor
// (Final, Native, Private)
// Parameters:

void UUIFrameworkTextBlock::OnRep_ShadowColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBlock", "OnRep_ShadowColor");

	Params::UUIFrameworkTextBlock_OnRep_ShadowColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkTextBlock.GetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2f                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2f UUIFrameworkTextBlock::GetShadowOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBlock", "GetShadowOffset");

	Params::UUIFrameworkTextBlock_GetShadowOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UIFramework.UIFrameworkTextBlock.GetShadowColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UUIFrameworkTextBlock::GetShadowColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkTextBlock", "GetShadowColor");

	Params::UUIFrameworkTextBlock_GetShadowColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UIFramework.UIFrameworkUserWidget
// (None)

class UClass* UUIFrameworkUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFrameworkUserWidget");

	return Clss;
}


// UIFrameworkUserWidget UIFramework.Default__UIFrameworkUserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIFrameworkUserWidget* UUIFrameworkUserWidget::GetDefaultObj()
{
	static class UUIFrameworkUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFrameworkUserWidget*>(UUIFrameworkUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFramework.UIFrameworkUserWidget.SetWidgetClass
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UWidget>       Value                                                            (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkUserWidget::SetWidgetClass(TSoftClassPtr<class UWidget> Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkUserWidget", "SetWidgetClass");

	Params::UUIFrameworkUserWidget_SetWidgetClass_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIFramework.UIFrameworkUserWidget.SetNamedSlot
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        SlotName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUIFrameworkWidget*          Widget                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUIFrameworkUserWidget::SetNamedSlot(class FName SlotName, class UUIFrameworkWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFrameworkUserWidget", "SetNamedSlot");

	Params::UUIFrameworkUserWidget_SetNamedSlot_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



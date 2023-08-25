#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotdUI.DynamicMotdButtonBaseWidget
// (None)

class UClass* UDynamicMotdButtonBaseWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMotdButtonBaseWidget");

	return Clss;
}


// DynamicMotdButtonBaseWidget MotdUI.Default__DynamicMotdButtonBaseWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMotdButtonBaseWidget* UDynamicMotdButtonBaseWidget::GetDefaultObj()
{
	static class UDynamicMotdButtonBaseWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMotdButtonBaseWidget*>(UDynamicMotdButtonBaseWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class MotdUI.DynamicMotdFullScreenButtonTile
// (None)

class UClass* UDynamicMotdFullScreenButtonTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMotdFullScreenButtonTile");

	return Clss;
}


// DynamicMotdFullScreenButtonTile MotdUI.Default__DynamicMotdFullScreenButtonTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMotdFullScreenButtonTile* UDynamicMotdFullScreenButtonTile::GetDefaultObj()
{
	static class UDynamicMotdFullScreenButtonTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMotdFullScreenButtonTile*>(UDynamicMotdFullScreenButtonTile::StaticClass()->DefaultObject);

	return Default;
}


// Class MotdUI.DynamicMotdFullScreenTile
// (None)

class UClass* UDynamicMotdFullScreenTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMotdFullScreenTile");

	return Clss;
}


// DynamicMotdFullScreenTile MotdUI.Default__DynamicMotdFullScreenTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMotdFullScreenTile* UDynamicMotdFullScreenTile::GetDefaultObj()
{
	static class UDynamicMotdFullScreenTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMotdFullScreenTile*>(UDynamicMotdFullScreenTile::StaticClass()->DefaultObject);

	return Default;
}


// Function MotdUI.DynamicMotdFullScreenTile.BP_OnTileUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDynamicMotdFullScreenTile::BP_OnTileUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMotdFullScreenTile", "BP_OnTileUpdated");

	Params::UDynamicMotdFullScreenTile_BP_OnTileUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class MotdUI.DynamicMotdFullScreenWidget
// (None)

class UClass* UDynamicMotdFullScreenWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMotdFullScreenWidget");

	return Clss;
}


// DynamicMotdFullScreenWidget MotdUI.Default__DynamicMotdFullScreenWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMotdFullScreenWidget* UDynamicMotdFullScreenWidget::GetDefaultObj()
{
	static class UDynamicMotdFullScreenWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMotdFullScreenWidget*>(UDynamicMotdFullScreenWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MotdUI.DynamicMotdFullScreenWidget.NavigateToPreviousItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDynamicMotdFullScreenWidget::NavigateToPreviousItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMotdFullScreenWidget", "NavigateToPreviousItem");

	Params::UDynamicMotdFullScreenWidget_NavigateToPreviousItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotdUI.DynamicMotdFullScreenWidget.NavigateToNextItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDynamicMotdFullScreenWidget::NavigateToNextItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMotdFullScreenWidget", "NavigateToNextItem");

	Params::UDynamicMotdFullScreenWidget_NavigateToNextItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotdUI.DynamicMotdFullScreenWidget.HandleSelectedTileChanged
// (Final, Native, Private)
// Parameters:
// class UCommonButtonBase*           SelectedTile                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TileIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicMotdFullScreenWidget::HandleSelectedTileChanged(class UCommonButtonBase* SelectedTile, int32 TileIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMotdFullScreenWidget", "HandleSelectedTileChanged");

	Params::UDynamicMotdFullScreenWidget_HandleSelectedTileChanged_Params Parms{};

	Parms.SelectedTile = SelectedTile;
	Parms.TileIndex = TileIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MotdUI.DynamicMotdFullScreenWidget.BP_PlayIntroAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDynamicMotdFullScreenWidget::BP_PlayIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMotdFullScreenWidget", "BP_PlayIntroAnimation");

	Params::UDynamicMotdFullScreenWidget_BP_PlayIntroAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MotdUI.DynamicMotdFullScreenWidget.BP_OnSelectedTileChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDynamicMotdFullScreenWidget::BP_OnSelectedTileChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicMotdFullScreenWidget", "BP_OnSelectedTileChanged");

	Params::UDynamicMotdFullScreenWidget_BP_OnSelectedTileChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class MotdUI.DynamicMotdTopBar
// (None)

class UClass* UDynamicMotdTopBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMotdTopBar");

	return Clss;
}


// DynamicMotdTopBar MotdUI.Default__DynamicMotdTopBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMotdTopBar* UDynamicMotdTopBar::GetDefaultObj()
{
	static class UDynamicMotdTopBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMotdTopBar*>(UDynamicMotdTopBar::StaticClass()->DefaultObject);

	return Default;
}

}



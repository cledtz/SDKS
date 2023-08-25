#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PictureInPictureUI.PictureInPictureBladeMenuButton
// (None)

class UClass* UPictureInPictureBladeMenuButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureBladeMenuButton");

	return Clss;
}


// PictureInPictureBladeMenuButton PictureInPictureUI.Default__PictureInPictureBladeMenuButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureBladeMenuButton* UPictureInPictureBladeMenuButton::GetDefaultObj()
{
	static class UPictureInPictureBladeMenuButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureBladeMenuButton*>(UPictureInPictureBladeMenuButton::StaticClass()->DefaultObject);

	return Default;
}


// Function PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               LoggedIn                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ParentalControlsEnabled                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureBladeMenuButton::UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "UpdatePiPStatusBP");

	Params::UPictureInPictureBladeMenuButton_UpdatePiPStatusBP_Params Parms{};

	Parms.LoggedIn = LoggedIn;
	Parms.Enabled = Enabled;
	Parms.ParentalControlsEnabled = ParentalControlsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PictureInPictureUI.PictureInPictureBladeMenuButton.OnPartnerListUpdated
// (Final, Native, Private)
// Parameters:

void UPictureInPictureBladeMenuButton::OnPartnerListUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "OnPartnerListUpdated");

	Params::UPictureInPictureBladeMenuButton_OnPartnerListUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLogoutSuccess
// (Final, Native, Public)
// Parameters:

void UPictureInPictureBladeMenuButton::HandlePiPLogoutSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "HandlePiPLogoutSuccess");

	Params::UPictureInPictureBladeMenuButton_HandlePiPLogoutSuccess_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLoginSuccess
// (Final, Native, Public)
// Parameters:

void UPictureInPictureBladeMenuButton::HandlePiPLoginSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "HandlePiPLoginSuccess");

	Params::UPictureInPictureBladeMenuButton_HandlePiPLoginSuccess_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled
// (Final, Native, Public)
// Parameters:
// bool                               Enabled                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureBladeMenuButton::HandlePiPEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureBladeMenuButton", "HandlePiPEnabled");

	Params::UPictureInPictureBladeMenuButton_HandlePiPEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
// (None)

class UClass* UPictureInPictureLoadingScreenOverlayAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureLoadingScreenOverlayAction");

	return Clss;
}


// PictureInPictureLoadingScreenOverlayAction PictureInPictureUI.Default__PictureInPictureLoadingScreenOverlayAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureLoadingScreenOverlayAction* UPictureInPictureLoadingScreenOverlayAction::GetDefaultObj()
{
	static class UPictureInPictureLoadingScreenOverlayAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureLoadingScreenOverlayAction*>(UPictureInPictureLoadingScreenOverlayAction::StaticClass()->DefaultObject);

	return Default;
}


// Class PictureInPictureUI.PictureInPictureMetadataOverlay
// (None)

class UClass* UPictureInPictureMetadataOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureMetadataOverlay");

	return Clss;
}


// PictureInPictureMetadataOverlay PictureInPictureUI.Default__PictureInPictureMetadataOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureMetadataOverlay* UPictureInPictureMetadataOverlay::GetDefaultObj()
{
	static class UPictureInPictureMetadataOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureMetadataOverlay*>(UPictureInPictureMetadataOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Function PictureInPictureUI.PictureInPictureMetadataOverlay.OnMediaStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPictureInPictureMetadataOverlay::OnMediaStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureMetadataOverlay", "OnMediaStarted");

	Params::UPictureInPictureMetadataOverlay_OnMediaStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoStarted
// (Final, Native, Protected)
// Parameters:

void UPictureInPictureMetadataOverlay::HandleOnPIPVideoStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureMetadataOverlay", "HandleOnPIPVideoStarted");

	Params::UPictureInPictureMetadataOverlay_HandleOnPIPVideoStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoResumed
// (Final, Native, Protected)
// Parameters:

void UPictureInPictureMetadataOverlay::HandleOnPIPVideoResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureMetadataOverlay", "HandleOnPIPVideoResumed");

	Params::UPictureInPictureMetadataOverlay_HandleOnPIPVideoResumed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PictureInPictureUI.PictureInPicturePanelWidget
// (None)

class UClass* UPictureInPicturePanelWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPicturePanelWidget");

	return Clss;
}


// PictureInPicturePanelWidget PictureInPictureUI.Default__PictureInPicturePanelWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPicturePanelWidget* UPictureInPicturePanelWidget::GetDefaultObj()
{
	static class UPictureInPicturePanelWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPicturePanelWidget*>(UPictureInPicturePanelWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP
// (Final, Native, Protected)
// Parameters:

void UPictureInPicturePanelWidget::ToggleFullScreenPiP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "ToggleFullScreenPiP");

	Params::UPictureInPicturePanelWidget_ToggleFullScreenPiP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePanelWidget::ShowDebugInfo(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "ShowDebugInfo");

	Params::UPictureInPicturePanelWidget_ShowDebugInfo_Params Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortMediaEventsStreamAssetsInStreamAssets                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UPictureInPicturePanelWidget::SetupPIPSoundComponent(struct FFortMediaEventsStreamAssets& InStreamAssets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "SetupPIPSoundComponent");

	Params::UPictureInPicturePanelWidget_SetupPIPSoundComponent_Params Parms{};

	Parms.InStreamAssets = InStreamAssets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate
// (Final, Native, Protected)
// Parameters:

void UPictureInPicturePanelWidget::IntentionalDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "IntentionalDeactivate");

	Params::UPictureInPicturePanelWidget_IntentionalDeactivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap
// (Final, Native, Protected)
// Parameters:
// bool                               bFullscreenMapVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePanelWidget::HandleToggleFullscreenMap(bool bFullscreenMapVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleToggleFullscreenMap");

	Params::UPictureInPicturePanelWidget_HandleToggleFullscreenMap_Params Parms{};

	Parms.bFullscreenMapVisible = bFullscreenMapVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FPiPPartnerSource           InSelectedSource                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPictureInPicturePanelWidget::HandleOnPartnerSourceChanged(struct FPiPPartnerSource& InSelectedSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleOnPartnerSourceChanged");

	Params::UPictureInPicturePanelWidget_HandleOnPartnerSourceChanged_Params Parms{};

	Parms.InSelectedSource = InSelectedSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated
// (Final, Native, Protected)
// Parameters:

void UPictureInPicturePanelWidget::HandleOnPartnerListUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleOnPartnerListUpdated");

	Params::UPictureInPicturePanelWidget_HandleOnPartnerListUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged
// (Final, Native, Protected)
// Parameters:
// class UPictureInPicturePartnerControls*NewPartnerControls                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePanelWidget::HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleOnPartnerChanged");

	Params::UPictureInPicturePanelWidget_HandleOnPartnerChanged_Params Parms{};

	Parms.NewPartnerControls = NewPartnerControls;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bIsPiPEnabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePanelWidget::HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "HandleIsPictureInPictureEnabledChanged");

	Params::UPictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged_Params Parms{};

	Parms.bIsPiPEnabled = bIsPiPEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bInDefault                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortMediaEventsStreamAssetsInStreamAssets                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPicturePanelWidget::FlipPIPAudioSubmix(bool bInDefault, struct FFortMediaEventsStreamAssets& InStreamAssets, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "FlipPIPAudioSubmix");

	Params::UPictureInPicturePanelWidget_FlipPIPAudioSubmix_Params Parms{};

	Parms.bInDefault = bInDefault;
	Parms.InStreamAssets = InStreamAssets;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UPictureInPicturePanelWidget::DestroyPIPSoundComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "DestroyPIPSoundComponent");

	Params::UPictureInPicturePanelWidget_DestroyPIPSoundComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController
// (Final, Native, Private)
// Parameters:

void UPictureInPicturePanelWidget::AutoEnableController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPicturePanelWidget", "AutoEnableController");

	Params::UPictureInPicturePanelWidget_AutoEnableController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PictureInPictureUI.PictureInPictureSourcePicker
// (None)

class UClass* UPictureInPictureSourcePicker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PictureInPictureSourcePicker");

	return Clss;
}


// PictureInPictureSourcePicker PictureInPictureUI.Default__PictureInPictureSourcePicker
// (Public, ClassDefaultObject, ArchetypeObject)

class UPictureInPictureSourcePicker* UPictureInPictureSourcePicker::GetDefaultObj()
{
	static class UPictureInPictureSourcePicker* Default = nullptr;

	if (!Default)
		Default = static_cast<UPictureInPictureSourcePicker*>(UPictureInPictureSourcePicker::StaticClass()->DefaultObject);

	return Default;
}


// Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<struct FPiPPartnerSource>   CurrentSources                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPictureInPictureSourcePicker::HandleOnPartnerSourceChanged(TArray<struct FPiPPartnerSource>& CurrentSources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureSourcePicker", "HandleOnPartnerSourceChanged");

	Params::UPictureInPictureSourcePicker_HandleOnPartnerSourceChanged_Params Parms{};

	Parms.CurrentSources = CurrentSources;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged
// (Final, Native, Private)
// Parameters:
// class UPictureInPicturePartnerControls*NewPartner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPictureInPictureSourcePicker::HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PictureInPictureSourcePicker", "HandleOnPartnerChanged");

	Params::UPictureInPictureSourcePicker_HandleOnPartnerChanged_Params Parms{};

	Parms.NewPartner = NewPartner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
// (None)

class UClass* UCreativeVideoPlayerFullScreenWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeVideoPlayerFullScreenWidget");

	return Clss;
}


// CreativeVideoPlayerFullScreenWidget CreativeVideoPlayerUI.Default__CreativeVideoPlayerFullScreenWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCreativeVideoPlayerFullScreenWidget* UCreativeVideoPlayerFullScreenWidget::GetDefaultObj()
{
	static class UCreativeVideoPlayerFullScreenWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativeVideoPlayerFullScreenWidget*>(UCreativeVideoPlayerFullScreenWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.SetExternalComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaTexture*               VideoTextureExt                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSourceBus*             ExtSourceBus                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFullScreenWidget::SetExternalComponents(class UMediaTexture* VideoTextureExt, class USoundSourceBus* ExtSourceBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullScreenWidget", "SetExternalComponents");

	Params::UCreativeVideoPlayerFullScreenWidget_SetExternalComponents_Params Parms{};

	Parms.VideoTextureExt = VideoTextureExt;
	Parms.ExtSourceBus = ExtSourceBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress
// (Final, Native, Private)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFullScreenWidget::OnSkipButtonActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullScreenWidget", "OnSkipButtonActionProgress");

	Params::UCreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress_Params Parms{};

	Parms.HeldPercent = HeldPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete
// (Final, Native, Private)
// Parameters:

void UCreativeVideoPlayerFullScreenWidget::OnSkipButtonActionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeVideoPlayerFullScreenWidget", "OnSkipButtonActionComplete");

	Params::UCreativeVideoPlayerFullScreenWidget_OnSkipButtonActionComplete_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



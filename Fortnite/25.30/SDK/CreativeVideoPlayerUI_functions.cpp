#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.SetExternalComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaTexture*               VideoTextureExt                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundSourceBus*             ExtSourceBus                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFullScreenWidget::SetExternalComponents(class UMediaTexture* VideoTextureExt, class USoundSourceBus* ExtSourceBus)
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullScreenWidget", "SetExternalComponents");

	Params::UCreativeVideoPlayerFullScreenWidget_SetExternalComponents_Params Parms;

	Parms.VideoTextureExt = VideoTextureExt;
	Parms.ExtSourceBus = ExtSourceBus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress
// (Final, Native, Private)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCreativeVideoPlayerFullScreenWidget::OnSkipButtonActionProgress(float HeldPercent)
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullScreenWidget", "OnSkipButtonActionProgress");

	Params::UCreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress_Params Parms;

	Parms.HeldPercent = HeldPercent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete
// (Final, Native, Private)
// Parameters:

void UCreativeVideoPlayerFullScreenWidget::OnSkipButtonActionComplete()
{
	static auto Func = Class->GetFunction("CreativeVideoPlayerFullScreenWidget", "OnSkipButtonActionComplete");

	Params::UCreativeVideoPlayerFullScreenWidget_OnSkipButtonActionComplete_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

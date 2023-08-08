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


// Function POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   AvatarTexture                                                    (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPOIBannerToastSocialAvatar::SetSocialAvatarTexture(TSoftObjectPtr<class UTexture2D> AvatarTexture)
{
	static auto Func = Class->GetFunction("POIBannerToastSocialAvatar", "SetSocialAvatarTexture");

	Params::UPOIBannerToastSocialAvatar_SetSocialAvatarTexture_Params Parms;

	Parms.AvatarTexture = AvatarTexture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortPlayerState*            PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPOIBannerToastSocialAvatar::SetSocialAvatar(class UFortPlayerState* PlayerState)
{
	static auto Func = Class->GetFunction("POIBannerToastSocialAvatar", "SetSocialAvatar");

	Params::UPOIBannerToastSocialAvatar_SetSocialAvatar_Params Parms;

	Parms.PlayerState = PlayerState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function POIBannerUI.POIBannerToastWidgetBase.OnStompFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPOIBannerToastWidgetBase::OnStompFailed()
{
	static auto Func = Class->GetFunction("POIBannerToastWidgetBase", "OnStompFailed");

	Params::UPOIBannerToastWidgetBase_OnStompFailed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POIBannerUI.POIBannerToastWidgetBase.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPOIBannerToastWidgetBase::OnStompedByOtherWidget()
{
	static auto Func = Class->GetFunction("POIBannerToastWidgetBase", "OnStompedByOtherWidget");

	Params::UPOIBannerToastWidgetBase_OnStompedByOtherWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeInactive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPOIBannerToastWidgetBase::K2_OnBecomeInactive()
{
	static auto Func = Class->GetFunction("POIBannerToastWidgetBase", "K2_OnBecomeInactive");

	Params::UPOIBannerToastWidgetBase_K2_OnBecomeInactive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeActive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPOIBannerToastWidgetBase::K2_OnBecomeActive()
{
	static auto Func = Class->GetFunction("POIBannerToastWidgetBase", "K2_OnBecomeActive");

	Params::UPOIBannerToastWidgetBase_K2_OnBecomeActive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                LocationTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UPOIBannerToastWidgetBase::GetLocationTextFromTag(struct FGameplayTag& LocationTag)
{
	static auto Func = Class->GetFunction("POIBannerToastWidgetBase", "GetLocationTextFromTag");

	Params::UPOIBannerToastWidgetBase_GetLocationTextFromTag_Params Parms;

	Parms.LocationTag = LocationTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

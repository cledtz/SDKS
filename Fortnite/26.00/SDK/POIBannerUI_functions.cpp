#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class POIBannerUI.POIBannerToastSocialAvatar
// (None)

class UClass* UPOIBannerToastSocialAvatar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("POIBannerToastSocialAvatar");

	return Clss;
}


// POIBannerToastSocialAvatar POIBannerUI.Default__POIBannerToastSocialAvatar
// (Public, ClassDefaultObject, ArchetypeObject)

class UPOIBannerToastSocialAvatar* UPOIBannerToastSocialAvatar::GetDefaultObj()
{
	static class UPOIBannerToastSocialAvatar* Default = nullptr;

	if (!Default)
		Default = static_cast<UPOIBannerToastSocialAvatar*>(UPOIBannerToastSocialAvatar::StaticClass()->DefaultObject);

	return Default;
}


// Function POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   AvatarTexture                                                    (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPOIBannerToastSocialAvatar::SetSocialAvatarTexture(TSoftObjectPtr<class UTexture2D> AvatarTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("POIBannerToastSocialAvatar", "SetSocialAvatarTexture");

	Params::UPOIBannerToastSocialAvatar_SetSocialAvatarTexture_Params Parms{};

	Parms.AvatarTexture = AvatarTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortPlayerState*            PlayerState                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPOIBannerToastSocialAvatar::SetSocialAvatar(class UFortPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("POIBannerToastSocialAvatar", "SetSocialAvatar");

	Params::UPOIBannerToastSocialAvatar_SetSocialAvatar_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class POIBannerUI.POIBannerToastWidgetBase
// (None)

class UClass* UPOIBannerToastWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("POIBannerToastWidgetBase");

	return Clss;
}


// POIBannerToastWidgetBase POIBannerUI.Default__POIBannerToastWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPOIBannerToastWidgetBase* UPOIBannerToastWidgetBase::GetDefaultObj()
{
	static class UPOIBannerToastWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPOIBannerToastWidgetBase*>(UPOIBannerToastWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function POIBannerUI.POIBannerToastWidgetBase.OnStompFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPOIBannerToastWidgetBase::OnStompFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "OnStompFailed");

	Params::UPOIBannerToastWidgetBase_OnStompFailed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POIBannerUI.POIBannerToastWidgetBase.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPOIBannerToastWidgetBase::OnStompedByOtherWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "OnStompedByOtherWidget");

	Params::UPOIBannerToastWidgetBase_OnStompedByOtherWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeInactive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPOIBannerToastWidgetBase::K2_OnBecomeInactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "K2_OnBecomeInactive");

	Params::UPOIBannerToastWidgetBase_K2_OnBecomeInactive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeActive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPOIBannerToastWidgetBase::K2_OnBecomeActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "K2_OnBecomeActive");

	Params::UPOIBannerToastWidgetBase_K2_OnBecomeActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                LocationTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UPOIBannerToastWidgetBase::GetLocationTextFromTag(struct FGameplayTag& LocationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("POIBannerToastWidgetBase", "GetLocationTextFromTag");

	Params::UPOIBannerToastWidgetBase_GetLocationTextFromTag_Params Parms{};

	Parms.LocationTag = LocationTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



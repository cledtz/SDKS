#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LandscapePatch.LandscapePatchComponent
// (SceneComponent)

class UClass* ULandscapePatchComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapePatchComponent");

	return Clss;
}


// LandscapePatchComponent LandscapePatch.Default__LandscapePatchComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapePatchComponent* ULandscapePatchComponent::GetDefaultObj()
{
	static class ULandscapePatchComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapePatchComponent*>(ULandscapePatchComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LandscapePatch.LandscapePatchComponent.SetPatchManager
// (Native, Public, BlueprintCallable)
// Parameters:
// class ULandscapePatchManager*      NewPatchManager                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapePatchComponent::SetPatchManager(class ULandscapePatchManager* NewPatchManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapePatchComponent", "SetPatchManager");

	Params::ULandscapePatchComponent_SetPatchManager_Params Parms{};

	Parms.NewPatchManager = NewPatchManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapePatchComponent.SetLandscape
// (Native, Public, BlueprintCallable)
// Parameters:
// class ULandscape*                  NewLandscape                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapePatchComponent::SetLandscape(class ULandscape* NewLandscape)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapePatchComponent", "SetLandscape");

	Params::ULandscapePatchComponent_SetLandscape_Params Parms{};

	Parms.NewLandscape = NewLandscape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapePatchComponent.SetIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabledIn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapePatchComponent::SetIsEnabled(bool bEnabledIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapePatchComponent", "SetIsEnabled");

	Params::ULandscapePatchComponent_SetIsEnabled_Params Parms{};

	Parms.bEnabledIn = bEnabledIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInUserTriggeredUpdate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapePatchComponent::RequestLandscapeUpdate(bool bInUserTriggeredUpdate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapePatchComponent", "RequestLandscapeUpdate");

	Params::ULandscapePatchComponent_RequestLandscapeUpdate_Params Parms{};

	Parms.bInUserTriggeredUpdate = bInUserTriggeredUpdate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapePatchComponent.MoveToTop
// (Final, Native, Protected)
// Parameters:

void ULandscapePatchComponent::MoveToTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapePatchComponent", "MoveToTop");

	Params::ULandscapePatchComponent_MoveToTop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapePatchComponent.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULandscapePatchComponent::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapePatchComponent", "IsEnabled");

	Params::ULandscapePatchComponent_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapePatchComponent.GetPatchManager
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULandscapePatchManager*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULandscapePatchManager* ULandscapePatchComponent::GetPatchManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapePatchComponent", "GetPatchManager");

	Params::ULandscapePatchComponent_GetPatchManager_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform ULandscapePatchComponent::GetLandscapeHeightmapCoordsToWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapePatchComponent", "GetLandscapeHeightmapCoordsToWorld");

	Params::ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LandscapePatch.LandscapeCircleHeightPatch
// (SceneComponent)

class UClass* ULandscapeCircleHeightPatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeCircleHeightPatch");

	return Clss;
}


// LandscapeCircleHeightPatch LandscapePatch.Default__LandscapeCircleHeightPatch
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeCircleHeightPatch* ULandscapeCircleHeightPatch::GetDefaultObj()
{
	static class ULandscapeCircleHeightPatch* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeCircleHeightPatch*>(ULandscapeCircleHeightPatch::StaticClass()->DefaultObject);

	return Default;
}


// Class LandscapePatch.LandscapePatchManager
// (Actor)

class UClass* ULandscapePatchManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapePatchManager");

	return Clss;
}


// LandscapePatchManager LandscapePatch.Default__LandscapePatchManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapePatchManager* ULandscapePatchManager::GetDefaultObj()
{
	static class ULandscapePatchManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapePatchManager*>(ULandscapePatchManager::StaticClass()->DefaultObject);

	return Default;
}


// Class LandscapePatch.LandscapeTextureBackedRenderTargetBase
// (None)

class UClass* ULandscapeTextureBackedRenderTargetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeTextureBackedRenderTargetBase");

	return Clss;
}


// LandscapeTextureBackedRenderTargetBase LandscapePatch.Default__LandscapeTextureBackedRenderTargetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeTextureBackedRenderTargetBase* ULandscapeTextureBackedRenderTargetBase::GetDefaultObj()
{
	static class ULandscapeTextureBackedRenderTargetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeTextureBackedRenderTargetBase*>(ULandscapeTextureBackedRenderTargetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class LandscapePatch.LandscapeWeightTextureBackedRenderTarget
// (None)

class UClass* ULandscapeWeightTextureBackedRenderTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeWeightTextureBackedRenderTarget");

	return Clss;
}


// LandscapeWeightTextureBackedRenderTarget LandscapePatch.Default__LandscapeWeightTextureBackedRenderTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeWeightTextureBackedRenderTarget* ULandscapeWeightTextureBackedRenderTarget::GetDefaultObj()
{
	static class ULandscapeWeightTextureBackedRenderTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeWeightTextureBackedRenderTarget*>(ULandscapeWeightTextureBackedRenderTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class LandscapePatch.LandscapeHeightTextureBackedRenderTarget
// (None)

class UClass* ULandscapeHeightTextureBackedRenderTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeHeightTextureBackedRenderTarget");

	return Clss;
}


// LandscapeHeightTextureBackedRenderTarget LandscapePatch.Default__LandscapeHeightTextureBackedRenderTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeHeightTextureBackedRenderTarget* ULandscapeHeightTextureBackedRenderTarget::GetDefaultObj()
{
	static class ULandscapeHeightTextureBackedRenderTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeHeightTextureBackedRenderTarget*>(ULandscapeHeightTextureBackedRenderTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class LandscapePatch.LandscapeWeightPatchTextureInfo
// (None)

class UClass* ULandscapeWeightPatchTextureInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeWeightPatchTextureInfo");

	return Clss;
}


// LandscapeWeightPatchTextureInfo LandscapePatch.Default__LandscapeWeightPatchTextureInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeWeightPatchTextureInfo* ULandscapeWeightPatchTextureInfo::GetDefaultObj()
{
	static class ULandscapeWeightPatchTextureInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeWeightPatchTextureInfo*>(ULandscapeWeightPatchTextureInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class LandscapePatch.LandscapeTexturePatch
// (SceneComponent)

class UClass* ULandscapeTexturePatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeTexturePatch");

	return Clss;
}


// LandscapeTexturePatch LandscapePatch.Default__LandscapeTexturePatch
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeTexturePatch* ULandscapeTexturePatch::GetDefaultObj()
{
	static class ULandscapeTexturePatch* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeTexturePatch*>(ULandscapeTexturePatch::StaticClass()->DefaultObject);

	return Default;
}


// Function LandscapePatch.LandscapeTexturePatch.SnapToLandscape
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULandscapeTexturePatch::SnapToLandscape()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SnapToLandscape");

	Params::ULandscapeTexturePatch_SnapToLandscape_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTextureHeightPatchZeroHeightMeaningZeroHeightMeaningIn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetZeroHeightMeaning(enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetZeroHeightMeaning");

	Params::ULandscapeTexturePatch_SetZeroHeightMeaning_Params Parms{};

	Parms.ZeroHeightMeaningIn = ZeroHeightMeaningIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    TextureIn                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetWeightPatchTextureAsset(class FName& InWeightmapLayerName, class UTexture* TextureIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchTextureAsset");

	Params::ULandscapeTexturePatch_SetWeightPatchTextureAsset_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.TextureIn = TextureIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELandscapeTexturePatchSourceModeNewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetWeightPatchSourceMode(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchSourceMode");

	Params::ULandscapeTexturePatch_SetWeightPatchSourceMode_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELandscapeTexturePatchBlendModeBlendMode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetWeightPatchBlendModeOverride(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchBlendMode BlendMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchBlendModeOverride");

	Params::ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.BlendMode = BlendMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseAlphaChannel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetUseAlphaChannelForWeightPatch(class FName& InWeightmapLayerName, bool bUseAlphaChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetUseAlphaChannelForWeightPatch");

	Params::ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.bUseAlphaChannel = bUseAlphaChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUse                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetUseAlphaChannelForHeight(bool bUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetUseAlphaChannelForHeight");

	Params::ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Params Parms{};

	Parms.bUse = bUse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Coverage                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetUnscaledCoverage(const struct FVector2D& Coverage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetUnscaledCoverage");

	Params::ULandscapeTexturePatch_SetUnscaledCoverage_Params Parms{};

	Parms.Coverage = Coverage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetResolution
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ResolutionIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetResolution(const struct FVector2D& ResolutionIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetResolution");

	Params::ULandscapeTexturePatch_SetResolution_Params Parms{};

	Parms.ResolutionIn = ResolutionIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    TextureIn                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightTextureAsset(class UTexture* TextureIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightTextureAsset");

	Params::ULandscapeTexturePatch_SetHeightTextureAsset_Params Parms{};

	Parms.TextureIn = TextureIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTexturePatchSourceModeNewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightSourceMode(enum class ELandscapeTexturePatchSourceMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightSourceMode");

	Params::ULandscapeTexturePatch_SetHeightSourceMode_Params Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextureRenderTargetFormatFormat                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightRenderTargetFormat(enum class ETextureRenderTargetFormat Format)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightRenderTargetFormat");

	Params::ULandscapeTexturePatch_SetHeightRenderTargetFormat_Params Parms{};

	Parms.Format = Format;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLandscapeTexturePatchEncodingSettingsSettings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightEncodingSettings");

	Params::ULandscapeTexturePatch_SetHeightEncodingSettings_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTextureHeightPatchEncodingEncodingMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightEncodingMode");

	Params::ULandscapeTexturePatch_SetHeightEncodingMode_Params Parms{};

	Parms.EncodingMode = EncodingMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetFalloff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FalloffIn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetFalloff(float FalloffIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetFalloff");

	Params::ULandscapeTexturePatch_SetFalloff_Params Parms{};

	Parms.FalloffIn = FalloffIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetEditVisibilityLayer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEditVisibilityLayer                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetEditVisibilityLayer(class FName& InWeightmapLayerName, bool bEditVisibilityLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetEditVisibilityLayer");

	Params::ULandscapeTexturePatch_SetEditVisibilityLayer_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.bEditVisibilityLayer = bEditVisibilityLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.SetBlendMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTexturePatchBlendModeBlendModeIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetBlendMode(enum class ELandscapeTexturePatchBlendMode BlendModeIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "SetBlendMode");

	Params::ULandscapeTexturePatch_SetBlendMode_Params Parms{};

	Parms.BlendModeIn = BlendModeIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTextureHeightPatchEncodingEncodingMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::ResetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "ResetHeightEncodingMode");

	Params::ULandscapeTexturePatch_ResetHeightEncodingMode_Params Parms{};

	Parms.EncodingMode = EncodingMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::RemoveWeightPatch(class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "RemoveWeightPatch");

	Params::ULandscapeTexturePatch_RemoveWeightPatch_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches
// (Native, Public, BlueprintCallable)
// Parameters:

void ULandscapeTexturePatch::RemoveAllWeightPatches()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "RemoveAllWeightPatches");

	Params::ULandscapeTexturePatch_RemoveAllWeightPatches_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.ReinitializeWeights
// (Final, Native, Protected)
// Parameters:

void ULandscapeTexturePatch::ReinitializeWeights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "ReinitializeWeights");

	Params::ULandscapeTexturePatch_ReinitializeWeights_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.ReinitializeHeight
// (Final, Native, Protected)
// Parameters:

void ULandscapeTexturePatch::ReinitializeHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "ReinitializeHeight");

	Params::ULandscapeTexturePatch_ReinitializeHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELandscapeTexturePatchSourceModeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELandscapeTexturePatchSourceMode ULandscapeTexturePatch::GetWeightPatchSourceMode(class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetWeightPatchSourceMode");

	Params::ULandscapeTexturePatch_GetWeightPatchSourceMode_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ULandscapeTexturePatch::GetWeightPatchRenderTarget(class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetWeightPatchRenderTarget");

	Params::ULandscapeTexturePatch_GetWeightPatchRenderTarget_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULandscapeTexturePatch::GetUnscaledCoverage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetUnscaledCoverage");

	Params::ULandscapeTexturePatch_GetUnscaledCoverage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetResolution
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULandscapeTexturePatch::GetResolution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetResolution");

	Params::ULandscapeTexturePatch_GetResolution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform ULandscapeTexturePatch::GetPatchToWorldTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetPatchToWorldTransform");

	Params::ULandscapeTexturePatch_GetPatchToWorldTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ResolutionMultiplier                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ResolutionOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULandscapeTexturePatch::GetInitResolutionFromLandscape(float ResolutionMultiplier, struct FVector2D* ResolutionOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetInitResolutionFromLandscape");

	Params::ULandscapeTexturePatch_GetInitResolutionFromLandscape_Params Parms{};

	Parms.ResolutionMultiplier = ResolutionMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResolutionOut != nullptr)
		*ResolutionOut = Parms.ResolutionOut;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ELandscapeTexturePatchSourceModeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELandscapeTexturePatchSourceMode ULandscapeTexturePatch::GetHeightSourceMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetHeightSourceMode");

	Params::ULandscapeTexturePatch_GetHeightSourceMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bMarkDirty                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ULandscapeTexturePatch::GetHeightRenderTarget(bool bMarkDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetHeightRenderTarget");

	Params::ULandscapeTexturePatch_GetHeightRenderTarget_Params Parms{};

	Parms.bMarkDirty = bMarkDirty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULandscapeTexturePatch::GetFullUnscaledWorldSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetFullUnscaledWorldSize");

	Params::ULandscapeTexturePatch_GetFullUnscaledWorldSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> ULandscapeTexturePatch::GetAllWeightPatchLayerNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "GetAllWeightPatchLayerNames");

	Params::ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches
// (Native, Public, BlueprintCallable)
// Parameters:

void ULandscapeTexturePatch::DisableAllWeightPatches()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "DisableAllWeightPatches");

	Params::ULandscapeTexturePatch_DisableAllWeightPatches_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::ClearWeightPatchBlendModeOverride(class FName& InWeightmapLayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "ClearWeightPatchBlendModeOverride");

	Params::ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LandscapePatch.LandscapeTexturePatch.AddWeightPatch
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELandscapeTexturePatchSourceModeSourceMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseAlphaChannel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::AddWeightPatch(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeTexturePatch", "AddWeightPatch");

	Params::ULandscapeTexturePatch_AddWeightPatch_Params Parms{};

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.SourceMode = SourceMode;
	Parms.bUseAlphaChannel = bUseAlphaChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



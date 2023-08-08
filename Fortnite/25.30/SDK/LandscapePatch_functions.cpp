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


// Function LandscapePatch.LandscapePatchComponent.SetPatchManager
// (Native, Public, BlueprintCallable)
// Parameters:
// class ULandscapePatchManager*      NewPatchManager                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapePatchComponent::SetPatchManager(class ULandscapePatchManager* NewPatchManager)
{
	static auto Func = Class->GetFunction("LandscapePatchComponent", "SetPatchManager");

	Params::ULandscapePatchComponent_SetPatchManager_Params Parms;

	Parms.NewPatchManager = NewPatchManager;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapePatchComponent.SetLandscape
// (Native, Public, BlueprintCallable)
// Parameters:
// class ULandscape*                  NewLandscape                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapePatchComponent::SetLandscape(class ULandscape* NewLandscape)
{
	static auto Func = Class->GetFunction("LandscapePatchComponent", "SetLandscape");

	Params::ULandscapePatchComponent_SetLandscape_Params Parms;

	Parms.NewLandscape = NewLandscape;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapePatchComponent.SetIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabledIn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapePatchComponent::SetIsEnabled(bool bEnabledIn)
{
	static auto Func = Class->GetFunction("LandscapePatchComponent", "SetIsEnabled");

	Params::ULandscapePatchComponent_SetIsEnabled_Params Parms;

	Parms.bEnabledIn = bEnabledIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInUserTriggeredUpdate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapePatchComponent::RequestLandscapeUpdate(bool bInUserTriggeredUpdate)
{
	static auto Func = Class->GetFunction("LandscapePatchComponent", "RequestLandscapeUpdate");

	Params::ULandscapePatchComponent_RequestLandscapeUpdate_Params Parms;

	Parms.bInUserTriggeredUpdate = bInUserTriggeredUpdate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapePatchComponent.MoveToTop
// (Final, Native, Protected)
// Parameters:

void ULandscapePatchComponent::MoveToTop()
{
	static auto Func = Class->GetFunction("LandscapePatchComponent", "MoveToTop");

	Params::ULandscapePatchComponent_MoveToTop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapePatchComponent.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULandscapePatchComponent::IsEnabled()
{
	static auto Func = Class->GetFunction("LandscapePatchComponent", "IsEnabled");

	Params::ULandscapePatchComponent_IsEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapePatchComponent.GetPatchManager
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULandscapePatchManager*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULandscapePatchManager* ULandscapePatchComponent::GetPatchManager()
{
	static auto Func = Class->GetFunction("LandscapePatchComponent", "GetPatchManager");

	Params::ULandscapePatchComponent_GetPatchManager_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform ULandscapePatchComponent::GetLandscapeHeightmapCoordsToWorld()
{
	static auto Func = Class->GetFunction("LandscapePatchComponent", "GetLandscapeHeightmapCoordsToWorld");

	Params::ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.SnapToLandscape
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULandscapeTexturePatch::SnapToLandscape()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SnapToLandscape");

	Params::ULandscapeTexturePatch_SnapToLandscape_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTextureHeightPatchZeroHeightMeaningZeroHeightMeaningIn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetZeroHeightMeaning(enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetZeroHeightMeaning");

	Params::ULandscapeTexturePatch_SetZeroHeightMeaning_Params Parms;

	Parms.ZeroHeightMeaningIn = ZeroHeightMeaningIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    TextureIn                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetWeightPatchTextureAsset(class FName& InWeightmapLayerName, class UTexture* TextureIn)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchTextureAsset");

	Params::ULandscapeTexturePatch_SetWeightPatchTextureAsset_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.TextureIn = TextureIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELandscapeTexturePatchSourceModeNewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetWeightPatchSourceMode(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode NewMode)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchSourceMode");

	Params::ULandscapeTexturePatch_SetWeightPatchSourceMode_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.NewMode = NewMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELandscapeTexturePatchBlendModeBlendMode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetWeightPatchBlendModeOverride(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchBlendMode BlendMode)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetWeightPatchBlendModeOverride");

	Params::ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.BlendMode = BlendMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseAlphaChannel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetUseAlphaChannelForWeightPatch(class FName& InWeightmapLayerName, bool bUseAlphaChannel)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetUseAlphaChannelForWeightPatch");

	Params::ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.bUseAlphaChannel = bUseAlphaChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUse                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetUseAlphaChannelForHeight(bool bUse)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetUseAlphaChannelForHeight");

	Params::ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Params Parms;

	Parms.bUse = bUse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Coverage                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetUnscaledCoverage(const struct FVector2D& Coverage)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetUnscaledCoverage");

	Params::ULandscapeTexturePatch_SetUnscaledCoverage_Params Parms;

	Parms.Coverage = Coverage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetResolution
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ResolutionIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetResolution(const struct FVector2D& ResolutionIn)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetResolution");

	Params::ULandscapeTexturePatch_SetResolution_Params Parms;

	Parms.ResolutionIn = ResolutionIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    TextureIn                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightTextureAsset(class UTexture* TextureIn)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightTextureAsset");

	Params::ULandscapeTexturePatch_SetHeightTextureAsset_Params Parms;

	Parms.TextureIn = TextureIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTexturePatchSourceModeNewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightSourceMode(enum class ELandscapeTexturePatchSourceMode NewMode)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightSourceMode");

	Params::ULandscapeTexturePatch_SetHeightSourceMode_Params Parms;

	Parms.NewMode = NewMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextureRenderTargetFormatFormat                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightRenderTargetFormat(enum class ETextureRenderTargetFormat Format)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightRenderTargetFormat");

	Params::ULandscapeTexturePatch_SetHeightRenderTargetFormat_Params Parms;

	Parms.Format = Format;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLandscapeTexturePatchEncodingSettingsSettings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightEncodingSettings");

	Params::ULandscapeTexturePatch_SetHeightEncodingSettings_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTextureHeightPatchEncodingEncodingMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetHeightEncodingMode");

	Params::ULandscapeTexturePatch_SetHeightEncodingMode_Params Parms;

	Parms.EncodingMode = EncodingMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetFalloff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FalloffIn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetFalloff(float FalloffIn)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetFalloff");

	Params::ULandscapeTexturePatch_SetFalloff_Params Parms;

	Parms.FalloffIn = FalloffIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetEditVisibilityLayer
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEditVisibilityLayer                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetEditVisibilityLayer(class FName& InWeightmapLayerName, bool bEditVisibilityLayer)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetEditVisibilityLayer");

	Params::ULandscapeTexturePatch_SetEditVisibilityLayer_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.bEditVisibilityLayer = bEditVisibilityLayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.SetBlendMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTexturePatchBlendModeBlendModeIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::SetBlendMode(enum class ELandscapeTexturePatchBlendMode BlendModeIn)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "SetBlendMode");

	Params::ULandscapeTexturePatch_SetBlendMode_Params Parms;

	Parms.BlendModeIn = BlendModeIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELandscapeTextureHeightPatchEncodingEncodingMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::ResetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "ResetHeightEncodingMode");

	Params::ULandscapeTexturePatch_ResetHeightEncodingMode_Params Parms;

	Parms.EncodingMode = EncodingMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::RemoveWeightPatch(class FName& InWeightmapLayerName)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "RemoveWeightPatch");

	Params::ULandscapeTexturePatch_RemoveWeightPatch_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches
// (Native, Public, BlueprintCallable)
// Parameters:

void ULandscapeTexturePatch::RemoveAllWeightPatches()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "RemoveAllWeightPatches");

	Params::ULandscapeTexturePatch_RemoveAllWeightPatches_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.ReinitializeWeights
// (Final, Native, Protected)
// Parameters:

void ULandscapeTexturePatch::ReinitializeWeights()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "ReinitializeWeights");

	Params::ULandscapeTexturePatch_ReinitializeWeights_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.ReinitializeHeight
// (Final, Native, Protected)
// Parameters:

void ULandscapeTexturePatch::ReinitializeHeight()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "ReinitializeHeight");

	Params::ULandscapeTexturePatch_ReinitializeHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELandscapeTexturePatchSourceModeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELandscapeTexturePatchSourceMode ULandscapeTexturePatch::GetWeightPatchSourceMode(class FName& InWeightmapLayerName)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetWeightPatchSourceMode");

	Params::ULandscapeTexturePatch_GetWeightPatchSourceMode_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ULandscapeTexturePatch::GetWeightPatchRenderTarget(class FName& InWeightmapLayerName)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetWeightPatchRenderTarget");

	Params::ULandscapeTexturePatch_GetWeightPatchRenderTarget_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULandscapeTexturePatch::GetUnscaledCoverage()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetUnscaledCoverage");

	Params::ULandscapeTexturePatch_GetUnscaledCoverage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetResolution
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULandscapeTexturePatch::GetResolution()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetResolution");

	Params::ULandscapeTexturePatch_GetResolution_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform ULandscapeTexturePatch::GetPatchToWorldTransform()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetPatchToWorldTransform");

	Params::ULandscapeTexturePatch_GetPatchToWorldTransform_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetInitResolutionFromLandscape");

	Params::ULandscapeTexturePatch_GetInitResolutionFromLandscape_Params Parms;

	Parms.ResolutionMultiplier = ResolutionMultiplier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetHeightSourceMode");

	Params::ULandscapeTexturePatch_GetHeightSourceMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bMarkDirty                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ULandscapeTexturePatch::GetHeightRenderTarget(bool bMarkDirty)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetHeightRenderTarget");

	Params::ULandscapeTexturePatch_GetHeightRenderTarget_Params Parms;

	Parms.bMarkDirty = bMarkDirty;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULandscapeTexturePatch::GetFullUnscaledWorldSize()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetFullUnscaledWorldSize");

	Params::ULandscapeTexturePatch_GetFullUnscaledWorldSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> ULandscapeTexturePatch::GetAllWeightPatchLayerNames()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "GetAllWeightPatchLayerNames");

	Params::ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches
// (Native, Public, BlueprintCallable)
// Parameters:

void ULandscapeTexturePatch::DisableAllWeightPatches()
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "DisableAllWeightPatches");

	Params::ULandscapeTexturePatch_DisableAllWeightPatches_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::ClearWeightPatchBlendModeOverride(class FName& InWeightmapLayerName)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "ClearWeightPatchBlendModeOverride");

	Params::ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LandscapePatch.LandscapeTexturePatch.AddWeightPatch
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InWeightmapLayerName                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELandscapeTexturePatchSourceModeSourceMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseAlphaChannel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULandscapeTexturePatch::AddWeightPatch(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel)
{
	static auto Func = Class->GetFunction("LandscapeTexturePatch", "AddWeightPatch");

	Params::ULandscapeTexturePatch_AddWeightPatch_Params Parms;

	Parms.InWeightmapLayerName = InWeightmapLayerName;
	Parms.SourceMode = SourceMode;
	Parms.bUseAlphaChannel = bUseAlphaChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

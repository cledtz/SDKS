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


// Function MeshCosmeticsUI.FortVariantRedirectorTile.HandleBoundaryNavigation
// (Final, Native, Private)
// Parameters:
// enum class EUINavigation           InNavigation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UFortVariantRedirectorTile::HandleBoundaryNavigation(enum class EUINavigation InNavigation)
{
	static auto Func = Class->GetFunction("FortVariantRedirectorTile", "HandleBoundaryNavigation");

	Params::UFortVariantRedirectorTile_HandleBoundaryNavigation_Params Parms;

	Parms.InNavigation = InNavigation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetVariantEditorMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLockerMode                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizer::BP_SetVariantEditorMode(bool bIsLockerMode)
{
	static auto Func = Class->GetFunction("FortVariantSprayCustomizer", "BP_SetVariantEditorMode");

	Params::UFortVariantSprayCustomizer_BP_SetVariantEditorMode_Params Parms;

	Parms.bIsLockerMode = bIsLockerMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetChannelSlotIcon
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      ChannelSlotIcon                                                  (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizer::BP_SetChannelSlotIcon(TSoftObjectPtr<class UObject>& ChannelSlotIcon)
{
	static auto Func = Class->GetFunction("FortVariantSprayCustomizer", "BP_SetChannelSlotIcon");

	Params::UFortVariantSprayCustomizer_BP_SetChannelSlotIcon_Params Parms;

	Parms.ChannelSlotIcon = ChannelSlotIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MeshCosmeticsUI.FortVariantSprayCustomizerSetting.HandleSliderValueChanged
// (Final, Native, Private)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizerSetting::HandleSliderValueChanged(float NormalizedValue)
{
	static auto Func = Class->GetFunction("FortVariantSprayCustomizerSetting", "HandleSliderValueChanged");

	Params::UFortVariantSprayCustomizerSetting_HandleSliderValueChanged_Params Parms;

	Parms.NormalizedValue = NormalizedValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnSetConstraints
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFloatRange                 Constraints                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizerSetting::BP_OnSetConstraints(struct FFloatRange& Constraints)
{
	static auto Func = Class->GetFunction("FortVariantSprayCustomizerSetting", "BP_OnSetConstraints");

	Params::UFortVariantSprayCustomizerSetting_BP_OnSetConstraints_Params Parms;

	Parms.Constraints = Constraints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnChangeValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NormalizedValue                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizerSetting::BP_OnChangeValue(float Value, float NormalizedValue)
{
	static auto Func = Class->GetFunction("FortVariantSprayCustomizerSetting", "BP_OnChangeValue");

	Params::UFortVariantSprayCustomizerSetting_BP_OnChangeValue_Params Parms;

	Parms.Value = Value;
	Parms.NormalizedValue = NormalizedValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

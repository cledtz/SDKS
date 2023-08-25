#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshCosmeticsUI.FortVariantSprayCustomizerConfig
// (None)

class UClass* UFortVariantSprayCustomizerConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVariantSprayCustomizerConfig");

	return Clss;
}


// FortVariantSprayCustomizerConfig MeshCosmeticsUI.Default__FortVariantSprayCustomizerConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVariantSprayCustomizerConfig* UFortVariantSprayCustomizerConfig::GetDefaultObj()
{
	static class UFortVariantSprayCustomizerConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVariantSprayCustomizerConfig*>(UFortVariantSprayCustomizerConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmeticsUI.FortVariantRedirectorTile
// (None)

class UClass* UFortVariantRedirectorTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVariantRedirectorTile");

	return Clss;
}


// FortVariantRedirectorTile MeshCosmeticsUI.Default__FortVariantRedirectorTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVariantRedirectorTile* UFortVariantRedirectorTile::GetDefaultObj()
{
	static class UFortVariantRedirectorTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVariantRedirectorTile*>(UFortVariantRedirectorTile::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshCosmeticsUI.FortVariantRedirectorTile.HandleBoundaryNavigation
// (Final, Native, Private)
// Parameters:
// enum class EUINavigation           InNavigation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UFortVariantRedirectorTile::HandleBoundaryNavigation(enum class EUINavigation InNavigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVariantRedirectorTile", "HandleBoundaryNavigation");

	Params::UFortVariantRedirectorTile_HandleBoundaryNavigation_Params Parms{};

	Parms.InNavigation = InNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshCosmeticsUI.FortVariantRedirectorTileButton
// (None)

class UClass* UFortVariantRedirectorTileButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVariantRedirectorTileButton");

	return Clss;
}


// FortVariantRedirectorTileButton MeshCosmeticsUI.Default__FortVariantRedirectorTileButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVariantRedirectorTileButton* UFortVariantRedirectorTileButton::GetDefaultObj()
{
	static class UFortVariantRedirectorTileButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVariantRedirectorTileButton*>(UFortVariantRedirectorTileButton::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshCosmeticsUI.FortVariantSprayCustomizer
// (None)

class UClass* UFortVariantSprayCustomizer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVariantSprayCustomizer");

	return Clss;
}


// FortVariantSprayCustomizer MeshCosmeticsUI.Default__FortVariantSprayCustomizer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVariantSprayCustomizer* UFortVariantSprayCustomizer::GetDefaultObj()
{
	static class UFortVariantSprayCustomizer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVariantSprayCustomizer*>(UFortVariantSprayCustomizer::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetVariantEditorMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLockerMode                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizer::BP_SetVariantEditorMode(bool bIsLockerMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVariantSprayCustomizer", "BP_SetVariantEditorMode");

	Params::UFortVariantSprayCustomizer_BP_SetVariantEditorMode_Params Parms{};

	Parms.bIsLockerMode = bIsLockerMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetChannelSlotIcon
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      ChannelSlotIcon                                                  (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizer::BP_SetChannelSlotIcon(TSoftObjectPtr<class UObject>& ChannelSlotIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVariantSprayCustomizer", "BP_SetChannelSlotIcon");

	Params::UFortVariantSprayCustomizer_BP_SetChannelSlotIcon_Params Parms{};

	Parms.ChannelSlotIcon = ChannelSlotIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MeshCosmeticsUI.FortVariantSprayCustomizerSetting
// (None)

class UClass* UFortVariantSprayCustomizerSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVariantSprayCustomizerSetting");

	return Clss;
}


// FortVariantSprayCustomizerSetting MeshCosmeticsUI.Default__FortVariantSprayCustomizerSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVariantSprayCustomizerSetting* UFortVariantSprayCustomizerSetting::GetDefaultObj()
{
	static class UFortVariantSprayCustomizerSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVariantSprayCustomizerSetting*>(UFortVariantSprayCustomizerSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshCosmeticsUI.FortVariantSprayCustomizerSetting.HandleSliderValueChanged
// (Final, Native, Private)
// Parameters:
// float                              NormalizedValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizerSetting::HandleSliderValueChanged(float NormalizedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVariantSprayCustomizerSetting", "HandleSliderValueChanged");

	Params::UFortVariantSprayCustomizerSetting_HandleSliderValueChanged_Params Parms{};

	Parms.NormalizedValue = NormalizedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnSetConstraints
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFloatRange                 Constraints                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVariantSprayCustomizerSetting::BP_OnSetConstraints(struct FFloatRange& Constraints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVariantSprayCustomizerSetting", "BP_OnSetConstraints");

	Params::UFortVariantSprayCustomizerSetting_BP_OnSetConstraints_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVariantSprayCustomizerSetting", "BP_OnChangeValue");

	Params::UFortVariantSprayCustomizerSetting_BP_OnChangeValue_Params Parms{};

	Parms.Value = Value;
	Parms.NormalizedValue = NormalizedValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



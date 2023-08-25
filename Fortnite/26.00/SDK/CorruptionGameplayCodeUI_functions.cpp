#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
// (None)

class UClass* UFortPowerupReticleExtensionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPowerupReticleExtensionWidget");

	return Clss;
}


// FortPowerupReticleExtensionWidget CorruptionGameplayCodeUI.Default__FortPowerupReticleExtensionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPowerupReticleExtensionWidget* UFortPowerupReticleExtensionWidget::GetDefaultObj()
{
	static class UFortPowerupReticleExtensionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPowerupReticleExtensionWidget*>(UFortPowerupReticleExtensionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetOverheatingMaxValue
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPowerupReticleExtensionWidget::GetOverheatingMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetOverheatingMaxValue");

	Params::UFortPowerupReticleExtensionWidget_GetOverheatingMaxValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatValue
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPowerupReticleExtensionWidget::GetCurrentOverheatValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetCurrentOverheatValue");

	Params::UFortPowerupReticleExtensionWidget_GetCurrentOverheatValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatPercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPowerupReticleExtensionWidget::GetCurrentOverheatPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetCurrentOverheatPercent");

	Params::UFortPowerupReticleExtensionWidget_GetCurrentOverheatPercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



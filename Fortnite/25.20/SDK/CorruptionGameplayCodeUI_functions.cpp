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


// Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetOverheatingMaxValue
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPowerupReticleExtensionWidget::GetOverheatingMaxValue()
{
	static auto Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetOverheatingMaxValue");

	Params::UFortPowerupReticleExtensionWidget_GetOverheatingMaxValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatValue
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPowerupReticleExtensionWidget::GetCurrentOverheatValue()
{
	static auto Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetCurrentOverheatValue");

	Params::UFortPowerupReticleExtensionWidget_GetCurrentOverheatValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatPercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPowerupReticleExtensionWidget::GetCurrentOverheatPercent()
{
	static auto Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetCurrentOverheatPercent");

	Params::UFortPowerupReticleExtensionWidget_GetCurrentOverheatPercent_Params Parms;


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

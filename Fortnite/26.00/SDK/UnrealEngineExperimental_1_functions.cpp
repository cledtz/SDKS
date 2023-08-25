#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass UnrealEngineExperimental.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter UnrealEngineExperimental.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass UnrealEngineExperimental.Curves_editable_curve
// (None)

class UClass* UCurves_editable_curve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Curves_editable_curve");

	return Clss;
}


// Curves_editable_curve UnrealEngineExperimental.Default__Curves_editable_curve
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurves_editable_curve* UCurves_editable_curve::GetDefaultObj()
{
	static class UCurves_editable_curve* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurves_editable_curve*>(UCurves_editable_curve::StaticClass()->DefaultObject);

	return Default;
}


// Function UnrealEngineExperimental.Curves_editable_curve._L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UCurves_editable_curve::_L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Curves_editable_curve", "_L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R");

	Params::UCurves_editable_curve__L_2fUnrealEngine_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnrealEngineExperimental.Curves_editable_curve.$InitInstance
// (None)
// Parameters:

void UCurves_editable_curve::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Curves_editable_curve", "$InitInstance");

	Params::UCurves_editable_curve__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Curves_editable_curve.$Block
// (None)
// Parameters:

void UCurves_editable_curve::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Curves_editable_curve", "$Block");

	Params::UCurves_editable_curve__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Curves_editable_curve.$InitCDO
// (None)
// Parameters:

void UCurves_editable_curve::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Curves_editable_curve", "$InitCDO");

	Params::UCurves_editable_curve__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass UnrealEngineExperimental.Diagnostics
// (None)

class UClass* UDiagnostics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Diagnostics");

	return Clss;
}


// Diagnostics UnrealEngineExperimental.Default__Diagnostics
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDiagnostics* UDiagnostics::GetDefaultObj()
{
	static class UDiagnostics* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiagnostics*>(UDiagnostics::StaticClass()->DefaultObject);

	return Default;
}


// Function UnrealEngineExperimental.Diagnostics.$InitCDO
// (None)
// Parameters:

void UDiagnostics::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics", "$InitCDO");

	Params::UDiagnostics__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass UnrealEngineExperimental.Diagnostics_debug_draw
// (None)

class UClass* UDiagnostics_debug_draw::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Diagnostics_debug_draw");

	return Clss;
}


// Diagnostics_debug_draw UnrealEngineExperimental.Default__Diagnostics_debug_draw
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDiagnostics_debug_draw* UDiagnostics_debug_draw::GetDefaultObj()
{
	static class UDiagnostics_debug_draw* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiagnostics_debug_draw*>(UDiagnostics_debug_draw::StaticClass()->DefaultObject);

	return Default;
}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RShowChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RShowChannel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RShowChannel");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RShowChannel_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RHideChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RHideChannel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RHideChannel");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RHideChannel_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawSphere_L_Nvector3_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawSphere_L_Nvector3_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawSphere_L_Nvector3_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawSphere_L_Nvector3_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawPoint_L_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawPoint_L_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawPoint_L_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawPoint_L_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawLine_L_Nvector3_M_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawLine_L_Nvector3_M_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawLine_L_Nvector3_M_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawLine_L_Nvector3_M_Nvector3_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCylinder_L_Nvector3_M_Nvector3_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCylinder_L_Nvector3_M_Nvector3_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mvector3_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCylinder_L_Nvector3_M_Nvector3_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCylinder_L_Nvector3_M_Nvector3_M_N_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCone_L_Nvector3_M_Nvector3_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QNumSides_Nint_20_3d_20_2e_2e_2e_M_N_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QNumSides_Nint_20_3d_20_2e_2e_2e_M_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCone_L_Nvector3_M_Nvector3_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QNumSides_Nint_20_3d_20_2e_2e_2e_M_N_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mvector3_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QNumSides_Nint_20_3d_20_2e_2e_2e_M_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCone_L_Nvector3_M_Nvector3_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QNumSides_Nint_20_3d_20_2e_2e_2e_M_N_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCone_L_Nvector3_M_Nvector3_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QNumSides_Nint_20_3d_20_2e_2e_2e_M_N_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCapsule_L_Nvector3_M_Nrotation_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mrotation_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCapsule_L_Nvector3_M_Nrotation_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mrotation_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCapsule_L_Nvector3_M_Nrotation_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawCapsule_L_Nvector3_M_Nrotation_M_N_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_N_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawBox_L_Nvector3_M_Nrotation_M_N_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mrotation_M_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawBox_L_Nvector3_M_Nrotation_M_N_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mrotation_M_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawBox_L_Nvector3_M_Nrotation_M_N_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawBox_L_Nvector3_M_Nrotation_M_N_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawArrow_L_Nvector3_M_Nvector3_M_N_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_M_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawArrow_L_Nvector3_M_Nvector3_M_N_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(const struct FTuple_Lvector3_Mvector3_M_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawArrow_L_Nvector3_M_Nvector3_M_N_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RDrawArrow_L_Nvector3_M_Nvector3_M_N_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_N_QColor_Ncolor_20_3d_20_2e_2e_2e_M_N_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_N_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClearChannel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClearChannel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClearChannel");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClearChannel_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClear
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_debug_draw::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClear(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClear");

	Params::UDiagnostics_debug_draw__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2fdebug__draw_N_RClear_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw.$InitInstance
// (None)
// Parameters:

void UDiagnostics_debug_draw::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "$InitInstance");

	Params::UDiagnostics_debug_draw__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw.$Block
// (None)
// Parameters:

void UDiagnostics_debug_draw::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "$Block");

	Params::UDiagnostics_debug_draw__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw.$InitCDO
// (None)
// Parameters:

void UDiagnostics_debug_draw::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw", "$InitCDO");

	Params::UDiagnostics_debug_draw__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass UnrealEngineExperimental.Diagnostics_debug_draw_channel
// (None)

class UClass* UDiagnostics_debug_draw_channel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Diagnostics_debug_draw_channel");

	return Clss;
}


// Diagnostics_debug_draw_channel UnrealEngineExperimental.Default__Diagnostics_debug_draw_channel
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDiagnostics_debug_draw_channel* UDiagnostics_debug_draw_channel::GetDefaultObj()
{
	static class UDiagnostics_debug_draw_channel* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiagnostics_debug_draw_channel*>(UDiagnostics_debug_draw_channel::StaticClass()->DefaultObject);

	return Default;
}


// Function UnrealEngineExperimental.Diagnostics_debug_draw_channel.$InitInstance
// (None)
// Parameters:

void UDiagnostics_debug_draw_channel::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw_channel", "$InitInstance");

	Params::UDiagnostics_debug_draw_channel__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw_channel.$Block
// (None)
// Parameters:

void UDiagnostics_debug_draw_channel::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw_channel", "$Block");

	Params::UDiagnostics_debug_draw_channel__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Diagnostics_debug_draw_channel.$InitCDO
// (None)
// Parameters:

void UDiagnostics_debug_draw_channel::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_debug_draw_channel", "$InitCDO");

	Params::UDiagnostics_debug_draw_channel__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass UnrealEngineExperimental.Diagnostics_log
// (None)

class UClass* UDiagnostics_log::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Diagnostics_log");

	return Clss;
}


// Diagnostics_log UnrealEngineExperimental.Default__Diagnostics_log
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDiagnostics_log* UDiagnostics_log::GetDefaultObj()
{
	static class UDiagnostics_log* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiagnostics_log*>(UDiagnostics_log::StaticClass()->DefaultObject);

	return Default;
}


// Function UnrealEngineExperimental.Diagnostics_log._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FOptionalProperty_                 __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDiagnostics_log::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R(FOptionalProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_log", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_log__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_log._L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDiagnostics_log::_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R(const struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_log", "_L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R");

	Params::UDiagnostics_log__L_2fUnrealEngine_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnrealEngineExperimental.Diagnostics_log.$InitInstance
// (None)
// Parameters:

void UDiagnostics_log::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_log", "$InitInstance");

	Params::UDiagnostics_log__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Diagnostics_log.$Block
// (None)
// Parameters:

void UDiagnostics_log::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_log", "$Block");

	Params::UDiagnostics_log__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Diagnostics_log.$InitCDO
// (None)
// Parameters:

void UDiagnostics_log::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_log", "$InitCDO");

	Params::UDiagnostics_log__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass UnrealEngineExperimental.Diagnostics_log_channel
// (None)

class UClass* UDiagnostics_log_channel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Diagnostics_log_channel");

	return Clss;
}


// Diagnostics_log_channel UnrealEngineExperimental.Default__Diagnostics_log_channel
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDiagnostics_log_channel* UDiagnostics_log_channel::GetDefaultObj()
{
	static class UDiagnostics_log_channel* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiagnostics_log_channel*>(UDiagnostics_log_channel::StaticClass()->DefaultObject);

	return Default;
}


// Function UnrealEngineExperimental.Diagnostics_log_channel.$InitInstance
// (None)
// Parameters:

void UDiagnostics_log_channel::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_log_channel", "$InitInstance");

	Params::UDiagnostics_log_channel__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Diagnostics_log_channel.$Block
// (None)
// Parameters:

void UDiagnostics_log_channel::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_log_channel", "$Block");

	Params::UDiagnostics_log_channel__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UnrealEngineExperimental.Diagnostics_log_channel.$InitCDO
// (None)
// Parameters:

void UDiagnostics_log_channel::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Diagnostics_log_channel", "$InitCDO");

	Params::UDiagnostics_log_channel__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}



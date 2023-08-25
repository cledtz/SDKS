#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
// (Actor)

class UClass* UTVPostProcessBPAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TVPostProcessBPAthena_C");

	return Clss;
}


// TVPostProcessBPAthena_C TVPostProcessBPAthena.Default__TVPostProcessBPAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTVPostProcessBPAthena_C* UTVPostProcessBPAthena_C::GetDefaultObj()
{
	static class UTVPostProcessBPAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTVPostProcessBPAthena_C*>(UTVPostProcessBPAthena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTVPostProcessBPAthena_C::IsEnabledForCurrentSubgame(bool* bEnabled, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "IsEnabledForCurrentSubgame");

	Params::UTVPostProcessBPAthena_C_IsEnabledForCurrentSubgame_Params Parms{};

	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UTVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "FrontEndCameraSwitchFadeAthena__FinishedFunc");

	Params::UTVPostProcessBPAthena_C_FrontEndCameraSwitchFadeAthena__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UTVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "FrontEndCameraSwitchFadeAthena__UpdateFunc");

	Params::UTVPostProcessBPAthena_C_FrontEndCameraSwitchFadeAthena__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTVPostProcessBPAthena_C::ExecuteCameraSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "ExecuteCameraSwitch");

	Params::UTVPostProcessBPAthena_C_ExecuteCameraSwitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTVPostProcessBPAthena_C::Camera_DisableEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "Camera_DisableEffects");

	Params::UTVPostProcessBPAthena_C_Camera_DisableEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetUnpausedTimeSeconds_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTVPostProcessBPAthena_C::ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint, double CallFunc_GetUnpausedTimeSeconds_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "ExecuteUbergraph_TVPostProcessBPAthena");

	Params::UTVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUnpausedTimeSeconds_ReturnValue = CallFunc_GetUnpausedTimeSeconds_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



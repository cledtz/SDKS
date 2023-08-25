#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C
// (Actor)

class UClass* UTVPostProcessBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TVPostProcessBP_C");

	return Clss;
}


// TVPostProcessBP_C TVPostProcessBP.Default__TVPostProcessBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTVPostProcessBP_C* UTVPostProcessBP_C::GetDefaultObj()
{
	static class UTVPostProcessBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTVPostProcessBP_C*>(UTVPostProcessBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTVPostProcessBP_C::IsEnabledForCurrentSubgame(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBP_C", "IsEnabledForCurrentSubgame");

	Params::UTVPostProcessBP_C_IsEnabledForCurrentSubgame_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTVPostProcessBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBP_C", "UserConstructionScript");

	Params::UTVPostProcessBP_C_UserConstructionScript_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTVPostProcessBP_C::Camera_DisableEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DisableEffects");

	Params::UTVPostProcessBP_C_Camera_DisableEffects_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTVPostProcessBP_C::FrontEndCameraSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitch");

	Params::UTVPostProcessBP_C_FrontEndCameraSwitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTVPostProcessBP_C::ExecuteCameraSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBP_C", "ExecuteCameraSwitch");

	Params::UTVPostProcessBP_C_ExecuteCameraSwitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabledForCurrentSubgame_bEnabled                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint, bool CallFunc_IsEnabledForCurrentSubgame_bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBP_C", "ExecuteUbergraph_TVPostProcessBP");

	Params::UTVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsEnabledForCurrentSubgame_bEnabled = CallFunc_IsEnabledForCurrentSubgame_bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}

}



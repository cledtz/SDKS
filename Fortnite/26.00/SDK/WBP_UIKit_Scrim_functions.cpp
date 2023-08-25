#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UIKit_Scrim.WBP_UIKit_Scrim_C
// (None)

class UClass* UWBP_UIKit_Scrim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UIKit_Scrim_C");

	return Clss;
}


// WBP_UIKit_Scrim_C WBP_UIKit_Scrim.Default__WBP_UIKit_Scrim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UIKit_Scrim_C* UWBP_UIKit_Scrim_C::GetDefaultObj()
{
	static class UWBP_UIKit_Scrim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UIKit_Scrim_C*>(UWBP_UIKit_Scrim_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Scrim_C::FadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Scrim_C", "FadeOut");

	Params::UWBP_UIKit_Scrim_C_FadeOut_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Scrim_C::FadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Scrim_C", "FadeIn");

	Params::UWBP_UIKit_Scrim_C_FadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Scrim_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Scrim_C", "PreConstruct");

	Params::UWBP_UIKit_Scrim_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.ExecuteUbergraph_WBP_UIKit_Scrim
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBlurStrength_InStrength_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Scrim_C::ExecuteUbergraph_WBP_UIKit_Scrim(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_SetBlurStrength_InStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Scrim_C", "ExecuteUbergraph_WBP_UIKit_Scrim");

	Params::UWBP_UIKit_Scrim_C_ExecuteUbergraph_WBP_UIKit_Scrim_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetBlurStrength_InStrength_ImplicitCast = CallFunc_SetBlurStrength_InStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



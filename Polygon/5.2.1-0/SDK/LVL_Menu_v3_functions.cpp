#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LVL_Menu_v3.LVL_Menu_v3_C
// (Actor)

class UClass* ULVL_Menu_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LVL_Menu_v3_C");

	return Clss;
}


// LVL_Menu_v3_C LVL_Menu_v3.Default__LVL_Menu_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULVL_Menu_v3_C* ULVL_Menu_v3_C::GetDefaultObj()
{
	static class ULVL_Menu_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULVL_Menu_v3_C*>(ULVL_Menu_v3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LVL_Menu_v3.LVL_Menu_v3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULVL_Menu_v3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL_Menu_v3_C", "ReceiveBeginPlay");

	Params::ULVL_Menu_v3_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL_Menu_v3.LVL_Menu_v3_C.ChangeLobbyFPSLimit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULVL_Menu_v3_C::ChangeLobbyFPSLimit(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL_Menu_v3_C", "ChangeLobbyFPSLimit");

	Params::ULVL_Menu_v3_C_ChangeLobbyFPSLimit_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL_Menu_v3.LVL_Menu_v3_C.ChangeShadowQualitySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULVL_Menu_v3_C::ChangeShadowQualitySettings(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL_Menu_v3_C", "ChangeShadowQualitySettings");

	Params::ULVL_Menu_v3_C_ChangeShadowQualitySettings_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LVL_Menu_v3.LVL_Menu_v3_C.ExecuteUbergraph_LVL_Menu_v3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULVL_Menu_v3_C::ExecuteUbergraph_LVL_Menu_v3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, int32 K2Node_CustomEvent_NewValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 K2Node_CustomEvent_NewValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL_Menu_v3_C", "ExecuteUbergraph_LVL_Menu_v3");

	Params::ULVL_Menu_v3_C_ExecuteUbergraph_LVL_Menu_v3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



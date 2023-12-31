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


// Function Frontend.Frontend_C.PlaySpeech
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Filename                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              SampleRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  AssetFile                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_C::PlaySpeech(const class FString& Filename, int32 SampleRate, class USoundWave* AssetFile, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Frontend_C", "PlaySpeech");

	Params::AFrontend_C_PlaySpeech_Params Parms;

	Parms.Filename = Filename;
	Parms.SampleRate = SampleRate;
	Parms.AssetFile = AssetFile;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End = K2Node_DynamicCast_AsFort_Player_Controller_Front_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend.Frontend_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_C::OnMatchStarted()
{
	static auto Func = Class->GetFunction("Frontend_C", "OnMatchStarted");

	Params::AFrontend_C_OnMatchStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend.Frontend_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_C::EnableTutorial()
{
	static auto Func = Class->GetFunction("Frontend_C", "EnableTutorial");

	Params::AFrontend_C_EnableTutorial_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend.Frontend_C.ExecuteUbergraph_Frontend
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_C::ExecuteUbergraph_Frontend(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Frontend_C", "ExecuteUbergraph_Frontend");

	Params::AFrontend_C_ExecuteUbergraph_Frontend_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

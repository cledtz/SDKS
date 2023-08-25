#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend.Frontend_C
// (Actor)

class UClass* UFrontend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_C");

	return Clss;
}


// Frontend_C Frontend.Default__Frontend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrontend_C* UFrontend_C::GetDefaultObj()
{
	static class UFrontend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrontend_C*>(UFrontend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend.Frontend_C.PlaySpeech
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Filename                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              SampleRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  AssetFile                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontend_C::PlaySpeech(const class FString& Filename, int32 SampleRate, class USoundWave* AssetFile, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_C", "PlaySpeech");

	Params::UFrontend_C_PlaySpeech_Params Parms{};

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

void UFrontend_C::OnMatchStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_C", "OnMatchStarted");

	Params::UFrontend_C_OnMatchStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend.Frontend_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontend_C::EnableTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_C", "EnableTutorial");

	Params::UFrontend_C_EnableTutorial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend.Frontend_C.ExecuteUbergraph_Frontend
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontend_C::ExecuteUbergraph_Frontend(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_C", "ExecuteUbergraph_Frontend");

	Params::UFrontend_C_ExecuteUbergraph_Frontend_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



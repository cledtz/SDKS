#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_BG_Main.Frontend_BG_Main_C
// (Actor)

class UClass* UFrontend_BG_Main_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_BG_Main_C");

	return Clss;
}


// Frontend_BG_Main_C Frontend_BG_Main.Default__Frontend_BG_Main_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrontend_BG_Main_C* UFrontend_BG_Main_C::GetDefaultObj()
{
	static class UFrontend_BG_Main_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrontend_BG_Main_C*>(UFrontend_BG_Main_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature");

	Params::UFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature");

	Params::UFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UTexture*                    BackgroundImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");

	Params::UFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature_Params Parms{};

	Parms.BackgroundImage = BackgroundImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      PresetEnvironmentName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");

	Params::UFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature_Params Parms{};

	Parms.PresetEnvironmentName = PresetEnvironmentName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontend_BG_Main_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BG_Main_C", "ReceiveBeginPlay");

	Params::UFrontend_BG_Main_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature");

	Params::UFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFrontend_BG_Main_C::BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BG_Main_C", "BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature");

	Params::UFrontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_BG_Main.Frontend_BG_Main_C.ExecuteUbergraph_Frontend_BG_Main
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_ActorBoundEvent_BackgroundImage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ActorBoundEvent_PresetEnvironmentName                     (ZeroConstructor, HasGetValueTypeHash)

void UFrontend_BG_Main_C::ExecuteUbergraph_Frontend_BG_Main(int32 EntryPoint, class UTexture* K2Node_ActorBoundEvent_BackgroundImage, const class FString& K2Node_ActorBoundEvent_PresetEnvironmentName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BG_Main_C", "ExecuteUbergraph_Frontend_BG_Main");

	Params::UFrontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ActorBoundEvent_BackgroundImage = K2Node_ActorBoundEvent_BackgroundImage;
	Parms.K2Node_ActorBoundEvent_PresetEnvironmentName = K2Node_ActorBoundEvent_PresetEnvironmentName;

	UObject::ProcessEvent(Func, &Parms);

}

}



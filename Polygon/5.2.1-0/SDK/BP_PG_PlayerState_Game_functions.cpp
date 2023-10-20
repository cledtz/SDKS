#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PG_PlayerState_Game.BP_PG_PlayerState_Game_C
// (Actor)

class UClass* UBP_PG_PlayerState_Game_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PG_PlayerState_Game_C");

	return Clss;
}


// BP_PG_PlayerState_Game_C BP_PG_PlayerState_Game.Default__BP_PG_PlayerState_Game_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PG_PlayerState_Game_C* UBP_PG_PlayerState_Game_C::GetDefaultObj()
{
	static class UBP_PG_PlayerState_Game_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PG_PlayerState_Game_C*>(UBP_PG_PlayerState_Game_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PG_PlayerState_Game.BP_PG_PlayerState_Game_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerState_Game_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerState_Game_C", "ReceiveBeginPlay");

	Params::UBP_PG_PlayerState_Game_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerState_Game.BP_PG_PlayerState_Game_C.OnNotifyPossibilityUnlockModule_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ModuleName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PG_PlayerState_Game_C::OnNotifyPossibilityUnlockModule_Event(const class FString& ModuleName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerState_Game_C", "OnNotifyPossibilityUnlockModule_Event");

	Params::UBP_PG_PlayerState_Game_C_OnNotifyPossibilityUnlockModule_Event_Params Parms{};

	Parms.ModuleName = ModuleName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerState_Game.BP_PG_PlayerState_Game_C.ExecuteUbergraph_BP_PG_PlayerState_Game
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ModuleName                                    (ZeroConstructor, HasGetValueTypeHash)
// class UUI_Game_NotifyPossibilityUnlockModule_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerState_Game_C::ExecuteUbergraph_BP_PG_PlayerState_Game(int32 EntryPoint, const class FString& K2Node_CustomEvent_ModuleName, class UUI_Game_NotifyPossibilityUnlockModule_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerState_Game_C", "ExecuteUbergraph_BP_PG_PlayerState_Game");

	Params::UBP_PG_PlayerState_Game_C_ExecuteUbergraph_BP_PG_PlayerState_Game_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ModuleName = K2Node_CustomEvent_ModuleName;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



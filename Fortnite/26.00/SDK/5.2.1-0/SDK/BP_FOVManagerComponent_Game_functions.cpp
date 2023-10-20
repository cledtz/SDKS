#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C
// (None)

class UClass* UBP_FOVManagerComponent_Game_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FOVManagerComponent_Game_C");

	return Clss;
}


// BP_FOVManagerComponent_Game_C BP_FOVManagerComponent_Game.Default__BP_FOVManagerComponent_Game_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FOVManagerComponent_Game_C* UBP_FOVManagerComponent_Game_C::GetDefaultObj()
{
	static class UBP_FOVManagerComponent_Game_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FOVManagerComponent_Game_C*>(UBP_FOVManagerComponent_Game_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_FOVManagerComponent_Game_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FOVManagerComponent_Game_C", "ReceiveBeginPlay");

	Params::UBP_FOVManagerComponent_Game_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C.OnPossessedPawnChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FOVManagerComponent_Game_C::OnPossessedPawnChanged_Event(class UPawn* OldPawn, class UPawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FOVManagerComponent_Game_C", "OnPossessedPawnChanged_Event");

	Params::UBP_FOVManagerComponent_Game_C_OnPossessedPawnChanged_Event_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C.OnAiming_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem_Module_Optic*          OpticItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FOVManagerComponent_Game_C::OnAiming_Event(class UItem_Module_Optic* OpticItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FOVManagerComponent_Game_C", "OnAiming_Event");

	Params::UBP_FOVManagerComponent_Game_C_OnAiming_Event_Params Parms{};

	Parms.OpticItem = OpticItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C.ExecuteUbergraph_BP_FOVManagerComponent_Game
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItem_Module_Optic*          K2Node_CustomEvent_OpticItem                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTask_FOVManagerComponent_AimingInterpolation_C*CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_CustomEvent_OldPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_CustomEvent_NewPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPG_Game_Character*          K2Node_DynamicCast_AsPG_Game_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FOVManagerComponent_Game_C::ExecuteUbergraph_BP_FOVManagerComponent_Game(int32 EntryPoint, class UItem_Module_Optic* K2Node_CustomEvent_OpticItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTask_FOVManagerComponent_AimingInterpolation_C* CallFunc_CreateAction_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn, bool CallFunc_IsLocalPlayerController_ReturnValue, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FOVManagerComponent_Game_C", "ExecuteUbergraph_BP_FOVManagerComponent_Game");

	Params::UBP_FOVManagerComponent_Game_C_ExecuteUbergraph_BP_FOVManagerComponent_Game_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_OpticItem = K2Node_CustomEvent_OpticItem;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_OldPawn = K2Node_CustomEvent_OldPawn;
	Parms.K2Node_CustomEvent_NewPawn = K2Node_CustomEvent_NewPawn;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPG_Game_Character = K2Node_DynamicCast_AsPG_Game_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



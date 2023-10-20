#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SpawnProtection.UI_SpawnProtection_C
// (None)

class UClass* UUI_SpawnProtection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SpawnProtection_C");

	return Clss;
}


// UI_SpawnProtection_C UI_SpawnProtection.Default__UI_SpawnProtection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SpawnProtection_C* UUI_SpawnProtection_C::GetDefaultObj()
{
	static class UUI_SpawnProtection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SpawnProtection_C*>(UUI_SpawnProtection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SpawnProtection.UI_SpawnProtection_C.OnHealthProtection_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnProtection_C::OnHealthProtection_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnProtection_C", "OnHealthProtection_Event");

	Params::UUI_SpawnProtection_C_OnHealthProtection_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnProtection.UI_SpawnProtection_C.OnPossessedPawnChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnProtection_C::OnPossessedPawnChanged_Event(class UPawn* OldPawn, class UPawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnProtection_C", "OnPossessedPawnChanged_Event");

	Params::UUI_SpawnProtection_C_OnPossessedPawnChanged_Event_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnProtection.UI_SpawnProtection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SpawnProtection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnProtection_C", "Construct");

	Params::UUI_SpawnProtection_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnProtection.UI_SpawnProtection_C.ExecuteUbergraph_UI_SpawnProtection
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_Game_Character_C*     K2Node_DynamicCast_AsBP_PG_Game_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHealthProtection_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_CustomEvent_OldPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_CustomEvent_NewPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnProtection_C::ExecuteUbergraph_UI_SpawnProtection(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetHealthProtection_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnProtection_C", "ExecuteUbergraph_UI_SpawnProtection");

	Params::UUI_SpawnProtection_C_ExecuteUbergraph_UI_SpawnProtection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Game_Character = K2Node_DynamicCast_AsBP_PG_Game_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHealthProtection_ReturnValue = CallFunc_GetHealthProtection_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_OldPawn = K2Node_CustomEvent_OldPawn;
	Parms.K2Node_CustomEvent_NewPawn = K2Node_CustomEvent_NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}



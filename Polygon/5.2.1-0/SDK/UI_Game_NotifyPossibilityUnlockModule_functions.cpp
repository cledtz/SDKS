#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Game_NotifyPossibilityUnlockModule.UI_Game_NotifyPossibilityUnlockModule_C
// (None)

class UClass* UUI_Game_NotifyPossibilityUnlockModule_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Game_NotifyPossibilityUnlockModule_C");

	return Clss;
}


// UI_Game_NotifyPossibilityUnlockModule_C UI_Game_NotifyPossibilityUnlockModule.Default__UI_Game_NotifyPossibilityUnlockModule_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Game_NotifyPossibilityUnlockModule_C* UUI_Game_NotifyPossibilityUnlockModule_C::GetDefaultObj()
{
	static class UUI_Game_NotifyPossibilityUnlockModule_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Game_NotifyPossibilityUnlockModule_C*>(UUI_Game_NotifyPossibilityUnlockModule_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Game_NotifyPossibilityUnlockModule.UI_Game_NotifyPossibilityUnlockModule_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Game_NotifyPossibilityUnlockModule_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_NotifyPossibilityUnlockModule_C", "Construct");

	Params::UUI_Game_NotifyPossibilityUnlockModule_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_NotifyPossibilityUnlockModule.UI_Game_NotifyPossibilityUnlockModule_C.ExecuteUbergraph_UI_Game_NotifyPossibilityUnlockModule
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerState*                CallFunc_GetPlayerState_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Game*        K2Node_DynamicCast_AsPG_Player_State_Game                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_NotifyPossibilityUnlockModule_C::ExecuteUbergraph_UI_Game_NotifyPossibilityUnlockModule(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UPlayerState* CallFunc_GetPlayerState_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_NotifyPossibilityUnlockModule_C", "ExecuteUbergraph_UI_Game_NotifyPossibilityUnlockModule");

	Params::UUI_Game_NotifyPossibilityUnlockModule_C_ExecuteUbergraph_UI_Game_NotifyPossibilityUnlockModule_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetPlayerState_ReturnValue = CallFunc_GetPlayerState_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Game = K2Node_DynamicCast_AsPG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



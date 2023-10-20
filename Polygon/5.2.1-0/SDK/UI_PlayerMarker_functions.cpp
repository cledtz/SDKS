#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PlayerMarker.UI_PlayerMarker_C
// (None)

class UClass* UUI_PlayerMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PlayerMarker_C");

	return Clss;
}


// UI_PlayerMarker_C UI_PlayerMarker.Default__UI_PlayerMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PlayerMarker_C* UUI_PlayerMarker_C::GetDefaultObj()
{
	static class UUI_PlayerMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PlayerMarker_C*>(UUI_PlayerMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PlayerMarker.UI_PlayerMarker_C.SetupAsSquadMember
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_PlayerMarker_C::SetupAsSquadMember(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "SetupAsSquadMember");

	Params::UUI_PlayerMarker_C_SetupAsSquadMember_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerMarker.UI_PlayerMarker_C.SetupAsEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_PlayerMarker_C::SetupAsEnemy(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "SetupAsEnemy");

	Params::UUI_PlayerMarker_C_SetupAsEnemy_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerMarker.UI_PlayerMarker_C.SetupAsFriendly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_PlayerMarker_C::SetupAsFriendly(const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "SetupAsFriendly");

	Params::UUI_PlayerMarker_C_SetupAsFriendly_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerMarker.UI_PlayerMarker_C.SetOwnerCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          OwnerCharacter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerMarker_C::SetOwnerCharacter(class UPG_Game_Character* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "SetOwnerCharacter");

	Params::UUI_PlayerMarker_C_SetOwnerCharacter_Params Parms{};

	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerMarker.UI_PlayerMarker_C.OnSetPlayerState_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PlayerMarker_C::OnSetPlayerState_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "OnSetPlayerState_Event");

	Params::UUI_PlayerMarker_C_OnSetPlayerState_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerMarker.UI_PlayerMarker_C.OnChangeHealth_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PlayerMarker_C::OnChangeHealth_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "OnChangeHealth_Event");

	Params::UUI_PlayerMarker_C_OnChangeHealth_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerMarker.UI_PlayerMarker_C.SetActiveIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerMarker_C::SetActiveIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "SetActiveIndex");

	Params::UUI_PlayerMarker_C_SetActiveIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerMarker.UI_PlayerMarker_C.OnHealthProtection_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PlayerMarker_C::OnHealthProtection_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "OnHealthProtection_Event");

	Params::UUI_PlayerMarker_C_OnHealthProtection_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PlayerMarker.UI_PlayerMarker_C.ExecuteUbergraph_UI_PlayerMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPG_Game_Character*          K2Node_CustomEvent_OwnerCharacter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHealthProtection_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHealthProtection_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerMarker_C::ExecuteUbergraph_UI_PlayerMarker(int32 EntryPoint, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UPG_Game_Character* K2Node_CustomEvent_OwnerCharacter, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, int32 K2Node_CustomEvent_Index, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GetHealthProtection_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetHealthProtection_ReturnValue_1, int32 K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PlayerMarker_C", "ExecuteUbergraph_UI_PlayerMarker");

	Params::UUI_PlayerMarker_C_ExecuteUbergraph_UI_PlayerMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_CustomEvent_OwnerCharacter = K2Node_CustomEvent_OwnerCharacter;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetHealthProtection_ReturnValue = CallFunc_GetHealthProtection_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetHealthProtection_ReturnValue_1 = CallFunc_GetHealthProtection_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



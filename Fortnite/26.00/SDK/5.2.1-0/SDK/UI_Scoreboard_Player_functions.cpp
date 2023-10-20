#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Scoreboard_Player.UI_Scoreboard_Player_C
// (None)

class UClass* UUI_Scoreboard_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Scoreboard_Player_C");

	return Clss;
}


// UI_Scoreboard_Player_C UI_Scoreboard_Player.Default__UI_Scoreboard_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Scoreboard_Player_C* UUI_Scoreboard_Player_C::GetDefaultObj()
{
	static class UUI_Scoreboard_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Scoreboard_Player_C*>(UUI_Scoreboard_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_Scoreboard_Player_Menu_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UUI_Scoreboard_Player_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Scoreboard_Player_Menu_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "OnMouseButtonDown");

	Params::UUI_Scoreboard_Player_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewNumber                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_C::SetPlayerNumber(int32 NewNumber, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "SetPlayerNumber");

	Params::UUI_Scoreboard_Player_C_SetPlayerNumber_Params Parms{};

	Parms.NewNumber = NewNumber;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SortPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*                  GridTeam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_Scoreboard_Player_C*     L_PlayerSlot                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               L_IsSorted                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*                  L_GridTeam                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_C::SortPlayers(class UGridPanel* GridTeam, class UUI_Scoreboard_Player_C* L_PlayerSlot, bool L_IsSorted, class UGridPanel* L_GridTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "SortPlayers");

	Params::UUI_Scoreboard_Player_C_SortPlayers_Params Parms{};

	Parms.GridTeam = GridTeam;
	Parms.L_PlayerSlot = L_PlayerSlot;
	Parms.L_IsSorted = L_IsSorted;
	Parms.L_GridTeam = L_GridTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_Scoreboard_Player_C::SetPlayerName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "SetPlayerName");

	Params::UUI_Scoreboard_Player_C_SetPlayerName_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerDeaths
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_ByteToText_ReturnValue                             (None)

void UUI_Scoreboard_Player_C::SetPlayerDeaths(class FText CallFunc_Conv_ByteToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "SetPlayerDeaths");

	Params::UUI_Scoreboard_Player_C_SetPlayerDeaths_Params Parms{};

	Parms.CallFunc_Conv_ByteToText_ReturnValue = CallFunc_Conv_ByteToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetKillsOfPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_ByteToText_ReturnValue                             (None)

void UUI_Scoreboard_Player_C::SetKillsOfPlayer(class FText CallFunc_Conv_ByteToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "SetKillsOfPlayer");

	Params::UUI_Scoreboard_Player_C_SetKillsOfPlayer_Params Parms{};

	Parms.CallFunc_Conv_ByteToText_ReturnValue = CallFunc_Conv_ByteToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerGameScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetScore_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_C::SetPlayerGameScore(float CallFunc_GetScore_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Round_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "SetPlayerGameScore");

	Params::UUI_Scoreboard_Player_C_SetPlayerGameScore_Params Parms{};

	Parms.CallFunc_GetScore_ReturnValue = CallFunc_GetScore_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnLoaded_35F61F374CADE7A5EBBD56B37A053F44
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Scoreboard_Player_C::OnLoaded_35F61F374CADE7A5EBBD56B37A053F44(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "OnLoaded_35F61F374CADE7A5EBBD56B37A053F44");

	Params::UUI_Scoreboard_Player_C_OnLoaded_35F61F374CADE7A5EBBD56B37A053F44_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "Construct");

	Params::UUI_Scoreboard_Player_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnChangeNumberKills_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_C::OnChangeNumberKills_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "OnChangeNumberKills_Event");

	Params::UUI_Scoreboard_Player_C_OnChangeNumberKills_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnChangeNumberDeaths_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_C::OnChangeNumberDeaths_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "OnChangeNumberDeaths_Event");

	Params::UUI_Scoreboard_Player_C_OnChangeNumberDeaths_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnPlayerNameChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_C::OnPlayerNameChanged_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "OnPlayerNameChanged_Event");

	Params::UUI_Scoreboard_Player_C_OnPlayerNameChanged_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.SetPlayerLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_C::SetPlayerLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "SetPlayerLevel");

	Params::UUI_Scoreboard_Player_C_SetPlayerLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.OnTotalProgress_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Scoreboard_Player_C::OnTotalProgress_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "OnTotalProgress_Event");

	Params::UUI_Scoreboard_Player_C_OnTotalProgress_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Scoreboard_Player.UI_Scoreboard_Player_C.ExecuteUbergraph_UI_Scoreboard_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetCompressedPing_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Multiply_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ByteToText_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FLevelInfo                  CallFunc_GetCurrentLevelInfo_ReturnValue                         (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUI_Scoreboard_Player_C::ExecuteUbergraph_UI_Scoreboard_Player(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, uint8 CallFunc_GetCompressedPing_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, uint8 CallFunc_Multiply_ByteByte_ReturnValue, class FText CallFunc_Conv_ByteToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLevelInfo& CallFunc_GetCurrentLevelInfo_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Scoreboard_Player_C", "ExecuteUbergraph_UI_Scoreboard_Player");

	Params::UUI_Scoreboard_Player_C_ExecuteUbergraph_UI_Scoreboard_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetCompressedPing_ReturnValue = CallFunc_GetCompressedPing_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Multiply_ByteByte_ReturnValue = CallFunc_Multiply_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToText_ReturnValue = CallFunc_Conv_ByteToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetCurrentLevelInfo_ReturnValue = CallFunc_GetCurrentLevelInfo_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



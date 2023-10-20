#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C
// (Actor, PlayerController)

class UClass* UBP_PG_PlayerController_Game_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PG_PlayerController_Game_C");

	return Clss;
}


// BP_PG_PlayerController_Game_C BP_PG_PlayerController_Game.Default__BP_PG_PlayerController_Game_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PG_PlayerController_Game_C* UBP_PG_PlayerController_Game_C::GetDefaultObj()
{
	static class UBP_PG_PlayerController_Game_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PG_PlayerController_Game_C*>(UBP_PG_PlayerController_Game_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::Reset(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "Reset");

	Params::UBP_PG_PlayerController_Game_C_Reset_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.ToggleVisibilityInterface
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceVisible                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               L_Visible                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_TeamBaseMarker_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUI_TeamBaseMarker_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_ControlPointMarker_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// class UUI_ControlPointMarker_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_PlayerMarker_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// class UUI_PlayerMarker_C*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::ToggleVisibilityInterface(bool ForceVisible, bool L_Visible, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, enum class ESlateVisibility Temp_byte_Variable_8, TArray<class UUI_TeamBaseMarker_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_TeamBaseMarker_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_9, TArray<class UUI_ControlPointMarker_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UUI_ControlPointMarker_C* CallFunc_Array_Get_Item_1, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, bool Temp_bool_Variable_4, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUI_PlayerMarker_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UUI_PlayerMarker_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "ToggleVisibilityInterface");

	Params::UBP_PG_PlayerController_Game_C_ToggleVisibilityInterface_Params Parms{};

	Parms.ForceVisible = ForceVisible;
	Parms.L_Visible = L_Visible;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "UserConstructionScript");

	Params::UBP_PG_PlayerController_Game_C_UserConstructionScript_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "InpActEvt_Escape_K2Node_InputKeyEvent_2");

	Params::UBP_PG_PlayerController_Game_C_InpActEvt_Escape_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "InpActEvt_Scoreboard_K2Node_InputActionEvent_4");

	Params::UBP_PG_PlayerController_Game_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "InpActEvt_Scoreboard_K2Node_InputActionEvent_3");

	Params::UBP_PG_PlayerController_Game_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_ChatAll_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::InpActEvt_ChatAll_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "InpActEvt_ChatAll_K2Node_InputActionEvent_2");

	Params::UBP_PG_PlayerController_Game_C_InpActEvt_ChatAll_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_ChatTeam_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::InpActEvt_ChatTeam_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "InpActEvt_ChatTeam_K2Node_InputActionEvent_1");

	Params::UBP_PG_PlayerController_Game_C_InpActEvt_ChatTeam_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_HideInterface_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::InpActEvt_HideInterface_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "InpActEvt_HideInterface_K2Node_InputActionEvent_0");

	Params::UBP_PG_PlayerController_Game_C_InpActEvt_HideInterface_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_N_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::InpActEvt_N_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "InpActEvt_N_K2Node_InputKeyEvent_1");

	Params::UBP_PG_PlayerController_Game_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_0");

	Params::UBP_PG_PlayerController_Game_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.SetPlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::SetPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "SetPlayerState");

	Params::UBP_PG_PlayerController_Game_C_SetPlayerState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OnAddedGameScore_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FScoreInfoBlueprint> ScoreInfos                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PG_PlayerController_Game_C::OnAddedGameScore_Event(TArray<struct FScoreInfoBlueprint>& ScoreInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "OnAddedGameScore_Event");

	Params::UBP_PG_PlayerController_Game_C_OnAddedGameScore_Event_Params Parms{};

	Parms.ScoreInfos = ScoreInfos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OpenScoreboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::OpenScoreboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "OpenScoreboard");

	Params::UBP_PG_PlayerController_Game_C_OpenScoreboard_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.CloseScoreboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::CloseScoreboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "CloseScoreboard");

	Params::UBP_PG_PlayerController_Game_C_CloseScoreboard_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "ReceiveBeginPlay");

	Params::UBP_PG_PlayerController_Game_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.DisplayMessageToChatEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameChatMessage            Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PG_PlayerController_Game_C::DisplayMessageToChatEvent(const struct FGameChatMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "DisplayMessageToChatEvent");

	Params::UBP_PG_PlayerController_Game_C_DisplayMessageToChatEvent_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.StartInteractionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InteractionTime                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::StartInteractionEvent(float InteractionTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "StartInteractionEvent");

	Params::UBP_PG_PlayerController_Game_C_StartInteractionEvent_Params Parms{};

	Parms.InteractionTime = InteractionTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.StopInteractionEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::StopInteractionEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "StopInteractionEvent");

	Params::UBP_PG_PlayerController_Game_C_StopInteractionEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OnPossessedPawnChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::OnPossessedPawnChanged_Event(class UPawn* OldPawn, class UPawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "OnPossessedPawnChanged_Event");

	Params::UBP_PG_PlayerController_Game_C_OnPossessedPawnChanged_Event_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OnClientReset_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::OnClientReset_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "OnClientReset_Event");

	Params::UBP_PG_PlayerController_Game_C_OnClientReset_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.NotifyPossibilityUnlockModule
// (BlueprintEvent)
// Parameters:
// class UItem_Gun_General*           Gun                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::NotifyPossibilityUnlockModule(class UItem_Gun_General* Gun)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "NotifyPossibilityUnlockModule");

	Params::UBP_PG_PlayerController_Game_C_NotifyPossibilityUnlockModule_Params Parms{};

	Parms.Gun = Gun;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OnIsAlive_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::OnIsAlive_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "OnIsAlive_Event");

	Params::UBP_PG_PlayerController_Game_C_OnIsAlive_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.OnSetCharacterHiddenInGame_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_PlayerController_Game_C::OnSetCharacterHiddenInGame_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "OnSetCharacterHiddenInGame_Event");

	Params::UBP_PG_PlayerController_Game_C_OnSetCharacterHiddenInGame_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_PlayerController_Game.BP_PG_PlayerController_Game_C.ExecuteUbergraph_BP_PG_PlayerController_Game
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// class UUI_GeneralGameScreen_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FScoreInfoBlueprint> K2Node_CustomEvent_ScoreInfos                                    (ConstParm, ReferenceParm)
// class UPG_PlayerState_Game*        K2Node_DynamicCast_AsPG_Player_State_Game                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FScoreInfoBlueprint         CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_InteractionTime_C*       CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameChatMessage            K2Node_Event_message                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_interactionTime                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WithEditor_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class UPawn*                       K2Node_CustomEvent_OldPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       K2Node_CustomEvent_NewPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UItem_Gun_General*           K2Node_Event_gun                                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_Game_Character_C*     K2Node_DynamicCast_AsBP_PG_Game_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_Game_Character_C*     K2Node_DynamicCast_AsBP_PG_Game_Character_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDoublePropertyByName_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_PlayerController_Game_C::ExecuteUbergraph_BP_PG_PlayerController_Game(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_3, class UUI_GeneralGameScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FScoreInfoBlueprint>& K2Node_CustomEvent_ScoreInfos, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, const struct FScoreInfoBlueprint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FKey& K2Node_InputActionEvent_Key_4, bool CallFunc_IsValid_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UUI_InteractionTime_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameChatMessage& K2Node_Event_message, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Event_interactionTime, bool CallFunc_WithEditor_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn, class UItem_Gun_General* K2Node_Event_gun, class UPawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_IsValid_ReturnValue_6, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character_1, bool K2Node_DynamicCast_bSuccess_2, int32 K2Node_Select_Default, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPawn* CallFunc_K2_GetPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_PlayerController_Game_C", "ExecuteUbergraph_BP_PG_PlayerController_Game");

	Params::UBP_PG_PlayerController_Game_C_ExecuteUbergraph_BP_PG_PlayerController_Game_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_ScoreInfos = K2Node_CustomEvent_ScoreInfos;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Game = K2Node_DynamicCast_AsPG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_message = K2Node_Event_message;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_interactionTime = K2Node_Event_interactionTime;
	Parms.CallFunc_WithEditor_ReturnValue = CallFunc_WithEditor_ReturnValue;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_CustomEvent_OldPawn = K2Node_CustomEvent_OldPawn;
	Parms.K2Node_CustomEvent_NewPawn = K2Node_CustomEvent_NewPawn;
	Parms.K2Node_Event_gun = K2Node_Event_gun;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Game_Character = K2Node_DynamicCast_AsBP_PG_Game_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Game_Character_1 = K2Node_DynamicCast_AsBP_PG_Game_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_SetDoublePropertyByName_Value_ImplicitCast = CallFunc_SetDoublePropertyByName_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



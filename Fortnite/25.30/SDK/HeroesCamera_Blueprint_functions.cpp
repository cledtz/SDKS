#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetHeroPlayerPawnByIndex_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::HandleMousePress(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "HandleMousePress");

	Params::UHeroesCamera_Blueprint_C_HandleMousePress_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHeroPlayerPawnByIndex_ReturnValue = CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMouseRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeroesCamera_Blueprint_C::HandleMouseRelease()
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "HandleMouseRelease");

	Params::UHeroesCamera_Blueprint_C_HandleMouseRelease_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::UHeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::UHeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");

	Params::UHeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");

	Params::UHeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::BP_OnActivated(class UFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "BP_OnActivated");

	Params::UHeroesCamera_Blueprint_C_BP_OnActivated_Params Parms;

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::BP_OnDeactivated(class UFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "BP_OnDeactivated");

	Params::UHeroesCamera_Blueprint_C_BP_OnDeactivated_Params Parms;

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "ReceiveTick");

	Params::UHeroesCamera_Blueprint_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UFortTimeOfDayManagerInterface>CallFunc_GetContextualTimeOfDayManager_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_Event_PlayerController_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_Event_PlayerController                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaX                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaY                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroesCamera_Blueprint_C::ExecuteUbergraph_HeroesCamera_Blueprint(int32 EntryPoint, TScriptInterface<class UFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, const struct FKey& K2Node_InputKeyEvent_Key_2, class UFortPlayerController* K2Node_Event_PlayerController_1, class UFortPlayerController* K2Node_Event_PlayerController, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_3, float K2Node_Event_DeltaSeconds, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, double CallFunc_Multiply_DoubleDouble_ReturnValue, TArray<class UTVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue, class UTVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static auto Func = Class->GetFunction("HeroesCamera_Blueprint_C", "ExecuteUbergraph_HeroesCamera_Blueprint");

	Params::UHeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContextualTimeOfDayManager_ReturnValue = CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.K2Node_Event_PlayerController_1 = K2Node_Event_PlayerController_1;
	Parms.K2Node_Event_PlayerController = K2Node_Event_PlayerController;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetInputMouseDelta_DeltaX = CallFunc_GetInputMouseDelta_DeltaX;
	Parms.CallFunc_GetInputMouseDelta_DeltaY = CallFunc_GetInputMouseDelta_DeltaY;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

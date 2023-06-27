#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void URebootCardIndicator_C::bp_UpdateCountdownText(double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("RebootCardIndicator_C", "bp_UpdateCountdownText");

	Params::URebootCardIndicator_C_bp_UpdateCountdownText_Params Parms;

	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              StartTimeLocalWorld                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EndTimeLocalWorld                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URebootCardIndicator_C::SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld)
{
	static auto Func = Class->GetFunction("RebootCardIndicator_C", "SetupCountdown");

	Params::URebootCardIndicator_C_SetupCountdown_Params Parms;

	Parms.StartTimeLocalWorld = StartTimeLocalWorld;
	Parms.EndTimeLocalWorld = EndTimeLocalWorld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URebootCardIndicator_C::UpdateCountdownText()
{
	static auto Func = Class->GetFunction("RebootCardIndicator_C", "UpdateCountdownText");

	Params::URebootCardIndicator_C_UpdateCountdownText_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSelf                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URebootCardIndicator_C::HandleDisplayForSelf(bool bSelf)
{
	static auto Func = Class->GetFunction("RebootCardIndicator_C", "HandleDisplayForSelf");

	Params::URebootCardIndicator_C_HandleDisplayForSelf_Params Parms;

	Parms.bSelf = bSelf;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartTimeLocalWorld                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_EndTimeLocalWorld                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelf                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurTime_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_EndTime_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URebootCardIndicator_C::ExecuteUbergraph_RebootCardIndicator(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, double Temp_real_Variable, bool Temp_bool_Variable, float K2Node_Event_StartTimeLocalWorld, float K2Node_Event_EndTimeLocalWorld, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool K2Node_Event_bSelf, enum class ESlateVisibility Temp_byte_Variable_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double K2Node_VariableSet_CurTime_ImplicitCast, double K2Node_VariableSet_EndTime_ImplicitCast)
{
	static auto Func = Class->GetFunction("RebootCardIndicator_C", "ExecuteUbergraph_RebootCardIndicator");

	Params::URebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_StartTimeLocalWorld = K2Node_Event_StartTimeLocalWorld;
	Parms.K2Node_Event_EndTimeLocalWorld = K2Node_Event_EndTimeLocalWorld;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_bSelf = K2Node_Event_bSelf;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_VariableSet_CurTime_ImplicitCast = K2Node_VariableSet_CurTime_ImplicitCast;
	Parms.K2Node_VariableSet_EndTime_ImplicitCast = K2Node_VariableSet_EndTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

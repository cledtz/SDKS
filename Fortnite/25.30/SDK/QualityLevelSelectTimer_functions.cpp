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


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.UpdateTextScale
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectTimer_C::UpdateTextScale(double TimeRemaining, bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_DoubleDouble_ReturnValue)
{
	static auto Func = Class->GetFunction("QualityLevelSelectTimer_C", "UpdateTextScale");

	Params::UQualityLevelSelectTimer_C_UpdateTextScale_Params Parms;

	Parms.TimeRemaining = TimeRemaining;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectTimer_C::OnProgressStarted(float Duration)
{
	static auto Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnProgressStarted");

	Params::UQualityLevelSelectTimer_C_OnProgressStarted_Params Parms;

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UQualityLevelSelectTimer_C::OnProgressEnded()
{
	static auto Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnProgressEnded");

	Params::UQualityLevelSelectTimer_C_OnProgressEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnTimeRemainingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TimeRemaining                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectTimer_C::OnTimeRemainingChanged(float TimeRemaining)
{
	static auto Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnTimeRemainingChanged");

	Params::UQualityLevelSelectTimer_C_OnTimeRemainingChanged_Params Parms;

	Parms.TimeRemaining = TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQualityLevelSelectTimer_C::OnInitialized()
{
	static auto Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnInitialized");

	Params::UQualityLevelSelectTimer_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QualityLevelSelectTimer.QualityLevelSelectTimer_C.ExecuteUbergraph_QualityLevelSelectTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Duration                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TimeRemaining                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQualityLevelSelectTimer_C::ExecuteUbergraph_QualityLevelSelectTimer(int32 EntryPoint, float K2Node_Event_Duration, float K2Node_Event_TimeRemaining, double CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast, double CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("QualityLevelSelectTimer_C", "ExecuteUbergraph_QualityLevelSelectTimer");

	Params::UQualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Duration = K2Node_Event_Duration;
	Parms.K2Node_Event_TimeRemaining = K2Node_Event_TimeRemaining;
	Parms.CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast = CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast;
	Parms.CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1 = CallFunc_UpdateTextScale_TimeRemaining_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

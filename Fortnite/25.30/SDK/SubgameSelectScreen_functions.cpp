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


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "IsMinorShutdownWarningEnabled");

	Params::USubgameSelectScreen_C_IsMinorShutdownWarningEnabled_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMatchmakingLocal_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USubgameSelectScreen_C::IsBusyMatchmaking(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "IsBusyMatchmaking");

	Params::USubgameSelectScreen_C_IsBusyMatchmaking_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMatchmakingLocal_ReturnValue = CallFunc_IsMatchmakingLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextTextureIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTextureIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::AdvanceTextureCycle(int32 NextTextureIndex, int32 CurrentTextureIndex, int32 CallFunc_Array_Length_ReturnValue, class UTexture* CallFunc_Array_Get_Item, class UTexture* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "AdvanceTextureCycle");

	Params::USubgameSelectScreen_C_AdvanceTextureCycle_Params Parms;

	Parms.NextTextureIndex = NextTextureIndex;
	Parms.CurrentTextureIndex = CurrentTextureIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::InitializeTextureCycle(class UTexture* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UTexture* CallFunc_Array_Get_Item_1)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "InitializeTextureCycle");

	Params::USubgameSelectScreen_C_InitializeTextureCycle_Params Parms;

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventEnded_57187EC14A536D0960088EB25BDF39E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::OnEventEnded_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnEventEnded_57187EC14A536D0960088EB25BDF39E5");

	Params::USubgameSelectScreen_C_OnEventEnded_57187EC14A536D0960088EB25BDF39E5_Params Parms;

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventUpdated_57187EC14A536D0960088EB25BDF39E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::OnEventUpdated_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnEventUpdated_57187EC14A536D0960088EB25BDF39E5");

	Params::USubgameSelectScreen_C_OnEventUpdated_57187EC14A536D0960088EB25BDF39E5_Params Parms;

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventActive_57187EC14A536D0960088EB25BDF39E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::OnEventActive_57187EC14A536D0960088EB25BDF39E5(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnEventActive_57187EC14A536D0960088EB25BDF39E5");

	Params::USubgameSelectScreen_C_OnEventActive_57187EC14A536D0960088EB25BDF39E5_Params Parms;

	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BP_OnActivated");

	Params::USubgameSelectScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName_2                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName_1                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class UFortAsyncAction_CalendarEventWatcher*CallFunc_WatchCalendarEvent_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName_2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_2, float K2Node_CustomEvent_TimeSpanRatio_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName_1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_1, float K2Node_CustomEvent_TimeSpanRatio_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, float K2Node_CustomEvent_TimeSpanRatio, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float Temp_real_Variable, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable_1, const class FString& Temp_string_Variable, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ExecuteUbergraph_SubgameSelectScreen");

	Params::USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventName_2 = K2Node_CustomEvent_EventName_2;
	Parms.K2Node_CustomEvent_TimeUntilEnd_2 = K2Node_CustomEvent_TimeUntilEnd_2;
	Parms.K2Node_CustomEvent_TimeSinceBegin_2 = K2Node_CustomEvent_TimeSinceBegin_2;
	Parms.K2Node_CustomEvent_TimeSpanRatio_2 = K2Node_CustomEvent_TimeSpanRatio_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventName_1 = K2Node_CustomEvent_EventName_1;
	Parms.K2Node_CustomEvent_TimeUntilEnd_1 = K2Node_CustomEvent_TimeUntilEnd_1;
	Parms.K2Node_CustomEvent_TimeSinceBegin_1 = K2Node_CustomEvent_TimeSinceBegin_1;
	Parms.K2Node_CustomEvent_TimeSpanRatio_1 = K2Node_CustomEvent_TimeSpanRatio_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_TimeUntilEnd = K2Node_CustomEvent_TimeUntilEnd;
	Parms.K2Node_CustomEvent_TimeSinceBegin = K2Node_CustomEvent_TimeSinceBegin;
	Parms.K2Node_CustomEvent_TimeSpanRatio = K2Node_CustomEvent_TimeSpanRatio;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_WatchCalendarEvent_ReturnValue = CallFunc_WatchCalendarEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

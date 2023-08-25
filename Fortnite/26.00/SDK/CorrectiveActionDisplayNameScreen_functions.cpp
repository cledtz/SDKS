#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C
// (None)

class UClass* UCorrectiveActionDisplayNameScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CorrectiveActionDisplayNameScreen_C");

	return Clss;
}


// CorrectiveActionDisplayNameScreen_C CorrectiveActionDisplayNameScreen.Default__CorrectiveActionDisplayNameScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCorrectiveActionDisplayNameScreen_C* UCorrectiveActionDisplayNameScreen_C::GetDefaultObj()
{
	static class UCorrectiveActionDisplayNameScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCorrectiveActionDisplayNameScreen_C*>(UCorrectiveActionDisplayNameScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowFailureReason
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        FailureReason                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCorrectiveActionDisplayNameScreen_C::OnShowFailureReason(class FText& FailureReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorrectiveActionDisplayNameScreen_C", "OnShowFailureReason");

	Params::UCorrectiveActionDisplayNameScreen_C_OnShowFailureReason_Params Parms{};

	Parms.FailureReason = FailureReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowCorrectiveActionProcessing
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowProcessing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrectiveActionDisplayNameScreen_C::OnShowCorrectiveActionProcessing(bool bShowProcessing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorrectiveActionDisplayNameScreen_C", "OnShowCorrectiveActionProcessing");

	Params::UCorrectiveActionDisplayNameScreen_C_OnShowCorrectiveActionProcessing_Params Parms{};

	Parms.bShowProcessing = bShowProcessing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowDisplayNameDownloading
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowDownloading                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrectiveActionDisplayNameScreen_C::OnShowDisplayNameDownloading(bool bShowDownloading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorrectiveActionDisplayNameScreen_C", "OnShowDisplayNameDownloading");

	Params::UCorrectiveActionDisplayNameScreen_C_OnShowDisplayNameDownloading_Params Parms{};

	Parms.bShowDownloading = bShowDownloading;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.ExecuteUbergraph_CorrectiveActionDisplayNameScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_FailureReason                                       (ConstParm)
// bool                               K2Node_Event_bShowProcessing                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowDownloading                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCorrectiveActionDisplayNameScreen_C::ExecuteUbergraph_CorrectiveActionDisplayNameScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText K2Node_Event_FailureReason, bool K2Node_Event_bShowProcessing, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_bShowDownloading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorrectiveActionDisplayNameScreen_C", "ExecuteUbergraph_CorrectiveActionDisplayNameScreen");

	Params::UCorrectiveActionDisplayNameScreen_C_ExecuteUbergraph_CorrectiveActionDisplayNameScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_FailureReason = K2Node_Event_FailureReason;
	Parms.K2Node_Event_bShowProcessing = K2Node_Event_bShowProcessing;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bShowDownloading = K2Node_Event_bShowDownloading;

	UObject::ProcessEvent(Func, &Parms);

}

}



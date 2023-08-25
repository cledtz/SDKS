#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// (None)

class UClass* UWB_AudioAnalysis_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_AudioAnalysis_UI_C");

	return Clss;
}


// WB_AudioAnalysis_UI_C WB_AudioAnalysis_UI.Default__WB_AudioAnalysis_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_AudioAnalysis_UI_C* UWB_AudioAnalysis_UI_C::GetDefaultObj()
{
	static class UWB_AudioAnalysis_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_AudioAnalysis_UI_C*>(UWB_AudioAnalysis_UI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddScalarParameter
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAudioAnalysisParameterScalarParam                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_AudioAnalysis_UI_C::AddScalarParameter(struct FAudioAnalysisParameterScalar& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "AddScalarParameter");

	Params::UWB_AudioAnalysis_UI_C_AddScalarParameter_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddVectorParameter
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAudioAnalysisParameterVectorParam                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWB_AudioAnalysis_UI_C::AddVectorParameter(struct FAudioAnalysisParameterVector& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "AddVectorParameter");

	Params::UWB_AudioAnalysis_UI_C_AddVectorParameter_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ClearParameters
// (Event, Public, BlueprintEvent)
// Parameters:

void UWB_AudioAnalysis_UI_C::ClearParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "ClearParameters");

	Params::UWB_AudioAnalysis_UI_C_ClearParameters_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioAnalysisParameterScalarK2Node_Event_Param_1                                             (ConstParm)
// class UWB_AudioAnalysis_FloatGraph_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioAnalysisParameterVectorK2Node_Event_Param                                               (ConstParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_AudioAnalysis_FloatGraph_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWB_AudioAnalysis_FloatGraph_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_AudioAnalysis_UI_C::ExecuteUbergraph_WB_AudioAnalysis_UI(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FAudioAnalysisParameterScalar& K2Node_Event_Param_1, class UWB_AudioAnalysis_FloatGraph_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FAudioAnalysisParameterVector& K2Node_Event_Param, bool CallFunc_Less_IntInt_ReturnValue, class UWB_AudioAnalysis_FloatGraph_C* CallFunc_Create_ReturnValue, class UWB_AudioAnalysis_FloatGraph_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "ExecuteUbergraph_WB_AudioAnalysis_UI");

	Params::UWB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_Param_1 = K2Node_Event_Param_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_Param = K2Node_Event_Param;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



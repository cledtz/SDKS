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


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.WrapString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Prepend                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Append                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UB_PhysicsTree_Reporter_C::WrapString(const class FString& Prepend, const class FString& String, const class FString& Append, class FString* Result, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "WrapString");

	Params::UB_PhysicsTree_Reporter_C_WrapString_Params Parms;

	Parms.Prepend = Prepend;
	Parms.String = String;
	Parms.Append = Append;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportTreeAnalytics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              InstanceRowArray                                                 (Edit, BlueprintVisible)
// TArray<class FString>              TempStringArray                                                  (Edit, BlueprintVisible)
// class FString                      TempString                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFortAnalyticsEventAttribute>AttributeArray                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_WrapString_Result                                       (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue                 ()
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_JoinStringArray_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_WrapString_Result_1                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_4                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_5                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_GetGameSessionID_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue_1               ()
// class FString                      CallFunc_WrapString_Result_2                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPlaylistName_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue_2               ()
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicsTree_Reporter_C::ReportTreeAnalytics(const TArray<class FString>& InstanceRowArray, const TArray<class FString>& TempStringArray, const class FString& TempString, const TArray<struct FFortAnalyticsEventAttribute>& AttributeArray, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, const class FString& CallFunc_WrapString_Result, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue_1, const class FString& CallFunc_WrapString_Result_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FPhysicsLogAnalyticsStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_GetGameSessionID_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue_1, const class FString& CallFunc_WrapString_Result_2, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_GetCurrentPlaylistName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_4, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "ReportTreeAnalytics");

	Params::UB_PhysicsTree_Reporter_C_ReportTreeAnalytics_Params Parms;

	Parms.InstanceRowArray = InstanceRowArray;
	Parms.TempStringArray = TempStringArray;
	Parms.TempString = TempString;
	Parms.AttributeArray = AttributeArray;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.CallFunc_WrapString_Result = CallFunc_WrapString_Result;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue = CallFunc_ConstructAnalyticsAttribute_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue_1 = CallFunc_JoinStringArray_ReturnValue_1;
	Parms.CallFunc_WrapString_Result_1 = CallFunc_WrapString_Result_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_3 = CallFunc_Conv_DoubleToString_ReturnValue_3;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_4 = CallFunc_Conv_DoubleToString_ReturnValue_4;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_5 = CallFunc_Conv_DoubleToString_ReturnValue_5;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_1 = CallFunc_Conv_VectorToString_ReturnValue_1;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameSessionID_ReturnValue = CallFunc_GetGameSessionID_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue_1 = CallFunc_ConstructAnalyticsAttribute_ReturnValue_1;
	Parms.CallFunc_WrapString_Result_2 = CallFunc_WrapString_Result_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetGameStateAthena_ReturnValue_1 = CallFunc_GetGameStateAthena_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentPlaylistName_ReturnValue = CallFunc_GetCurrentPlaylistName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue_2 = CallFunc_ConstructAnalyticsAttribute_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.GetLogDataByInstanceName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      InstanceName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  Data                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicsTree_Reporter_C::GetLogDataByInstanceName(const class FString& InstanceName, struct FPhysicsLogAnalyticsStruct* Data, int32* Index, bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FPhysicsLogAnalyticsStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "GetLogDataByInstanceName");

	Params::UB_PhysicsTree_Reporter_C_GetLogDataByInstanceName_Params Parms;

	Parms.InstanceName = InstanceName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportDamageInflicted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InstanceName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPhysicsLogAnalytics_DamageCategoryDamageCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     DamageCounts                                                     (Edit, BlueprintVisible)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  CallFunc_GetLogDataByInstanceName_Data                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLogDataByInstanceName_Index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLogDataByInstanceName_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  K2Node_MakeStruct_PhysicsLogAnalyticsStruct                      (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_2_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Option_3_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicsTree_Reporter_C::ReportDamageInflicted(const class FString& InstanceName, enum class EPhysicsLogAnalytics_DamageCategory DamageCategory, double Amount, const TArray<double>& DamageCounts, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FPhysicsLogAnalyticsStruct& CallFunc_GetLogDataByInstanceName_Data, int32 CallFunc_GetLogDataByInstanceName_Index, bool CallFunc_GetLogDataByInstanceName_Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<double>& K2Node_MakeArray_Array, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Array_Get_Item_1, double CallFunc_Array_Get_Item_2, double CallFunc_Array_Get_Item_3, double CallFunc_Array_Get_Item_4, double CallFunc_Array_Get_Item_5, double CallFunc_Array_Get_Item_6, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct, double CallFunc_Array_Get_Item_7, double CallFunc_Array_Get_Item_8, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1, int32 Temp_int_Variable, int32 CallFunc_Array_Add_ReturnValue, double K2Node_Select_Default, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_Option_0_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, double K2Node_Select_Option_2_ImplicitCast, double K2Node_Select_Option_3_ImplicitCast, float K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast, float K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1, float K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast, float K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast, float K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast, float K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1, float K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1, float K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "ReportDamageInflicted");

	Params::UB_PhysicsTree_Reporter_C_ReportDamageInflicted_Params Parms;

	Parms.InstanceName = InstanceName;
	Parms.DamageCategory = DamageCategory;
	Parms.Amount = Amount;
	Parms.DamageCounts = DamageCounts;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetLogDataByInstanceName_Data = CallFunc_GetLogDataByInstanceName_Data;
	Parms.CallFunc_GetLogDataByInstanceName_Index = CallFunc_GetLogDataByInstanceName_Index;
	Parms.CallFunc_GetLogDataByInstanceName_Success = CallFunc_GetLogDataByInstanceName_Success;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.K2Node_MakeStruct_PhysicsLogAnalyticsStruct = K2Node_MakeStruct_PhysicsLogAnalyticsStruct;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1 = K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_2_ImplicitCast = K2Node_Select_Option_2_ImplicitCast;
	Parms.K2Node_Select_Option_3_ImplicitCast = K2Node_Select_Option_3_ImplicitCast;
	Parms.K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast = K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast;
	Parms.K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1 = K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1;
	Parms.K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast = K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast;
	Parms.K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast = K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast;
	Parms.K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast = K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast;
	Parms.K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1 = K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1;
	Parms.K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1 = K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1;
	Parms.K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1 = K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportLogDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Instance_Name                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  CallFunc_GetLogDataByInstanceName_Data                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLogDataByInstanceName_Index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLogDataByInstanceName_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMatchTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  K2Node_MakeStruct_PhysicsLogAnalyticsStruct                      (ZeroConstructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMatchTime_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicsTree_Reporter_C::ReportLogDestroyed(const class FString& Instance_Name, const struct FVector& Location, const struct FPhysicsLogAnalyticsStruct& CallFunc_GetLogDataByInstanceName_Data, int32 CallFunc_GetLogDataByInstanceName_Index, bool CallFunc_GetLogDataByInstanceName_Success, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, float CallFunc_GetMatchTime_ReturnValue, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue_1, float CallFunc_GetMatchTime_ReturnValue_1, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "ReportLogDestroyed");

	Params::UB_PhysicsTree_Reporter_C_ReportLogDestroyed_Params Parms;

	Parms.Instance_Name = Instance_Name;
	Parms.Location = Location;
	Parms.CallFunc_GetLogDataByInstanceName_Data = CallFunc_GetLogDataByInstanceName_Data;
	Parms.CallFunc_GetLogDataByInstanceName_Index = CallFunc_GetLogDataByInstanceName_Index;
	Parms.CallFunc_GetLogDataByInstanceName_Success = CallFunc_GetLogDataByInstanceName_Success;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.CallFunc_GetMatchTime_ReturnValue = CallFunc_GetMatchTime_ReturnValue;
	Parms.K2Node_MakeStruct_PhysicsLogAnalyticsStruct = K2Node_MakeStruct_PhysicsLogAnalyticsStruct;
	Parms.CallFunc_GetGameStateAthena_ReturnValue_1 = CallFunc_GetGameStateAthena_ReturnValue_1;
	Parms.CallFunc_GetMatchTime_ReturnValue_1 = CallFunc_GetMatchTime_ReturnValue_1;
	Parms.K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1 = K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportLogFelled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Instance_Name                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Felled_By                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  CallFunc_GetLogDataByInstanceName_Data                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLogDataByInstanceName_Index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLogDataByInstanceName_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMatchTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  K2Node_MakeStruct_PhysicsLogAnalyticsStruct                      (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetMatchTime_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhysicsLogAnalyticsStruct  K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicsTree_Reporter_C::ReportLogFelled(const class FString& Instance_Name, const class FString& Felled_By, const struct FVector& Location, const struct FPhysicsLogAnalyticsStruct& CallFunc_GetLogDataByInstanceName_Data, int32 CallFunc_GetLogDataByInstanceName_Index, bool CallFunc_GetLogDataByInstanceName_Success, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, float CallFunc_GetMatchTime_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue_1, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct, float CallFunc_GetMatchTime_ReturnValue_1, const struct FPhysicsLogAnalyticsStruct& K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "ReportLogFelled");

	Params::UB_PhysicsTree_Reporter_C_ReportLogFelled_Params Parms;

	Parms.Instance_Name = Instance_Name;
	Parms.Felled_By = Felled_By;
	Parms.Location = Location;
	Parms.CallFunc_GetLogDataByInstanceName_Data = CallFunc_GetLogDataByInstanceName_Data;
	Parms.CallFunc_GetLogDataByInstanceName_Index = CallFunc_GetLogDataByInstanceName_Index;
	Parms.CallFunc_GetLogDataByInstanceName_Success = CallFunc_GetLogDataByInstanceName_Success;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.CallFunc_GetMatchTime_ReturnValue = CallFunc_GetMatchTime_ReturnValue;
	Parms.CallFunc_GetGameStateAthena_ReturnValue_1 = CallFunc_GetGameStateAthena_ReturnValue_1;
	Parms.K2Node_MakeStruct_PhysicsLogAnalyticsStruct = K2Node_MakeStruct_PhysicsLogAnalyticsStruct;
	Parms.CallFunc_GetMatchTime_ReturnValue_1 = CallFunc_GetMatchTime_ReturnValue_1;
	Parms.K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1 = K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.OnReady_FFF47C8E40A1C412A19C8B8828BD5787
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               Playlist                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UB_PhysicsTree_Reporter_C::OnReady_FFF47C8E40A1C412A19C8B8828BD5787(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "OnReady_FFF47C8E40A1C412A19C8B8828BD5787");

	Params::UB_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UB_PhysicsTree_Reporter_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "ReceiveBeginPlay");

	Params::UB_PhysicsTree_Reporter_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.EndMatchReport
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_PhysicsTree_Reporter_C::EndMatchReport()
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "EndMatchReport");

	Params::UB_PhysicsTree_Reporter_C_EndMatchReport_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.PhaseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGamePhase        GamePhase                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicsTree_Reporter_C::PhaseChanged(enum class EAthenaGamePhase GamePhase)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "PhaseChanged");

	Params::UB_PhysicsTree_Reporter_C_PhaseChanged_Params Parms;

	Parms.GamePhase = GamePhase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ExecuteUbergraph_B_PhysicsTree_Reporter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        K2Node_CustomEvent_GameState                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               K2Node_CustomEvent_Playlist                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             ()
// class UFortPlaylist*               Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CurrentPlaylistReady*CallFunc_PlaylistDataReadyAsync_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        CallFunc_GetGameStateAthena_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhase        K2Node_CustomEvent_GamePhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_PhysicsTree_Reporter_C::ExecuteUbergraph_B_PhysicsTree_Reporter(int32 EntryPoint, class UFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortPlaylist* Temp_object_Variable, class UFortGameStateAthena* Temp_object_Variable_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, bool CallFunc_IsServer_ReturnValue, enum class EAthenaGamePhase K2Node_CustomEvent_GamePhase, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("B_PhysicsTree_Reporter_C", "ExecuteUbergraph_B_PhysicsTree_Reporter");

	Params::UB_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GameState = K2Node_CustomEvent_GameState;
	Parms.K2Node_CustomEvent_Playlist = K2Node_CustomEvent_Playlist;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_PlaylistDataReadyAsync_ReturnValue = CallFunc_PlaylistDataReadyAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameStateAthena_ReturnValue = CallFunc_GetGameStateAthena_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_GamePhase = K2Node_CustomEvent_GamePhase;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

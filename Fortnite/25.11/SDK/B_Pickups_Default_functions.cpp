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


// Function B_Pickups_Default.B_Pickups_Default_C.Setup View Distances
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ViewDistanceQuality                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              L_viewQuality                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Setup_View_Distances_viewDistanceQuality                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::Setup_View_Distances(int32* ViewDistanceQuality, int32 L_viewQuality, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, int32 Temp_int_Variable, float Temp_real_Variable_4, float Temp_real_Variable_5, float Temp_real_Variable_6, float Temp_real_Variable_7, float Temp_real_Variable_8, int32 Temp_int_Variable_1, float Temp_real_Variable_9, float Temp_real_Variable_10, float Temp_real_Variable_11, float Temp_real_Variable_12, float Temp_real_Variable_13, int32 Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float Temp_real_Variable_14, float K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, float K2Node_Select_Default_1, float K2Node_Select_Default_2, int32 CallFunc_Setup_View_Distances_viewDistanceQuality, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "Setup View Distances");

	Params::AB_Pickups_Default_C_Setup_View_Distances_Params Parms;

	Parms.L_viewQuality = L_viewQuality;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.Temp_real_Variable_11 = Temp_real_Variable_11;
	Parms.Temp_real_Variable_12 = Temp_real_Variable_12;
	Parms.Temp_real_Variable_13 = Temp_real_Variable_13;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_real_Variable_14 = Temp_real_Variable_14;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Setup_View_Distances_viewDistanceQuality = CallFunc_Setup_View_Distances_viewDistanceQuality;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewDistanceQuality != nullptr)
		*ViewDistanceQuality = Parms.ViewDistanceQuality;

}


// Function B_Pickups_Default.B_Pickups_Default_C.initializeSpotlightComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InEditorOrPIE_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USpotLightComponent*         CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::InitializeSpotlightComponent(int32 Temp_int_Variable, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_InEditorOrPIE_ReturnValue, const struct FTransform& Temp_struct_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class USpotLightComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "initializeSpotlightComponent");

	Params::AB_Pickups_Default_C_InitializeSpotlightComponent_Params Parms;

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_InEditorOrPIE_ReturnValue = CallFunc_InEditorOrPIE_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.AddRareFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::AddRareFX(int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Fraction_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "AddRareFX");

	Params::AB_Pickups_Default_C_AddRareFX_Params Parms;

	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "Set Initial BKGD Param");

	Params::AB_Pickups_Default_C_Set_Initial_BKGD_Param_Params Parms;

	Parms.Mid = Mid;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pickups_Default_C::HideBackgroundAndSpotlight()
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "HideBackgroundAndSpotlight");

	Params::AB_Pickups_Default_C_HideBackgroundAndSpotlight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pickups_Default_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "ReceiveBeginPlay");

	Params::AB_Pickups_Default_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PickupTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::OnPickedUp(class AFortPawn* PickupTarget)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "OnPickedUp");

	Params::AB_Pickups_Default_C_OnPickedUp_Params Parms;

	Parms.PickupTarget = PickupTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.OnTossed
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pickups_Default_C::OnTossed()
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "OnTossed");

	Params::AB_Pickups_Default_C_OnTossed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.setDrawDistances
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BG                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             bgdark                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Gun                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::SetDrawDistances(double BG, double bgdark, double Gun)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "setDrawDistances");

	Params::AB_Pickups_Default_C_SetDrawDistances_Params Parms;

	Parms.BG = BG;
	Parms.bgdark = bgdark;
	Parms.Gun = Gun;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_Gun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BG                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::SetMaxDraw_Gun(double BG)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "setMaxDraw_Gun");

	Params::AB_Pickups_Default_C_SetMaxDraw_Gun_Params Parms;

	Parms.BG = BG;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_BGDark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BG                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::SetMaxDraw_BGDark(double BG)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "setMaxDraw_BGDark");

	Params::AB_Pickups_Default_C_SetMaxDraw_BGDark_Params Parms;

	Parms.BG = BG;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_BG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BG                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::SetMaxDraw_BG(double BG)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "setMaxDraw_BG");

	Params::AB_Pickups_Default_C_SetMaxDraw_BG_Params Parms;

	Parms.BG = BG;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_RareMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BG                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::SetMaxDraw_RareMesh(double BG)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "setMaxDraw_RareMesh");

	Params::AB_Pickups_Default_C_SetMaxDraw_RareMesh_Params Parms;

	Parms.BG = BG;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_RareFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BG                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::SetMaxDraw_RareFX(double BG)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "setMaxDraw_RareFX");

	Params::AB_Pickups_Default_C_SetMaxDraw_RareFX_Params Parms;

	Parms.BG = BG;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.drawDark
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pickups_Default_C::DrawDark()
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "drawDark");

	Params::AB_Pickups_Default_C_DrawDark_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_Event_PickupTarget                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPickupRarityMID_bNeedsToBeInitialized                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetPickupRarityMID_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_bg_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_bgdark                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_gun                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_bg_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_bg_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_bg_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_bg_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_bg                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_6          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_7          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Default_C::ExecuteUbergraph_B_Pickups_Default(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AFortPawn* K2Node_Event_PickupTarget, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GetPickupRarityMID_bNeedsToBeInitialized, class UMaterialInstanceDynamic* CallFunc_GetPickupRarityMID_ReturnValue, double K2Node_CustomEvent_bg_5, double K2Node_CustomEvent_bgdark, double K2Node_CustomEvent_gun, double K2Node_CustomEvent_bg_4, double K2Node_CustomEvent_bg_3, double K2Node_CustomEvent_bg_2, double K2Node_CustomEvent_bg_1, double K2Node_CustomEvent_bg, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_4, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_5, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_6, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_7)
{
	static auto Func = Class->GetFunction("B_Pickups_Default_C", "ExecuteUbergraph_B_Pickups_Default");

	Params::AB_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_PickupTarget = K2Node_Event_PickupTarget;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPickupRarityMID_bNeedsToBeInitialized = CallFunc_GetPickupRarityMID_bNeedsToBeInitialized;
	Parms.CallFunc_GetPickupRarityMID_ReturnValue = CallFunc_GetPickupRarityMID_ReturnValue;
	Parms.K2Node_CustomEvent_bg_5 = K2Node_CustomEvent_bg_5;
	Parms.K2Node_CustomEvent_bgdark = K2Node_CustomEvent_bgdark;
	Parms.K2Node_CustomEvent_gun = K2Node_CustomEvent_gun;
	Parms.K2Node_CustomEvent_bg_4 = K2Node_CustomEvent_bg_4;
	Parms.K2Node_CustomEvent_bg_3 = K2Node_CustomEvent_bg_3;
	Parms.K2Node_CustomEvent_bg_2 = K2Node_CustomEvent_bg_2;
	Parms.K2Node_CustomEvent_bg_1 = K2Node_CustomEvent_bg_1;
	Parms.K2Node_CustomEvent_bg = K2Node_CustomEvent_bg;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_4 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_4;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_5 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_5;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_6 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_6;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_7 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

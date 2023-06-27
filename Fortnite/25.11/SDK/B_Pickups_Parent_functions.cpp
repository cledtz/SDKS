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


// Function B_Pickups_Parent.B_Pickups_Parent_C.GetViewDistanceQuality
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InEditorOrPIE_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 AB_Pickups_Parent_C::GetViewDistanceQuality(bool CallFunc_InEditorOrPIE_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "GetViewDistanceQuality");

	Params::AB_Pickups_Parent_C_GetViewDistanceQuality_Params Parms;

	Parms.CallFunc_InEditorOrPIE_ReturnValue = CallFunc_InEditorOrPIE_ReturnValue;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.Setup View Distances
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ViewDistanceQuality                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              L_viewQuality                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::Setup_View_Distances(int32* ViewDistanceQuality, int32 L_viewQuality, int32 CallFunc_GetViewDistanceQuality_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "Setup View Distances");

	Params::AB_Pickups_Parent_C_Setup_View_Distances_Params Parms;

	Parms.L_viewQuality = L_viewQuality;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewDistanceQuality != nullptr)
		*ViewDistanceQuality = Parms.ViewDistanceQuality;

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::Mobile_Interation_Icon_Setup(int32 Temp_int_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "Mobile Interation Icon Setup");

	Params::AB_Pickups_Parent_C_Mobile_Interation_Icon_Setup_Params Parms;

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::SetVisibleMobileInteractIcon(bool Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "SetVisibleMobileInteractIcon");

	Params::AB_Pickups_Parent_C_SetVisibleMobileInteractIcon_Params Parms;

	Parms.Visible = Visible;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::SetActiveBackgroundParticleSystem(bool Active, bool Reset, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "SetActiveBackgroundParticleSystem");

	Params::AB_Pickups_Parent_C_SetActiveBackgroundParticleSystem_Params Parms;

	Parms.Active = Active;
	Parms.Reset = Reset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::SetHiddenBackgroundVisualComponents(bool Hidden)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "SetHiddenBackgroundVisualComponents");

	Params::AB_Pickups_Parent_C_SetHiddenBackgroundVisualComponents_Params Parms;

	Parms.Hidden = Hidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::DestroyBackgroundVisualComponents()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "DestroyBackgroundVisualComponents");

	Params::AB_Pickups_Parent_C_DestroyBackgroundVisualComponents_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PVP_TimeScale                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::ScaleHologramTimingsForPvP(double PVP_TimeScale, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue_4)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "ScaleHologramTimingsForPvP");

	Params::AB_Pickups_Parent_C_ScaleHologramTimingsForPvP_Params Parms;

	Parms.PVP_TimeScale = PVP_TimeScale;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Tier_0                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Fraction_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::SetHologramPickedUpParams(bool Tier_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, double CallFunc_Fraction_ReturnValue, double CallFunc_Fraction_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "SetHologramPickedUpParams");

	Params::AB_Pickups_Parent_C_SetHologramPickedUpParams_Params Parms;

	Parms.Tier_0 = Tier_0;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue_1 = CallFunc_Fraction_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_2 = CallFunc_GetGameTimeInSeconds_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_3 = CallFunc_GetGameTimeInSeconds_ReturnValue_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_8 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    TrailPS                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::SpawnPickedUpTrailPS(class UParticleSystemComponent* TrailPS, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "SpawnPickedUpTrailPS");

	Params::AB_Pickups_Parent_C_SpawnPickedUpTrailPS_Params Parms;

	Parms.TrailPS = TrailPS;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              L_viewQuality                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_SetupPickupMesh_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Component_Radius_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::UserConstructionScript(int32 L_viewQuality, class UPrimitiveComponent* CallFunc_SetupPickupMesh_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_Component_Radius_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "UserConstructionScript");

	Params::AB_Pickups_Parent_C_UserConstructionScript_Params Parms;

	Parms.L_viewQuality = L_viewQuality;
	Parms.CallFunc_SetupPickupMesh_ReturnValue = CallFunc_SetupPickupMesh_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_Component_Radius_ImplicitCast = K2Node_VariableSet_Component_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::MobileSelectedTL__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "MobileSelectedTL__FinishedFunc");

	Params::AB_Pickups_Parent_C_MobileSelectedTL__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::MobileSelectedTL__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "MobileSelectedTL__UpdateFunc");

	Params::AB_Pickups_Parent_C_MobileSelectedTL__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::EnableBacchusHighlight()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "EnableBacchusHighlight");

	Params::AB_Pickups_Parent_C_EnableBacchusHighlight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::DisableBacchusHighlight()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "DisableBacchusHighlight");

	Params::AB_Pickups_Parent_C_DisableBacchusHighlight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.HideBackgroundAndSpotlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::HideBackgroundAndSpotlight()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "HideBackgroundAndSpotlight");

	Params::AB_Pickups_Parent_C_HideBackgroundAndSpotlight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.OnAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::OnAttached()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "OnAttached");

	Params::AB_Pickups_Parent_C_OnAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.OnTossed
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::OnTossed()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "OnTossed");

	Params::AB_Pickups_Parent_C_OnTossed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "ReceiveTick");

	Params::AB_Pickups_Parent_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.OnAboutToEnterBackpack
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PickupTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::OnAboutToEnterBackpack(class AFortPawn* PickupTarget)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "OnAboutToEnterBackpack");

	Params::AB_Pickups_Parent_C_OnAboutToEnterBackpack_Params Parms;

	Parms.PickupTarget = PickupTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PickupTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::OnPickedUp(class AFortPawn* PickupTarget)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "OnPickedUp");

	Params::AB_Pickups_Parent_C_OnPickedUp_Params Parms;

	Parms.PickupTarget = PickupTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Pickups_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "ReceiveBeginPlay");

	Params::AB_Pickups_Parent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 K2Node_DynamicCast_AsFort_Pickup                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovementCapsuleHalfHeight_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_Event_PickupTarget_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_Event_PickupTarget                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortIngredientItemDefinition*K2Node_DynamicCast_AsFort_Ingredient_Item_Definition             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortResourceItemDefinition* K2Node_DynamicCast_AsFort_Resource_Item_Definition               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Setup_View_Distances_viewDistanceQuality                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_CustomTimeDilation_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::ExecuteUbergraph_B_Pickups_Parent(int32 EntryPoint, double Temp_real_Variable, bool CallFunc_IsValid_ReturnValue, double Temp_real_Variable_1, bool CallFunc_IsValid_ReturnValue_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ESubGame CallFunc_GetSubGame_ReturnValue_1, double Temp_real_Variable_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, double Temp_real_Variable_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class AActor* CallFunc_GetAttachParentActor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_GetMovementCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float K2Node_Event_DeltaSeconds, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPawn* K2Node_Event_PickupTarget_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class AFortPawn* K2Node_Event_PickupTarget, class UFortIngredientItemDefinition* K2Node_DynamicCast_AsFort_Ingredient_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, class UFortResourceItemDefinition* K2Node_DynamicCast_AsFort_Resource_Item_Definition, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsDedicatedServer_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, double Temp_real_Variable_4, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Setup_View_Distances_viewDistanceQuality, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESubGame Temp_byte_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, double K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_CustomTimeDilation_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_2)
{
	static auto Func = Class->GetFunction("B_Pickups_Parent_C", "ExecuteUbergraph_B_Pickups_Parent");

	Params::AB_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSubGame_ReturnValue_1 = CallFunc_GetSubGame_ReturnValue_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Pickup = K2Node_DynamicCast_AsFort_Pickup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetMovementCapsuleHalfHeight_ReturnValue = CallFunc_GetMovementCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_PickupTarget_1 = K2Node_Event_PickupTarget_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_PickupTarget = K2Node_Event_PickupTarget;
	Parms.K2Node_DynamicCast_AsFort_Ingredient_Item_Definition = K2Node_DynamicCast_AsFort_Ingredient_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsFort_Resource_Item_Definition = K2Node_DynamicCast_AsFort_Resource_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Setup_View_Distances_viewDistanceQuality = CallFunc_Setup_View_Distances_viewDistanceQuality;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetSubGame_ReturnValue_2 = CallFunc_GetSubGame_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_VariableSet_CustomTimeDilation_ImplicitCast = K2Node_VariableSet_CustomTimeDilation_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast = CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_2 = CallFunc_Delay_Duration_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

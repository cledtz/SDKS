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


// Function FN_RadialForce.FN_RadialForce_C.NewFunction_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Roll                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform AFN_RadialForce_C::NewFunction_0(double Roll, double Scale, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static auto Func = Class->GetFunction("FN_RadialForce_C", "NewFunction_0");

	Params::AFN_RadialForce_C_NewFunction_0_Params Parms;

	Parms.Roll = Roll;
	Parms.Scale = Scale;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FN_RadialForce.FN_RadialForce_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFN_RadialForce_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("FN_RadialForce_C", "ReceiveBeginPlay");

	Params::AFN_RadialForce_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FN_RadialForce.FN_RadialForce_C.ExecuteUbergraph_FN_RadialForce
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWaveScalar*                 CallFunc_SetWaveScalar_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWaveScalar*                 CallFunc_SetWaveScalar_ReturnValue_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadialFalloff*              CallFunc_SetRadialFalloff_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URadialVector*               CallFunc_SetRadialVector_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyByPi_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWaveScalar_Period_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWaveScalar_Time_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWaveScalar_Time_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWaveScalar_Period_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWaveScalar_Wavelength_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRadialFalloff_Radius_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRadialVector_Magnitude_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFN_RadialForce_C::ExecuteUbergraph_FN_RadialForce(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UWaveScalar* CallFunc_SetWaveScalar_ReturnValue, class UWaveScalar* CallFunc_SetWaveScalar_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, class URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, class UOperatorField* CallFunc_SetOperatorField_ReturnValue, class URadialVector* CallFunc_SetRadialVector_ReturnValue, double CallFunc_MultiplyByPi_ReturnValue, class UOperatorField* CallFunc_SetOperatorField_ReturnValue_1, class UOperatorField* CallFunc_SetOperatorField_ReturnValue_2, float CallFunc_SetWaveScalar_Period_ImplicitCast, float CallFunc_SetWaveScalar_Time_ImplicitCast, float CallFunc_SetWaveScalar_Time_ImplicitCast_1, float CallFunc_SetWaveScalar_Period_ImplicitCast_1, float CallFunc_SetWaveScalar_Wavelength_ImplicitCast, float CallFunc_SetRadialFalloff_Radius_ImplicitCast, float CallFunc_SetRadialVector_Magnitude_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast)
{
	static auto Func = Class->GetFunction("FN_RadialForce_C", "ExecuteUbergraph_FN_RadialForce");

	Params::AFN_RadialForce_C_ExecuteUbergraph_FN_RadialForce_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_SetWaveScalar_ReturnValue = CallFunc_SetWaveScalar_ReturnValue;
	Parms.CallFunc_SetWaveScalar_ReturnValue_1 = CallFunc_SetWaveScalar_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_SetRadialFalloff_ReturnValue = CallFunc_SetRadialFalloff_ReturnValue;
	Parms.CallFunc_SetOperatorField_ReturnValue = CallFunc_SetOperatorField_ReturnValue;
	Parms.CallFunc_SetRadialVector_ReturnValue = CallFunc_SetRadialVector_ReturnValue;
	Parms.CallFunc_MultiplyByPi_ReturnValue = CallFunc_MultiplyByPi_ReturnValue;
	Parms.CallFunc_SetOperatorField_ReturnValue_1 = CallFunc_SetOperatorField_ReturnValue_1;
	Parms.CallFunc_SetOperatorField_ReturnValue_2 = CallFunc_SetOperatorField_ReturnValue_2;
	Parms.CallFunc_SetWaveScalar_Period_ImplicitCast = CallFunc_SetWaveScalar_Period_ImplicitCast;
	Parms.CallFunc_SetWaveScalar_Time_ImplicitCast = CallFunc_SetWaveScalar_Time_ImplicitCast;
	Parms.CallFunc_SetWaveScalar_Time_ImplicitCast_1 = CallFunc_SetWaveScalar_Time_ImplicitCast_1;
	Parms.CallFunc_SetWaveScalar_Period_ImplicitCast_1 = CallFunc_SetWaveScalar_Period_ImplicitCast_1;
	Parms.CallFunc_SetWaveScalar_Wavelength_ImplicitCast = CallFunc_SetWaveScalar_Wavelength_ImplicitCast;
	Parms.CallFunc_SetRadialFalloff_Radius_ImplicitCast = CallFunc_SetRadialFalloff_Radius_ImplicitCast;
	Parms.CallFunc_SetRadialVector_Magnitude_ImplicitCast = CallFunc_SetRadialVector_Magnitude_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

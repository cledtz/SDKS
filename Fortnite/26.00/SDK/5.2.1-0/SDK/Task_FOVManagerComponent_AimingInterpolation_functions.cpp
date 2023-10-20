#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Task_FOVManagerComponent_AimingInterpolation.Task_FOVManagerComponent_AimingInterpolation_C
// (None)

class UClass* UTask_FOVManagerComponent_AimingInterpolation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Task_FOVManagerComponent_AimingInterpolation_C");

	return Clss;
}


// Task_FOVManagerComponent_AimingInterpolation_C Task_FOVManagerComponent_AimingInterpolation.Default__Task_FOVManagerComponent_AimingInterpolation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_FOVManagerComponent_AimingInterpolation_C* UTask_FOVManagerComponent_AimingInterpolation_C::GetDefaultObj()
{
	static class UTask_FOVManagerComponent_AimingInterpolation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_FOVManagerComponent_AimingInterpolation_C*>(UTask_FOVManagerComponent_AimingInterpolation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Task_FOVManagerComponent_AimingInterpolation.Task_FOVManagerComponent_AimingInterpolation_C.ReceiveActivate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTask_FOVManagerComponent_AimingInterpolation_C::ReceiveActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_FOVManagerComponent_AimingInterpolation_C", "ReceiveActivate");

	Params::UTask_FOVManagerComponent_AimingInterpolation_C_ReceiveActivate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_FOVManagerComponent_AimingInterpolation.Task_FOVManagerComponent_AimingInterpolation_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_FOVManagerComponent_AimingInterpolation_C::ReceiveTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_FOVManagerComponent_AimingInterpolation_C", "ReceiveTick");

	Params::UTask_FOVManagerComponent_AimingInterpolation_C_ReceiveTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_FOVManagerComponent_AimingInterpolation.Task_FOVManagerComponent_AimingInterpolation_C.ExecuteUbergraph_Task_FOVManagerComponent_AimingInterpolation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             CallFunc_GetOwnerComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_FOVManagerComponent_Game_C*K2Node_DynamicCast_AsBP_FOVManager_Component_Game                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItem_Gun_General*           CallFunc_GetCurrentGun_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_EndCameraFOV_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_EndCameraFOV_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_EndMeshFOV_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCameraFOV_newCameraFOV_ImplicitCast                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMeshFOV_newMeshFOV_ImplicitCast                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_AimingFOV_Alpha_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_FOVManagerComponent_AimingInterpolation_C::ExecuteUbergraph_Task_FOVManagerComponent_AimingInterpolation(int32 EntryPoint, double Temp_real_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool Temp_bool_Variable, class UCurveFloat* Temp_object_Variable, class UCurveFloat* Temp_object_Variable_1, float K2Node_Event_DeltaTime, class UActorComponent* CallFunc_GetOwnerComponent_ReturnValue, class UBP_FOVManagerComponent_Game_C* K2Node_DynamicCast_AsBP_FOVManager_Component_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAiming_ReturnValue, bool CallFunc_IsValid_ReturnValue, double Temp_real_Variable_1, bool CallFunc_IsAiming_ReturnValue_1, bool CallFunc_IsAiming_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UCurveFloat* K2Node_Select_Default_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_FMin_ReturnValue, class UItem_Gun_General* CallFunc_GetCurrentGun_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double K2Node_VariableSet_EndCameraFOV_ImplicitCast, double K2Node_VariableSet_EndCameraFOV_ImplicitCast_1, double K2Node_VariableSet_EndMeshFOV_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, float CallFunc_SetCameraFOV_newCameraFOV_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, float CallFunc_SetMeshFOV_newMeshFOV_ImplicitCast, float K2Node_VariableSet_AimingFOV_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_FOVManagerComponent_AimingInterpolation_C", "ExecuteUbergraph_Task_FOVManagerComponent_AimingInterpolation");

	Params::UTask_FOVManagerComponent_AimingInterpolation_C_ExecuteUbergraph_Task_FOVManagerComponent_AimingInterpolation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetOwnerComponent_ReturnValue = CallFunc_GetOwnerComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_FOVManager_Component_Game = K2Node_DynamicCast_AsBP_FOVManager_Component_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAiming_ReturnValue = CallFunc_IsAiming_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_IsAiming_ReturnValue_1 = CallFunc_IsAiming_ReturnValue_1;
	Parms.CallFunc_IsAiming_ReturnValue_2 = CallFunc_IsAiming_ReturnValue_2;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_GetCurrentGun_ReturnValue = CallFunc_GetCurrentGun_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.K2Node_VariableSet_EndCameraFOV_ImplicitCast = K2Node_VariableSet_EndCameraFOV_ImplicitCast;
	Parms.K2Node_VariableSet_EndCameraFOV_ImplicitCast_1 = K2Node_VariableSet_EndCameraFOV_ImplicitCast_1;
	Parms.K2Node_VariableSet_EndMeshFOV_ImplicitCast = K2Node_VariableSet_EndMeshFOV_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_SetCameraFOV_newCameraFOV_ImplicitCast = CallFunc_SetCameraFOV_newCameraFOV_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_SetMeshFOV_newMeshFOV_ImplicitCast = CallFunc_SetMeshFOV_newMeshFOV_ImplicitCast;
	Parms.K2Node_VariableSet_AimingFOV_Alpha_ImplicitCast = K2Node_VariableSet_AimingFOV_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



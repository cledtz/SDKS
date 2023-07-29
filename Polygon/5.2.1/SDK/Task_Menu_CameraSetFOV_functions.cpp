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


// Function Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C.ReceiveActivate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTask_Menu_CameraSetFOV_C::ReceiveActivate()
{
	static auto Func = Class->GetFunction("Task_Menu_CameraSetFOV_C", "ReceiveActivate");

	Params::UTask_Menu_CameraSetFOV_C_ReceiveActivate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Menu_CameraSetFOV_C::ReceiveTick(float DeltaTime)
{
	static auto Func = Class->GetFunction("Task_Menu_CameraSetFOV_C", "ReceiveTick");

	Params::UTask_Menu_CameraSetFOV_C_ReceiveTick_Params Parms;

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_Menu_CameraSetFOV.Task_Menu_CameraSetFOV_C.ExecuteUbergraph_Task_Menu_CameraSetFOV
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAction*>             K2Node_MakeArray_Array                                           (ReferenceParm)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraActor*                K2Node_DynamicCast_AsCamera_Actor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionsSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_Menu_CameraSetFOV_C::ExecuteUbergraph_Task_Menu_CameraSetFOV(int32 EntryPoint, float K2Node_Event_DeltaTime, TArray<class UAction*>& K2Node_MakeArray_Array, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UActor* CallFunc_GetViewTarget_ReturnValue, class UCameraActor* K2Node_DynamicCast_AsCamera_Actor, bool K2Node_DynamicCast_bSuccess, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UActionsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("Task_Menu_CameraSetFOV_C", "ExecuteUbergraph_Task_Menu_CameraSetFOV");

	Params::UTask_Menu_CameraSetFOV_C_ExecuteUbergraph_Task_Menu_CameraSetFOV_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Actor = K2Node_DynamicCast_AsCamera_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

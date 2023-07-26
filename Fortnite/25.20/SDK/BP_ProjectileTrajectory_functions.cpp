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


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldUpdate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetShouldUpdateFromOwner");

	Params::ABP_ProjectileTrajectory_C_SetShouldUpdateFromOwner_Params Parms;

	Parms.ShouldUpdate = ShouldUpdate;
	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FInterfaceProperty_                K2Node_DynamicCast_AsFort_Trajectory_Ability_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::UpdateFromTrajectoryOwner(FInterfaceProperty_ K2Node_DynamicCast_AsFort_Trajectory_Ability_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UpdateFromTrajectoryOwner");

	Params::ABP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_Trajectory_Ability_Interface = K2Node_DynamicCast_AsFort_Trajectory_Ability_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UserConstructionScript");

	Params::ABP_ProjectileTrajectory_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ProjectileTrajectory_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ReceiveBeginPlay");

	Params::ABP_ProjectileTrajectory_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ReceiveTick");

	Params::ABP_ProjectileTrajectory_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             SplinePoints                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>             SplineTangents                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ProjectileTrajectory_C::SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetTrajectorySpline");

	Params::ABP_ProjectileTrajectory_C_SetTrajectorySpline_Params Parms;

	Parms.SplinePoints = SplinePoints;
	Parms.SplineTangents = SplineTangents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryValid
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsTrajectoryValid                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::SetTrajectoryValid(bool bIsTrajectoryValid)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetTrajectoryValid");

	Params::ABP_ProjectileTrajectory_C_SetTrajectoryValid_Params Parms;

	Parms.bIsTrajectoryValid = bIsTrajectoryValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateTargetMeshVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ProjectileTrajectory_C::UpdateTargetMeshVisibility()
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UpdateTargetMeshVisibility");

	Params::ABP_ProjectileTrajectory_C_UpdateTargetMeshVisibility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_Event_SplinePoints                                        (ConstParm, ReferenceParm)
// TArray<struct FVector>             K2Node_Event_SplineTangents                                      (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_bIsTrajectoryValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_SelectMaterialInstance_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::ExecuteUbergraph_BP_ProjectileTrajectory(int32 EntryPoint, float K2Node_Event_DeltaSeconds, TArray<struct FVector>& K2Node_Event_SplinePoints, TArray<struct FVector>& K2Node_Event_SplineTangents, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool K2Node_CustomEvent_bIsTrajectoryValid, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class USplineMeshComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ExecuteUbergraph_BP_ProjectileTrajectory");

	Params::ABP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_SplinePoints = K2Node_Event_SplinePoints;
	Parms.K2Node_Event_SplineTangents = K2Node_Event_SplineTangents;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.K2Node_CustomEvent_bIsTrajectoryValid = K2Node_CustomEvent_bIsTrajectoryValid;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_SelectMaterialInstance_ReturnValue = CallFunc_SelectMaterialInstance_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

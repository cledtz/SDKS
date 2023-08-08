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


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFinalPoseOverride                                         (Parm, OutParm, NoDestructor)

void UBoarRidingPlayerLayerAnimBP_C::VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride)
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "VehicleFinalPoseOverride");

	Params::UBoarRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFinalPoseOverride != nullptr)
		*VehicleFinalPoseOverride = Parms.VehicleFinalPoseOverride;

}


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFullBodyOverride                                          (Parm, OutParm, NoDestructor)

void UBoarRidingPlayerLayerAnimBP_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride)
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "VehicleFullBodyOverride");

	Params::UBoarRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = Parms.VehicleFullBodyOverride;

}


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyDefault                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBodyOverride                                         (Parm, OutParm, NoDestructor)

void UBoarRidingPlayerLayerAnimBP_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "VehicleLowerBodyOverride");

	Params::UBoarRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride_Params Parms;

	Parms.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	Parms.InPoseUpperBody = InPoseUpperBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = Parms.VehicleLowerBodyOverride;

}


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSplitBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBody                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBodyRemoveRoot                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleSplitBodyOverride                                         (Parm, OutParm, NoDestructor)

void UBoarRidingPlayerLayerAnimBP_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride)
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "VehicleSplitBodyOverride");

	Params::UBoarRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride_Params Parms;

	Parms.InPoseSplitBody = InPoseSplitBody;
	Parms.InPoseUpperAndLowerBody = InPoseUpperAndLowerBody;
	Parms.InPoseUpperAndLowerBodyRemoveRoot = InPoseUpperAndLowerBodyRemoveRoot;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = Parms.VehicleSplitBodyOverride;

}


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBoarRidingPlayerLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "AnimGraph");

	Params::UBoarRidingPlayerLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Boar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     AnimInstance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBurt_AnimBP_C*              K2Node_DynamicCast_AsBurt_Anim_BP                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BodyRoll_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BoarSpeed2D_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBoarRidingPlayerLayerAnimBP_C::GetMainAnimBPData_Boar(class UObject* AnimInstance, class UBurt_AnimBP_C* K2Node_DynamicCast_AsBurt_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast, double K2Node_VariableSet_BodyRoll_ImplicitCast, double K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast, double K2Node_VariableSet_BoarSpeed2D_ImplicitCast)
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "GetMainAnimBPData_Boar");

	Params::UBoarRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Boar_Params Parms;

	Parms.AnimInstance = AnimInstance;
	Parms.K2Node_DynamicCast_AsBurt_Anim_BP = K2Node_DynamicCast_AsBurt_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast = K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast;
	Parms.K2Node_VariableSet_BodyRoll_ImplicitCast = K2Node_VariableSet_BodyRoll_ImplicitCast;
	Parms.K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast = K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast;
	Parms.K2Node_VariableSet_BoarSpeed2D_ImplicitCast = K2Node_VariableSet_BoarSpeed2D_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE
// (BlueprintEvent)
// Parameters:

void UBoarRidingPlayerLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE()
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE");

	Params::UBoarRidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimInstance*               RidableAnimInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBoarRidingPlayerLayerAnimBP_C::BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance)
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "BlueprintCollectRidableAnimBPData");

	Params::UBoarRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData_Params Parms;

	Parms.RidableAnimInstance = RidableAnimInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C.ExecuteUbergraph_BoarRidingPlayerLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               K2Node_Event_RidableAnimInstance                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBoarRidingPlayerLayerAnimBP_C::ExecuteUbergraph_BoarRidingPlayerLayerAnimBP(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAnimInstance* K2Node_Event_RidableAnimInstance)
{
	static auto Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "ExecuteUbergraph_BoarRidingPlayerLayerAnimBP");

	Params::UBoarRidingPlayerLayerAnimBP_C_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_RidableAnimInstance = K2Node_Event_RidableAnimInstance;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

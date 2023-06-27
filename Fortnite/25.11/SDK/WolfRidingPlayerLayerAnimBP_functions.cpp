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


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFinalPoseOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFinalPoseOverride                                         (Parm, OutParm, NoDestructor)

void UWolfRidingPlayerLayerAnimBP_C::VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride)
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "VehicleFinalPoseOverride");

	Params::UWolfRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFinalPoseOverride != nullptr)
		*VehicleFinalPoseOverride = Parms.VehicleFinalPoseOverride;

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFullBodyOverride                                          (Parm, OutParm, NoDestructor)

void UWolfRidingPlayerLayerAnimBP_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride)
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "VehicleFullBodyOverride");

	Params::UWolfRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = Parms.VehicleFullBodyOverride;

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleLowerBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyDefault                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBodyOverride                                         (Parm, OutParm, NoDestructor)

void UWolfRidingPlayerLayerAnimBP_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "VehicleLowerBodyOverride");

	Params::UWolfRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride_Params Parms;

	Parms.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	Parms.InPoseUpperBody = InPoseUpperBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = Parms.VehicleLowerBodyOverride;

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.VehicleSplitBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSplitBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBody                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBodyRemoveRoot                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleSplitBodyOverride                                         (Parm, OutParm, NoDestructor)

void UWolfRidingPlayerLayerAnimBP_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride)
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "VehicleSplitBodyOverride");

	Params::UWolfRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride_Params Parms;

	Parms.InPoseSplitBody = InPoseSplitBody;
	Parms.InPoseUpperAndLowerBody = InPoseUpperAndLowerBody;
	Parms.InPoseUpperAndLowerBodyRemoveRoot = InPoseUpperAndLowerBodyRemoveRoot;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = Parms.VehicleSplitBodyOverride;

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UWolfRidingPlayerLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "AnimGraph");

	Params::UWolfRidingPlayerLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.GetMainAnimBPData_Wolf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     AnimInstance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGrandma_AnimBP_C*           K2Node_DynamicCast_AsGrandma_Anim_BP                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_BodyRoll_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_WolfSpeed2D_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWolfRidingPlayerLayerAnimBP_C::GetMainAnimBPData_Wolf(class UObject* AnimInstance, class UGrandma_AnimBP_C* K2Node_DynamicCast_AsGrandma_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast, double K2Node_VariableSet_BodyRoll_ImplicitCast, double K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast, double K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast, double K2Node_VariableSet_WolfSpeed2D_ImplicitCast)
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "GetMainAnimBPData_Wolf");

	Params::UWolfRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Wolf_Params Parms;

	Parms.AnimInstance = AnimInstance;
	Parms.K2Node_DynamicCast_AsGrandma_Anim_BP = K2Node_DynamicCast_AsGrandma_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast = K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast;
	Parms.K2Node_VariableSet_BodyRoll_ImplicitCast = K2Node_VariableSet_BodyRoll_ImplicitCast;
	Parms.K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast = K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast;
	Parms.K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast = K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast;
	Parms.K2Node_VariableSet_WolfSpeed2D_ImplicitCast = K2Node_VariableSet_WolfSpeed2D_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766
// (BlueprintEvent)
// Parameters:

void UWolfRidingPlayerLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766()
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766");

	Params::UWolfRidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D
// (BlueprintEvent)
// Parameters:

void UWolfRidingPlayerLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D()
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D");

	Params::UWolfRidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93
// (BlueprintEvent)
// Parameters:

void UWolfRidingPlayerLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93()
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93");

	Params::UWolfRidingPlayerLayerAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.BlueprintCollectRidableAnimBPData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimInstance*               RidableAnimInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWolfRidingPlayerLayerAnimBP_C::BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance)
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "BlueprintCollectRidableAnimBPData");

	Params::UWolfRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData_Params Parms;

	Parms.RidableAnimInstance = RidableAnimInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.UpdateBoostPlayRate
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWolfRidingPlayerLayerAnimBP_C::UpdateBoostPlayRate()
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "UpdateBoostPlayRate");

	Params::UWolfRidingPlayerLayerAnimBP_C_UpdateBoostPlayRate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.PlaceHandIKTargets
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWolfRidingPlayerLayerAnimBP_C::PlaceHandIKTargets()
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "PlaceHandIKTargets");

	Params::UWolfRidingPlayerLayerAnimBP_C_PlaceHandIKTargets_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C.ExecuteUbergraph_WolfRidingPlayerLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               K2Node_Event_RidableAnimInstance                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet___FloatProperty_24_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet___FloatProperty_25_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_BoostPlayRate_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWolfRidingPlayerLayerAnimBP_C::ExecuteUbergraph_WolfRidingPlayerLayerAnimBP(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UAnimInstance* K2Node_Event_RidableAnimInstance, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_StructMemberSet___FloatProperty_24_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_25_ImplicitCast, float K2Node_VariableSet_BoostPlayRate_ImplicitCast)
{
	static auto Func = Class->GetFunction("WolfRidingPlayerLayerAnimBP_C", "ExecuteUbergraph_WolfRidingPlayerLayerAnimBP");

	Params::UWolfRidingPlayerLayerAnimBP_C_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_RidableAnimInstance = K2Node_Event_RidableAnimInstance;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_StructMemberSet___FloatProperty_24_ImplicitCast = K2Node_StructMemberSet___FloatProperty_24_ImplicitCast;
	Parms.K2Node_StructMemberSet___FloatProperty_25_ImplicitCast = K2Node_StructMemberSet___FloatProperty_25_ImplicitCast;
	Parms.K2Node_VariableSet_BoostPlayRate_ImplicitCast = K2Node_VariableSet_BoostPlayRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

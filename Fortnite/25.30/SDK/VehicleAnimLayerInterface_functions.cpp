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


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFinalPoseOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InFinalPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFinalPoseOverride                                         (Parm, OutParm, NoDestructor)

void UVehicleAnimLayerInterface_C::VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride)
{
	static auto Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleFinalPoseOverride");

	Params::UVehicleAnimLayerInterface_C_VehicleFinalPoseOverride_Params Parms;

	Parms.InFinalPose = InFinalPose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFinalPoseOverride != nullptr)
		*VehicleFinalPoseOverride = Parms.VehicleFinalPoseOverride;

}


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleSplitBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseSplitBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBody                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerBodyRemoveRoot                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleSplitBodyOverride                                         (Parm, OutParm, NoDestructor)

void UVehicleAnimLayerInterface_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride)
{
	static auto Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleSplitBodyOverride");

	Params::UVehicleAnimLayerInterface_C_VehicleSplitBodyOverride_Params Parms;

	Parms.InPoseSplitBody = InPoseSplitBody;
	Parms.InPoseUpperAndLowerBody = InPoseUpperAndLowerBody;
	Parms.InPoseUpperAndLowerBodyRemoveRoot = InPoseUpperAndLowerBodyRemoveRoot;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = Parms.VehicleSplitBodyOverride;

}


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLowerBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyDefault                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBodyOverride                                         (Parm, OutParm, NoDestructor)

void UVehicleAnimLayerInterface_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static auto Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleLowerBodyOverride");

	Params::UVehicleAnimLayerInterface_C_VehicleLowerBodyOverride_Params Parms;

	Parms.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	Parms.InPoseUpperBody = InPoseUpperBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = Parms.VehicleLowerBodyOverride;

}


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFullBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFullBodyOverride                                          (Parm, OutParm, NoDestructor)

void UVehicleAnimLayerInterface_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride)
{
	static auto Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleFullBodyOverride");

	Params::UVehicleAnimLayerInterface_C_VehicleFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = Parms.VehicleFullBodyOverride;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

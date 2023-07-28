#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFinalPoseOverride
struct UVehicleAnimLayerInterface_C_VehicleFinalPoseOverride_Params
{
public:
	struct FPoseLink                             InFinalPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFinalPoseOverride;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleSplitBodyOverride
struct UVehicleAnimLayerInterface_C_VehicleSplitBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseSplitBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerBody;                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerBodyRemoveRoot;                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleSplitBodyOverride;                          // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLowerBodyOverride
struct UVehicleAnimLayerInterface_C_VehicleLowerBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyDefault;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperBody;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleLowerBodyOverride;                          // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFullBodyOverride
struct UVehicleAnimLayerInterface_C_VehicleFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFullBodyOverride;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

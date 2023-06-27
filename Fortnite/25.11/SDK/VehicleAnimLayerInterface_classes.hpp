#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass VehicleAnimLayerInterface.VehicleAnimLayerInterface_C
class UVehicleAnimLayerInterface_C : public UAnimLayerInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleAnimLayerInterface_C");
		return Clss;
	}

	void VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride);
	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

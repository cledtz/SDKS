#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C
class UPlayerAnimOverrideLayerInterface_C : public UAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class UPlayerAnimOverrideLayerInterface_C* GetDefaultObj();

	void CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK);
	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride);
};

}



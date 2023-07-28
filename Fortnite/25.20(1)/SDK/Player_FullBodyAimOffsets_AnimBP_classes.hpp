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

// 0x2448 (0x3A18 - 0x15D0)
// AnimBlueprintGeneratedClass Player_FullBodyAimOffsets_AnimBP.Player_FullBodyAimOffsets_AnimBP_C
class UPlayer_FullBodyAimOffsets_AnimBP_C : public UFortPlayerAnimInstanceProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x15D8(0x14)(HasGetValueTypeHash)
	uint8                                        Pad_8E86[0x4];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x15F0(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x15F8(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_32;                             // 0x1600(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_26;                  // 0x1620(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_31;                             // 0x16E0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_25;                  // 0x1700(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_30;                             // 0x17C0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_24;                  // 0x17E0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_29;                             // 0x18A0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_28;                             // 0x18C0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0x18E0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0x1900(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0x1920(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0x1940(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0x1960(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0x1980(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_23;                  // 0x19A0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x1A60(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_22;                  // 0x1A80(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x1B40(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x1B60(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1B80(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1BA0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1BC0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x1BE0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_21;                  // 0x1C00(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1CC0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_20;                  // 0x1CE0(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_19;                  // 0x1DA0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x1E60(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_18;                  // 0x1E80(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x1F40(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0x1F60(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x2020(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x2040(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x2100(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x21C0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x21E0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x22A0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0x22C0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x2380(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x23A0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x2460(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x2480(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x2540(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x2560(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x2620(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x26E0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x2700(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x27C0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x27E0(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x28A0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2960(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2980(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x2A40(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x2B00(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2BC0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x2BE0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x2CA0(0x20)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x2CC0(0x118)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x2DD8(0x118)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x2EF0(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x2FB0(0x100)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x30B0(0xC0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x3170(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x3198(0x28)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x31C0(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x31E0(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x3208(0x100)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x3308(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x33D0(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x3498(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x34C0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x34E8(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3510(0x28)()
	struct FAnimNode_ResetRoot                   AnimGraphNode_ResetRoot;                           // 0x3538(0xD8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3610(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3630(0x20)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x3650(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3750(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x3778(0x100)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x3878(0xC0)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x3938(0xC8)()
	double                                       __CustomProperty_Pitch_61C65E4944F5DB18DC8B6496B9622A88; // 0x3A00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Yaw_61C65E4944F5DB18DC8B6496B9622A88; // 0x3A08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_AimOffsetAlpha_61C65E4944F5DB18DC8B6496B9622A88; // 0x3A10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_FullBodyAimOffsets_AnimBP_C");
		return Clss;
	}

	void ItemFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* ItemFinalPoseOverride);
	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive);
	void ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive);
	void ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive);
	void ItemFallAdditive(struct FPoseLink* ItemFallAdditive);
	void ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive);
	void ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive);
	void ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive);
	void ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart);
	void ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop);
	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd);
	void ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl);
	void ItemAimOffset(const struct FPoseLink& InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset);
	void ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride);
	void ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK);
	void MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride);
	void MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives);
	void MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose);
	void MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride);
	void MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride);
	void MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride);
	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride);
	void VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride);
	void FullBodyAimingOffsetsLayer(const struct FPoseLink& InFullBodyAimOffsetsBasePose, struct FPoseLink* FullBodyAimingOffsetsLayer);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_FullBodyAimOffsets_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

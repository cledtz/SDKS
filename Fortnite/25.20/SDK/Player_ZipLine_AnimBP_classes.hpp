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

// 0x1AE0 (0x2180 - 0x6A0)
// AnimBlueprintGeneratedClass Player_ZipLine_AnimBP.Player_ZipLine_AnimBP_C
class UPlayer_ZipLine_AnimBP_C : public UFortZiplineAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x6A8(0x6C)(HasGetValueTypeHash)
	uint8                                        Pad_910E[0x4];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x718(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x720(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x728(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x748(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x808(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x828(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x8E8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x908(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x9C8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x9E8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0xA08(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0xA28(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0xA48(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0xA68(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0xA88(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0xAD0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0xB18(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0xB60(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0xBA8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0xBF0(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0xC38(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0xC80(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xCA0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xCE8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0xD30(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0xD78(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0xDC0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0xE08(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0xE50(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0xE98(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0xEB8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0xF78(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0xF98(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x1058(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1078(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x1098(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x10B8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x10D8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x10F8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x1118(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x11D8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x11F8(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x12B8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1378(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1398(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1458(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1478(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1538(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x1558(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1580(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x15A8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x15D0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x15F8(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1620(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1668(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x16B0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x16F8(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x1740(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1788(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x17D0(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x18B0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x18F8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1940(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1988(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x19D0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1A18(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1A38(0x28)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1A60(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x1AD0(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x1B98(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1C60(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1CA8(0x20)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x1CC8(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1D90(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x1E00(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1EC8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1EE8(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x1FB0(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x2078(0x100)()
	double                                       PivotAnimBlendTime;                                // 0x2178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_ZipLine_AnimBP_C");
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
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_ZipLine_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

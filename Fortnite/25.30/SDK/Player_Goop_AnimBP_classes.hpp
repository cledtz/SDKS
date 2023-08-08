#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16E0 (0x1D60 - 0x680)
// AnimBlueprintGeneratedClass Player_Goop_AnimBP.Player_Goop_AnimBP_C
class UPlayer_Goop_AnimBP_C : public UFortGoopAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x688(0x4C)(HasGetValueTypeHash)
	uint8                                        Pad_6DFC[0x4];                                     // Fixing Size After Last Property
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x6D8(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x6E0(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x6E8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x708(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x7C8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x7E8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x8A8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x8C8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x988(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x9A8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x9C8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x9E8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0xA08(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0xA28(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0xA70(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0xAB8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0xB00(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0xB48(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0xB90(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0xBD8(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0xC20(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xC40(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xC88(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xCD0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xD18(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xD60(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xDA8(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0xDF0(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0xE38(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0xE58(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0xE78(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0xF38(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0xF58(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x1018(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1038(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x1058(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x1078(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x1098(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x10B8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x10D8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1198(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x11B8(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x1278(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1338(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1358(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1418(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1438(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x14F8(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1518(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1540(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1568(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x15B0(0xC8)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1678(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x16C0(0x70)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1730(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x1758(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1820(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1890(0x20)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x18B0(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x1978(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1A40(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1AB0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1AD0(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1B98(0x100)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x1C98(0xC8)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_Goop_AnimBP_C");
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
	void ExecuteUbergraph_Player_Goop_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

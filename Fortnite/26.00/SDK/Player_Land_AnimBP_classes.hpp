#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20E8 (0x36B8 - 0x15D0)
// AnimBlueprintGeneratedClass Player_Land_AnimBP.Player_Land_AnimBP_C
class UPlayer_Land_AnimBP_C : public UFortPlayerLandingAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x15D8(0x26)(HasGetValueTypeHash)
	uint8                                        Pad_76B5[0x2];                                     // Fixing Size After Last Property 
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x1600(0x8)(None)
	struct FAnimSubsystemInstance_NodeRelevancy  AnimBlueprintExtension_NodeRelevancy;              // 0x1608(0xA8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x16B0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x16B8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x16D8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1788(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x17A8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1858(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1878(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1928(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x1948(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1968(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x1988(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x19A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x19F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x1A38(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x1A80(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x1AC8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x1B10(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x1B58(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x1BA0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x1BE8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x1C30(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x1C78(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x1CC0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x1D08(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x1D50(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x1D98(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x1DE0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x1E28(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x1E70(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x1EB8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x1F00(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x1F48(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x1F90(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1FD8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x2020(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x2068(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x20B0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x20F8(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x2140(0x120)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x2260(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x22A8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x22F0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x2338(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x2380(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x23C8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x2410(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x2458(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x24A0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x24E8(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x2530(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x2550(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x2570(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x2590(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x25B0(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x2660(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2680(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x2730(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x2750(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x2798(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_3;                      // 0x27E0(0x10)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x27F0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x2810(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x2858(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x28A0(0x10)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x28B0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x28D0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x2918(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x2960(0x10)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x2970(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x2990(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2A40(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x2A60(0xB0)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x2B10(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2BC0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2BE0(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x2C90(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2CB0(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D60(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x2D80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2DA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x2DD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x2DF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x2E20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2E48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2E70(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x2E98(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x2F60(0x20)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x2F80(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x3048(0x20)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x3068(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3130(0x20)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_Layer;                               // 0x3150(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x3218(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3260(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3350(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x3398(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x33E0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x3428(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3470(0x48)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x34B8(0xC0)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x3578(0x10)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3588(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x35D0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x35F0(0xC8)(None)

	static class UClass* StaticClass();
	static class UPlayer_Land_AnimBP_C* GetDefaultObj();

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
	void OnLandingBecomesRelevant(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void OnLandingUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResult_AnimationState, enum class EAnimNodeReferenceConversionResult CallFunc_ConvertToAnimationStateResult_Result, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
	void ExecuteUbergraph_Player_Land_AnimBP(int32 EntryPoint);
};

}



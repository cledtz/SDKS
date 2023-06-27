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

// 0x2198 (0x3768 - 0x15D0)
// AnimBlueprintGeneratedClass Player_Land_AnimBP.Player_Land_AnimBP_C
class UPlayer_Land_AnimBP_C : public UFortPlayerLandingAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x15D8(0x26)(HasGetValueTypeHash)
	uint8                                        Pad_8F48[0x2];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x1600(0x8)()
	struct FAnimSubsystemInstance_NodeRelevancy  AnimBlueprintExtension_NodeRelevancy;              // 0x1608(0xA8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x16B0(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x16B8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x16D8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x1798(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x17B8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x1878(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1898(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1958(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1978(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1998(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x19B8(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x19D8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x1A20(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x1A68(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x1AB0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x1AF8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x1B40(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x1B88(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x1BD0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x1C18(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x1C60(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x1CA8(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x1CF0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x1D38(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x1D80(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x1DC8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x1E10(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x1E58(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x1EA0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x1EE8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x1F30(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x1F78(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x1FC0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x2008(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x2050(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x2098(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x20E0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x2128(0x48)()
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x2170(0x100)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x2270(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x22B8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x2300(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x2348(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x2390(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x23D8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x2420(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x2468(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x24B0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x24F8(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x2540(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x2560(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x2580(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x25A0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x25C0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x2680(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x26A0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x2760(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x2780(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x27A0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x27C0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x2808(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_3;                      // 0x2850(0x10)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x2860(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x2880(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x28C8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x2910(0x10)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x2920(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x2940(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x2988(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x29D0(0x10)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x29E0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x2A00(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2AC0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x2AE0(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x2BA0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2C60(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2C80(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x2D40(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2D60(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2E20(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x2E40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2E68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x2E90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x2EB8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x2EE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2F08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2F30(0x28)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x2F58(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x3020(0x20)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x3040(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x3108(0x20)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x3128(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x31F0(0x20)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_Layer;                               // 0x3210(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x32D8(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3320(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3400(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x3448(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3490(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x34D8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3520(0x48)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x3568(0xC0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x3628(0x10)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3638(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x3680(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x36A0(0xC8)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_Land_AnimBP_C");
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
	void OnLandingBecomesRelevant(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void OnLandingUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResult_AnimationState, enum class EAnimNodeReferenceConversionResult CallFunc_ConvertToAnimationStateResult_Result, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
	void ExecuteUbergraph_Player_Land_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

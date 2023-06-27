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

// 0x2FA0 (0x4570 - 0x15D0)
// AnimBlueprintGeneratedClass Player_InAir_AnimBP.Player_InAir_AnimBP_C
class UPlayer_InAir_AnimBP_C : public UFortPlayerAnimInstanceProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x15D8(0x83)(HasGetValueTypeHash)
	uint8                                        Pad_14F1[0x5];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x1660(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x1668(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x1670(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x1690(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x1750(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x1770(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x1830(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x1850(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1910(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_15;                  // 0x1930(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x1978(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x19C0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x1A08(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x1A50(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x1A98(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x1AE0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x1B28(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_7;                      // 0x1B70(0x10)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x1B80(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x1BC8(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x1C10(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1C58(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x1C78(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x1CC0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x1D08(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x1D50(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x1D98(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x1DE0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1E28(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x1E70(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_6;                      // 0x1EB8(0x10)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x1EC8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1F10(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x1F58(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1FA0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x1FC0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x2008(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x2050(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x2098(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x20E0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x2128(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x2170(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x21B8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x2200(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x2248(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_5;                      // 0x2290(0x10)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x22A0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x22E8(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x2330(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x2378(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x2398(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x23B8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x23D8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x23F8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x2418(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x24D8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x24F8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x25B8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x25D8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x25F8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x2618(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x2638(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x2658(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2678(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2738(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x2758(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x2818(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x28D8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x28F8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x29B8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x29D8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2A98(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2AB8(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x2B78(0x100)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x2C78(0xE0)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x2D58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x2D80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x2DA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x2DD0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x2DF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x2E20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x2E48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x2E70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x2E98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x2EC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x2EE8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x2F10(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x2F38(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x2F80(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x2FA0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x2FE8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x3008(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x3050(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x3070(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x3138(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x3160(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x3228(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x3250(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x3278(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x32A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x32C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x32F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3318(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x3340(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x3368(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3390(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x33B8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x33E0(0x28)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_4;                      // 0x3408(0x10)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x3418(0xC0)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x34D8(0xC8)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x35A0(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x3680(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x36C8(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_3;                      // 0x36E8(0x10)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x36F8(0xC0)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x37B8(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3880(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x38C8(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x39A8(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x39C8(0x10)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x39D8(0xC0)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_Layer;                               // 0x3A98(0xC8)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x3B60(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x3C40(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x3C88(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x3CA8(0xC8)()
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x3D70(0x100)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3E70(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x3EE0(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3FA8(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x3FD0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x4018(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4060(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x4088(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x40D0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x40F0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4138(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x4158(0xC8)()
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x4220(0x100)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x4320(0xE0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x4400(0x10)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x4410(0xE0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x44F0(0x10)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4500(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x4548(0x28)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_InAir_AnimBP_C");
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
	void AnimGraph(const struct FPoseLink& SourcePose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_InAir_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

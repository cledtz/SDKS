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

// 0x3FF0 (0x55C0 - 0x15D0)
// AnimBlueprintGeneratedClass Player_LocomotionAdditives_AnimBP.Player_LocomotionAdditives_AnimBP_C
class UPlayer_LocomotionAdditives_AnimBP_C : public UFortPlayerAnimInstanceProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x15D8(0x1A5)(HasGetValueTypeHash)
	uint8                                        Pad_9148[0x3];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x1780(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x1788(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0x1790(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0x17B0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0x1870(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x1890(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0x1950(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x1970(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0x1A30(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0x1A50(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0x1A70(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x1A90(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x1AB0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x1AD0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1AF0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1B10(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x1B30(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1BF0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0x1C10(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x1CD0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1CF0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x1D10(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x1D30(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x1D50(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x1D70(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x1D90(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x1E50(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x1E70(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x1F30(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1FF0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x2010(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x20D0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x20F0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x21B0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x21D0(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x2290(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x2350(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2370(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x2430(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x2450(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x2510(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x2530(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x25F0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x2610(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x26D0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x26F0(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x27B0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2870(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x2890(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x28B8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x28E0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x2908(0x28)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_17;                 // 0x2930(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_16;                 // 0x29A0(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x2A10(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x2A58(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_15;                 // 0x2AA0(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x2B10(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_14;                 // 0x2B30(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x2BA0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_13;                 // 0x2BE8(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_12;                 // 0x2C58(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x2CC8(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_11;                 // 0x2D10(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x2D80(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_10;                 // 0x2DC8(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x2E38(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0x2E80(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x2EF0(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x2F60(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x2FA8(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x2FC8(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x2FF0(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x30B8(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x3128(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x3198(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x31E0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x3228(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x3298(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x32E0(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x3350(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x3398(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x3408(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x3450(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x34C0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x3508(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3578(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x35E8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x3630(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x3650(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x3718(0x100)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x3818(0xC8)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_3;                      // 0x38E0(0x10)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x38F0(0xE0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x39D0(0x10)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x39E0(0xE0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x3AC0(0x10)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x3AD0(0xE0)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x3BB0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x3BD8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x3C00(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x3C28(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x3C50(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x3C78(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x3CA0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x3CC8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x3CF0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x3D18(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x3D40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x3D68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3D90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x3DB8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x3DE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3E08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3E30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x3E58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x3E80(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x3EA8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x3EF0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x3F38(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x3F80(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x3FC8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x4010(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x4058(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x40A0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x40E8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x4130(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x4150(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x4178(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x41C0(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x42A0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x42E8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x4330(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x4378(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x43C0(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x43E0(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x4408(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x4450(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x4530(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x4578(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x45C0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x4608(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x4650(0x20)()
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x4670(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x4770(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x4798(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x47E0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x4828(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x4870(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x4950(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x4998(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x49E0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x4A28(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x4A70(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x4A90(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x4AB8(0x48)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x4B00(0xC0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x4BC0(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x4C08(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x4CE8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x4D30(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x4D78(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x4DC0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x4E08(0x20)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x4E28(0xC0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x4EE8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x4F30(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4F78(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x4F98(0xC8)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x5060(0xC0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x5120(0x10)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5130(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x5178(0x48)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_Layer;                               // 0x51C0(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x5288(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x52A8(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x52D0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x52F0(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x53B8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x53D8(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x54A0(0x100)()
	bool                                         IsSnowman;                                         // 0x55A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9149[0x7];                                     // Fixing Size After Last Property..
	double                                       StartAnimBlendTime;                                // 0x55A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PivotAnimBlendTime;                                // 0x55B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CrouchPlayRate;                                    // 0x55B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_LocomotionAdditives_AnimBP_C");
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
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_LocomotionAdditives_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

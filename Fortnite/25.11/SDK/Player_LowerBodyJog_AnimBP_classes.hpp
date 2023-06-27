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

// 0x3BC8 (0x4768 - 0xBA0)
// AnimBlueprintGeneratedClass Player_LowerBodyJog_AnimBP.Player_LowerBodyJog_AnimBP_C
class UPlayer_LowerBodyJog_AnimBP_C : public UFortWalkAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0xBA8(0x12F)(HasGetValueTypeHash)
	uint8                                        Pad_8E2B[0x1];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0xCD8(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0xCE0(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0xCE8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0xD08(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0xDC8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0xDE8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0xEA8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0xEC8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0xF88(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0xFA8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0xFC8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0xFE8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1008(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1028(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x1048(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1068(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1088(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x1148(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x1168(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x1228(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x1248(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x1268(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x1288(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x12A8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x12C8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x12E8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x13A8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x13C8(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1488(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x1548(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x1568(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x1628(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1648(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1708(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x1728(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1798(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x17B8(0x48)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_9;                    // 0x1800(0xA8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x18A8(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x1918(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1988(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x19A8(0x70)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_8;                    // 0x1A18(0xA8)()
	struct FFortAnimNode_SpeedWarping            FortAnimGraphNode_SpeedWarping_2;                  // 0x1AC0(0x200)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x1CC0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x1CE0(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x1D00(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x1D48(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x1DB8(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x1E28(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x1E70(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1EE0(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1F28(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x1F48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x1F70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x1F98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x1FC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x1FE8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x2010(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x2038(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x2060(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x2088(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x20B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x20D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x2100(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x2128(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x2150(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x2178(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x21A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x21C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x21F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2218(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x2240(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x2268(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x2290(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x22B8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x22E0(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x2308(0x48)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_7;                    // 0x2350(0xA8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x23F8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x2440(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x2488(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x24D0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x2518(0x20)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x2538(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x2580(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x25A0(0x20)()
	struct FFortAnimNode_SpeedWarping            FortAnimGraphNode_SpeedWarping_1;                  // 0x25C0(0x200)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x27C0(0x48)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_6;                    // 0x2808(0xA8)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_5;                    // 0x28B0(0xA8)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_4;                    // 0x2958(0xA8)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_3;                    // 0x2A00(0xA8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x2AA8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x2AF0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x2B38(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x2B80(0x20)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x2BA0(0x48)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_2;                    // 0x2BE8(0xA8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x2C90(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x2CD8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x2D20(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x2D68(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x2DB0(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x2DD0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x2DF0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x2E10(0x128)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x2F38(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x2F80(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x2FC8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x3010(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x3058(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x30A0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x30E8(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3130(0xE0)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0x3210(0xA8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x32B8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x3300(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x3348(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x3390(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x33B0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x33D0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x33F0(0x128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x3518(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x3538(0x20)()
	struct FFortAnimNode_SpeedWarping            FortAnimGraphNode_SpeedWarping;                    // 0x3558(0x200)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x3758(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x37A0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x37E8(0x48)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x3830(0xC0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x38F0(0x48)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x3938(0xA8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x39E0(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3A00(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3A28(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3A70(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x3AB8(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x3B00(0xC8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x3BC8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x3BE8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x3C08(0x128)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x3D30(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3D50(0x28)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3D78(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3D98(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x3DB8(0x128)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3EE0(0x20)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x3F00(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x3FC8(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x4090(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_Layer;                               // 0x4158(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x4220(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x4290(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x4300(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x4348(0xC8)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x4410(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4458(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x44A0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x44C0(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4588(0x100)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x4688(0xC0)()
	double                                       JogStartPosition;                                  // 0x4748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CrouchPlayRate;                                    // 0x4750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PivotAnimBlendTime;                                // 0x4758(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StartAnimBlendTime;                                // 0x4760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_LowerBodyJog_AnimBP_C");
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
	void Movement_HeavyWeapon(struct FPoseLink* Movement_HeavyWeapon);
	void Movement_Crouching(struct FPoseLink* Movement_Crouching);
	void Movement_Standing(struct FPoseLink* Movement_Standing);
	void AnimGraph(const struct FPoseLink& UpperBody, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_LowerBodyJog_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

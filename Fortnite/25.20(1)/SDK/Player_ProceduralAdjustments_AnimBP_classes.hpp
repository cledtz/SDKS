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

// 0x6D64 (0x7B24 - 0xDC0)
// AnimBlueprintGeneratedClass Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C
class UPlayer_ProceduralAdjustments_AnimBP_C : public UFortPlayerProceduralAdjustmentsAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0xDC8(0xA)(HasGetValueTypeHash)
	uint8                                        Pad_8D4B[0x6];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0xDD8(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0xDE0(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_29;                             // 0xDE8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_18;                  // 0xE08(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_28;                             // 0xEC8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0xEE8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0xFA8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0xFC8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0x1088(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x10A8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0x1168(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x1188(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0x1248(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0x1268(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0x1288(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x12A8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x12C8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x12E8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1308(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1328(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0x1348(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x1408(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x1428(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x14E8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1508(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x1528(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x1548(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x1568(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x1588(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x15A8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x1668(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x1688(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x1748(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1808(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x1828(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x18E8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1908(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x19C8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_11;            // 0x19E8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_33;                       // 0x1A08(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_32;                       // 0x1B30(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_11;            // 0x1C58(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_31;                       // 0x1C78(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_30;                       // 0x1DA0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_29;                       // 0x1EC8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_28;                       // 0x1FF0(0x128)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x2118(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x21D8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_27;                       // 0x21F8(0x128)()
	struct FFortAnimNode_SlopeWarping            FortAnimGraphNode_SlopeWarping;                    // 0x2320(0x2E8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_26;                       // 0x2608(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_10;            // 0x2730(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x2750(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_10;            // 0x2798(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9;             // 0x27B8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_25;                       // 0x27D8(0x128)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0x2900(0xB0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_24;                       // 0x29B0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_23;                       // 0x2AD8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_22;                       // 0x2C00(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_21;                       // 0x2D28(0x128)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_17;                         // 0x2E50(0xE8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2F38(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x2FF8(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x30F8(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x3120(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9;             // 0x3148(0x20)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_16;                         // 0x3168(0xE8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x3250(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x3270(0xC0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_20;                       // 0x3330(0x128)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x3458(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8;             // 0x34A0(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x34C0(0x48)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_19;                       // 0x3508(0x128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7;             // 0x3630(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8;             // 0x3650(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7;             // 0x3670(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_18;                       // 0x3690(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_17;                       // 0x37B8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_16;                       // 0x38E0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_15;                       // 0x3A08(0x128)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x3B30(0x48)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_14;                       // 0x3B78(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x3CA0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0x3CC0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x3DE8(0x128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x3F10(0x20)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x3F30(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x4030(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x4058(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x4080(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x40A8(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x40D0(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x4118(0x28)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x4140(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x4160(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x4180(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x42A8(0x128)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x43D0(0xC0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x4490(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x44B0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x44D0(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x45F8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x4618(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x4638(0x128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x4760(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x4780(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x47A0(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x47C8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x48F0(0x128)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x4A18(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x4A40(0x48)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x4A88(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x4B48(0x100)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x4C48(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x4C68(0xC0)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_15;                         // 0x4D28(0xE8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x4E10(0x20)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_14;                         // 0x4E30(0xE8)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_2;                             // 0x4F18(0xF8)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1;                             // 0x5010(0xF8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_13;                         // 0x5108(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_12;                         // 0x51F0(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_11;                         // 0x52D8(0xE8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x53C0(0x20)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_10;                         // 0x53E0(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_9;                          // 0x54C8(0xE8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x55B0(0x128)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_8;                          // 0x56D8(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_7;                          // 0x57C0(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_6;                          // 0x58A8(0xE8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x5990(0x128)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_5;                          // 0x5AB8(0xE8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x5BA0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x5CC8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x5DF0(0x128)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_4;                          // 0x5F18(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_3;                          // 0x6000(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_2;                          // 0x60E8(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x61D0(0xE8)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x62B8(0xE8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x63A0(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x63C0(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x6408(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x64E8(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x6510(0x100)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x6610(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x6710(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x6738(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x6780(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x67C8(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x68C8(0x28)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_8;                   // 0x68F0(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x69B8(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x6AB8(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x6AE0(0x28)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_7;                   // 0x6B08(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_6;                   // 0x6BD0(0xC8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x6C98(0x128)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x6DC0(0x28)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x6DE8(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x6E08(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x6E50(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x6E70(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x6EB8(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x6FB8(0x28)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x6FE0(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x70A0(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x71A0(0x28)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_5;                   // 0x71C8(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x7290(0x28)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_4;                   // 0x72B8(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x7380(0x28)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_3;                   // 0x73A8(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x7470(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x7538(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x7560(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x7588(0x100)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x7688(0xB0)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x7738(0xC0)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x77F8(0xF8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x78F0(0xC8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x79B8(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x79D8(0x28)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x7A00(0xC8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7AC8(0x20)()
	bool                                         IsHidingInProp;                                    // 0x7AE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D4C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               RightHandOverride;                                 // 0x7AF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftHandOverride;                                  // 0x7B08(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EmoteAnimOffsetCurveName;                          // 0x7B20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_ProceduralAdjustments_AnimBP_C");
		return Clss;
	}

	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride);
	void CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK);
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
	void PostIKAdjustmentsLayer(const struct FPoseLink& InPosePostIkAdjustments, struct FPoseLink* PostIKAdjustmentsLayer);
	void PreIKAdjustmentsLayer(const struct FPoseLink& InPosePreIKAdjustments, struct FPoseLink* PreIKAdjustmentsLayer);
	void PlevisAndFeetAdjustmentsLayer(const struct FPoseLink& InPosePelvisAndFeetAdjustments, struct FPoseLink* PlevisAndFeetAdjustmentsLayer);
	void PushCannonAdjustmentsLayer(const struct FPoseLink& InPosePushCannonAdjustments, struct FPoseLink* PushCannonAdjustmentsLayer);
	void ParaGliderAdjustmentsLayer(const struct FPoseLink& InPoseParaGliderAdjustments, struct FPoseLink* ParaGliderAdjustmentsLayer);
	void HandIKFixUpLayer(const struct FPoseLink& InPoseHandIk, struct FPoseLink* HandIKFixUpLayer);
	void AnimGraph(const struct FPoseLink& InPosePostTurnInPlace, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_ProceduralAdjustments_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

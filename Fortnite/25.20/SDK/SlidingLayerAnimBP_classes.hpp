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

// 0x1750 (0x1C20 - 0x4D0)
// AnimBlueprintGeneratedClass SlidingLayerAnimBP.SlidingLayerAnimBP_C
class USlidingLayerAnimBP_C : public UFortSlidingLayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x4D8(0x3D)(HasGetValueTypeHash)
	uint8                                        Pad_1EE1[0x3];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x518(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x520(0x8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x528(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x5E8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x6A8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x6C8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x788(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x7A8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x868(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x888(0xC0)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_5;            // 0x948(0xD0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xA18(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0xA38(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xAA8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0xAF0(0x10)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0xB00(0x70)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_4;            // 0xB70(0xD0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0xC40(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xC60(0xC0)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0xD20(0xB0)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xDD0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xDF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xE20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xE48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xE70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xE98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xEC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0xEE8(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xF10(0x48)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_3;            // 0xF58(0xD0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1028(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x1070(0x70)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_2;            // 0x10E0(0xD0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x11B0(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1220(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1268(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x1288(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x12F8(0x20)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x1318(0xD0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x13E8(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1430(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x14A0(0x20)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x14C0(0xD0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1590(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x15D8(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1648(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1668(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1730(0x100)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1830(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1878(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x18A0(0x28)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x18C8(0xB0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1978(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x1A38(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1A58(0xC0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1B18(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1B60(0x20)()
	bool                                         IsKneeSliding;                                     // 0x1B80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         b_KneeSlideNote_bTransition_FullBody_Sprinting;    // 0x1B81(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE2[0x6];                                     // Fixing Size After Last Property..
	struct FRotator                              KneeSlideLowerBodyInitialRot_0;                    // 0x1B88(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              KneeSlideLowerBodyInitialRotSmooth_0;              // 0x1BA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                       FortPlayerPawn_0;                                  // 0x1BB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*               Fort_Player_Anim_Instance;                         // 0x1BC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Delta_Time_;                                       // 0x1BC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       KneeSlideLowerBodyYawOffset;                       // 0x1BD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       KneeSlideRootYawOffset_0;                          // 0x1BD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VelocityAimYawDelta_0;                             // 0x1BE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       KneeSlideSlopeAngle_0;                             // 0x1BE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       KneeSlideSlopeYaw_0;                               // 0x1BF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       KneeSlideSlopeYawMinusRootRot_0;                   // 0x1BF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransitionToKneeSlide;                             // 0x1C00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE3[0x7];                                     // Fixing Size After Last Property..
	double                                       KneeSlideForwardVectorVelocityDelta_0;             // 0x1C08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InitiatedSlideUpHill;                              // 0x1C10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BypassEntry_0;                                     // 0x1C11(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE4[0x6];                                     // Fixing Size After Last Property..
	double                                       SpineTweakLean_0;                                  // 0x1C18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlidingLayerAnimBP_C");
		return Clss;
	}

	void MovementMode_AimOffset(const struct FPoseLink& InAimOffsetsPose, const struct FPoseLink& InSourcePosePreAimOffsets, struct FPoseLink* MovementMode_AimOffset);
	void MovementMode_FinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* MovementMode_FinalPoseOverride);
	void MovementMode_FullBodyOverride(const struct FPoseLink& InputPoseFullBody, struct FPoseLink* MovementMode_FullBodyOverride);
	void MovementMode_SourcePose(const struct FPoseLink& InSourcePoseBase, struct FPoseLink* MovementMode_SourcePose);
	void MovementMode_LowerBodyOverride(const struct FPoseLink& InLowerBodyPose, const struct FPoseLink& InSourcePose, struct FPoseLink* MovementMode_LowerBodyOverride);
	void MovementMode_LocomotionAdditives(const struct FPoseLink& InLocomotionAdditivesPose, struct FPoseLink* MovementMode_LocomotionAdditives);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6();
	void ExecuteUbergraph_SlidingLayerAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, double CallFunc_Abs_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_A_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

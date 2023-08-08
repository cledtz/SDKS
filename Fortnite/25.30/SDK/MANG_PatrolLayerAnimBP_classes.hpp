#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCE0 (0x11B0 - 0x4D0)
// AnimBlueprintGeneratedClass MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C
class UMANG_PatrolLayerAnimBP_C : public UFortPatrolAnimLayer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x4D8(0x1C)(HasGetValueTypeHash)
	uint8                                        Pad_70A4[0x4];                                     // Fixing Size After Last Property
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x4F8(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x500(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x508(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x528(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x5E8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x608(0xC0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x6C8(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x710(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x738(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x760(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x788(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x7B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x7D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x800(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x828(0x28)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x850(0x70)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x8C0(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x9A0(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x9C8(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x9E8(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0xA10(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xA30(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0xAA0(0xC8)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xB68(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0xC48(0x28)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xC70(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xCE0(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xD00(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0xD28(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xDF0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xE38(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xE58(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0xF20(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1020(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1048(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1090(0x100)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1190(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MANG_PatrolLayerAnimBP_C");
		return Clss;
	}

	void CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK);
	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MANG_PatrolLayerAnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

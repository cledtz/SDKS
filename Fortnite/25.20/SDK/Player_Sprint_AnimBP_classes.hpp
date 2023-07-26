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

// 0x11C0 (0x1890 - 0x6D0)
// AnimBlueprintGeneratedClass Player_Sprint_AnimBP.Player_Sprint_AnimBP_C
class UPlayer_Sprint_AnimBP_C : public UFortSprintAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x6D8(0x29)(HasGetValueTypeHash)
	uint8                                        Pad_911C[0x7];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x708(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x710(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x718(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x738(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x760(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x788(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x7B0(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x7D8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x820(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x868(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x8B0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x8D0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x918(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x960(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x9A8(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x9C8(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x9F0(0xC8)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0xAB8(0xB0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0xB68(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0xBD8(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0xCA0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xD68(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xDB0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xDF8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xE40(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xE88(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xED0(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0xF18(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0xFE0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x10A8(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x10F0(0xC8)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x11B8(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1200(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x1228(0xE0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1308(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1378(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x13E8(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1430(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1458(0x28)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x1480(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x14C8(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x15A8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x15C8(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1690(0x100)()
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x1790(0x100)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_Sprint_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_Sprint_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

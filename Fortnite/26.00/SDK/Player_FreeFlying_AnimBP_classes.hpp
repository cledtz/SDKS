#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x818 (0x1DE0 - 0x15C8)
// AnimBlueprintGeneratedClass Player_FreeFlying_AnimBP.Player_FreeFlying_AnimBP_C
class UPlayer_FreeFlying_AnimBP_C : public UFortPlayerAnimInstanceProxy
{
public:
	uint8                                        Pad_74A3[0x8];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x15D8(0x44)(HasGetValueTypeHash)
	uint8                                        Pad_74A4[0x4];                                     // Fixing Size After Last Property 
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x1620(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x1628(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1630(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1650(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x1678(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x16C0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x1708(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1750(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1798(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x17E0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1828(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1870(0x70)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x18E0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x19A8(0x20)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x19C8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1A10(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1A58(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1AA0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1AE8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1B30(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1B78(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1BC0(0x70)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x1C30(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1CF8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1D18(0xC8)(None)

	static class UClass* StaticClass();
	static class UPlayer_FreeFlying_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_FreeFlying_AnimBP(int32 EntryPoint);
};

}



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

// 0x8C9 (0xD39 - 0x470)
// AnimBlueprintGeneratedClass Player_DBNO_AnimBP.Player_DBNO_AnimBP_C
class UPlayer_DBNO_AnimBP_C : public UFortDBNOAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x478(0x18)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x490(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x498(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4A0(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x4C0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x4E8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x510(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x538(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x560(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x588(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x5B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x600(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x628(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x650(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x698(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x6B8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x700(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x720(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x768(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x788(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x7F8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x818(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x860(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x880(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x8A8(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x970(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xA38(0x70)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xAA8(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xBD0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xBF0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xC10(0x128)()
	bool                                         AdjustLargeBody;                                   // 0xD38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_DBNO_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_DBNO_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

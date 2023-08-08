#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E0 (0x940 - 0x460)
// AnimBlueprintGeneratedClass Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C
class UPlayer_BuildingPose_AnimBP_C : public UFortPlayerBuildingAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x468(0x5)(HasGetValueTypeHash)
	uint8                                        Pad_7557[0x3];                                     // Fixing Size After Last Property
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x470(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x478(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x480(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x4A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x4C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x4F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x518(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x540(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x588(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x5D0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x618(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x660(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x6A8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x6F0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x738(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x758(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x7A0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x7E8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x830(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x850(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x878(0xC8)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_BuildingPose_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_BuildingPose_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

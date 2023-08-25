#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA88 (0xDD0 - 0x348)
// AnimBlueprintGeneratedClass Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C
class UFringe_Plank_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_7A8E[0x8];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x388(0xB0)(None)
	uint8                                        Pad_7A8F[0x8];                                     // Fixing Size After Last Property 
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x440(0x950)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xD90(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xDB0(0x20)(None)

	static class UClass* StaticClass();
	static class UFringe_Plank_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Fringe_Plank_AnimBP(int32 EntryPoint);
};

}



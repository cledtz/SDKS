#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x438 - 0x348)
// AnimBlueprintGeneratedClass Player_Locomotion_Prototype_Template.Player_Locomotion_Prototype_Template_C
class UPlayer_Locomotion_Prototype_Template_C : public UAnimInstance
{
public:
	uint8                                        Pad_711F[0x8];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x388(0xB0)(None)

	static class UClass* StaticClass();
	static class UPlayer_Locomotion_Prototype_Template_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InSourcePose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_Locomotion_Prototype_Template(int32 EntryPoint);
};

}



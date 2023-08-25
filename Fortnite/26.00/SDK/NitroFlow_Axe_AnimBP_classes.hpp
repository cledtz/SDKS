#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x830 - 0x6F8)
// AnimBlueprintGeneratedClass NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C
class UNitroFlow_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_3054[0x8];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x708(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x710(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x718(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x738(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7E8(0x48)(None)

	static class UClass* StaticClass();
	static class UNitroFlow_Axe_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_NitroFlow_Axe_AnimBP(int32 EntryPoint);
};

}



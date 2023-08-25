#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x888 - 0x6F8)
// AnimBlueprintGeneratedClass F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint.F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C
class UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_AD1[0x8];                                      // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x708(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x710(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x718(0x20)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x738(0x150)(ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UF_MED_Ramirez_Fallback_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Ramirez_Fallback_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}



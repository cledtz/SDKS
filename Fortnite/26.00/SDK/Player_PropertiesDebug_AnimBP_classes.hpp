#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x508 - 0x4C0)
// AnimBlueprintGeneratedClass Player_PropertiesDebug_AnimBP.Player_PropertiesDebug_AnimBP_C
class UPlayer_PropertiesDebug_AnimBP_C : public UFortPlayerDebugAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x4C8(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x4D0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4D8(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x4F8(0x10)(None)

	static class UClass* StaticClass();
	static class UPlayer_PropertiesDebug_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_PropertiesDebug_AnimBP(int32 EntryPoint);
};

}



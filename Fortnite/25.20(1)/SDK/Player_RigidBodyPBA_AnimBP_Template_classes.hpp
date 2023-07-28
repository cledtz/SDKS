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

// 0xF8 (0x448 - 0x350)
// AnimBlueprintGeneratedClass Player_RigidBodyPBA_AnimBP_Template.Player_RigidBodyPBA_AnimBP_Template_C
class UPlayer_RigidBodyPBA_AnimBP_Template_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x388(0xC0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_RigidBodyPBA_AnimBP_Template_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_RigidBodyPBA_AnimBP_Template(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

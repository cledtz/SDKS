#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAE0 (0xE30 - 0x350)
// AnimBlueprintGeneratedClass Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C
class UFringe_Plank_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x388(0xC0)()
	uint8                                        Pad_7C74[0x8];                                     // Fixing Size After Last Property
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x450(0x9A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xDF0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xE10(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fringe_Plank_AnimBP_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Fringe_Plank_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

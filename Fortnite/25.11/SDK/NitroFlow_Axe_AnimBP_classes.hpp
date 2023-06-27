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

// 0x140 (0x840 - 0x700)
// AnimBlueprintGeneratedClass NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C
class UNitroFlow_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x708(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x710(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x718(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x738(0xC0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7F8(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NitroFlow_Axe_AnimBP_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_NitroFlow_Axe_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

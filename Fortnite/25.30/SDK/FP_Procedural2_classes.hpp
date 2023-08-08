#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7D8 (0x10A8 - 0x8D0)
// AnimBlueprintGeneratedClass FP_Procedural2.FP_Procedural2_C
class UFP_Procedural2_C : public UFortFirstPersonProceduralAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x8D8(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x8E0(0x8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x8E8(0x128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xA10(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xA30(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xB58(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xC80(0x128)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xDA8(0xC0)()
	struct FFortAnimNode_CachePose               FortAnimGraphNode_CachePose;                       // 0xE68(0xD8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xF40(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xF60(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xF80(0x128)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FP_Procedural2_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_FP_Procedural2(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

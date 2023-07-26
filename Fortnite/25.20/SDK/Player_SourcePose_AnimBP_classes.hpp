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

// 0x550 (0x1B20 - 0x15D0)
// AnimBlueprintGeneratedClass Player_SourcePose_AnimBP.Player_SourcePose_AnimBP_C
class UPlayer_SourcePose_AnimBP_C : public UFortPlayerAnimInstanceProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x15D8(0x71)(HasGetValueTypeHash)
	uint8                                        Pad_7D07[0x7];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x1650(0x8)()
	struct FAnimSubsystemInstance_NodeRelevancy  AnimBlueprintExtension_NodeRelevancy;              // 0x1658(0xA8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x1700(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1708(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x1728(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x1770(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x17B8(0x48)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_7;                 // 0x1800(0x40)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_6;                 // 0x1840(0x40)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_5;                 // 0x1880(0x40)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_4;                 // 0x18C0(0x40)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x1900(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1948(0x48)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_3;                 // 0x1990(0x40)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x19D0(0x48)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2;                 // 0x1A18(0x40)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x1A58(0x40)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x1A98(0x40)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1AD8(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Player_SourcePose_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ResetBlendListNode(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult CallFunc_ConvertToBlendListBase_Result, const struct FBlendListBaseReference& CallFunc_ConvertToBlendListBase_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void ExecuteUbergraph_Player_SourcePose_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

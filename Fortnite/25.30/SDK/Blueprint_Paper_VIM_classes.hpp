#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14B0 (0x19F0 - 0x540)
// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x548(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x550(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x558(0x20)()
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0x578(0x10)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x588(0x20)()
	uint8                                        Pad_6D25[0x8];                                     // Fixing Size After Last Property
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0x5B0(0x510)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0xAC0(0x510)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0xFD0(0x510)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x14E0(0x510)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Blueprint_Paper_VIM_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B();
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint, double CallFunc_Add_DoubleDouble_ReturnValue, float K2Node_StructMemberSet_Alpha_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_2, float K2Node_StructMemberSet_Alpha_ImplicitCast_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

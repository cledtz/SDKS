#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1138 (0x1838 - 0x700)
// AnimBlueprintGeneratedClass Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
class UMechanical_Engineer_Female_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x708(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x710(0x8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x718(0xC0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x7D8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7F8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x818(0x20)()
	uint8                                        Pad_59AB[0x8];                                     // Fixing Size After Last Property
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x840(0x510)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xD50(0x9A0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x16F0(0x128)()
	struct FRotator                              Gear_rot;                                          // 0x1818(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                Skel_mesh;                                         // 0x1830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mechanical_Engineer_Female_AnimBP_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput, float CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

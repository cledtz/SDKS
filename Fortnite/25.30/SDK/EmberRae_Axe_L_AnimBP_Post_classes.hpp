#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC28 (0x1328 - 0x700)
// AnimBlueprintGeneratedClass EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C
class UEmberRae_Axe_L_AnimBP_Post_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x708(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x710(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x718(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x738(0xC0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7F8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x818(0x20)()
	uint8                                        Pad_40D6[0x8];                                     // Fixing Size After Last Property
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x840(0x9A0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x11E0(0x128)()
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x1308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TranslateMSTR;                                     // 0x1310(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmberRae_Axe_L_AnimBP_Post_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, float CallFunc_GetAlphaFromReferenceTransformDelta_AlphaOutput, float CallFunc_GetAlphaFromReferenceTransformDelta_RawOutput, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTimeX, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

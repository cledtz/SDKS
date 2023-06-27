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

// 0x1A91 (0x2311 - 0x880)
// AnimBlueprintGeneratedClass RidingPlayerLayerAnimBP.RidingPlayerLayerAnimBP_C
class URidingPlayerLayerAnimBP_C : public UFortValetPassengerAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x888(0x1C)(HasGetValueTypeHash)
	uint8                                        Pad_937F[0x4];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x8A8(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x8B0(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x8B8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x8D8(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x998(0x100)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xA98(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0xB78(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xBA0(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xCC8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xCE8(0x20)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0xD08(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0xE08(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0xE30(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0xE78(0x28)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0xEA0(0xA8)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xF48(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xF90(0x48)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0xFD8(0x118)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x10F0(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x1160(0xC8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1228(0x128)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x1350(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1410(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x1430(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x1478(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x14C0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x1508(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1550(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x1650(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1678(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x16A0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x16E8(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x1758(0x48)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x17A0(0xA8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1848(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1890(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x18D8(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1900(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1948(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1990(0x48)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x19D8(0x118)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1AF0(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1B18(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1C40(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1D68(0x128)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x1E90(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x1EB0(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x1F70(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x2030(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x2050(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2110(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x21D0(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2290(0x20)()
	struct FRotator                              MatchRootYaw;                                      // 0x22B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Targeting;                                      // 0x22C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9380[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       FortPlayer;                                        // 0x22D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Timer;                                             // 0x22D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldTransitionToRiding;                          // 0x22E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9381[0x7];                                     // Fixing Size After Last Property..
	double                                       LowerBodyYaw;                                      // 0x22E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRideMode;                                        // 0x22F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSprinting;                                       // 0x22F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStandingStill;                                   // 0x22F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInCombat;                                        // 0x22F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9382[0x4];                                     // Fixing Size After Last Property..
	class AFortAIPawn*                           WildlifePawn;                                      // 0x22F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSmackie;                                         // 0x2300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9383[0x7];                                     // Fixing Size After Last Property..
	double                                       Velocity;                                          // 0x2308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNug;                                             // 0x2310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RidingPlayerLayerAnimBP_C");
		return Clss;
	}

	void VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride);
	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D1B22730415169A7290CBFAD6C915976();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RidingPlayerLayerAnimBP_AnimGraphNode_RotateRootBone_D73766CE4BF0C956278D7FA8259A40CA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_RidingPlayerLayerAnimBP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, class UCreatureBaseRidableComponent_C* K2Node_DynamicCast_AsCreature_Base_Ridable_Component, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_NormalizeAxis_ReturnValue, bool CallFunc_HasCurrentMontage_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FRotator& CallFunc_TransformRotation_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_StructMemberSet_Yaw_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double K2Node_VariableSet_LowerBodyYaw_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

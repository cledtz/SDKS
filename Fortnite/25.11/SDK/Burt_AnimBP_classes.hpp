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

// 0x3E90 (0x4610 - 0x780)
// AnimBlueprintGeneratedClass Burt_AnimBP.Burt_AnimBP_C
class UBurt_AnimBP_C : public UFortAIFaunaAnimInstance_Burt
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x780(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x788(0x68)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x7F0(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x7F8(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x800(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x820(0xC0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x8E0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x928(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x970(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x9B8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x9D8(0xC0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0xA98(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xAE0(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_53;                 // 0xB00(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52;                 // 0xB28(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_51;                 // 0xB50(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0xB78(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0xBA0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0xBC8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0xBF0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0xC18(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0xC40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0xC68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0xC90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0xCB8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0xCE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0xD08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0xD30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0xD58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0xD80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0xDA8(0x28)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0xDD0(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_11;                    // 0xE40(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0xF08(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0xF50(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0xF98(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0xFE0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x1000(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x1048(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x1068(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x10B0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x10D0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x1118(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x1138(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x1160(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x1188(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x11D0(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_3;                      // 0x11F0(0x10)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x1200(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x1220(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_10;                    // 0x12E8(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9;                     // 0x13B0(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x1478(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x14E8(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x1558(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1578(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x15A0(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x15E8(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x16C8(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1710(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x1738(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x1780(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_8;                     // 0x17C8(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x1890(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x1900(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0x1920(0xC8)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x19E8(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1A30(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1A50(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x1A70(0x48)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x1AB8(0xF8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_7;                     // 0x1BB0(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x1C78(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x1CA0(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x1CC8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x1D10(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x1D30(0x10)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x1D40(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0x1D60(0xC8)()
	struct FFortAnimNode_QuadrupedSlopeWarping   FortAnimGraphNode_QuadrupedSlopeWarping;           // 0x1E28(0x5C8)()
	struct FFortAnimNode_WeightedLookAt          FortAnimGraphNode_WeightedLookAt;                  // 0x23F0(0x250)()
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x2640(0x100)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x2740(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x2808(0x100)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x2908(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x2950(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x2998(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x29E0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x2A08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x2A30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x2A58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x2A80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x2AA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x2AD0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x2AF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x2B20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x2B48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x2B70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x2B98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x2BC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x2BE8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x2C10(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x2C38(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x2C60(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x2C88(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x2CB0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x2CF8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x2D40(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x2D88(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x2DA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x2DD0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x2DF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x2E20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x2E48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x2E70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x2E98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x2EC0(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x2EE8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x2F30(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x2F50(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x2F98(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x2FB8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x3000(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x3020(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x3068(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x3088(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x30B0(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x3178(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x3198(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x31E0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x3200(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x3248(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x3268(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x32B0(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x32D0(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x32F8(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x33C0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x33E0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x3428(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x3470(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x34B8(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x34D8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x3520(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x3568(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_6;                     // 0x35D8(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x36A0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x36E8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x3730(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x3778(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x3798(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x37E0(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0x3850(0xC8)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x3918(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x3960(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x39A8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x39C8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x3A10(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x3A30(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x3A78(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x3A98(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0x3B08(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x3BD0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x3C18(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x3C60(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x3CD0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3D98(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3DE0(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3E28(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3E50(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x3E78(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x3EC0(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x3EE0(0x10)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x3EF0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x3F10(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x3FD8(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x40A0(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x4168(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x41D8(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4248(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x4268(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x42B0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x42D0(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x4398(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x4460(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4488(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x44B0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x44F8(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x4518(0x10)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4528(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x4548(0xC8)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Burt_AnimBP_C");
		return Clss;
	}

	void Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn);
	void Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Burt_AnimBP_AnimGraphNode_BlendSpacePlayer_2DD8FBAB4C767B0770C81BBB25A41BD3();
	void AnimNotify_FallExit();
	void AnimNotify_LandAddExit();
	void AnimNotify_LandEnter();
	void ExecuteUbergraph_Burt_AnimBP(int32 EntryPoint, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_3_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

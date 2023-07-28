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

// 0x1720 (0x1E40 - 0x720)
// AnimBlueprintGeneratedClass Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
class UGameplay_FaceSystem_StateMachine_AnimBP_C : public UCCP_AnimInstance_Head_GameplayFaceSystemStateMachine
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x720(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x728(0x14)(HasGetValueTypeHash)
	uint8                                        Pad_8F50[0x4];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x740(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x748(0x8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x750(0x100)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x850(0xC0)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x910(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x938(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x960(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x988(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x9B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x9D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0xA00(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0xA28(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0xA50(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0xA78(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0xAA0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0xAC8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0xAF0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0xB18(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0xB40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0xB68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0xB90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0xBB8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0xBE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0xC08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0xC30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0xC58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0xC80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0xCA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0xCD0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0xCF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0xD20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0xD48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0xD70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0xD98(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0xDC0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0xE08(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0xE28(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0xE70(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0xE90(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0xED8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0xEF8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0xF40(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0xF60(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0xFA8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0xFC8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x1010(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x1030(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x1078(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1098(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x10E0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1100(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x1148(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x1168(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x11B0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x11D0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x1218(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x1238(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x1280(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x12A0(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x1310(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x1330(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x1378(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x1398(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x13E0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1400(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x1448(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x1468(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x14D8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x14F8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x1540(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x1560(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x1628(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x1650(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x1678(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x16A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x16C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x16F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x1718(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x1740(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x1768(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x1790(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x17B8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x17E0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x1808(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x1830(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x1858(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1880(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x18A8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x18D0(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x18F8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x1940(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x1960(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x19A8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x19C8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x1A10(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1A30(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x1A78(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1A98(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x1AE0(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1B00(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x1B70(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1B90(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1BD8(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1BF8(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1C68(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1C88(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1CD0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1CF0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1D38(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1D58(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1E20(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Gameplay_FaceSystem_StateMachine_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

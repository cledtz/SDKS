#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1698 (0x1DB8 - 0x720)
// AnimBlueprintGeneratedClass Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
class UGameplay_FaceSystem_StateMachine_AnimBP_C : public UCCP_AnimInstance_Head_GameplayFaceSystemStateMachine
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x720(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x728(0x14)(HasGetValueTypeHash)
	uint8                                        Pad_76D0[0x4];                                     // Fixing Size After Last Property 
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x740(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x748(0x8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x750(0x78)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x7C8(0xC0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x888(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x8B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x8D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x900(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x928(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x950(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x978(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x9A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x9C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x9F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0xA18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0xA40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0xA68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0xA90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0xAB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0xAE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0xB08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0xB30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0xB58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0xB80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0xBA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0xBD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0xBF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0xC20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0xC48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0xC70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0xC98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0xCC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0xCE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0xD10(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0xD38(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0xD80(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0xDA0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0xDE8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0xE08(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0xE50(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0xE70(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0xEB8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0xED8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0xF20(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0xF40(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0xF88(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0xFA8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0xFF0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1010(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x1058(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1078(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x10C0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x10E0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x1128(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x1148(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x1190(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x11B0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x11F8(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x1218(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x1288(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x12A8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x12F0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x1310(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x1358(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1378(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x13C0(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x13E0(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x1450(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1470(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x14B8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x14D8(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x15A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x15C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x15F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x1618(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x1640(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x1668(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x1690(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x16B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x16E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x1708(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x1730(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x1758(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x1780(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x17A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x17D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x17F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1820(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1848(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x1870(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x18B8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x18D8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x1920(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1940(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x1988(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x19A8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x19F0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1A10(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x1A58(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1A78(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x1AE8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1B08(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1B50(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1B70(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1BE0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1C00(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1C48(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1C68(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1CB0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1CD0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1D98(0x20)(None)

	static class UClass* StaticClass();
	static class UGameplay_FaceSystem_StateMachine_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32 EntryPoint);
};

}


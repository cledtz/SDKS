#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6988 (0x6CD0 - 0x348)
// AnimBlueprintGeneratedClass ABP_CharacterPG_TP.ABP_CharacterPG_TP_C
class UABP_CharacterPG_TP_C : public UAnimInstance
{
public:
	uint8                                        Pad_333A[0x8];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x39)(HasGetValueTypeHash)
	uint8                                        Pad_333B[0x7];                                     // Fixing Size After Last Property 
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x398(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x3A0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x3A8(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x3C8(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x4D0(0x108)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x5D8(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x6B8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x6E0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x708(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x730(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x810(0x28)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x838(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x900(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x9C8(0x108)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_3;                   // 0xAD0(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0xB98(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9;             // 0xCC0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9;             // 0xCE0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0xD00(0x128)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0xE28(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0xE48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0xE70(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_17;                    // 0xE98(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0xF60(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0xF88(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_37;                      // 0xFD0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_17;                     // 0xFF0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36;                      // 0x10B8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x10D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x1100(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x1128(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x1150(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x1178(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_16;                    // 0x11A0(0xC8)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3;                       // 0x1268(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x1330(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_35;                      // 0x1378(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x1398(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_15;                    // 0x13C0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x1488(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x14D0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_16;                     // 0x14F0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x15B8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x15D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x1600(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x1628(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x1650(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x1678(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x16A0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x16C8(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_14;                    // 0x1710(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_13;                    // 0x17D8(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x18A0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x18E8(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x1910(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8;             // 0x1A38(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8;             // 0x1A58(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x1A78(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x1A98(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_12;                    // 0x1AC0(0xC8)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x1B88(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x1C50(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x1C98(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x1CB8(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_11;                    // 0x1CE0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x1DA8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x1DF0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_15;                     // 0x1E10(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x1ED8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_14;                     // 0x1EF8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x1FC0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_13;                     // 0x1FE0(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x20A8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x21D0(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7;             // 0x22F8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7;             // 0x2318(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x2338(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x2360(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x2388(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_10;                    // 0x23B0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x2478(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x24C0(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x24E0(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9;                     // 0x2508(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x25D0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x2618(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_12;                     // 0x2638(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x2700(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_11;                     // 0x2720(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x27E8(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2830(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_8;                     // 0x2878(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x2940(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x2968(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x2990(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x29B8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x29D8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x2A20(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x2A40(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_10;                     // 0x2A60(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_7;                     // 0x2B28(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_6;                     // 0x2BF0(0xC8)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x2CB8(0x10)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x2CC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x2CF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x2D18(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x2D40(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x2D88(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x2DA8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x2DF0(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x2E10(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_9;                      // 0x2E30(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x2EF8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8;                      // 0x2F18(0xC8)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x2FE0(0x10)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2FF0(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x30B8(0x108)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x31C0(0x280)(None)
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik_1;                            // 0x3440(0x1F0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x3630(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x3650(0xF0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x3740(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x3868(0x20)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x3888(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x3950(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x3970(0x128)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x3A98(0xF0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x3B88(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x3BA8(0x40)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x3BE8(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x3CC8(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x3DD0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x3E18(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x3F20(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x3F48(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3F68(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0x3FB0(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x4078(0x128)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x41A0(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x41E8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x4208(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x4228(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x4330(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x4458(0x128)(None)
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik;                              // 0x4580(0x1F0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4770(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x4878(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x48A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x48C8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x48F0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x4918(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x4940(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x4960(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x4980(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x49A0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x4AC8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x4AE8(0x20)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x4B08(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x4BD0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x4BF8(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x4C20(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x4D48(0x128)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x4E70(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x4E90(0x40)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x4ED0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x4EF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x4F18(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0x4F40(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x5008(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x5050(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x5078(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x50A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x50E8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x5108(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x5150(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x5170(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x5238(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x5258(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x5280(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x52A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x52D0(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x52F8(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x5368(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x5388(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x53D0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0x53F0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x54B8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x54D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x5500(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x5528(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x5550(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x5578(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x55A0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x55C8(0x48)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x5610(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x56D8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x5720(0x20)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x5740(0xA8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x57E8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x5830(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x5850(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x58C0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0x58E0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x59A8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x59C8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x5A90(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x5AB0(0xC8)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x5B78(0x118)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x5C90(0x118)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x5DA8(0xE0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x5E88(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x5F50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x5F78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5FA0(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x5FC8(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x5FE8(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x60C8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x6110(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x6130(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x6150(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x6218(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x62E0(0xC8)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x63A8(0x10)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x63B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x63E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x6408(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x6430(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x6478(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x6498(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x64E0(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x6500(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x6520(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x65E8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x6608(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x66D0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x67F8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x6818(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x6838(0x20)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x6858(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x6920(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x69E8(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x6AB0(0x48)(None)
	bool                                         K2Node_PropertyAccess_22;                          // 0x6AF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_21;                          // 0x6AF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_20;                          // 0x6AFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_19;                          // 0x6AFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_18;                          // 0x6AFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_17;                          // 0x6AFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_16;                          // 0x6AFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_15;                          // 0x6AFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_14;                          // 0x6B00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_13;                          // 0x6B01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_12;                          // 0x6B02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_11;                          // 0x6B03(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_10;                          // 0x6B04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_9;                           // 0x6B05(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_8;                           // 0x6B06(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_7;                           // 0x6B07(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_6;                           // 0x6B08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_5;                           // 0x6B09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_4;                           // 0x6B0A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_3;                           // 0x6B0B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_2;                           // 0x6B0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_1;                           // 0x6B0D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3348[0x2];                                     // Fixing Size After Last Property 
	struct FVector                               K2Node_PropertyAccess;                             // 0x6B10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_Game_Character_C*               Character;                                         // 0x6B28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Alive;                                          // 0x6B30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3349[0x7];                                     // Fixing Size After Last Property 
	double                                       MoveSpeed;                                         // 0x6B38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSprinting;                                       // 0x6B40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334A[0x7];                                     // Fixing Size After Last Property 
	double                                       MoveDirection;                                     // 0x6B48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaMoveDirection;                                // 0x6B50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Time;                                        // 0x6B58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334B[0x4];                                     // Fixing Size After Last Property 
	class UItem_Gun_General*                     Current_Gun;                                       // 0x6B60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CurrentGunClass;                                   // 0x6B68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         GunIdlePose;                                       // 0x6B70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               IK_LeftHandPosition;                               // 0x6B78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGripExists;                                      // 0x6B90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334C[0x7];                                     // Fixing Size After Last Property 
	class UAnimSequence*                         GripHandPose;                                      // 0x6B98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              IK_LeftHandRotation;                               // 0x6BA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       DeltaCharacterYawRotation;                         // 0x6BB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaCharacterPitchRotation;                       // 0x6BC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CameraPitch;                                       // 0x6BC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CameraPitchAlpha;                                  // 0x6BD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeanBodyAlphaInterp;                               // 0x6BD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334D[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               GunFinalPosition;                                  // 0x6BE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              GunFinalRotation;                                  // 0x6BF8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            GunLeftHandOffset;                                 // 0x6C10(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Watch_Offset;                                      // 0x6C70(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_CharacterPG_TP_C* GetDefaultObj();

	void PoseBlending(const struct FPoseLink& BaseLocomotion, const struct FPoseLink& BasePose, struct FPoseLink* PoseBlending);
	void GunLocomotion(const struct FPoseLink& BaseFinal, struct FPoseLink* GunLocomotion);
	void BasePose(struct FPoseLink* BasePose);
	void BaseLocomotion(struct FPoseLink* BaseLocomotion);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void FootStep_Cloth(double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_2, bool CallFunc_GetIsSprinting_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsFalling_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_BooleanAND_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Default_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast);
	void JumpEvent(bool IsStart, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class USoundBase* Temp_object_Variable_15, bool Temp_bool_Variable, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable_16, class USoundBase* Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, class USoundBase* Temp_object_Variable_19, class USoundBase* Temp_object_Variable_20, class USoundBase* Temp_object_Variable_21, class USoundBase* Temp_object_Variable_22, class USoundBase* Temp_object_Variable_23, class USoundBase* Temp_object_Variable_24, class USoundBase* Temp_object_Variable_25, class USoundBase* Temp_object_Variable_26, class USoundBase* Temp_object_Variable_27, class USoundBase* Temp_object_Variable_28, class USoundBase* Temp_object_Variable_29, class USoundBase* Temp_object_Variable_30, class USoundBase* Temp_object_Variable_31, TArray<class UActor*>& Temp_object_Variable_32, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable_1, class UPawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void FootStep(bool RightLeg, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_2, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class USoundBase* Temp_object_Variable_15, TArray<class UActor*>& Temp_object_Variable_16, bool CallFunc_GetIsSprinting_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double K2Node_Select_Default, double K2Node_Select_Default_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class USoundBase* K2Node_Select_Default_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast);
	void CacheGunModulesValues(class UItem_Module_General* L_ModuleIt, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UItem_Module_Underbarrel_Grip* K2Node_DynamicCast_AsItem_Module_Underbarrel_Grip, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesSocketExist_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetActorRelativeLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UItem_Module_General* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CacheGunValues(class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_ModifyBone_43D643EB4EA51B59F357368257E95275();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TwoWayBlend_42BC74D142A788D453F9258D74D35B24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_ModifyBone_AF5194F14B459BBE3486C1A5EE9B2DE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TwoWayBlend_46C0B5C441A8C278DE180B89A4706B45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_D76DCAC34C7D7FCB4FE410924611FD12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_B68687A945911149AEBFB79162217D93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_BlendSpacePlayer_660614834FD877EBE1F528927827D9B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_RotateRootBone_577BADD041F3190CB304EDBD81363645();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_5CFB545C4811EE33D459EC8FD3A1DCFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_E507D0214C824D1B30FAC5A45D4BBB69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_8DEDD458461077210F7F8784BD1991A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_95B6C2DC4ED044EA58E8F5BEC5D12A0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_04559AFC49B012A96003F4B28F36D739();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_7A7C30B44DE26DAC0C960BA838F309ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_BlendSpacePlayer_928510BB465567BA6B06F6B1EB931D2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_7E5B02D44F100F8657D7AB83FE9BDE27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_978FD34846FB8719D2D5E9A4027EBC02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_4750ADCE4F39CA2AAE4FF6A2AD926E44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_B0902DA846E30D5DB481828B1107C622();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_D9BC40D4481FFE41C114F58AA6A12E14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_1200CEAC4A2D051B4FCF63BBC323C9C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_E498C9A946ADEF7F0300C0844F910EB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_459D436643F69441728C83834AA2CC23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_81D8EB054C0094C20A119C9C9D5B4D5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_779CD1054AAC02AC1802ECB65FCCD2C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_066010224D0EA53871085CBFE5AE4C21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_C403185D4218CCA92C031DB5AD8BD24B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_TP_AnimGraphNode_TransitionResult_8718D59E472DA8C0FA17698307F7F6D3();
	void AnimNotify_FootStep_L();
	void AnimNotify_FootStep_R();
	void AnimNotify_Jump_End();
	void AnimNotify_Jump_Start();
	void AnimNotify_FootStep_Cloth();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void OnSetPlayerState_Event();
	void OnIsAlive_Event();
	void OnSetCurrentGun_Event(class UItem_Gun_General* OldCurrentGun);
	void OnSetGunModules_Event();
	void ExecuteUbergraph_ABP_CharacterPG_TP(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_DegSin_ReturnValue, double CallFunc_DegCos_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, int32 CallFunc_GetPredictedLODLevel_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& Temp_struct_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_DegSin_ReturnValue_1, double CallFunc_DegCos_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, int32 CallFunc_GetPredictedLODLevel_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_GetGunRecoilAlpha_Backward_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_6, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_6, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_Abs_ReturnValue, const struct FVector& Temp_struct_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& Temp_struct_Variable_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, enum class EGunSlot Temp_byte_Variable, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_7, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_5, float CallFunc_GetCurveValue_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue_8, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_8, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetPredictedLODLevel_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_Greater_DoubleDouble_ReturnValue_9, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_8, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, double CallFunc_VSize_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, double Temp_real_Pitch_Variable, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_3, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_10, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_10, double CallFunc_FInterpTo_ReturnValue_2, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_9, double CallFunc_FInterpTo_ReturnValue_3, class UItem_Gun_General* K2Node_CustomEvent_OldCurrentGun, bool CallFunc_Not_PreBool_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_11, float CallFunc_GetRateScale_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, float K2Node_StructMemberSet___FloatProperty_5_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_4_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float K2Node_StructMemberSet_Yaw_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_7_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_6_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_3, double CallFunc_FInterpTo_Target_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast, float K2Node_VariableSet_LeanBodyAlphaInterp_ImplicitCast, double K2Node_VariableSet_MoveDirection_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}



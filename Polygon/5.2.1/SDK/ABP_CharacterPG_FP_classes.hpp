#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8AD0 (0x8E20 - 0x350)
// AnimBlueprintGeneratedClass ABP_CharacterPG_FP.ABP_CharacterPG_FP_C
class UABP_CharacterPG_FP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x3C)(HasGetValueTypeHash)
	uint8                                        Pad_218B[0x4];                                     // Fixing Size After Last Property
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x398(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x3A0(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x3A8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_14;                       // 0x3C8(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_11;            // 0x4F0(0x20)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x510(0x48)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_11;            // 0x558(0x20)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x578(0x40)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x5B8(0x108)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_31;                    // 0x6C0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_30;                    // 0x6E8(0x28)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x710(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_55;                 // 0x730(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_54;                 // 0x758(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_53;                 // 0x780(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52;                 // 0x7A8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_51;                 // 0x7D0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0x7F8(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_18;                    // 0x820(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_29;                    // 0x8E8(0x28)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_10;                      // 0x910(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x9D8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_45;                      // 0xA20(0x20)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_17;                    // 0xA40(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_28;                    // 0xB08(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0xB30(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_44;                      // 0xB78(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_20;                     // 0xB98(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_43;                      // 0xC60(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0xC80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0xCA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0xCD0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0xCF8(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_10;            // 0xD20(0x20)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_5;                          // 0xD40(0xF0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_10;            // 0xE30(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_27;                    // 0xE50(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_16;                    // 0xE78(0xC8)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_9;                       // 0xF40(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x1008(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_42;                      // 0x1050(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_26;                    // 0x1070(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_15;                    // 0x1098(0xC8)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_8;                       // 0x1160(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x1228(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_41;                      // 0x1270(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_19;                     // 0x1290(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_40;                      // 0x1358(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x1378(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x13A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x13C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x13F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x1418(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x1440(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0x1468(0x128)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x1590(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_14;                    // 0x15D8(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_25;                    // 0x16A0(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9;             // 0x16C8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9;             // 0x16E8(0x20)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_39;                      // 0x1708(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8;             // 0x1728(0x20)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_4;                          // 0x1748(0xF0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8;             // 0x1838(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24;                    // 0x1858(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_13;                    // 0x1880(0xC8)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_7;                       // 0x1948(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x1A10(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_38;                      // 0x1A58(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0x1A78(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_12;                    // 0x1AA0(0xC8)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_6;                       // 0x1B68(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x1C30(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_37;                      // 0x1C78(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_18;                     // 0x1C98(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36;                      // 0x1D60(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_17;                     // 0x1D80(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_35;                      // 0x1E48(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_16;                     // 0x1E68(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x1F30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x1F58(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7;             // 0x1F80(0x20)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_3;                          // 0x1FA0(0xF0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7;             // 0x2090(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x20B0(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_11;                    // 0x20D8(0xC8)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_5;                       // 0x21A0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x2268(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x22B0(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x22D0(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_10;                    // 0x22F8(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x23C0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x2408(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_15;                     // 0x2428(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x24F0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_14;                     // 0x2510(0xC8)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x25D8(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2620(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x2668(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x26B0(0x108)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x27B8(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x27E0(0x28)()
	struct FAnimNode_BlendBoneByChannel          AnimGraphNode_BlendBoneByChannel_6;                // 0x2808(0x68)()
	struct FAnimNode_BlendBoneByChannel          AnimGraphNode_BlendBoneByChannel_5;                // 0x2870(0x68)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x28D8(0x28)()
	struct FAnimNode_BlendBoneByChannel          AnimGraphNode_BlendBoneByChannel_4;                // 0x2900(0x68)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x2968(0x28)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9;                     // 0x2990(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x2A58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x2A80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x2AA8(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x2AD0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x2AF0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x2B38(0x20)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x2B58(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_13;                     // 0x2B78(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_8;                     // 0x2C40(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_7;                     // 0x2D08(0xC8)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_4;                      // 0x2DD0(0x10)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x2DE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x2E08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x2E30(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x2E58(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x2EA0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x2EC0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x2F08(0x20)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x2F28(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_12;                     // 0x2F48(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x3010(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_11;                     // 0x3030(0xC8)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x30F8(0x48)()
	struct FAnimNode_BlendBoneByChannel          AnimGraphNode_BlendBoneByChannel_3;                // 0x3140(0x68)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x31A8(0x28)()
	struct FAnimNode_BlendBoneByChannel          AnimGraphNode_BlendBoneByChannel_2;                // 0x31D0(0x68)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x3238(0x28)()
	struct FAnimNode_BlendBoneByChannel          AnimGraphNode_BlendBoneByChannel_1;                // 0x3260(0x68)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x32C8(0x28)()
	struct FAnimNode_BlendBoneByChannel          AnimGraphNode_BlendBoneByChannel;                  // 0x32F0(0x68)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x3358(0x28)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x3380(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x3448(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x3550(0x128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x3678(0x20)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_2;                          // 0x3698(0xF0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x3788(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x38B0(0x128)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x39D8(0x108)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_4;                       // 0x3AE0(0xC8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x3BA8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x3BC8(0x128)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x3CF0(0xF0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x3DE0(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x3E00(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x3E28(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x3E50(0x108)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x3F58(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x3FA0(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x3FC8(0x128)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x40F0(0x40)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_10;                 // 0x4130(0xE0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x4210(0x128)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4338(0x48)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x4380(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x43A0(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x43C0(0x28)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x43E8(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x4430(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x4458(0x128)()
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x4580(0x280)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x4800(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x4820(0x128)()
	uint8                                        Pad_2192[0x8];                                     // Fixing Size After Last Property
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik_1;                            // 0x4950(0x1F0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x4B40(0x20)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_6;                     // 0x4B60(0xC8)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_3;                      // 0x4C28(0x10)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x4C38(0x10)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x4C48(0x28)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x4C70(0x20)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x4C90(0x108)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x4D98(0x10)()
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x4DA8(0x100)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3;                       // 0x4EA8(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x4F70(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x4F98(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x50C0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x50E0(0x20)()
	struct FAnimNode_Fabrik                      AnimGraphNode_Fabrik;                              // 0x5100(0x1F0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x52F0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x5310(0xC8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x53D8(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x54A0(0x108)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x55A8(0x108)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_9;                  // 0x56B0(0xE0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x5790(0x20)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x57B0(0xF0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x58A0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x59C8(0x128)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x5AF0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x5B18(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x5B40(0x128)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_3;                   // 0x5C68(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x5D30(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x5E38(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x5E58(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8;                  // 0x5E80(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x5F60(0x28)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x5F88(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x5FA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x5FD0(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0x5FF8(0xE0)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x60D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x6100(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x6128(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x6170(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x6190(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x61D8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_10;                     // 0x61F8(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0x62C0(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x6388(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x63B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x63D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x6400(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x6428(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x6470(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x6490(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x64D8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_9;                      // 0x64F8(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x65C0(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x65E0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x6608(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x6630(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x6658(0x28)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x6680(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x6748(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x6790(0x20)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x67B0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8;                      // 0x67D0(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0x6898(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x6960(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x6988(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x69B0(0xE0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x6A90(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x6B00(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x6B20(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x6B68(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x6C48(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x6C68(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x6D30(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x6D50(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x6D78(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x6DA0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x6DC8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x6DF0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x6E18(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x6E40(0x48)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x6E88(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x6F50(0x20)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x6F70(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x7038(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x7080(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x70A0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x70E8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0x7108(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x71D0(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x7298(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x72C0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x72E8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x7310(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x7338(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x7360(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x7388(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x7468(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x74B0(0x20)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x74D0(0xA8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x7578(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x75C0(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x76A0(0x20)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x76C0(0xE0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x77A0(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x7810(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0x7830(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x78F8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x7918(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x79E0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x7A00(0xC8)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x7AC8(0x118)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x7BE0(0x118)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x7CF8(0x108)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x7E00(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x7E28(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x7E50(0xE0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x7F30(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x7FF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x8020(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x8048(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x8070(0x20)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x8090(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x8170(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x81B8(0x20)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x81D8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x81F8(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x82C0(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x8388(0xC8)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x8450(0x10)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x8460(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x8488(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x84B0(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x84D8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x8520(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x8540(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x8588(0x20)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x85A8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x85C8(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x8690(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x86B0(0xC8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x8778(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x88A0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x88C0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x88E0(0x20)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x8900(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x89C8(0xC8)()
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x8A90(0xC8)()
	bool                                         K2Node_PropertyAccess_24;                          // 0x8B58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_23;                          // 0x8B59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_22;                          // 0x8B5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_21;                          // 0x8B5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_20;                          // 0x8B5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_19;                          // 0x8B5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_18;                          // 0x8B5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_17;                          // 0x8B5F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_16;                          // 0x8B60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_15;                          // 0x8B61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_14;                          // 0x8B62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_13;                          // 0x8B63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_12;                          // 0x8B64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_11;                          // 0x8B65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_10;                          // 0x8B66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_9;                           // 0x8B67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_8;                           // 0x8B68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_7;                           // 0x8B69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_6;                           // 0x8B6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_5;                           // 0x8B6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_4;                           // 0x8B6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_3;                           // 0x8B6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_2;                           // 0x8B6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_1;                           // 0x8B6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess;                             // 0x8B70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21AA[0x7];                                     // Fixing Size After Last Property
	class UBP_PG_Game_Character_C*               Character;                                         // 0x8B78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MoveSpeed;                                         // 0x8B80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MoveDirection;                                     // 0x8B88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Time;                                        // 0x8B90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_21AB[0x4];                                     // Fixing Size After Last Property
	double                                       FallImpact;                                        // 0x8B98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        PlayerController;                                  // 0x8BA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash)
	struct FVector2D                             MouseTurnRate;                                     // 0x8BA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsSprinting;                                       // 0x8BB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21AE[0x7];                                     // Fixing Size After Last Property
	class UItem_Gun_General*                     Current_Gun;                                       // 0x8BC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CurrentGunClass;                                   // 0x8BC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       GunRecoilPitch_Alpha;                              // 0x8BD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GunRecoilYawRoll_Alpha;                            // 0x8BD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               IK_LeftForearmJoint;                               // 0x8BE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItem_Module_Optic*                    ActiveOpticModule;                                 // 0x8BF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OpticCameraPosition;                               // 0x8C00(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GunAimingPosition;                                 // 0x8C18(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StepImpact;                                        // 0x8C30(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               GunFinalPosition;                                  // 0x8C48(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              GunInitialRotation;                                // 0x8C60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              GunFinalRotation;                                  // 0x8C78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       CameraPitch;                                       // 0x8C90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CameraPitchAlpha;                                  // 0x8C98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AdditiveCameraPosition;                            // 0x8CA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              AdditiveCameraRotation;                            // 0x8CB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EGunClass                         GunClass;                                          // 0x8CD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BA[0x7];                                     // Fixing Size After Last Property
	class UAnimSequence*                         GunIdlePose;                                       // 0x8CD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       GunMoveDirectionImpactInterp;                      // 0x8CE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeanBodyAlphaInterp;                               // 0x8CE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DidJump;                                           // 0x8CEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BB[0x3];                                     // Fixing Size After Last Property
	float                                        GroundDistance;                                    // 0x8CF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BC[0x4];                                     // Fixing Size After Last Property
	struct FVector                               IK_LeftHandPosition;                               // 0x8CF8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGripExists;                                      // 0x8D10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21BE[0x7];                                     // Fixing Size After Last Property
	class UAnimSequence*                         GripHandPose;                                      // 0x8D18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              IK_LeftHandRotation;                               // 0x8D20(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21BF[0x8];                                     // Fixing Size After Last Property
	struct FTransform                            GunLeftHandOffset;                                 // 0x8D40(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Return_Value_Location;                             // 0x8DA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21C0[0x8];                                     // Fixing Size After Last Property
	struct FTransform                            Watch_Offset;                                      // 0x8DC0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ABP_CharacterPG_FP_C");
		return Clss;
	}

	void BasePose(struct FPoseLink* BasePose);
	void GunLocomotion(const struct FPoseLink& BaseFinal, struct FPoseLink* GunLocomotion);
	void PoseBlending(const struct FPoseLink& BaseLocomotion, const struct FPoseLink& BasePose, struct FPoseLink* PoseBlending);
	void BaseLocomotion(struct FPoseLink* BaseLocomotion);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void FootStep_Cloth(bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GetIsSprinting_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double K2Node_Select_Default, double K2Node_Select_Default_1, float CallFunc_PlaySound2D_VolumeMultiplier_ImplicitCast);
	void JumpEvent(bool IsStart, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class USoundBase* Temp_object_Variable_15, bool Temp_bool_Variable, enum class EPhysicalSurface Temp_byte_Variable_1, class USoundBase* Temp_object_Variable_16, class USoundBase* Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, class USoundBase* Temp_object_Variable_19, class USoundBase* Temp_object_Variable_20, class USoundBase* Temp_object_Variable_21, class USoundBase* Temp_object_Variable_22, class USoundBase* Temp_object_Variable_23, class USoundBase* Temp_object_Variable_24, class USoundBase* Temp_object_Variable_25, class USoundBase* Temp_object_Variable_26, class USoundBase* Temp_object_Variable_27, class USoundBase* Temp_object_Variable_28, class USoundBase* Temp_object_Variable_29, class USoundBase* Temp_object_Variable_30, class USoundBase* Temp_object_Variable_31, TArray<class UActor*>& Temp_object_Variable_32, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void CacheGunModulesValues(class UItem_Module_General* L_ModuleIt, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UItem_Module_Underbarrel_Grip* K2Node_DynamicCast_AsItem_Module_Underbarrel_Grip, bool K2Node_DynamicCast_bSuccess, class UItem_Module_Optic* K2Node_DynamicCast_AsItem_Module_Optic, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesSocketExist_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_GetActorRelativeLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, class UItem_Module_General* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CacheGunValues(class UClass* L_OldGunClass, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void FootStep(bool RightLeg, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, bool Temp_bool_Variable_2, double Temp_real_Variable_4, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class USoundBase* Temp_object_Variable_15, TArray<class UActor*>& Temp_object_Variable_16, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double K2Node_Select_Default, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_GetIsSprinting_ReturnValue, double K2Node_Select_Default_1, double K2Node_Select_Default_2, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class USoundBase* K2Node_Select_Default_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TwoWayBlend_D8EEEECA486AF0B93998CEA556C4DE71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ModifyBone_1B66EDF44A1FFFB4DE8C2486A21A0D77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TwoWayBlend_308D3AEA40AE877C3E1186BDEB59709F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ModifyBone_F7759FAE4A6C8A0468115694FB42C5A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_970718284095E341DF3407AD8CCC437A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D672B8AD4C4774C39A319E8D4E05B8F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_7D66503C42CABAB9ADC810ADC30035E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_1CF6A3BE45EA072884A7B196C7F3F7CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_BlendSpacePlayer_3E3B2F27417B56EA3F9EE48117118F0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_RotateRootBone_CCD03C174196DFE3ECC98083C405ABE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_0A775297491CB6D8EF1D678521C50D1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_7D12E5EB4CA6A60836D80A913DAB50C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_CA7FA45B4F7487FAD4B1A9A8D8395F17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_2887DBE845DF5D51CFAE8A819BFC1DD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_50A36B6940E9695644F679AFD3DBCDB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_523B8E6545F8CAEA09CB60A7C4C3B5B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_254406EC4279CF2B786321BCE20A2311();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_A849066E4A16BFE40C1BF9AC3B660049();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C8CDA2D54B811A23CB1F8C9299735AD1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_42AEC4144575B9A813C1FE906CB269E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_6D3C596043C6848BE595B1BCD6AE4627();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D08CF40346943E1E1A62308143787BD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_BlendSpacePlayer_161E020840422278B47ED2891C976B3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_EC2BB4F94E84868F054695B1076C9452();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_E73940E140E86455224A529D5212739A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F245B72F4D80BA207E264496511B1049();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_1D1BA0B5425BD1B94B561BAC631F68C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B403FE0040230F3C2CC7669161E4E054();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ApplyAdditive_354125F4431650839A2DD691F11D56DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C030784F42C7BAA9E23EFB81EA617AD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_E0F79D8940419DB47C207EBB7F0C5ED2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B40BA28549B31553A8B73393156D9CF2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_74E33F784E5487D4CB783FB1E231B9DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F90171B14028060A7C99E99A6273B3C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_3E5A41E346BAAEB04609E5B6D5B62E54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F2B849EC484BA0420C9FEA916D15202B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C6351B6248809561B39B449E31905C80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B2F5B21840B64BFFE858AAAAC4D15335();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_067A3D1A4A7E52E04EFB2B81E4A10FB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_83F580F74242F893E139D7A104F71ACA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D9FE0D384430F67A4A8D259395545D6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_576D56414029B84939EA06A22BCA4EAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F64BB4E0451B9A7D2B986C96793F98EE();
	void AnimNotify_FootStep_L();
	void AnimNotify_FootStep_R();
	void AnimNotify_Jump_End();
	void AnimNotify_Jump_Start();
	void AnimNotify_FootStep_Cloth();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void OnSetPlayerState_Event();
	void Event_On_Jumped();
	void OnSetCurrentGun_Event(class UItem_Gun_General* OldCurrentGun);
	void OnSetGunModules_Event();
	void OnAiming_Event(class UItem_Module_Optic* OpticItem);
	void ExecuteUbergraph_ABP_CharacterPG_FP(int32 EntryPoint, bool CallFunc_IsAiming_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAiming_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, double Temp_real_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, float CallFunc_GetGunRecoilAlpha_Backward_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, double Temp_real_Variable_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool Temp_bool_Variable_1, double Temp_real_Variable_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, double Temp_real_Variable_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, bool Temp_bool_Variable_2, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, float Temp_real_Variable_4, bool CallFunc_BooleanAND_ReturnValue_4, float Temp_real_Variable_5, bool Temp_bool_Variable_3, double Temp_real_Variable_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_4, double CallFunc_DegCos_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_9, double CallFunc_DegSin_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, double CallFunc_DegCos_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_GetGunRecoilAlpha_Backward_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_7, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_8, double CallFunc_Divide_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_9, bool CallFunc_Greater_DoubleDouble_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_Greater_DoubleDouble_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_7, double CallFunc_Divide_DoubleDouble_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_10, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_11, bool CallFunc_Greater_DoubleDouble_ReturnValue_15, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_IsAiming_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_16, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_13, bool CallFunc_Greater_DoubleDouble_ReturnValue_17, bool CallFunc_BooleanAND_ReturnValue_14, float CallFunc_GetGunRecoilAlpha_Backward_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_15, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_DegSin_ReturnValue_1, double CallFunc_DegCos_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, const struct FVector& CallFunc_Conv_IntToVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, double CallFunc_Lerp_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_12, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_13, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_18, const struct FVector& Temp_struct_Interpolated_current_gun_position_Variable, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_16, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_14, double CallFunc_Divide_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_14, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool Temp_bool_Variable_4, float K2Node_Select_Default, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_15, double Temp_real_Variable_7, bool Temp_bool_Variable_5, const struct FVector& CallFunc_MakeVector_ReturnValue_4, double K2Node_Select_Default_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_15, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_16, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_17, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_16, float Temp_real_Variable_8, float Temp_real_Variable_9, bool Temp_bool_Variable_6, float CallFunc_GetCurveValue_ReturnValue_1, float K2Node_Select_Default_2, bool Temp_bool_Variable_7, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, float Temp_real_Variable_10, float Temp_real_Variable_11, enum class EGunSlot Temp_byte_Variable, double Temp_real_Variable_12, float K2Node_Select_Default_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, double Temp_real_Variable_13, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_3, bool Temp_bool_Variable_10, const struct FVector& Temp_struct_Variable_1, double K2Node_Select_Default_4, double CallFunc_FInterpTo_ReturnValue_1, const struct FVector& Temp_struct_Variable_2, enum class EGunSlot Temp_byte_Variable_1, const struct FVector& K2Node_Select_Default_5, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_IsAiming_ReturnValue_3, const struct FVector& K2Node_Select_Default_6, const struct FVector& K2Node_Select_Default_7, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_19, double CallFunc_Multiply_DoubleDouble_ReturnValue_18, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_19, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector& CallFunc_MakeVector_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_20, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_21, double CallFunc_Multiply_DoubleDouble_ReturnValue_22, const struct FRotator& CallFunc_MakeRotator_ReturnValue_5, float CallFunc_GetScaledCapsuleRadius_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FFindFloorResult& CallFunc_K2_ComputeFloorDist_FloorResult, bool CallFunc_IsFalling_ReturnValue, double Temp_real_Interpolated_Character_Move_Direction_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_23, const struct FRotator& CallFunc_MakeRotator_ReturnValue_6, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_4, double CallFunc_FInterpTo_ReturnValue_2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_12, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_17, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_7, double CallFunc_VSize_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_FInterpTo_Constant_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, bool CallFunc_IsFalling_ReturnValue_2, bool CallFunc_IsInvertMouse_ReturnValue, double K2Node_Select_Default_8, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsAiming_ReturnValue_4, float CallFunc_GetFOVAngle_ReturnValue, float CallFunc_GetMouseSensitivityAimingValue_ReturnValue, float CallFunc_GetMouseSensitivityValue_ReturnValue, double K2Node_MathExpression_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_ReturnValue_25, double CallFunc_FClamp_ReturnValue, double K2Node_Select_Default_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_26, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_4, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, double CallFunc_Multiply_DoubleDouble_ReturnValue_27, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_28, double CallFunc_Multiply_DoubleDouble_ReturnValue_29, double CallFunc_Multiply_DoubleDouble_ReturnValue_30, double CallFunc_Divide_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_31, double CallFunc_Multiply_DoubleDouble_ReturnValue_32, double CallFunc_Multiply_DoubleDouble_ReturnValue_33, double CallFunc_Divide_DoubleDouble_ReturnValue_8, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_GetGunRecoilAlpha_Pitch_ReturnValue, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_34, const struct FVector2D& K2Node_Select_Default_10, double CallFunc_FMin_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_9, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_GetGunRecoilAlpha_Yaw_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool Temp_bool_IsClosed_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_35, double CallFunc_Add_DoubleDouble_ReturnValue_2, class UPawn* CallFunc_TryGetPawnOwner_ReturnValue, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, class UBP_PG_Game_Character_C* K2Node_DynamicCast_AsBP_PG_Game_Character, bool K2Node_DynamicCast_bSuccess, double CallFunc_Lerp_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_8, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_5, double CallFunc_DegSin_ReturnValue_2, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_36, double CallFunc_Multiply_DoubleDouble_ReturnValue_37, const struct FVector& CallFunc_MakeVector_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, class UItem_Gun_General* K2Node_CustomEvent_OldCurrentGun, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, bool CallFunc_IsValid_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue_10, double CallFunc_Multiply_DoubleDouble_ReturnValue_38, const struct FVector& CallFunc_MakeVector_ReturnValue_10, float CallFunc_GetRateScale_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_5, float CallFunc_GetPlayLength_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_11, double CallFunc_Multiply_DoubleDouble_ReturnValue_39, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& CallFunc_VInterpToExtended_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, const struct FVector& K2Node_Select_Default_11, bool CallFunc_BooleanAND_ReturnValue_18, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_40, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_41, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_7, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_9, const struct FVector& CallFunc_GetActorRelativeLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_6, class UItem_Module_Optic* K2Node_CustomEvent_OpticItem, float CallFunc_RLerp_Alpha_ImplicitCast, float CallFunc_Multiply_RotatorFloat_B_ImplicitCast, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, float CallFunc_MakeRotator_Roll_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_8_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_7_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float K2Node_StructMemberSet_Yaw_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, float K2Node_StructMemberSet___FloatProperty_10_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_9_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_4, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_5, float CallFunc_MakeRotator_Roll_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5, float CallFunc_MakeRotator_Roll_ImplicitCast_2, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_6, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast_1, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, float CallFunc_MakeRotator_Roll_ImplicitCast_3, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, float K2Node_VariableSet_LeanBodyAlphaInterp_ImplicitCast, double K2Node_VariableSet_CameraPitch_ImplicitCast, double K2Node_VariableSet_MoveDirection_ImplicitCast, double CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast, double K2Node_MathExpression_FOV_ImplicitCast, double K2Node_MathExpression_MouseSensitivityAiming_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast_3, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_3, float CallFunc_VInterpToExtended_interpSpeed_X_ImplicitCast, float CallFunc_VInterpToExtended_interpSpeed_Y_ImplicitCast, float CallFunc_VInterpToExtended_interpSpeed_Z_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_4, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_5, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_3, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast_4, float CallFunc_MakeRotator_Yaw_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

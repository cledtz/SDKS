#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4AD8 (0x55A8 - 0xAD0)
// AnimBlueprintGeneratedClass WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C
class UWolfRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0xAD8(0xA8)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0xB80(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0xB88(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xB90(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0xBB0(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0xC60(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xD88(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xEB0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xED0(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0xEF0(0x70)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0xF60(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1028(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x1048(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x10F8(0x78)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1170(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1190(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_17;                  // 0x11B0(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x11F8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1320(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1448(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1570(0x128)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_62;                 // 0x1698(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_61;                 // 0x16C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_60;                 // 0x16E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_59;                 // 0x1710(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_58;                 // 0x1738(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_57;                 // 0x1760(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_56;                 // 0x1788(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_55;                 // 0x17B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_54;                 // 0x17D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_53;                 // 0x1800(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52;                 // 0x1828(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_51;                 // 0x1850(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0x1878(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0x18A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0x18C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x18F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x1918(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x1940(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x1968(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x19B0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_16;                  // 0x19F8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_41;                      // 0x1A40(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x1A60(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x1AA8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_15;                  // 0x1AF0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_40;                      // 0x1B38(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x1B58(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x1BA0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x1BE8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x1C30(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x1C78(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_39;                      // 0x1CC0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x1CE0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_38;                      // 0x1D28(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x1D48(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x1D90(0x70)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0x1E00(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x1EC8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x1F10(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_37;                      // 0x1F58(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x1F78(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36;                      // 0x1FC0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x1FE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x2008(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x2030(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x2058(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x2080(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x20A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x20D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x20F8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x2120(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_35;                      // 0x2168(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x2188(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x21D0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x21F0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x2238(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x2258(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x22A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x22C0(0x28)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_9;                      // 0x22E8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x23B0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x23D0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x2418(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x2438(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x2480(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x24A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x24E8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x2508(0x28)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8;                      // 0x2530(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x25F8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x2618(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x2660(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x26A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x26D0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x26F8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x2740(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x2760(0x10)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x2770(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x2790(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x2858(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x2920(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x2968(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x29B0(0x70)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x2A20(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x2AE8(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x2B58(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x2B78(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x2BC0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0x2BE0(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x2CA8(0xF0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x2D98(0x28)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x2DC0(0x110)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x2ED0(0x118)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x2FE8(0xF0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x30D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x3100(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x3128(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x3150(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x3178(0x20)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x3198(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x3208(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3228(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x3250(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0x3270(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x3338(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x33B0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x33D8(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3450(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3478(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x34A0(0xD0)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x3570(0x118)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x3688(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x36B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x36D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x3700(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x3728(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x3750(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x3778(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x37A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x37C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x37F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x3818(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x3840(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x3868(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x3890(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x38B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x38E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x3908(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x3930(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x3958(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x39A0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x39E8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x3A30(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x3A50(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x3A98(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x3AE0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x3B28(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x3B48(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x3B90(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x3BB0(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x3BF8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x3C40(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x3C88(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x3CA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x3CD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x3CF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x3D20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x3D48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3D70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x3D98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x3DC0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x3DE8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x3E30(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x3E50(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x3E98(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x3EB8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x3F00(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x3F20(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x3F68(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3F88(0x28)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x3FB0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x4078(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x4098(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x40E0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x4100(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x4148(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x4168(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x41B0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x41D0(0x28)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x41F8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x42C0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x42E0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x4328(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x4348(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x4390(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x43D8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x4420(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x4468(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x44B0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x44D0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x4518(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x4538(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x4580(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x45C8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x4610(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x4658(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x46C8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x46E8(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x47B0(0x128)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x48D8(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x49A0(0x70)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x4A10(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x4AD8(0x70)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x4B48(0x10)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x4B58(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x4BA0(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x4BE8(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x4C58(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4CC8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x4D10(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x4D30(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x4DF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4E20(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4E48(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x4E90(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x4EB0(0x10)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4EC0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x4EE0(0xC8)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x4FA8(0xD0)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x5078(0x118)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x5190(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x51B0(0xB0)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x5260(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x5310(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x5330(0xB0)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x53E0(0xB0)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x5490(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5540(0x20)(None)
	bool                                         State_Rule_Moving_Idle;                            // 0x5560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Idle_Moving;                            // 0x5561(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Jumping;                                        // 0x5562(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Fall_Idle;                              // 0x5563(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Falling;                                        // 0x5564(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Fall_Moving;                            // 0x5565(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Jump_Land_Moving;                       // 0x5566(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Surface_Swimming;                               // 0x5567(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Swim_Idle_Swim_Loco;                    // 0x5568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DC0[0x7];                                     // Fixing Size After Last Property 
	double                                       BodyRoll;                                          // 0x5570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WolfSpeed2D;                                       // 0x5578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Boosting;                                       // 0x5580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Play_Land_Additive;                                // 0x5581(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Moving_Backwards;                               // 0x5582(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Should_Play_Stop_Backwards;                        // 0x5583(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Turning_in_Place;                               // 0x5584(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DC4[0x3];                                     // Fixing Size After Last Property 
	double                                       Turn_in_Place_Angle_Delta;                         // 0x5588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Was_Turning_Right;                                 // 0x5590(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DC5[0x7];                                     // Fixing Size After Last Property 
	double                                       Turn_in_Place_Rotation_Speed;                      // 0x5598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Backwards_Play_Rate;                               // 0x55A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWolfRidingPlayerLayerAnimBP_C* GetDefaultObj();

	void VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride);
	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetMainAnimBPData_Wolf(class UObject* AnimInstance, class UGrandma_AnimBP_C* K2Node_DynamicCast_AsGrandma_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast, double K2Node_VariableSet_BodyRoll_ImplicitCast, double K2Node_VariableSet_Turn_in_Place_Rotation_Speed_ImplicitCast, double K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast, double K2Node_VariableSet_WolfSpeed2D_ImplicitCast);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_0A1EFC344EF1A6E586A54FAEC4F5F766();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_SequencePlayer_4EDCD4F04E8D5963547EB2BE1F10FA2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WolfRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_D7C43EB141CFE2929E3D23914954FA93();
	void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);
	void UpdateBoostPlayRate();
	void PlaceHandIKTargets();
	void ExecuteUbergraph_WolfRidingPlayerLayerAnimBP(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UAnimInstance* K2Node_Event_RidableAnimInstance, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_StructMemberSet___FloatProperty_24_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_25_ImplicitCast, float K2Node_VariableSet_BoostPlayRate_ImplicitCast);
};

}



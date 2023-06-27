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

// 0x50C8 (0x5B98 - 0xAD0)
// AnimBlueprintGeneratedClass BoarRidingPlayerLayerAnimBP.BoarRidingPlayerLayerAnimBP_C
class UBoarRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0xAD8(0x8D)(HasGetValueTypeHash)
	uint8                                        Pad_9966[0x3];                                     // Fixing Size After Last Property..
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0xB68(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0xB70(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xB78(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0xB98(0xC0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0xC58(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0xD80(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xEA8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xEC8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0xEE8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x1010(0x128)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0x1138(0xC8)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1;                             // 0x1200(0xF8)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x12F8(0xF8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0x13F0(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1460(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x1480(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x1540(0x100)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1640(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1660(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_17;                  // 0x1680(0x48)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x16C8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x17F0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1918(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1A40(0x128)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_62;                 // 0x1B68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_61;                 // 0x1B90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_60;                 // 0x1BB8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_59;                 // 0x1BE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_58;                 // 0x1C08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_57;                 // 0x1C30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_56;                 // 0x1C58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_55;                 // 0x1C80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_54;                 // 0x1CA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_53;                 // 0x1CD0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52;                 // 0x1CF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_51;                 // 0x1D20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0x1D48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0x1D70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0x1D98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x1DC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x1DE8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x1E10(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x1E38(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x1E80(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_16;                  // 0x1EC8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_41;                      // 0x1F10(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x1F30(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x1F78(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_15;                  // 0x1FC0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_40;                      // 0x2008(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x2028(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x2070(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x20B8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x2100(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x2148(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_39;                      // 0x2190(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x21B0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_38;                      // 0x21F8(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x2218(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x2288(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0x22D0(0xC8)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x2398(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x23E0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_37;                      // 0x2428(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x2448(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36;                      // 0x2490(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x24B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x24D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x2500(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x2528(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x2550(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x2578(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x25A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x25C8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x25F0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_35;                      // 0x2638(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x2658(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x26A0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x26C0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x2708(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x2728(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x2770(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x2790(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_9;                      // 0x27B8(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x2880(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x28A0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x28E8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x2908(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x2950(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x2970(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x29B8(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x29D8(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8;                      // 0x2A00(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x2AC8(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x2AE8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x2B10(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x2B38(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x2B80(0x20)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x2BA0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x2BC0(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x2C88(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x2D50(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x2DC0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x2E08(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x2E50(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x2E98(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x2EE0(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x2F50(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x3018(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x3038(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x3080(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0x30A0(0xC8)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x3168(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x3248(0x28)()
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x3270(0x100)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x3370(0x118)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3488(0xE0)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x3568(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x3590(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x35B8(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x35E0(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x3608(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x3628(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x3698(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x36B8(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x36E0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0x3700(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x37C8(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x38C8(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x38F0(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x39F0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3A18(0x28)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x3A40(0x118)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x3B58(0xD0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x3C28(0x118)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x3D40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x3D68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x3D90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x3DB8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x3DE0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x3E08(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x3E30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x3E58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x3E80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x3EA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x3ED0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x3EF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x3F20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x3F48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x3F70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x3F98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x3FC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x3FE8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x4010(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x4058(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x40A0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x40E8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x4108(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x4150(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x4198(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x41E0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x4200(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x4248(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x4268(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x42B0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x42F8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x4340(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x4360(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x4388(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x43B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x43D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x4400(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x4428(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x4450(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x4478(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x44A0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x44E8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x4508(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x4550(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x4570(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x45B8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x45D8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x4620(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x4640(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x4668(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x4730(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x4750(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x4798(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x47B8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x4800(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x4820(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x4868(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x4888(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x48B0(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x4978(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x4998(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x49E0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x4A00(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x4A48(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x4A90(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x4AD8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x4B20(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x4B68(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x4B88(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x4BD0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x4BF0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x4C38(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x4C80(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x4CC8(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x4D38(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4D80(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x4DA0(0xC8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x4E68(0x128)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x4F90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4FB8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4FE0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x5028(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x5048(0x10)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x5058(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x5078(0xC8)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x5140(0xD0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x5210(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x52D8(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x5348(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x5410(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x5480(0x10)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x5490(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x54D8(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x5520(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x5590(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x5600(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x5648(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x5668(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x5730(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x5750(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x5810(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x58D0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x58F0(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x59B0(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x5A70(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5B30(0x20)()
	class AFortPlayerPawn*                       FortPlayer;                                        // 0x5B50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             WildlifePawn;                                      // 0x5B58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Moving_Idle;                            // 0x5B60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Jumping;                                        // 0x5B61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Falling;                                        // 0x5B62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Surface_Swimming;                               // 0x5B63(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9967[0x4];                                     // Fixing Size After Last Property..
	double                                       BodyRoll;                                          // 0x5B68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BoarSpeed2D;                                       // 0x5B70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Moving_Backwards;                               // 0x5B78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Boosting;                                       // 0x5B79(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Can_Transition_Fall_To_Moving;                     // 0x5B7A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Can_Transition_Fall_To_Idle;                       // 0x5B7B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Can_Transition_Idle_To_Moving;                     // 0x5B7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Turning_in_Place;                               // 0x5B7D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9968[0x2];                                     // Fixing Size After Last Property..
	double                                       Turn_in_Place_Angle_Delta;                         // 0x5B80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Should_Play_Stop_Backwards;                        // 0x5B88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Play_Land_Additive;                                // 0x5B89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Was_Turning_Right;                                 // 0x5B8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9969[0x5];                                     // Fixing Size After Last Property..
	double                                       Backwards_Play_Rate;                               // 0x5B90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BoarRidingPlayerLayerAnimBP_C");
		return Clss;
	}

	void VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride);
	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetMainAnimBPData_Boar(class UObject* AnimInstance, class UBurt_AnimBP_C* K2Node_DynamicCast_AsBurt_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, double K2Node_VariableSet_Backwards_Play_Rate_ImplicitCast, double K2Node_VariableSet_BodyRoll_ImplicitCast, double K2Node_VariableSet_Turn_in_Place_Angle_Delta_ImplicitCast, double K2Node_VariableSet_BoarSpeed2D_ImplicitCast);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE();
	void BlueprintCollectRidableAnimBPData(class UAnimInstance* RidableAnimInstance);
	void ExecuteUbergraph_BoarRidingPlayerLayerAnimBP(int32 EntryPoint, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAnimInstance* K2Node_Event_RidableAnimInstance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

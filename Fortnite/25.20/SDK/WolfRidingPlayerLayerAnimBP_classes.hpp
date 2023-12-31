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

// 0x4CB0 (0x5780 - 0xAD0)
// AnimBlueprintGeneratedClass WolfRidingPlayerLayerAnimBP.WolfRidingPlayerLayerAnimBP_C
class UWolfRidingPlayerLayerAnimBP_C : public UFortVehicleLayerAnimInstance_Riding
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0xAD8(0xA8)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0xB80(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0xB88(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0xB90(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0xBB0(0xC0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0xC70(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xD98(0x128)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0xEC0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xEE0(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0xF00(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0xF70(0xC8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x1038(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x1058(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x1118(0x100)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1218(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1238(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_17;                  // 0x1258(0x48)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x12A0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x13C8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x14F0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1618(0x128)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_62;                 // 0x1740(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_61;                 // 0x1768(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_60;                 // 0x1790(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_59;                 // 0x17B8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_58;                 // 0x17E0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_57;                 // 0x1808(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_56;                 // 0x1830(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_55;                 // 0x1858(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_54;                 // 0x1880(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_53;                 // 0x18A8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52;                 // 0x18D0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_51;                 // 0x18F8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0x1920(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0x1948(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0x1970(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x1998(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x19C0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x19E8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x1A10(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x1A58(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_16;                  // 0x1AA0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_41;                      // 0x1AE8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x1B08(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x1B50(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_15;                  // 0x1B98(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_40;                      // 0x1BE0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x1C00(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x1C48(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x1C90(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x1CD8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x1D20(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_39;                      // 0x1D68(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x1D88(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_38;                      // 0x1DD0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x1DF0(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x1E38(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0x1EA8(0xC8)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x1F70(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x1FB8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_37;                      // 0x2000(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x2020(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36;                      // 0x2068(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x2088(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x20B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x20D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x2100(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x2128(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x2150(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x2178(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x21A0(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x21C8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_35;                      // 0x2210(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x2230(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x2278(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x2298(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x22E0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x2300(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x2348(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x2368(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_9;                      // 0x2390(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x2458(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x2478(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x24C0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x24E0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x2528(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x2548(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x2590(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x25B0(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8;                      // 0x25D8(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x26A0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x26C0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x2708(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x2750(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x2778(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x27A0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x27E8(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_2;                      // 0x2808(0x10)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x2818(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x2838(0xC8)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x2900(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x29C8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x2A10(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x2A58(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x2AC8(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x2B90(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x2C00(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x2C20(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x2C68(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0x2C88(0xC8)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x2D50(0xE0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x2E30(0x28)()
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x2E58(0x100)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x2F58(0x118)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3070(0xE0)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x3150(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x3178(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x31A0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x31C8(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x31F0(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x3210(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x3280(0x20)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x32A0(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x32C8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0x32E8(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x33B0(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x34B0(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x34D8(0x100)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x35D8(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3600(0x28)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x3628(0xD0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x36F8(0x118)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x3810(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x3838(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x3860(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x3888(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x38B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x38D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x3900(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x3928(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x3950(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x3978(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x39A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x39C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x39F0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x3A18(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x3A40(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x3A68(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x3A90(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x3AB8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x3AE0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x3B28(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x3B70(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x3BB8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x3BD8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x3C20(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x3C68(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x3CB0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x3CD0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x3D18(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x3D38(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x3D80(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x3DC8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x3E10(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x3E30(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x3E58(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x3E80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x3EA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x3ED0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3EF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x3F20(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x3F48(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x3F70(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x3FB8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x3FD8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x4020(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x4040(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x4088(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x40A8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x40F0(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x4110(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x4138(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x4200(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x4220(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x4268(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x4288(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x42D0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x42F0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x4338(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x4358(0x28)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x4380(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x4448(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x4468(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x44B0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x44D0(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x4518(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x4560(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x45A8(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x45F0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x4638(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x4658(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x46A0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x46C0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x4708(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x4750(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x4798(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x47E0(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4850(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x4870(0xC8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x4938(0x128)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x4A60(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x4B28(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x4B98(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x4C60(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1;                      // 0x4CD0(0x10)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x4CE0(0x48)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x4D28(0x48)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x4D70(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x4DE0(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4E50(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x4E98(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x4EB8(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x4F80(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4FA8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4FD0(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x5018(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose;                        // 0x5038(0x10)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x5048(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x5068(0xC8)()
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x5130(0xD0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x5200(0x118)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x5318(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x5338(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x53F8(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x54B8(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x54D8(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x5598(0xC0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x5658(0xC0)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5718(0x20)()
	bool                                         State_Rule_Moving_Idle;                            // 0x5738(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Idle_Moving;                            // 0x5739(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Jumping;                                        // 0x573A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Fall_Idle;                              // 0x573B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Falling;                                        // 0x573C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Fall_Moving;                            // 0x573D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Jump_Land_Moving;                       // 0x573E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Surface_Swimming;                               // 0x573F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         State_Rule_Swim_Idle_Swim_Loco;                    // 0x5740(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A002[0x7];                                     // Fixing Size After Last Property..
	double                                       BodyRoll;                                          // 0x5748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WolfSpeed2D;                                       // 0x5750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Boosting;                                       // 0x5758(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Play_Land_Additive;                                // 0x5759(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Moving_Backwards;                               // 0x575A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Should_Play_Stop_Backwards;                        // 0x575B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Turning_in_Place;                               // 0x575C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A003[0x3];                                     // Fixing Size After Last Property..
	double                                       Turn_in_Place_Angle_Delta;                         // 0x5760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Was_Turning_Right;                                 // 0x5768(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A004[0x7];                                     // Fixing Size After Last Property..
	double                                       Turn_in_Place_Rotation_Speed;                      // 0x5770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Backwards_Play_Rate;                               // 0x5778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WolfRidingPlayerLayerAnimBP_C");
		return Clss;
	}

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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

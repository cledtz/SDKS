#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69EC (0x77AC - 0xDC0)
// AnimBlueprintGeneratedClass Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C
class UPlayer_ProceduralAdjustments_AnimBP_C : public UFortPlayerProceduralAdjustmentsAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0xDC8(0xC)(HasGetValueTypeHash)
	uint8                                        Pad_6D74[0x4];                                     // Fixing Size After Last Property 
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0xDD8(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0xDE0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_27;                             // 0xDE8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_18;                  // 0xE08(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_26;                             // 0xEB8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_17;                  // 0xED8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_25;                             // 0xF88(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0xFA8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_24;                             // 0x1058(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x1078(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_23;                             // 0x1128(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x1148(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_22;                             // 0x11F8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_21;                             // 0x1218(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_20;                             // 0x1238(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_19;                             // 0x1258(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x1278(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x1298(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x12B8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x12D8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0x12F8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x13A8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x13C8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x1478(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x1498(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x14B8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x14D8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0x14F8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x15A8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0x15C8(0xB0)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x1678(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1728(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x1748(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x17F8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1818(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x18C8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_14;            // 0x18E8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_33;                       // 0x1908(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_32;                       // 0x1A30(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_14;            // 0x1B58(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_31;                       // 0x1B78(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_30;                       // 0x1CA0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_29;                       // 0x1DC8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_28;                       // 0x1EF0(0x128)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x2018(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x20C8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_27;                       // 0x20E8(0x128)(None)
	struct FFortAnimNode_SlopeWarping            FortAnimGraphNode_SlopeWarping;                    // 0x2210(0x2E8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_26;                       // 0x24F8(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_13;            // 0x2620(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x2640(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_13;            // 0x2688(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_12;            // 0x26A8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_25;                       // 0x26C8(0x128)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_1;                    // 0x27F0(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_24;                       // 0x28A0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_23;                       // 0x29C8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_22;                       // 0x2AF0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_21;                       // 0x2C18(0x128)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_17;                         // 0x2D40(0xE8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2E28(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_10;                   // 0x2ED8(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24;                    // 0x2F50(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0x2F78(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_12;            // 0x2FA0(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_16;                         // 0x2FC0(0xE8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x30A8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x30C8(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_20;                       // 0x3178(0x128)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x32A0(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_11;            // 0x32E8(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x3308(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_19;                       // 0x3350(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_10;            // 0x3478(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_11;            // 0x3498(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_10;            // 0x34B8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_18;                       // 0x34D8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_17;                       // 0x3600(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_16;                       // 0x3728(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_15;                       // 0x3850(0x128)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x3978(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_14;                       // 0x39C0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9;             // 0x3AE8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0x3B08(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x3C30(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9;             // 0x3D58(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x3D78(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x3DF0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x3E18(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x3E40(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x3E68(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x3E90(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x3ED8(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x3F00(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8;             // 0x3F20(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x3F40(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x4068(0x128)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x4190(0xB0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8;             // 0x4240(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x4260(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x4280(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7;             // 0x43A8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7;             // 0x43C8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x43E8(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x4510(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x4530(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x4550(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x4578(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x46A0(0x128)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x47C8(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x47F0(0x48)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x4838(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x48E8(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x4960(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x4980(0xB0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x4A30(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x4A50(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_15;                         // 0x4A70(0xE8)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_3;                             // 0x4B58(0xF8)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_2;                             // 0x4C50(0xF8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_14;                         // 0x4D48(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_13;                         // 0x4E30(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_12;                         // 0x4F18(0xE8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x5000(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_11;                         // 0x5020(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_10;                         // 0x5108(0xE8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x51F0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x5318(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_9;                          // 0x5338(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_8;                          // 0x5420(0xE8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x5508(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x5630(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x5758(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x5880(0x128)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1;                             // 0x59A8(0xF8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_7;                          // 0x5AA0(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_6;                          // 0x5B88(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_5;                          // 0x5C70(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_4;                          // 0x5D58(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_3;                          // 0x5E40(0xE8)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_2;                          // 0x5F28(0xE8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x6010(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x6038(0x48)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x6080(0xE8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x6168(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x6188(0xE8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x6270(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x62B8(0x78)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x6330(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x6350(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x6378(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x63A0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x63C0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x63E0(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x6400(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x6448(0xF0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x6538(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x6560(0x78)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x65D8(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x6650(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x6678(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x66C0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x6708(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x6780(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_8;                   // 0x67A8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x6870(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x68E8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x6910(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_7;                   // 0x6938(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_6;                   // 0x6A00(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x6AC8(0x128)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x6BF0(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x6C18(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x6C38(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x6C80(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x6CA0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x6CE8(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x6D60(0x28)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x6D88(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x6E38(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x6EB0(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_5;                   // 0x6ED8(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x6FA0(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_4;                   // 0x6FC8(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x7090(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_3;                   // 0x70B8(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x7180(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x7248(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x7270(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x7298(0x78)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x7310(0xB0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x73C0(0xC0)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x7480(0xF8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x7578(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x7640(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x7660(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x7688(0xC8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7750(0x20)(None)
	bool                                         IsHidingInProp;                                    // 0x7770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D83[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               RightHandOverride;                                 // 0x7778(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftHandOverride;                                  // 0x7790(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  EmoteAnimOffsetCurveName;                          // 0x77A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayer_ProceduralAdjustments_AnimBP_C* GetDefaultObj();

	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride);
	void CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK);
	void ItemFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* ItemFinalPoseOverride);
	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive);
	void ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive);
	void ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive);
	void ItemFallAdditive(struct FPoseLink* ItemFallAdditive);
	void ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive);
	void ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive);
	void ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive);
	void ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop);
	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd);
	void ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl);
	void ItemAimOffset(const struct FPoseLink& InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset);
	void ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride);
	void ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK);
	void PostIKAdjustmentsLayer(const struct FPoseLink& InPosePostIkAdjustments, struct FPoseLink* PostIKAdjustmentsLayer);
	void PreIKAdjustmentsLayer(const struct FPoseLink& InPosePreIKAdjustments, struct FPoseLink* PreIKAdjustmentsLayer);
	void PlevisAndFeetAdjustmentsLayer(const struct FPoseLink& InPosePelvisAndFeetAdjustments, struct FPoseLink* PlevisAndFeetAdjustmentsLayer);
	void PushCannonAdjustmentsLayer(const struct FPoseLink& InPosePushCannonAdjustments, struct FPoseLink* PushCannonAdjustmentsLayer);
	void ParaGliderAdjustmentsLayer(const struct FPoseLink& InPoseParaGliderAdjustments, struct FPoseLink* ParaGliderAdjustmentsLayer);
	void HandIKFixUpLayer(const struct FPoseLink& InPoseHandIk, struct FPoseLink* HandIKFixUpLayer);
	void AnimGraph(const struct FPoseLink& InPosePostTurnInPlace, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Player_ProceduralAdjustments_AnimBP(int32 EntryPoint);
};

}



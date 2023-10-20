#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1680 (0x19C8 - 0x348)
// AnimBlueprintGeneratedClass ABP_CharacterPG_Menu.ABP_CharacterPG_Menu_C
class UABP_CharacterPG_Menu_C : public UAnimInstance
{
public:
	uint8                                        Pad_CBE[0x8];                                      // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x20)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x378(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x380(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x388(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3A8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x3F0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x518(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x538(0xE0)(None)
	uint8                                        Pad_CC1[0x8];                                      // Fixing Size After Last Property 
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x620(0x280)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x8A0(0x20)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x8C0(0x280)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0xB40(0xF0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0xC30(0x40)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0xC70(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xD98(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xEC0(0x128)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xFE8(0x48)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x1030(0x40)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1070(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1090(0xE0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1170(0x128)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x1298(0xF0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1388(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x13A8(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x13C8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x14D0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x14F8(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1520(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1540(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1560(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1580(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x16A8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x17D0(0x128)(None)
	class UAnimSequence*                         GunIdlePose;                                       // 0x18F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Menu_C*        PlayerController;                                  // 0x1900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC9[0x8];                                      // Fixing Size After Last Property 
	struct FTransform                            GunLeftHandOffset;                                 // 0x1910(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGripExists;                                      // 0x1970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CCB[0x7];                                      // Fixing Size After Last Property 
	class UAnimSequence*                         GripHandPose;                                      // 0x1978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               IK_LeftHandPosition;                               // 0x1980(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              IK_LeftHandRotation;                               // 0x1998(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UBP_PG_PlayerState_Menu_C*             PlayerState;                                       // 0x19B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UItem_Gun_General*                     Current_Gun;                                       // 0x19B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_Menu_Character_C*               Character;                                         // 0x19C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_CharacterPG_Menu_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void CacheGunModulesValues(class UItem_Module_General* L_ModuleIt, int32 Temp_int_Array_Index_Variable, class UItem_Module_Underbarrel_Grip* K2Node_DynamicCast_AsItem_Module_Underbarrel_Grip, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_GetActorRelativeLocation_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, class UItem_Module_General* CallFunc_Array_Get_Item, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CacheGunValues();
	void BlueprintInitializeAnimation();
	void OnSetPrimaryGun_Event();
	void OnSetPlayerState_Event();
	void OnSetGunModules_Event();
	void ExecuteUbergraph_ABP_CharacterPG_Menu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess_1, TArray<class UBP_PG_Menu_Character_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UBP_PG_Menu_Character_C* CallFunc_Array_Get_Item);
};

}



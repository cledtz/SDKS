#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C0 (0xFB8 - 0x6F8)
// AnimBlueprintGeneratedClass M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C
class UM_MED_Patches_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_7599[0x8];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x708(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x710(0x8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x718(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x7C8(0x20)(None)
	struct FGravityOverrideParamsStruct          Gravity_Override_Params;                           // 0x7E8(0x7B8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GravityOverride;                                   // 0xFA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UM_MED_Patches_Axe_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_MED_Patches_Axe_AnimBP(int32 EntryPoint, const struct FRBANParamsStruct& Temp_struct_Variable, float K2Node_Event_DeltaTimeX, double CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_Gravity_Override_State_Function_GravityOverride, const class FString& CallFunc_Gravity_Override_State_Function_CurrentStateOut, const struct FGravityOverrideSettingStruct& CallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut, const struct FRBANSettingStruct& CallFunc_Gravity_Override_State_Function_RBAN_SettingsOut);
};

}



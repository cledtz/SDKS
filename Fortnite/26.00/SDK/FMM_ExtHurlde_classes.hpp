#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xC0 - 0xC0)
// BlueprintGeneratedClass FMM_ExtHurlde.FMM_ExtHurlde_C
class UFMM_ExtHurlde_C : public UFortMovementMode_ExtLogicHurdle
{
public:

	static class UClass* StaticClass();
	static class UFMM_ExtHurlde_C* GetDefaultObj();

	void GetMiddleMontageSectionName(const struct FSynchedActionInfo& Synched_Action_Info, enum class EHurdleType Hurdle_Type, class FName* Middle_Section_Name, enum class EHurdleType NewLocalVar, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void GetStartMontageSectionName(class FName* NewParam);
	void GetAnimMontage(const struct FSynchedActionInfo& Synched_Action_Info, enum class EHurdleType NewParam, class UAnimMontage** Anim_Montage, class UAnimMontage* Hurdle_50up, class UAnimMontage* Hurdle_Mantle_200Up_Mirrored, class UAnimMontage* Hurdle_Mantle_100up_Mirrored, class UAnimMontage* Hurdle_Mantle_50up, class UAnimMontage* Hurdle_100up_Mirrored, class UAnimMontage* CurrentlyPlayingMontage, class UAnimMontage* Hurdle_Mantle_100up, class UAnimMontage* Hurdle_200up, class UAnimMontage* Hurdle_Mantle_200Up, class UAnimMontage* Hurdle_100up, class UAnimMontage* Hurdle_Mantle_50up_Proto, class UAnimMontage* Hurdle_Mantle_100up_Mirrored_Proto, class UAnimMontage* Hurdle_Mantle_100up_Proto, class UAnimMontage* Hurdle_Mantle_200up_Mirrored_Proto, class UAnimMontage* Hurdle_100up_Mirrored_Proto, class UAnimMontage* Hurdle_100up_Proto, class UAnimMontage* Hurdle_200up_Proto, class UAnimMontage* Hurdle_Mantle_200up_Proto, double HurdleAnim_Distance_to_Target_Z, bool Is_Proto, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4, class UAnimMontage* K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_5, bool CallFunc_IsContextualActionPrototypeActive_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UAnimMontage* K2Node_Select_Default_1, class UAnimMontage* K2Node_Select_Default_2, double K2Node_VariableSet_HurdleAnim_Distance_to_Target_Z_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void BP_GetAnimationMontageInformation(const struct FSynchedActionInfo& SynchedActionInfo, enum class EHurdleType Type, class UAnimMontage** AnimMontage, class FName* StartSectionName, class FName* MontageMiddleSectionName, bool NewLocalVar, class FName CallFunc_GetStartMontageSectionName_NewParam, class FName CallFunc_GetMiddleMontageSectionName_Middle_Section_Name, class UAnimMontage* CallFunc_GetAnimMontage_Anim_Montage);
};

}



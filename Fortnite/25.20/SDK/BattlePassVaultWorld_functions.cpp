#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.PageTransitionIntensityUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    MID_Background                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    MID_Floor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_LowIntensity_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_HighIntensity_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::PageTransitionIntensityUpdate(class UMaterialInstanceDynamic* MID_Background, class UMaterialInstanceDynamic* MID_Floor, enum class EBackgroundIntensityLevel Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class EBackgroundIntensityLevel Temp_byte_Variable_1, bool Temp_bool_Variable_2, float K2Node_Select_Default, bool K2Node_Select_Default_1, bool Temp_bool_Variable_3, float K2Node_Select_Default_2, float K2Node_Select_Default_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float K2Node_Select_Option_0_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast_1, float K2Node_Select_Option_1_ImplicitCast_1, float K2Node_Select_LowIntensity_ImplicitCast, float K2Node_Select_HighIntensity_ImplicitCast)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "PageTransitionIntensityUpdate");

	Params::ABattlePassVaultWorld_C_PageTransitionIntensityUpdate_Params Parms;

	Parms.MID_Background = MID_Background;
	Parms.MID_Floor = MID_Floor;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast_1 = K2Node_Select_Option_0_ImplicitCast_1;
	Parms.K2Node_Select_Option_1_ImplicitCast_1 = K2Node_Select_Option_1_ImplicitCast_1;
	Parms.K2Node_Select_LowIntensity_ImplicitCast = K2Node_Select_LowIntensity_ImplicitCast;
	Parms.K2Node_Select_HighIntensity_ImplicitCast = K2Node_Select_HighIntensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundBackward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Backward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fade                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FXTransitionFade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::TransitionBackgroundBackward(double Backward, double Fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackgroundBackward");

	Params::ABattlePassVaultWorld_C_TransitionBackgroundBackward_Params Parms;

	Parms.Backward = Backward;
	Parms.Fade = Fade;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_1 = CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Forward                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Fade                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FXTransitionFade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::TransitionBackgroundForward(double Forward, double Fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackgroundForward");

	Params::ABattlePassVaultWorld_C_TransitionBackgroundForward_Params Parms;

	Parms.Forward = Forward;
	Parms.Fade = Fade;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_1 = CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.SetupBackgroundMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  TextureBackground                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   BackgroundInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_Z                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector3f                   CallFunc_BreakVector3f_InVec_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid, class FName Temp_name_Variable, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_1, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, bool Temp_bool_Variable_2, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, bool Temp_bool_Variable_3, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, bool Temp_bool_Variable_4, class FName K2Node_Select_Default_4, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "SetupBackgroundMaterial");

	Params::ABattlePassVaultWorld_C_SetupBackgroundMaterial_Params Parms;

	Parms.TextureBackground = TextureBackground;
	Parms.BackgroundInfo = BackgroundInfo;
	Parms.Mid = Mid;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_BreakVector3f_X = CallFunc_BreakVector3f_X;
	Parms.CallFunc_BreakVector3f_Y = CallFunc_BreakVector3f_Y;
	Parms.CallFunc_BreakVector3f_Z = CallFunc_BreakVector3f_Z;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_name_Variable_7 = Temp_name_Variable_7;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_name_Variable_8 = Temp_name_Variable_8;
	Parms.Temp_name_Variable_9 = Temp_name_Variable_9;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_BreakVector3f_InVec_ImplicitCast = CallFunc_BreakVector3f_InVec_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortStaticMeshActor*        K2Node_DynamicCast_AsFort_Static_Mesh_Actor                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::UserConstructionScript(class AFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "UserConstructionScript");

	Params::ABattlePassVaultWorld_C_UserConstructionScript_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_Static_Mesh_Actor = K2Node_DynamicCast_AsFort_Static_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::TransitionForward__FinishedFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionForward__FinishedFunc");

	Params::ABattlePassVaultWorld_C_TransitionForward__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::TransitionForward__UpdateFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionForward__UpdateFunc");

	Params::ABattlePassVaultWorld_C_TransitionForward__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::TransitionBackward__FinishedFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackward__FinishedFunc");

	Params::ABattlePassVaultWorld_C_TransitionBackward__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::TransitionBackward__UpdateFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackward__UpdateFunc");

	Params::ABattlePassVaultWorld_C_TransitionBackward__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::Background_Effects__FinishedFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "Background-Effects__FinishedFunc");

	Params::ABattlePassVaultWorld_C_Background_Effects__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::Background_Effects__UpdateFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "Background-Effects__UpdateFunc");

	Params::ABattlePassVaultWorld_C_Background_Effects__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::Floor_Visibility__FinishedFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "Floor-Visibility__FinishedFunc");

	Params::ABattlePassVaultWorld_C_Floor_Visibility__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::Floor_Visibility__UpdateFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "Floor-Visibility__UpdateFunc");

	Params::ABattlePassVaultWorld_C_Floor_Visibility__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::ItemDetails__FinishedFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetails__FinishedFunc");

	Params::ABattlePassVaultWorld_C_ItemDetails__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::ItemDetails__UpdateFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetails__UpdateFunc");

	Params::ABattlePassVaultWorld_C_ItemDetails__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::IconDissolve__FinishedFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "IconDissolve__FinishedFunc");

	Params::ABattlePassVaultWorld_C_IconDissolve__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::IconDissolve__UpdateFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "IconDissolve__UpdateFunc");

	Params::ABattlePassVaultWorld_C_IconDissolve__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::ItemDetailsIntensity__FinishedFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetailsIntensity__FinishedFunc");

	Params::ABattlePassVaultWorld_C_ItemDetailsIntensity__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::ItemDetailsIntensity__UpdateFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetailsIntensity__UpdateFunc");

	Params::ABattlePassVaultWorld_C_ItemDetailsIntensity__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::BackgroundIntenstiy__FinishedFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "BackgroundIntenstiy__FinishedFunc");

	Params::ABattlePassVaultWorld_C_BackgroundIntenstiy__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::BackgroundIntenstiy__UpdateFunc()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "BackgroundIntenstiy__UpdateFunc");

	Params::ABattlePassVaultWorld_C_BackgroundIntenstiy__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "ReceiveBeginPlay");

	Params::ABattlePassVaultWorld_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionBackground
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPlayForward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelIntensityTransition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::OnTransitionBackground(bool bPlayForward, enum class EBackgroundIntensityLevel IntensityTransition)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "OnTransitionBackground");

	Params::ABattlePassVaultWorld_C_OnTransitionBackground_Params Parms;

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnSetupBackground
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UTexture2D*                  LoadedBackgroundTexture                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   BackgroundInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattlePassVaultWorld_C::OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "OnSetupBackground");

	Params::ABattlePassVaultWorld_C_OnSetupBackground_Params Parms;

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = BackgroundInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnUpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowFloor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowEffects                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "OnUpdateDisplay");

	Params::ABattlePassVaultWorld_C_OnUpdateDisplay_Params Parms;

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnInitialBackgroundTransition
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABattlePassVaultWorld_C::OnInitialBackgroundTransition()
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "OnInitialBackgroundTransition");

	Params::ABattlePassVaultWorld_C_OnInitialBackgroundTransition_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionItemDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowItemDetails                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::OnTransitionItemDetails(bool bShowItemDetails)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "OnTransitionItemDetails");

	Params::ABattlePassVaultWorld_C_OnTransitionItemDetails_Params Parms;

	Parms.bShowItemDetails = bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnIntensityChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bToLowIntensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::OnIntensityChange(bool bToLowIntensity)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "OnIntensityChange");

	Params::ABattlePassVaultWorld_C_OnIntensityChange_Params Parms;

	Parms.bToLowIntensity = bToLowIntensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ExecuteUbergraph_BattlePassVaultWorld
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPlayForward                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBackgroundIntensityLevelK2Node_Event_IntensityTransition                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_LoadedBackgroundTexture                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData   K2Node_Event_BackgroundInfo                                      (ConstParm)
// bool                               K2Node_Event_bShowFloor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowEffects                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowItemDetails                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bToLowIntensity                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_Fade_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_Fade_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_Forward_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::ExecuteUbergraph_BattlePassVaultWorld(int32 EntryPoint, double CallFunc_Divide_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Lerp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_bPlayForward, enum class EBackgroundIntensityLevel K2Node_Event_IntensityTransition, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, bool K2Node_Event_bShowItemDetails, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Variable, double CallFunc_Lerp_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, double CallFunc_Conv_BoolToDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool K2Node_Event_bToLowIntensity, double CallFunc_Lerp_ReturnValue_2, bool CallFunc_BooleanXOR_ReturnValue, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_Fade_ImplicitCast, double CallFunc_TransitionBackgroundForward_Fade_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast, double CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast, double CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6)
{
	static auto Func = Class->GetFunction("BattlePassVaultWorld_C", "ExecuteUbergraph_BattlePassVaultWorld");

	Params::ABattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Event_bPlayForward = K2Node_Event_bPlayForward;
	Parms.K2Node_Event_IntensityTransition = K2Node_Event_IntensityTransition;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_LoadedBackgroundTexture = K2Node_Event_LoadedBackgroundTexture;
	Parms.K2Node_Event_BackgroundInfo = K2Node_Event_BackgroundInfo;
	Parms.K2Node_Event_bShowFloor = K2Node_Event_bShowFloor;
	Parms.K2Node_Event_bShowEffects = K2Node_Event_bShowEffects;
	Parms.K2Node_Event_bShowItemDetails = K2Node_Event_bShowItemDetails;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.K2Node_Event_bToLowIntensity = K2Node_Event_bToLowIntensity;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;
	Parms.CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast = CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1 = CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundForward_Fade_ImplicitCast = CallFunc_TransitionBackgroundForward_Fade_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundForward_Fade_ImplicitCast_1 = CallFunc_TransitionBackgroundForward_Fade_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundForward_Forward_ImplicitCast = CallFunc_TransitionBackgroundForward_Forward_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1 = CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast = CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1 = CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast = CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast_1 = CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast_1;
	Parms.CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast = CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast;
	Parms.CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1 = CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1;
	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast = CallFunc_SetPlayRate_NewRate_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

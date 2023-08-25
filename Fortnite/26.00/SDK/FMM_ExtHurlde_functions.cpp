#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FMM_ExtHurlde.FMM_ExtHurlde_C
// (None)

class UClass* UFMM_ExtHurlde_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FMM_ExtHurlde_C");

	return Clss;
}


// FMM_ExtHurlde_C FMM_ExtHurlde.Default__FMM_ExtHurlde_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFMM_ExtHurlde_C* UFMM_ExtHurlde_C::GetDefaultObj()
{
	static class UFMM_ExtHurlde_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFMM_ExtHurlde_C*>(UFMM_ExtHurlde_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FMM_ExtHurlde.FMM_ExtHurlde_C.GetMiddleMontageSectionName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSynchedActionInfo          Synched_Action_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class EHurdleType             Hurdle_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Middle_Section_Name                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHurdleType             NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFMM_ExtHurlde_C::GetMiddleMontageSectionName(const struct FSynchedActionInfo& Synched_Action_Info, enum class EHurdleType Hurdle_Type, class FName* Middle_Section_Name, enum class EHurdleType NewLocalVar, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMM_ExtHurlde_C", "GetMiddleMontageSectionName");

	Params::UFMM_ExtHurlde_C_GetMiddleMontageSectionName_Params Parms{};

	Parms.Synched_Action_Info = Synched_Action_Info;
	Parms.Hurdle_Type = Hurdle_Type;
	Parms.NewLocalVar = NewLocalVar;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Middle_Section_Name != nullptr)
		*Middle_Section_Name = Parms.Middle_Section_Name;

}


// Function FMM_ExtHurlde.FMM_ExtHurlde_C.GetStartMontageSectionName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFMM_ExtHurlde_C::GetStartMontageSectionName(class FName* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMM_ExtHurlde_C", "GetStartMontageSectionName");

	Params::UFMM_ExtHurlde_C_GetStartMontageSectionName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function FMM_ExtHurlde.FMM_ExtHurlde_C.GetAnimMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSynchedActionInfo          Synched_Action_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class EHurdleType             NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Anim_Montage                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_50up                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_200Up_Mirrored                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_100up_Mirrored                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_50up                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_100up_Mirrored                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CurrentlyPlayingMontage                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_100up                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_200up                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_200Up                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_100up                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_50up_Proto                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_100up_Mirrored_Proto                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_100up_Proto                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_200up_Mirrored_Proto                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_100up_Mirrored_Proto                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_100up_Proto                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_200up_Proto                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Hurdle_Mantle_200up_Proto                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             HurdleAnim_Distance_to_Target_Z                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Proto                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsContextualActionPrototypeActive_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_HurdleAnim_Distance_to_Target_Z_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFMM_ExtHurlde_C::GetAnimMontage(const struct FSynchedActionInfo& Synched_Action_Info, enum class EHurdleType NewParam, class UAnimMontage** Anim_Montage, class UAnimMontage* Hurdle_50up, class UAnimMontage* Hurdle_Mantle_200Up_Mirrored, class UAnimMontage* Hurdle_Mantle_100up_Mirrored, class UAnimMontage* Hurdle_Mantle_50up, class UAnimMontage* Hurdle_100up_Mirrored, class UAnimMontage* CurrentlyPlayingMontage, class UAnimMontage* Hurdle_Mantle_100up, class UAnimMontage* Hurdle_200up, class UAnimMontage* Hurdle_Mantle_200Up, class UAnimMontage* Hurdle_100up, class UAnimMontage* Hurdle_Mantle_50up_Proto, class UAnimMontage* Hurdle_Mantle_100up_Mirrored_Proto, class UAnimMontage* Hurdle_Mantle_100up_Proto, class UAnimMontage* Hurdle_Mantle_200up_Mirrored_Proto, class UAnimMontage* Hurdle_100up_Mirrored_Proto, class UAnimMontage* Hurdle_100up_Proto, class UAnimMontage* Hurdle_200up_Proto, class UAnimMontage* Hurdle_Mantle_200up_Proto, double HurdleAnim_Distance_to_Target_Z, bool Is_Proto, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4, class UAnimMontage* K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_5, bool CallFunc_IsContextualActionPrototypeActive_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UAnimMontage* K2Node_Select_Default_1, class UAnimMontage* K2Node_Select_Default_2, double K2Node_VariableSet_HurdleAnim_Distance_to_Target_Z_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMM_ExtHurlde_C", "GetAnimMontage");

	Params::UFMM_ExtHurlde_C_GetAnimMontage_Params Parms{};

	Parms.Synched_Action_Info = Synched_Action_Info;
	Parms.NewParam = NewParam;
	Parms.Hurdle_50up = Hurdle_50up;
	Parms.Hurdle_Mantle_200Up_Mirrored = Hurdle_Mantle_200Up_Mirrored;
	Parms.Hurdle_Mantle_100up_Mirrored = Hurdle_Mantle_100up_Mirrored;
	Parms.Hurdle_Mantle_50up = Hurdle_Mantle_50up;
	Parms.Hurdle_100up_Mirrored = Hurdle_100up_Mirrored;
	Parms.CurrentlyPlayingMontage = CurrentlyPlayingMontage;
	Parms.Hurdle_Mantle_100up = Hurdle_Mantle_100up;
	Parms.Hurdle_200up = Hurdle_200up;
	Parms.Hurdle_Mantle_200Up = Hurdle_Mantle_200Up;
	Parms.Hurdle_100up = Hurdle_100up;
	Parms.Hurdle_Mantle_50up_Proto = Hurdle_Mantle_50up_Proto;
	Parms.Hurdle_Mantle_100up_Mirrored_Proto = Hurdle_Mantle_100up_Mirrored_Proto;
	Parms.Hurdle_Mantle_100up_Proto = Hurdle_Mantle_100up_Proto;
	Parms.Hurdle_Mantle_200up_Mirrored_Proto = Hurdle_Mantle_200up_Mirrored_Proto;
	Parms.Hurdle_100up_Mirrored_Proto = Hurdle_100up_Mirrored_Proto;
	Parms.Hurdle_100up_Proto = Hurdle_100up_Proto;
	Parms.Hurdle_200up_Proto = Hurdle_200up_Proto;
	Parms.Hurdle_Mantle_200up_Proto = Hurdle_Mantle_200up_Proto;
	Parms.HurdleAnim_Distance_to_Target_Z = HurdleAnim_Distance_to_Target_Z;
	Parms.Is_Proto = Is_Proto;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_5 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_IsContextualActionPrototypeActive_ReturnValue = CallFunc_IsContextualActionPrototypeActive_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_VariableSet_HurdleAnim_Distance_to_Target_Z_ImplicitCast = K2Node_VariableSet_HurdleAnim_Distance_to_Target_Z_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Anim_Montage != nullptr)
		*Anim_Montage = Parms.Anim_Montage;

}


// Function FMM_ExtHurlde.FMM_ExtHurlde_C.BP_GetAnimationMontageInformation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSynchedActionInfo          SynchedActionInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class EHurdleType             Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                AnimMontage                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        StartSectionName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MontageMiddleSectionName                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetStartMontageSectionName_NewParam                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMiddleMontageSectionName_Middle_Section_Name         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetAnimMontage_Anim_Montage                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFMM_ExtHurlde_C::BP_GetAnimationMontageInformation(const struct FSynchedActionInfo& SynchedActionInfo, enum class EHurdleType Type, class UAnimMontage** AnimMontage, class FName* StartSectionName, class FName* MontageMiddleSectionName, bool NewLocalVar, class FName CallFunc_GetStartMontageSectionName_NewParam, class FName CallFunc_GetMiddleMontageSectionName_Middle_Section_Name, class UAnimMontage* CallFunc_GetAnimMontage_Anim_Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FMM_ExtHurlde_C", "BP_GetAnimationMontageInformation");

	Params::UFMM_ExtHurlde_C_BP_GetAnimationMontageInformation_Params Parms{};

	Parms.SynchedActionInfo = SynchedActionInfo;
	Parms.Type = Type;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_GetStartMontageSectionName_NewParam = CallFunc_GetStartMontageSectionName_NewParam;
	Parms.CallFunc_GetMiddleMontageSectionName_Middle_Section_Name = CallFunc_GetMiddleMontageSectionName_Middle_Section_Name;
	Parms.CallFunc_GetAnimMontage_Anim_Montage = CallFunc_GetAnimMontage_Anim_Montage;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimMontage != nullptr)
		*AnimMontage = Parms.AnimMontage;

	if (StartSectionName != nullptr)
		*StartSectionName = Parms.StartSectionName;

	if (MontageMiddleSectionName != nullptr)
		*MontageMiddleSectionName = Parms.MontageMiddleSectionName;

}

}



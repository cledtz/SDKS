#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PG_Game_Character.BP_PG_Game_Character_C
// (Actor, Pawn)

class UClass* UBP_PG_Game_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PG_Game_Character_C");

	return Clss;
}


// BP_PG_Game_Character_C BP_PG_Game_Character.Default__BP_PG_Game_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PG_Game_Character_C* UBP_PG_Game_Character_C::GetDefaultObj()
{
	static class UBP_PG_Game_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PG_Game_Character_C*>(UBP_PG_Game_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.SetCorrectiveFovMaterialImplementation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseFovMaterial                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaterialIndex_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::SetCorrectiveFovMaterialImplementation(bool UseFovMaterial, bool Temp_bool_Variable, int32 CallFunc_GetMaterialIndex_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "SetCorrectiveFovMaterialImplementation");

	Params::UBP_PG_Game_Character_C_SetCorrectiveFovMaterialImplementation_Params Parms{};

	Parms.UseFovMaterial = UseFovMaterial;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMaterialIndex_ReturnValue = CallFunc_GetMaterialIndex_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.SetVisibleMarkerByDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::SetVisibleMarkerByDistance(class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "SetVisibleMarkerByDistance");

	Params::UBP_PG_Game_Character_C_SetVisibleMarkerByDistance_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.OnAiming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem_Module_Optic*          Optic                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UItem_Module_Optic*          L_Optic                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::OnAiming(class UItem_Module_Optic* Optic, class UItem_Module_Optic* L_Optic, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_2, double Temp_real_Variable_3, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAiming_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsAiming_ReturnValue_1, double K2Node_Select_Default, bool CallFunc_IsAiming_ReturnValue_2, double K2Node_Select_Default_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "OnAiming");

	Params::UBP_PG_Game_Character_C_OnAiming_Params Parms{};

	Parms.Optic = Optic;
	Parms.L_Optic = L_Optic;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsAiming_ReturnValue = CallFunc_IsAiming_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsAiming_ReturnValue_1 = CallFunc_IsAiming_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsAiming_ReturnValue_2 = CallFunc_IsAiming_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.SetPlayerLooksOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsLooks                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               L_IsLooks                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPG_Game_Character*          L_Character                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Game*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_PlayerMarker_C*          K2Node_DynamicCast_AsUI_Player_Marker                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::SetPlayerLooksOverride(class UPG_Game_Character* Character, bool IsLooks, bool L_IsLooks, class UPG_Game_Character* L_Character, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, enum class ETeam CallFunc_GetTeam_ReturnValue, enum class ETeam CallFunc_GetTeam_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPG_PlayerState_Game* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Select_Default, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker, bool K2Node_DynamicCast_bSuccess_1, enum class ETeam CallFunc_GetTeam_ReturnValue_2, enum class ETeam CallFunc_GetTeam_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "SetPlayerLooksOverride");

	Params::UBP_PG_Game_Character_C_SetPlayerLooksOverride_Params Parms{};

	Parms.Character = Character;
	Parms.IsLooks = IsLooks;
	Parms.L_IsLooks = L_IsLooks;
	Parms.L_Character = L_Character;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTeam_ReturnValue = CallFunc_GetTeam_ReturnValue;
	Parms.CallFunc_GetTeam_ReturnValue_1 = CallFunc_GetTeam_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Player_Marker = K2Node_DynamicCast_AsUI_Player_Marker;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTeam_ReturnValue_2 = CallFunc_GetTeam_ReturnValue_2;
	Parms.CallFunc_GetTeam_ReturnValue_3 = CallFunc_GetTeam_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "UserConstructionScript");

	Params::UBP_PG_Game_Character_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.Timeline_NeutralizationVignetteImpact__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::Timeline_NeutralizationVignetteImpact__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "Timeline_NeutralizationVignetteImpact__FinishedFunc");

	Params::UBP_PG_Game_Character_C_Timeline_NeutralizationVignetteImpact__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.Timeline_NeutralizationVignetteImpact__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::Timeline_NeutralizationVignetteImpact__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "Timeline_NeutralizationVignetteImpact__UpdateFunc");

	Params::UBP_PG_Game_Character_C_Timeline_NeutralizationVignetteImpact__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.Timeline_PostProcessScopeBlurWeight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::Timeline_PostProcessScopeBlurWeight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "Timeline_PostProcessScopeBlurWeight__FinishedFunc");

	Params::UBP_PG_Game_Character_C_Timeline_PostProcessScopeBlurWeight__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.Timeline_PostProcessScopeBlurWeight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::Timeline_PostProcessScopeBlurWeight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "Timeline_PostProcessScopeBlurWeight__UpdateFunc");

	Params::UBP_PG_Game_Character_C_Timeline_PostProcessScopeBlurWeight__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.BndEvt__BP_PG_Character_WeaponComponent_K2Node_ComponentBoundEvent_0_OnAimingDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UItem_Module_Optic*          OpticItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::BndEvt__BP_PG_Character_WeaponComponent_K2Node_ComponentBoundEvent_0_OnAimingDelegate__DelegateSignature(class UItem_Module_Optic* OpticItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "BndEvt__BP_PG_Character_WeaponComponent_K2Node_ComponentBoundEvent_0_OnAimingDelegate__DelegateSignature");

	Params::UBP_PG_Game_Character_C_BndEvt__BP_PG_Character_WeaponComponent_K2Node_ComponentBoundEvent_0_OnAimingDelegate__DelegateSignature_Params Parms{};

	Parms.OpticItem = OpticItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.OnIsAlive_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::OnIsAlive_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "OnIsAlive_Event");

	Params::UBP_PG_Game_Character_C_OnIsAlive_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.SetPlayerLooks
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPG_Game_Character*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsLooks                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::SetPlayerLooks(class UPG_Game_Character* Character, bool bIsLooks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "SetPlayerLooks");

	Params::UBP_PG_Game_Character_C_SetPlayerLooks_Params Parms{};

	Parms.Character = Character;
	Parms.bIsLooks = bIsLooks;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.CameraNeutralizationEffectEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::CameraNeutralizationEffectEvent(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "CameraNeutralizationEffectEvent");

	Params::UBP_PG_Game_Character_C_CameraNeutralizationEffectEvent_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.EventTakeDamage
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::EventTakeDamage(struct FVector& Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "EventTakeDamage");

	Params::UBP_PG_Game_Character_C_EventTakeDamage_Params Parms{};

	Parms.Origin = Origin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.Respawn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::Respawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "Respawn");

	Params::UBP_PG_Game_Character_C_Respawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.HitAtProtectedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::HitAtProtectedCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "HitAtProtectedCharacter");

	Params::UBP_PG_Game_Character_C_HitAtProtectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.DeathEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPG_PlayerState_Game*        Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerDeathType        DeathType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::DeathEvent(class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "DeathEvent");

	Params::UBP_PG_Game_Character_C_DeathEvent_Params Parms{};

	Parms.Killer = Killer;
	Parms.DeathType = DeathType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.OnJumped
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::OnJumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "OnJumped");

	Params::UBP_PG_Game_Character_C_OnJumped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.SetCorrectiveFovMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseFovMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::SetCorrectiveFovMaterial(bool UseFovMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "SetCorrectiveFovMaterial");

	Params::UBP_PG_Game_Character_C_SetCorrectiveFovMaterial_Params Parms{};

	Parms.UseFovMaterial = UseFovMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_PG_Game_Character_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "ReceiveBeginPlay");

	Params::UBP_PG_Game_Character_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PG_Game_Character.BP_PG_Game_Character_C.ExecuteUbergraph_BP_PG_Game_Character
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUI_HitIndicator_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UItem_Module_Optic*          K2Node_ComponentBoundEvent_OpticItem                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPG_Game_Character*          K2Node_Event_character                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsLooks                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_PlayerMarker_C*          K2Node_DynamicCast_AsUI_Player_Marker                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue_1                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_PlayerMarker_C*          K2Node_DynamicCast_AsUI_Player_Marker_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNeutralizationVignetteImpact_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNeutralizationVignetteImpact_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNeutralizationVignetteImpact_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNeutralizationVignetteImpact_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNeutralizationVignetteImpact_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_damage                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_KillCam_C*               CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_origin                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPG_PlayerState_Game*        K2Node_Event_killer                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerDeathType        K2Node_Event_deathType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_CharacterPG_FP_C*       K2Node_DynamicCast_AsABP_Character_PG_FP                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_useFovMaterial                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAiming_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETeam                   CallFunc_GetTeam_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTask_Character_SetupByTeam_C*CallFunc_CreateAction_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue_2                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_PlayerMarker_C*          K2Node_DynamicCast_AsUI_Player_Marker_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue_3                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_PlayerMarker_C*          K2Node_DynamicCast_AsUI_Player_Marker_3                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game_2                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerState_Game_C*   K2Node_DynamicCast_AsBP_PG_Player_State_Game_3                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SaveNeutralizationFire_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNeutralizationVignetteImpact_newNeutralizationVignetteImpact_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNeutralizationVignetteImpact_newNeutralizationVignetteImpact_ImplicitCast_1(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PG_Game_Character_C::ExecuteUbergraph_BP_PG_Game_Character(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_HitIndicator_C* CallFunc_Create_ReturnValue, class UItem_Module_Optic* K2Node_ComponentBoundEvent_OpticItem, class UPG_Game_Character* K2Node_Event_character, bool K2Node_Event_bIsLooks, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetWidget_ReturnValue_1, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetNeutralizationVignetteImpact_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetNeutralizationVignetteImpact_ReturnValue_1, float CallFunc_GetNeutralizationVignetteImpact_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetNeutralizationVignetteImpact_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetNeutralizationVignetteImpact_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_2, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, float K2Node_Event_damage, class UUI_KillCam_C* CallFunc_Create_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& K2Node_Event_origin, double CallFunc_FMin_ReturnValue, class UPG_PlayerState_Game* K2Node_Event_killer, enum class EPlayerDeathType K2Node_Event_deathType, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UABP_CharacterPG_FP_C* K2Node_DynamicCast_AsABP_Character_PG_FP, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_useFovMaterial, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAiming_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsDedicatedServer_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_IsDedicatedServer_ReturnValue_6, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, enum class ETeam CallFunc_GetTeam_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, class UTask_Character_SetupByTeam_C* CallFunc_CreateAction_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UUserWidget* CallFunc_GetWidget_ReturnValue_2, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker_2, bool K2Node_DynamicCast_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUserWidget* CallFunc_GetWidget_ReturnValue_3, class UUI_PlayerMarker_C* K2Node_DynamicCast_AsUI_Player_Marker_3, bool K2Node_DynamicCast_bSuccess_7, double CallFunc_Lerp_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game_2, bool K2Node_DynamicCast_bSuccess_8, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game_3, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_SaveNeutralizationFire_ImplicitCast, float K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_SetNeutralizationVignetteImpact_newNeutralizationVignetteImpact_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetNeutralizationVignetteImpact_newNeutralizationVignetteImpact_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PG_Game_Character_C", "ExecuteUbergraph_BP_PG_Game_Character");

	Params::UBP_PG_Game_Character_C_ExecuteUbergraph_BP_PG_Game_Character_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OpticItem = K2Node_ComponentBoundEvent_OpticItem;
	Parms.K2Node_Event_character = K2Node_Event_character;
	Parms.K2Node_Event_bIsLooks = K2Node_Event_bIsLooks;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Player_Marker = K2Node_DynamicCast_AsUI_Player_Marker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWidget_ReturnValue_1 = CallFunc_GetWidget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Player_Marker_1 = K2Node_DynamicCast_AsUI_Player_Marker_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetNeutralizationVignetteImpact_ReturnValue = CallFunc_GetNeutralizationVignetteImpact_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetNeutralizationVignetteImpact_ReturnValue_1 = CallFunc_GetNeutralizationVignetteImpact_ReturnValue_1;
	Parms.CallFunc_GetNeutralizationVignetteImpact_ReturnValue_2 = CallFunc_GetNeutralizationVignetteImpact_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetNeutralizationVignetteImpact_ReturnValue_3 = CallFunc_GetNeutralizationVignetteImpact_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetNeutralizationVignetteImpact_ReturnValue_4 = CallFunc_GetNeutralizationVignetteImpact_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game = K2Node_DynamicCast_AsBP_PG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_Event_damage = K2Node_Event_damage;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Event_origin = K2Node_Event_origin;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.K2Node_Event_killer = K2Node_Event_killer;
	Parms.K2Node_Event_deathType = K2Node_Event_deathType;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsABP_Character_PG_FP = K2Node_DynamicCast_AsABP_Character_PG_FP;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_useFovMaterial = K2Node_Event_useFovMaterial;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAiming_ReturnValue = CallFunc_IsAiming_ReturnValue;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_3 = CallFunc_IsDedicatedServer_ReturnValue_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_4 = CallFunc_IsDedicatedServer_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_5 = CallFunc_IsDedicatedServer_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_6 = CallFunc_IsDedicatedServer_ReturnValue_6;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetTeam_ReturnValue = CallFunc_GetTeam_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game_1 = K2Node_DynamicCast_AsBP_PG_Player_State_Game_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_CreateAction_ReturnValue = CallFunc_CreateAction_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetWidget_ReturnValue_2 = CallFunc_GetWidget_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUI_Player_Marker_2 = K2Node_DynamicCast_AsUI_Player_Marker_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetWidget_ReturnValue_3 = CallFunc_GetWidget_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsUI_Player_Marker_3 = K2Node_DynamicCast_AsUI_Player_Marker_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetLocalRole_ReturnValue_1 = CallFunc_GetLocalRole_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game_2 = K2Node_DynamicCast_AsBP_PG_Player_State_Game_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_State_Game_3 = K2Node_DynamicCast_AsBP_PG_Player_State_Game_3;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_SaveNeutralizationFire_ImplicitCast = K2Node_VariableSet_SaveNeutralizationFire_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast = K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast_1 = K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_SetNeutralizationVignetteImpact_newNeutralizationVignetteImpact_ImplicitCast = CallFunc_SetNeutralizationVignetteImpact_newNeutralizationVignetteImpact_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetNeutralizationVignetteImpact_newNeutralizationVignetteImpact_ImplicitCast_1 = CallFunc_SetNeutralizationVignetteImpact_newNeutralizationVignetteImpact_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



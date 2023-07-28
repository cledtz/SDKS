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


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.UpdatePawnHealthHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_AIBoss_C*   K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ReferenceParm)
// class UFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetDistanceBetweenActors_Distance                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Tandem_C::UpdatePawnHealthHUD(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss, bool K2Node_DynamicCast_bSuccess, TArray<class UFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class UFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_GetDistanceBetweenActors_Distance, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "UpdatePawnHealthHUD");

	Params::UBP_PlayerPawn_Tandem_C_UpdatePawnHealthHUD_Params Parms;

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss = K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetDistanceBetweenActors_Distance = CallFunc_GetDistanceBetweenActors_Distance;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.OnRep_HealthInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::OnRep_HealthInfo()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "OnRep_HealthInfo");

	Params::UBP_PlayerPawn_Tandem_C_OnRep_HealthInfo_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.HandlePawnUnconverted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPawn*                   UnconvertedPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Tandem_C::HandlePawnUnconverted(class UFortPawn* UnconvertedPawn)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "HandlePawnUnconverted");

	Params::UBP_PlayerPawn_Tandem_C_HandlePawnUnconverted_Params Parms;

	Parms.UnconvertedPawn = UnconvertedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.HandlePawnConverted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPawn*                   InstigatorPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   ConvertedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Tandem_C::HandlePawnConverted(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn, uint8 CallFunc_GetActorTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "HandlePawnConverted");

	Params::UBP_PlayerPawn_Tandem_C_HandlePawnConverted_Params Parms;

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.UpdateConvertIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Tandem_C::UpdateConvertIndicator(bool CallFunc_HasAuthority_ReturnValue, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "UpdateConvertIndicator");

	Params::UBP_PlayerPawn_Tandem_C_UpdateConvertIndicator_Params Parms;

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StartHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::StartHealthBar()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "StartHealthBar");

	Params::UBP_PlayerPawn_Tandem_C_StartHealthBar_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StartUpdatingHealthWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::StartUpdatingHealthWidget()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "StartUpdatingHealthWidget");

	Params::UBP_PlayerPawn_Tandem_C_StartUpdatingHealthWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.StopUpdatingHealthWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::StopUpdatingHealthWidget()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "StopUpdatingHealthWidget");

	Params::UBP_PlayerPawn_Tandem_C_StopUpdatingHealthWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.PawnHealthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::PawnHealthChanged()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "PawnHealthChanged");

	Params::UBP_PlayerPawn_Tandem_C_PawnHealthChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Tandem_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "ReceiveEndPlay");

	Params::UBP_PlayerPawn_Tandem_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PlayerPawn_Tandem_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "OnDeathPlayEffects");

	Params::UBP_PlayerPawn_Tandem_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCSetupHealthBarOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::NPCSetupHealthBarOnDeath()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "NPCSetupHealthBarOnDeath");

	Params::UBP_PlayerPawn_Tandem_C_NPCSetupHealthBarOnDeath_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.WidgetVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Tandem_C::WidgetVisibilityChanged(bool bVisible)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "WidgetVisibilityChanged");

	Params::UBP_PlayerPawn_Tandem_C_WidgetVisibilityChanged_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCTandemDisableHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::NPCTandemDisableHealthBar()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "NPCTandemDisableHealthBar");

	Params::UBP_PlayerPawn_Tandem_C_NPCTandemDisableHealthBar_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.NPCTandemEnableHealthBars
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::NPCTandemEnableHealthBars()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "NPCTandemEnableHealthBars");

	Params::UBP_PlayerPawn_Tandem_C_NPCTandemEnableHealthBars_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.EnableHiredTandemHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::EnableHiredTandemHealthBar()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "EnableHiredTandemHealthBar");

	Params::UBP_PlayerPawn_Tandem_C_EnableHiredTandemHealthBar_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.EnableTandemHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PlayerPawn_Tandem_C::EnableTandemHealthBar()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "EnableTandemHealthBar");

	Params::UBP_PlayerPawn_Tandem_C_EnableTandemHealthBar_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C.ExecuteUbergraph_BP_PlayerPawn_Tandem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_AIBoss_C*   K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetShield_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxShield_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_NPC_HealthInfo      K2Node_MakeStruct_Struct_NPC_HealthInfo                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_AIBoss_C*   K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bVisible                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_AIBoss_C*   K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_AIBoss_C*   K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_A_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_A_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_B_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Tandem_C::ExecuteUbergraph_BP_PlayerPawn_Tandem(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetShield_ReturnValue, double CallFunc_SafeDivide_ReturnValue, float CallFunc_GetMaxShield_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, double CallFunc_SafeDivide_ReturnValue_1, const struct FStruct_NPC_HealthInfo& K2Node_MakeStruct_Struct_NPC_HealthInfo, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class UFortPawn* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_bVisible, bool CallFunc_IsValid_ReturnValue_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_3, class UNPCStatusWidget_AIBoss_C* K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_SafeDivide_A_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast, double K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast_1, double CallFunc_SafeDivide_B_ImplicitCast_1, double K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Tandem_C", "ExecuteUbergraph_BP_PlayerPawn_Tandem");

	Params::UBP_PlayerPawn_Tandem_C_ExecuteUbergraph_BP_PlayerPawn_Tandem_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss = K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetShield_ReturnValue = CallFunc_GetShield_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_GetMaxShield_ReturnValue = CallFunc_GetMaxShield_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_SafeDivide_ReturnValue_1 = CallFunc_SafeDivide_ReturnValue_1;
	Parms.K2Node_MakeStruct_Struct_NPC_HealthInfo = K2Node_MakeStruct_Struct_NPC_HealthInfo;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1 = K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_bVisible = K2Node_CustomEvent_bVisible;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_2 = CallFunc_GetUserWidgetObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2 = K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue_1 = CallFunc_GetValueAsBool_ReturnValue_1;
	Parms.CallFunc_GetValueAsBool_ReturnValue_2 = CallFunc_GetValueAsBool_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_3 = CallFunc_GetUserWidgetObject_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3 = K2Node_DynamicCast_AsNPCStatus_Widget_AIBoss_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SafeDivide_A_ImplicitCast = CallFunc_SafeDivide_A_ImplicitCast;
	Parms.CallFunc_SafeDivide_B_ImplicitCast = CallFunc_SafeDivide_B_ImplicitCast;
	Parms.K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast = K2Node_MakeStruct_MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB_ImplicitCast;
	Parms.CallFunc_SafeDivide_A_ImplicitCast_1 = CallFunc_SafeDivide_A_ImplicitCast_1;
	Parms.CallFunc_SafeDivide_B_ImplicitCast_1 = CallFunc_SafeDivide_B_ImplicitCast_1;
	Parms.K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast = K2Node_MakeStruct_MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

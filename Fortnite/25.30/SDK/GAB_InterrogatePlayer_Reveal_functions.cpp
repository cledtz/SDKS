#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.GetTeamMembers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawn*                       Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIncludeSelf                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerStateAthena*>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class UFortPlayerStateAthena*>PlayerStates                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMinigame*               CallFunc_GetMinigameForPlayerState_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerState*>    CallFunc_GetTeamMembers_OutTeamMembers                           (ReferenceParm)
// class UFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerState*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerStateAthena*>CallFunc_GetSquadMemberPlayerStates_ReturnValue                  (ReferenceParm)
// class UFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TArray<class UFortPlayerStateAthena*> UGAB_InterrogatePlayer_Reveal_C::GetTeamMembers(class UPawn* Target, bool bIncludeSelf, const TArray<class UFortPlayerStateAthena*>& PlayerStates, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetActorTeam_ReturnValue, class UFortMinigame* CallFunc_GetMinigameForPlayerState_ReturnValue, class UGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class UFortPlayerState*>& CallFunc_GetTeamMembers_OutTeamMembers, class UFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, class UFortPlayerState* CallFunc_Array_Get_Item, TArray<class UFortPlayerStateAthena*>& CallFunc_GetSquadMemberPlayerStates_ReturnValue, class UFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "GetTeamMembers");

	Params::UGAB_InterrogatePlayer_Reveal_C_GetTeamMembers_Params Parms;

	Parms.Target = Target;
	Parms.bIncludeSelf = bIncludeSelf;
	Parms.PlayerStates = PlayerStates;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_GetMinigameForPlayerState_ReturnValue = CallFunc_GetMinigameForPlayerState_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetTeamMembers_OutTeamMembers = CallFunc_GetTeamMembers_OutTeamMembers;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSquadMemberPlayerStates_ReturnValue = CallFunc_GetSquadMemberPlayerStates_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena_1 = K2Node_DynamicCast_AsFort_Player_State_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue = CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.GAB_InterrogatePlayer_Reveal_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      IndicatedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::GAB_InterrogatePlayer_Reveal_AutoGenFunc(class UActor* IndicatedActor)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "GAB_InterrogatePlayer_Reveal_AutoGenFunc");

	Params::UGAB_InterrogatePlayer_Reveal_C_GAB_InterrogatePlayer_Reveal_AutoGenFunc_Params Parms;

	Parms.IndicatedActor = IndicatedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ToggleReticleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::ToggleReticleVisibility(bool Hide, class FName Temp_name_Variable, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "ToggleReticleVisibility");

	Params::UGAB_InterrogatePlayer_Reveal_C_ToggleReticleVisibility_Params Parms;

	Parms.Hide = Hide;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Reveal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerStateAthena*>CallFunc_GetTeamMembers_ReturnValue                              (ReferenceParm)
// TArray<class UFortPlayerStateAthena*>CallFunc_GetTeamMembers_ReturnValue_1                            (ReferenceParm)
// class UFortPlayerStateAthena*      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             ()
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowToBool_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowToBool_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowToBool_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowToBool_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIndicatedActorParticleSystemDataCallFunc_MakeIndicatedActorParticleSystemData_ReturnValue        (NoDestructor)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIndicatedActorData         K2Node_MakeStruct_IndicatedActorData                             (ContainsInstancedReference)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_GetValueAtLevel_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIndicatedActorData         CallFunc_MakeIndicatedActorData_ReturnValue                      (ContainsInstancedReference)
// float                              CallFunc_GetValueAtLevel_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStenciledActorData         CallFunc_MakeStenciledActorData_ReturnValue                      ()
// struct FIndicatedActorParticleSystemDataCallFunc_MakeIndicatedActorParticleSystemData_ReturnValue_1      (NoDestructor)
// struct FStenciledActorData         CallFunc_MakeStenciledActorData_ReturnValue_1                    ()
// struct FIndicatedActorData         CallFunc_MakeIndicatedActorData_ReturnValue_1                    (ContainsInstancedReference)
// float                              CallFunc_GetValueAtLevel_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIndicatedActorData         CallFunc_MakeIndicatedActorData_ReturnValue_2                    (ContainsInstancedReference)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<enum class EFortTeamAffiliation>CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations         (ReferenceParm)
// struct FIndicatedActorDataWithFilterCallFunc_MakeIndicatedActorDataWithFilter_ReturnValue            (ContainsInstancedReference)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FStenciledActorData         K2Node_MakeStruct_StenciledActorData                             ()
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerStateAthena*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStenciledActorData         CallFunc_MakeStenciledActorData_ReturnValue_2                    ()
// class UFortPlayerPawn*             CallFunc_GetCurrentPawn_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortTeamAffiliation>CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations_1       (ReferenceParm)
// struct FIndicatedActorDataWithFilterCallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_1          (ContainsInstancedReference)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeFortEffectContext_ReturnValue                       ()
// struct FActiveGameplayEffectHandle CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue          (NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetFactionTagContainerForActor_ReturnValue              ()
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortTeamAffiliation>CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations_2       (ReferenceParm)
// struct FIndicatedActorDataWithFilterCallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_2          (ContainsInstancedReference)
// TArray<struct FIndicatedActorDataWithFilter>K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::Reveal(int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable, TArray<class UFortPlayerStateAthena*>& CallFunc_GetTeamMembers_ReturnValue, TArray<class UFortPlayerStateAthena*>& CallFunc_GetTeamMembers_ReturnValue_1, class UFortPlayerStateAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortPlayerPawn* CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class UGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class FName Temp_name_Variable_1, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_RowToBool_ReturnValue_1, bool CallFunc_RowToBool_ReturnValue_2, bool CallFunc_RowToBool_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_GetValueAtLevel_ReturnValue_7, bool Temp_bool_Variable_2, class FName Temp_name_Variable_2, class FName K2Node_Select_Default, const struct FIndicatedActorParticleSystemData& CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, const struct FIndicatedActorData& K2Node_MakeStruct_IndicatedActorData, class FName K2Node_Select_Default_1, float CallFunc_GetValueAtLevel_ReturnValue_8, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, float CallFunc_GetValueAtLevel_ReturnValue_9, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_10, float CallFunc_GetValueAtLevel_ReturnValue_11, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue, const struct FIndicatedActorParticleSystemData& CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue_1, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue_1, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_12, float CallFunc_GetValueAtLevel_ReturnValue_13, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_2, TArray<enum class EFortTeamAffiliation>& CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue, bool Temp_bool_Variable_3, class FName K2Node_Select_Default_2, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, const struct FStenciledActorData& K2Node_MakeStruct_StenciledActorData, class FName Temp_name_Variable_3, bool Temp_bool_Variable_4, int32 Temp_int_Array_Index_Variable_1, class FName K2Node_Select_Default_3, class UFortPlayerStateAthena* CallFunc_Array_Get_Item_1, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue_2, class UFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, TArray<enum class EFortTeamAffiliation>& CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations_1, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_1, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeFortEffectContext_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetFactionTagContainerForActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TArray<enum class EFortTeamAffiliation>& CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations_2, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_2, TArray<struct FIndicatedActorDataWithFilter>& K2Node_MakeArray_Array_3, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "Reveal");

	Params::UGAB_InterrogatePlayer_Reveal_C_Reveal_Params Parms;

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetTeamMembers_ReturnValue = CallFunc_GetTeamMembers_ReturnValue;
	Parms.CallFunc_GetTeamMembers_ReturnValue_1 = CallFunc_GetTeamMembers_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue = CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_4 = CallFunc_GetValueAtLevel_ReturnValue_4;
	Parms.CallFunc_RowToBool_ReturnValue = CallFunc_RowToBool_ReturnValue;
	Parms.CallFunc_RowToBool_ReturnValue_1 = CallFunc_RowToBool_ReturnValue_1;
	Parms.CallFunc_RowToBool_ReturnValue_2 = CallFunc_RowToBool_ReturnValue_2;
	Parms.CallFunc_RowToBool_ReturnValue_3 = CallFunc_RowToBool_ReturnValue_3;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_5 = CallFunc_GetValueAtLevel_ReturnValue_5;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_6 = CallFunc_GetValueAtLevel_ReturnValue_6;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_7 = CallFunc_GetValueAtLevel_ReturnValue_7;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue = CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.K2Node_MakeStruct_IndicatedActorData = K2Node_MakeStruct_IndicatedActorData;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_8 = CallFunc_GetValueAtLevel_ReturnValue_8;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_9 = CallFunc_GetValueAtLevel_ReturnValue_9;
	Parms.CallFunc_MakeIndicatedActorData_ReturnValue = CallFunc_MakeIndicatedActorData_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_10 = CallFunc_GetValueAtLevel_ReturnValue_10;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_11 = CallFunc_GetValueAtLevel_ReturnValue_11;
	Parms.CallFunc_MakeStenciledActorData_ReturnValue = CallFunc_MakeStenciledActorData_ReturnValue;
	Parms.CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue_1 = CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue_1;
	Parms.CallFunc_MakeStenciledActorData_ReturnValue_1 = CallFunc_MakeStenciledActorData_ReturnValue_1;
	Parms.CallFunc_MakeIndicatedActorData_ReturnValue_1 = CallFunc_MakeIndicatedActorData_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_12 = CallFunc_GetValueAtLevel_ReturnValue_12;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_13 = CallFunc_GetValueAtLevel_ReturnValue_13;
	Parms.CallFunc_MakeIndicatedActorData_ReturnValue_2 = CallFunc_MakeIndicatedActorData_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations = CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations;
	Parms.CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue = CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.K2Node_MakeStruct_StenciledActorData = K2Node_MakeStruct_StenciledActorData;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_MakeStenciledActorData_ReturnValue_2 = CallFunc_MakeStenciledActorData_ReturnValue_2;
	Parms.CallFunc_GetCurrentPawn_ReturnValue = CallFunc_GetCurrentPawn_ReturnValue;
	Parms.CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations_1 = CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations_1;
	Parms.CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_1 = CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_1;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_MakeFortEffectContext_ReturnValue = CallFunc_MakeFortEffectContext_ReturnValue;
	Parms.CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue_1 = CallFunc_GetQuestManager_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetFactionTagContainerForActor_ReturnValue = CallFunc_GetFactionTagContainerForActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations_2 = CallFunc_MakeIndicatedActorDataWithFilter_InAffiliations_2;
	Parms.CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_2 = CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndAbilityCleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::EndAbilityCleanup(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "EndAbilityCleanup");

	Params::UGAB_InterrogatePlayer_Reveal_C_EndAbilityCleanup_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.InitAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ReferenceParm)
// class UFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::InitAbility(bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "InitAbility");

	Params::UGAB_InterrogatePlayer_Reveal_C_InitAbility_Params Parms;

	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_23F3C2DB411862D627ACFCA8233F7B33
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::Completed_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "Completed_23F3C2DB411862D627ACFCA8233F7B33");

	Params::UGAB_InterrogatePlayer_Reveal_C_Completed_23F3C2DB411862D627ACFCA8233F7B33_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_23F3C2DB411862D627ACFCA8233F7B33
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::Cancelled_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "Cancelled_23F3C2DB411862D627ACFCA8233F7B33");

	Params::UGAB_InterrogatePlayer_Reveal_C_Cancelled_23F3C2DB411862D627ACFCA8233F7B33_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_23F3C2DB411862D627ACFCA8233F7B33
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::Triggered_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "Triggered_23F3C2DB411862D627ACFCA8233F7B33");

	Params::UGAB_InterrogatePlayer_Reveal_C_Triggered_23F3C2DB411862D627ACFCA8233F7B33_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_3C2C8C224B62B00BDEEAF5AF38A401C1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "Completed_3C2C8C224B62B00BDEEAF5AF38A401C1");

	Params::UGAB_InterrogatePlayer_Reveal_C_Completed_3C2C8C224B62B00BDEEAF5AF38A401C1_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1");

	Params::UGAB_InterrogatePlayer_Reveal_C_Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1");

	Params::UGAB_InterrogatePlayer_Reveal_C_Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnFinish_68B3C6D14B44CCD3170ABDA038C1203E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_InterrogatePlayer_Reveal_C::OnFinish_68B3C6D14B44CCD3170ABDA038C1203E()
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "OnFinish_68B3C6D14B44CCD3170ABDA038C1203E");

	Params::UGAB_InterrogatePlayer_Reveal_C_OnFinish_68B3C6D14B44CCD3170ABDA038C1203E_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "K2_OnEndAbility");

	Params::UGAB_InterrogatePlayer_Reveal_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnDied_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::OnDied_Event_1(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "OnDied_Event_1");

	Params::UGAB_InterrogatePlayer_Reveal_C_OnDied_Event_1_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndInterrogation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_InterrogatePlayer_Reveal_C::EndInterrogation()
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "EndInterrogation");

	Params::UGAB_InterrogatePlayer_Reveal_C_EndInterrogation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_InterrogatePlayer_Reveal_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_InterrogatePlayer_Reveal_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ExecuteUbergraph_GAB_InterrogatePlayer_Reveal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_5                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_5                              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_4                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_4                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_3                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_3                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_3                                           ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_WaitDelay_Time_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_InterrogatePlayer_Reveal_C::ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int32 EntryPoint, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_Event_bWasCancelled, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_2, class UActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UController* K2Node_CustomEvent_InstigatedBy, class UActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayEventData& K2Node_Event_EventData, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_WaitDelay_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("GAB_InterrogatePlayer_Reveal_C", "ExecuteUbergraph_GAB_InterrogatePlayer_Reveal");

	Params::UGAB_InterrogatePlayer_Reveal_C_ExecuteUbergraph_GAB_InterrogatePlayer_Reveal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData_5 = K2Node_CustomEvent_TargetData_5;
	Parms.K2Node_CustomEvent_ApplicationTag_5 = K2Node_CustomEvent_ApplicationTag_5;
	Parms.K2Node_CustomEvent_TargetData_4 = K2Node_CustomEvent_TargetData_4;
	Parms.K2Node_CustomEvent_ApplicationTag_4 = K2Node_CustomEvent_ApplicationTag_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData_3 = K2Node_CustomEvent_TargetData_3;
	Parms.K2Node_CustomEvent_ApplicationTag_3 = K2Node_CustomEvent_ApplicationTag_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue_1 = CallFunc_PlayMontageWaitTarget_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_WaitDelay_Time_ImplicitCast = CallFunc_WaitDelay_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

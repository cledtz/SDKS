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


// Function HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestManager*           QuestManager                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHBOnboardingFlow_C::GetCampaignQuestManager(class UFortQuestManager** QuestManager, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "GetCampaignQuestManager");

	Params::UHBOnboardingFlow_C_GetCampaignQuestManager_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestManager != nullptr)
		*QuestManager = Parms.QuestManager;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WaitingToCheckAgain                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHBOnboardingFlow_C::RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "RecheckNeedToPlayEventMovie");

	Params::UHBOnboardingFlow_C_RecheckNeedToPlayEventMovie_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WaitingToCheckAgain != nullptr)
		*WaitingToCheckAgain = Parms.WaitingToCheckAgain;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestInProgress_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UHBOnboardingFlow_C::NeedsToPlayEventMovie(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "NeedsToPlayEventMovie");

	Params::UHBOnboardingFlow_C_NeedsToPlayEventMovie_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsQuestInProgress_ReturnValue = CallFunc_IsQuestInProgress_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHBOnboardingFlow_C::OnCanceled_856A325D44ECC73B857CE5B301E90D33()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnCanceled_856A325D44ECC73B857CE5B301E90D33");

	Params::UHBOnboardingFlow_C_OnCanceled_856A325D44ECC73B857CE5B301E90D33_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHBOnboardingFlow_C::OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33");

	Params::UHBOnboardingFlow_C_OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHBOnboardingFlow_C::OnFailure_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnFailure_50CD26324B96B121A5B49DA66113AE5D");

	Params::UHBOnboardingFlow_C_OnFailure_50CD26324B96B121A5B49DA66113AE5D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHBOnboardingFlow_C::OnIgnored_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnIgnored_50CD26324B96B121A5B49DA66113AE5D");

	Params::UHBOnboardingFlow_C_OnIgnored_50CD26324B96B121A5B49DA66113AE5D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHBOnboardingFlow_C::OnSuccess_50CD26324B96B121A5B49DA66113AE5D()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "OnSuccess_50CD26324B96B121A5B49DA66113AE5D");

	Params::UHBOnboardingFlow_C_OnSuccess_50CD26324B96B121A5B49DA66113AE5D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHBOnboardingFlow_C::HandlePlayEventCine()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandlePlayEventCine");

	Params::UHBOnboardingFlow_C_HandlePlayEventCine_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UHBOnboardingFlow_C::HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "HandleClientEvent_PlayEventMovie");

	Params::UHBOnboardingFlow_C_HandleClientEvent_PlayEventMovie_Params Parms;

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHBOnboardingFlow_C::StartFlow()
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "StartFlow");

	Params::UHBOnboardingFlow_C_StartFlow_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerController*>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_NeedsToPlayEventMovie_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// class UFortQuestManager*           CallFunc_GetCampaignQuestManager_QuestManager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortClientAnnouncement*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHBOnboardingFlow_C::ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_MakeTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<class UFortPlayerController*>& K2Node_MakeArray_Array, bool CallFunc_NeedsToPlayEventMovie_ReturnValue, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain_1, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static auto Func = Class->GetFunction("HBOnboardingFlow_C", "ExecuteUbergraph_HBOnboardingFlow");

	Params::UHBOnboardingFlow_C_ExecuteUbergraph_HBOnboardingFlow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NeedsToPlayEventMovie_ReturnValue = CallFunc_NeedsToPlayEventMovie_ReturnValue;
	Parms.CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain = CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain;
	Parms.CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain_1 = CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain_1;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.CallFunc_GetCampaignQuestManager_QuestManager = CallFunc_GetCampaignQuestManager_QuestManager;
	Parms.CallFunc_SendClientStatEvent_ReturnValue = CallFunc_SendClientStatEvent_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue = CallFunc_WaitForClientAnnouncement_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

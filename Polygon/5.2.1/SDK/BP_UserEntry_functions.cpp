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


// Function BP_UserEntry.BP_UserEntry_C.OnGetAvatarComplete_824A0C6B4C2DBA1D157208B3CDEF0AE0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    ResultTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UserEntry_C::OnGetAvatarComplete_824A0C6B4C2DBA1D157208B3CDEF0AE0(bool bWasSuccessful, class UTexture* ResultTexture)
{
	static auto Func = Class->GetFunction("BP_UserEntry_C", "OnGetAvatarComplete_824A0C6B4C2DBA1D157208B3CDEF0AE0");

	Params::UBP_UserEntry_C_OnGetAvatarComplete_824A0C6B4C2DBA1D157208B3CDEF0AE0_Params Parms;

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ResultTexture = ResultTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserEntry.BP_UserEntry_C.OnCallFailed_824A0C6B4C2DBA1D157208B3CDEF0AE0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasSuccessful                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    ResultTexture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UserEntry_C::OnCallFailed_824A0C6B4C2DBA1D157208B3CDEF0AE0(bool bWasSuccessful, class UTexture* ResultTexture)
{
	static auto Func = Class->GetFunction("BP_UserEntry_C", "OnCallFailed_824A0C6B4C2DBA1D157208B3CDEF0AE0");

	Params::UBP_UserEntry_C_OnCallFailed_824A0C6B4C2DBA1D157208B3CDEF0AE0_Params Parms;

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ResultTexture = ResultTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserEntry.BP_UserEntry_C.ParseUserInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_UserEntry_C::ParseUserInfo(const struct FUniqueNetIdRepl& UserId)
{
	static auto Func = Class->GetFunction("BP_UserEntry_C", "ParseUserInfo");

	Params::UBP_UserEntry_C_ParseUserInfo_Params Parms;

	Parms.UserId = UserId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserEntry.BP_UserEntry_C.OnPresenceReceived_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UserId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FOnlineUserPresenceData     Presence                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_UserEntry_C::OnPresenceReceived_Event(const struct FUniqueNetIdRepl& UserId, const struct FOnlineUserPresenceData& Presence)
{
	static auto Func = Class->GetFunction("BP_UserEntry_C", "OnPresenceReceived_Event");

	Params::UBP_UserEntry_C_OnPresenceReceived_Event_Params Parms;

	Parms.UserId = UserId;
	Parms.Presence = Presence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserEntry.BP_UserEntry_C.ExecuteUbergraph_BP_UserEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_ResultTexture_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bWasSuccessful                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_ResultTexture                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId_1                                      (HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue                    (HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UOnlinePresenceSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetControllerUniqueNetId_ReturnValue_1                  (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UserId                                        (HasGetValueTypeHash)
// struct FOnlineUserPresenceData     K2Node_CustomEvent_Presence                                      ()
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineAvatarSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FUniqueNetIdIsValid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnlineAvatarSubsystemGetAvatar*CallFunc_GetAvatar_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UserEntry_C::ExecuteUbergraph_BP_UserEntry(int32 EntryPoint, bool K2Node_CustomEvent_bWasSuccessful_1, class UTexture* K2Node_CustomEvent_ResultTexture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bWasSuccessful, class UTexture* K2Node_CustomEvent_ResultTexture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture* Temp_object_Variable, bool Temp_bool_Variable, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UOnlinePresenceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetControllerUniqueNetId_ReturnValue_1, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UserId, const struct FOnlineUserPresenceData& K2Node_CustomEvent_Presence, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1, class UOnlineAvatarSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_FUniqueNetIdIsValid_ReturnValue, class UOnlineAvatarSubsystemGetAvatar* CallFunc_GetAvatar_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_UserEntry_C", "ExecuteUbergraph_BP_UserEntry");

	Params::UBP_UserEntry_C_ExecuteUbergraph_BP_UserEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bWasSuccessful_1 = K2Node_CustomEvent_bWasSuccessful_1;
	Parms.K2Node_CustomEvent_ResultTexture_1 = K2Node_CustomEvent_ResultTexture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bWasSuccessful = K2Node_CustomEvent_bWasSuccessful;
	Parms.K2Node_CustomEvent_ResultTexture = K2Node_CustomEvent_ResultTexture;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_UserId_1 = K2Node_CustomEvent_UserId_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue = CallFunc_GetControllerUniqueNetId_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetControllerUniqueNetId_ReturnValue_1 = CallFunc_GetControllerUniqueNetId_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue;
	Parms.K2Node_CustomEvent_UserId = K2Node_CustomEvent_UserId;
	Parms.K2Node_CustomEvent_Presence = K2Node_CustomEvent_Presence;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1 = CallFunc_EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_FUniqueNetIdIsValid_ReturnValue = CallFunc_FUniqueNetIdIsValid_ReturnValue;
	Parms.CallFunc_GetAvatar_ReturnValue = CallFunc_GetAvatar_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserEntry.BP_UserEntry_C.OnPresenceUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UserEntry_C::OnPresenceUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_UserEntry_C", "OnPresenceUpdated__DelegateSignature");

	Params::UBP_UserEntry_C_OnPresenceUpdated__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_UserEntry.BP_UserEntry_C.OnGetAvatar__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_UserEntry_C::OnGetAvatar__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_UserEntry_C", "OnGetAvatar__DelegateSignature");

	Params::UBP_UserEntry_C_OnGetAvatar__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

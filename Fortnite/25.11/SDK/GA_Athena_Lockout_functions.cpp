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


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Lockout_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_Lockout_C", "K2_OnEndAbility");

	Params::UGA_Athena_Lockout_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Lockout_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_Lockout_C", "K2_ActivateAbility");

	Params::UGA_Athena_Lockout_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.Failsafe
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Lockout_C::Failsafe()
{
	static auto Func = Class->GetFunction("GA_Athena_Lockout_C", "Failsafe");

	Params::UGA_Athena_Lockout_C_Failsafe_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.FailedToActivatePassiveAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UGA_Athena_Lockout_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static auto Func = Class->GetFunction("GA_Athena_Lockout_C", "FailedToActivatePassiveAbility");

	Params::UGA_Athena_Lockout_C_FailedToActivatePassiveAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Lockout.GA_Athena_Lockout_C.ExecuteUbergraph_GA_Athena_Lockout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   K2Node_Event_ActorInfo                                           (ContainsInstancedReference)
// enum class EFortGetPlayerPawnExecutionsCallFunc_GetAvatarAsValidFortPlayerPawn_OutExec                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortGetPlayerPawnExecutionsCallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Lockout_C::ExecuteUbergraph_GA_Athena_Lockout(int32 EntryPoint, const struct FGameplayAbilityActorInfo& K2Node_Event_ActorInfo, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1, bool K2Node_Event_bWasCancelled, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_Lockout_C", "ExecuteUbergraph_GA_Athena_Lockout");

	Params::UGA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActorInfo = K2Node_Event_ActorInfo;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec = CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn = CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1 = CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1 = CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

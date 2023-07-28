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


// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_HidingProp_HidingInProp_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_HidingProp_HidingInProp_C", "K2_ActivateAbility");

	Params::UGA_Athena_HidingProp_HidingInProp_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HidingProp_HidingInProp_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_HidingProp_HidingInProp_C", "K2_OnEndAbility");

	Params::UGA_Athena_HidingProp_HidingInProp_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.GrapplerFailSafe
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_HidingProp_HidingInProp_C::GrapplerFailSafe()
{
	static auto Func = Class->GetFunction("GA_Athena_HidingProp_HidingInProp_C", "GrapplerFailSafe");

	Params::UGA_Athena_HidingProp_HidingInProp_C_GrapplerFailSafe_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_HidingProp_HidingInProp_C::ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp(int32 EntryPoint, bool CallFunc_GetValueAsBool_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_GetValueAsBool_ReturnValue_1, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_PlayAnimMontage_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_HidingProp_HidingInProp_C", "ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp");

	Params::UGA_Athena_HidingProp_HidingInProp_C_ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Ability_System_Component = K2Node_DynamicCast_AsFort_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetValueAsBool_ReturnValue_1 = CallFunc_GetValueAsBool_ReturnValue_1;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

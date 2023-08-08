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


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.AddGCNL
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInteractingActorCount_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::AddGCNL(class UActor* Owner, int32 CallFunc_GetInteractingActorCount_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast)
{
	static auto Func = Class->GetFunction("MultiInteractActorComponent_C", "AddGCNL");

	Params::UMultiInteractActorComponent_C_AddGCNL_Params Parms;

	Parms.Owner = Owner;
	Parms.CallFunc_GetInteractingActorCount_ReturnValue = CallFunc_GetInteractingActorCount_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.RemoveGCNL
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::RemoveGCNL(class UActor* Owner, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("MultiInteractActorComponent_C", "RemoveGCNL");

	Params::UMultiInteractActorComponent_C_RemoveGCNL_Params Parms;

	Parms.Owner = Owner;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteGCNFromTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                InteractTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              PreviousInteractPlayerCount                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInteractingActorCount_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInteractionDuration_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// float                              CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_A_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::ExecuteGCNFromTag(class UFortPlayerPawn*& PlayerPawn, struct FGameplayTag& InteractTag, int32 PreviousInteractPlayerCount, int32 CallFunc_GetInteractingActorCount_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetInteractionDuration_ReturnValue, double CallFunc_SafeDivide_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast)
{
	static auto Func = Class->GetFunction("MultiInteractActorComponent_C", "ExecuteGCNFromTag");

	Params::UMultiInteractActorComponent_C_ExecuteGCNFromTag_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.InteractTag = InteractTag;
	Parms.PreviousInteractPlayerCount = PreviousInteractPlayerCount;
	Parms.CallFunc_GetInteractingActorCount_ReturnValue = CallFunc_GetInteractingActorCount_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetInteractionDuration_ReturnValue = CallFunc_GetInteractionDuration_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;
	Parms.CallFunc_SafeDivide_A_ImplicitCast = CallFunc_SafeDivide_A_ImplicitCast;
	Parms.CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.SetRequiredDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewRequiredDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::SetRequiredDuration(double NewRequiredDuration)
{
	static auto Func = Class->GetFunction("MultiInteractActorComponent_C", "SetRequiredDuration");

	Params::UMultiInteractActorComponent_C_SetRequiredDuration_Params Parms;

	Parms.NewRequiredDuration = NewRequiredDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustJoinedInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      JoinedPlayer                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::UpdateForPlayerJustJoinedInteraction(class UFortPlayerStateAthena* JoinedPlayer)
{
	static auto Func = Class->GetFunction("MultiInteractActorComponent_C", "UpdateForPlayerJustJoinedInteraction");

	Params::UMultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction_Params Parms;

	Parms.JoinedPlayer = JoinedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustLeftInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      LeftPlayer                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::UpdateForPlayerJustLeftInteraction(class UFortPlayerStateAthena* LeftPlayer)
{
	static auto Func = Class->GetFunction("MultiInteractActorComponent_C", "UpdateForPlayerJustLeftInteraction");

	Params::UMultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction_Params Parms;

	Parms.LeftPlayer = LeftPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UMultiInteractActorComponent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("MultiInteractActorComponent_C", "ReceiveBeginPlay");

	Params::UMultiInteractActorComponent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteUbergraph_MultiInteractActorComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInteractingActorCount_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerStateAthena*      K2Node_Event_JoinedPlayer                                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerStateAthena*      K2Node_Event_LeftPlayer                                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInteractingActorCount_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiInteractActorComponent_C::ExecuteUbergraph_MultiInteractActorComponent(int32 EntryPoint, int32 CallFunc_GetInteractingActorCount_ReturnValue, class UFortPlayerStateAthena* K2Node_Event_JoinedPlayer, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortPlayerPawn* CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue, class UFortPlayerStateAthena* K2Node_Event_LeftPlayer, class UFortPlayerPawn* CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetInteractingActorCount_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static auto Func = Class->GetFunction("MultiInteractActorComponent_C", "ExecuteUbergraph_MultiInteractActorComponent");

	Params::UMultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInteractingActorCount_ReturnValue = CallFunc_GetInteractingActorCount_ReturnValue;
	Parms.K2Node_Event_JoinedPlayer = K2Node_Event_JoinedPlayer;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue = CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue;
	Parms.K2Node_Event_LeftPlayer = K2Node_Event_LeftPlayer;
	Parms.CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1 = CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetInteractingActorCount_ReturnValue_1 = CallFunc_GetInteractingActorCount_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

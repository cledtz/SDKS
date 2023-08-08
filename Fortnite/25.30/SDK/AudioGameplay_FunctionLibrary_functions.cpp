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


// Function AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C.GetAudioForPlayerEvent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  _1P_Sound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  _3P_Sound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  AudioAsset                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActorLocal_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAudioGameplay_FunctionLibrary_C::GetAudioForPlayerEvent(class UActor* Target, class USoundBase* _1P_Sound, class USoundBase* _3P_Sound, class UObject* __WorldContext, class USoundBase** AudioAsset, bool CallFunc_IsActorLocal_ReturnValue)
{
	static auto Func = Class->GetFunction("AudioGameplay_FunctionLibrary_C", "GetAudioForPlayerEvent");

	Params::UAudioGameplay_FunctionLibrary_C_GetAudioForPlayerEvent_Params Parms;

	Parms.Target = Target;
	Parms._1P_Sound = _1P_Sound;
	Parms._3P_Sound = _3P_Sound;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsActorLocal_ReturnValue = CallFunc_IsActorLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioAsset != nullptr)
		*AudioAsset = Parms.AudioAsset;

}


// Function AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C.IsActorLocal
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      FinalActor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaVehicle*          K2Node_DynamicCast_AsFort_Athena_Vehicle                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeapon*                 K2Node_DynamicCast_AsFort_Weapon                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UFortVehicleInterface>CallFunc_BP_GetAllPassengers_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerPawn*>     CallFunc_BP_GetAllPassengers_ReturnValue                         (ReferenceParm)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAudioGameplay_FunctionLibrary_C::IsActorLocal(class UActor* Actor, class UObject* __WorldContext, class UActor* FinalActor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess, class UFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class UFortVehicleInterface> CallFunc_BP_GetAllPassengers_self_CastInput, TArray<class UFortPlayerPawn*>& CallFunc_BP_GetAllPassengers_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPlayerPawn* CallFunc_Array_Get_Item, bool CallFunc_IsLocallyViewed_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess_2, class UPawn* CallFunc_GetPawn_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyViewed_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AudioGameplay_FunctionLibrary_C", "IsActorLocal");

	Params::UAudioGameplay_FunctionLibrary_C_IsActorLocal_Params Parms;

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.FinalActor = FinalActor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Athena_Vehicle = K2Node_DynamicCast_AsFort_Athena_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Weapon = K2Node_DynamicCast_AsFort_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BP_GetAllPassengers_self_CastInput = CallFunc_BP_GetAllPassengers_self_CastInput;
	Parms.CallFunc_BP_GetAllPassengers_ReturnValue = CallFunc_BP_GetAllPassengers_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsLocallyViewed_ReturnValue_1 = CallFunc_IsLocallyViewed_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C.GetAudioForDamageEvent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActor*                      Receiver                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  ReceiverSound                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  InstigatorSound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  ObserverSound                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  AudioAsset                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActorLocal_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActorLocal_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAudioGameplay_FunctionLibrary_C::GetAudioForDamageEvent(class UActor* Receiver, class UActor* Instigator, class USoundBase* ReceiverSound, class USoundBase* InstigatorSound, class USoundBase* ObserverSound, class UObject* __WorldContext, class USoundBase** AudioAsset, bool CallFunc_IsActorLocal_ReturnValue, bool CallFunc_IsActorLocal_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AudioGameplay_FunctionLibrary_C", "GetAudioForDamageEvent");

	Params::UAudioGameplay_FunctionLibrary_C_GetAudioForDamageEvent_Params Parms;

	Parms.Receiver = Receiver;
	Parms.Instigator = Instigator;
	Parms.ReceiverSound = ReceiverSound;
	Parms.InstigatorSound = InstigatorSound;
	Parms.ObserverSound = ObserverSound;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsActorLocal_ReturnValue = CallFunc_IsActorLocal_ReturnValue;
	Parms.CallFunc_IsActorLocal_ReturnValue_1 = CallFunc_IsActorLocal_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioAsset != nullptr)
		*AudioAsset = Parms.AudioAsset;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

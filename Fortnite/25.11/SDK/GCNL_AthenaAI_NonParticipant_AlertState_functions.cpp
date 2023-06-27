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


// Function GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.Play Alert Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetedActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerPawn_NonParticipant_C*K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_AthenaAI_NonParticipant_AlertState_C::Play_Alert_Sound(class AActor* TargetedActor, class ABP_PlayerPawn_NonParticipant_C* K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("GCNL_AthenaAI_NonParticipant_AlertState_C", "Play Alert Sound");

	Params::AGCNL_AthenaAI_NonParticipant_AlertState_C_Play_Alert_Sound_Params Parms;

	Parms.TargetedActor = TargetedActor;
	Parms.K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant = K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue = CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.OnApplication
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>ParticleComponents                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     AudioComponents                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          BurstCameraShakeInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 BurstDecalInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGCNL_AthenaAI_NonParticipant_AlertState_C::OnApplication(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance)
{
	static auto Func = Class->GetFunction("GCNL_AthenaAI_NonParticipant_AlertState_C", "OnApplication");

	Params::AGCNL_AthenaAI_NonParticipant_AlertState_C_OnApplication_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.ParticleComponents = ParticleComponents;
	Parms.AudioComponents = AudioComponents;
	Parms.BurstCameraShakeInstance = BurstCameraShakeInstance;
	Parms.BurstDecalInstance = BurstDecalInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*>K2Node_Event_ParticleComponents                                  (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UAudioComponent*>     K2Node_Event_AudioComponents                                     (ConstParm, ReferenceParm, ContainsInstancedReference)
// class ULegacyCameraShake*          K2Node_Event_BurstCameraShakeInstance                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADecalActor*                 K2Node_Event_BurstDecalInstance                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_AthenaAI_NonParticipant_AlertState_C::ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState(int32 EntryPoint, double CallFunc_Conv_IntToDouble_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_1, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_2)
{
	static auto Func = Class->GetFunction("GCNL_AthenaAI_NonParticipant_AlertState_C", "ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState");

	Params::AGCNL_AthenaAI_NonParticipant_AlertState_C_ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_Event_ParticleComponents = K2Node_Event_ParticleComponents;
	Parms.K2Node_Event_AudioComponents = K2Node_Event_AudioComponents;
	Parms.K2Node_Event_BurstCameraShakeInstance = K2Node_Event_BurstCameraShakeInstance;
	Parms.K2Node_Event_BurstDecalInstance = K2Node_Event_BurstDecalInstance;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast = CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast;
	Parms.CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_1 = CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_1;
	Parms.CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_2 = CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

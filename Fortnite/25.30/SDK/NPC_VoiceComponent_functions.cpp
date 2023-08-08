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


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlaySoundCue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*                   SoundToPlay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::PlaySoundCue(class USoundCue* SoundToPlay, class UAudioComponent* AudioComponent, bool* Success, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("NPC_VoiceComponent_C", "PlaySoundCue");

	Params::UNPC_VoiceComponent_C_PlaySoundCue_Params Parms;

	Parms.SoundToPlay = SoundToPlay;
	Parms.AudioComponent = AudioComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.SetSourceEffectChainToApply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundEffectSourcePresetChain*SourceEffectChain                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::SetSourceEffectChainToApply(class USoundEffectSourcePresetChain* SourceEffectChain)
{
	static auto Func = Class->GetFunction("NPC_VoiceComponent_C", "SetSourceEffectChainToApply");

	Params::UNPC_VoiceComponent_C_SetSourceEffectChainToApply_Params Parms;

	Parms.SourceEffectChain = SourceEffectChain;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.Internal Get Voice Sound Bank
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortTaggedSoundBank*        Sound_Bank                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortTaggedSoundBank*        CallFunc_GetVoiceSoundBank_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::Internal_Get_Voice_Sound_Bank(class UFortTaggedSoundBank** Sound_Bank, class UFortTaggedSoundBank* CallFunc_GetVoiceSoundBank_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_VoiceComponent_C", "Internal Get Voice Sound Bank");

	Params::UNPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank_Params Parms;

	Parms.CallFunc_GetVoiceSoundBank_ReturnValue = CallFunc_GetVoiceSoundBank_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sound_Bank != nullptr)
		*Sound_Bank = Parms.Sound_Bank;

}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.Deprecated Set Sound Bank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTaggedSoundBank*        SoundBank                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::Deprecated_Set_Sound_Bank(class UFortTaggedSoundBank* SoundBank)
{
	static auto Func = Class->GetFunction("NPC_VoiceComponent_C", "Deprecated Set Sound Bank");

	Params::UNPC_VoiceComponent_C_Deprecated_Set_Sound_Bank_Params Parms;

	Parms.SoundBank = SoundBank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Gameplay_Tag                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             AudioComponent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  SoundToPlay                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CurrentVOTag                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UFortTaggedSoundBank*        SoundBankToUse                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTaggedSoundBank*        CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             ()
// double                             CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetSoundToPlay_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_VoiceComponent_C::PlayVoiceLine(struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent, bool* Success, class USoundBase* SoundToPlay, const struct FGameplayTag& CurrentVOTag, class UFortTaggedSoundBank* SoundBankToUse, class UActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortTaggedSoundBank* CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsGameplayTagValid_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, class USoundBase* CallFunc_GetSoundToPlay_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_VoiceComponent_C", "PlayVoiceLine");

	Params::UNPC_VoiceComponent_C_PlayVoiceLine_Params Parms;

	Parms.Gameplay_Tag = Gameplay_Tag;
	Parms.AudioComponent = AudioComponent;
	Parms.SoundToPlay = SoundToPlay;
	Parms.CurrentVOTag = CurrentVOTag;
	Parms.SoundBankToUse = SoundBankToUse;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank = CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_GetSoundToPlay_ReturnValue = CallFunc_GetSoundToPlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

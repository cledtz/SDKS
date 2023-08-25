#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass NPC_VoiceComponent.NPC_VoiceComponent_C
class UNPC_VoiceComponent_C : public UFortAIComponent_Voice
{
public:
	class UFortTaggedSoundBank*                  DeprecatedBPSoundBank;                             // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       AttachComponent;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       TriggerTimeThreshold;                              // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LastTriggerTime;                                   // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Component;                                   // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundEffectSourcePresetChain*         SourceChainToApply;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNPC_VoiceComponent_C* GetDefaultObj();

	void PlaySoundCue(class USoundCue* SoundToPlay, class UAudioComponent* AudioComponent, bool* Success, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetSourceEffectChainToApply(class USoundEffectSourcePresetChain* SourceEffectChain);
	void Internal_Get_Voice_Sound_Bank(class UFortTaggedSoundBank** Sound_Bank, class UFortTaggedSoundBank* CallFunc_GetVoiceSoundBank_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Deprecated_Set_Sound_Bank(class UFortTaggedSoundBank* SoundBank);
	void PlayVoiceLine(struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent, bool* Success, class USoundBase* SoundToPlay, const struct FGameplayTag& CurrentVOTag, class UFortTaggedSoundBank* SoundBankToUse, class UActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortTaggedSoundBank* CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsGameplayTagValid_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, class USoundBase* CallFunc_GetSoundToPlay_ReturnValue);
};

}



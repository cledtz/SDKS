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


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SoundLibrarySetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAdding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::SoundLibrarySetup(bool IsAdding, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SoundLibrarySetup");

	Params::ABP_PlayerPawn_NonParticipant_C_SoundLibrarySetup_Params Parms;

	Parms.IsAdding = IsAdding;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnUnconverted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   UnconvertedPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveLooseGameplayTags_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveLooseGameplayTags_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::HandlePawnUnconverted(class AFortPawn* UnconvertedPawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_RemoveLooseGameplayTags_ReturnValue, bool CallFunc_RemoveLooseGameplayTags_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "HandlePawnUnconverted");

	Params::ABP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted_Params Parms;

	Parms.UnconvertedPawn = UnconvertedPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RemoveLooseGameplayTags_ReturnValue = CallFunc_RemoveLooseGameplayTags_ReturnValue;
	Parms.CallFunc_RemoveLooseGameplayTags_ReturnValue_1 = CallFunc_RemoveLooseGameplayTags_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnConverted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InstigatorPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   ConvertedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddLooseGameplayTags_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FFortAbilitySetHandle       CallFunc_EquipFortAbilitySet_ReturnValue                         (ContainsInstancedReference)
// bool                               CallFunc_AddLooseGameplayTags_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::HandlePawnConverted(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn, bool CallFunc_HasAuthority_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AddLooseGameplayTags_ReturnValue, FInterfaceProperty_ CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput, const struct FFortAbilitySetHandle& CallFunc_EquipFortAbilitySet_ReturnValue, bool CallFunc_AddLooseGameplayTags_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "HandlePawnConverted");

	Params::ABP_PlayerPawn_NonParticipant_C_HandlePawnConverted_Params Parms;

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddLooseGameplayTags_ReturnValue = CallFunc_AddLooseGameplayTags_ReturnValue;
	Parms.CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput = CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput;
	Parms.CallFunc_EquipFortAbilitySet_ReturnValue = CallFunc_EquipFortAbilitySet_ReturnValue;
	Parms.CallFunc_AddLooseGameplayTags_ReturnValue_1 = CallFunc_AddLooseGameplayTags_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayAlertLevelVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertLevel             OldAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             NewAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             OldAlertLevelLocal                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::PlayAlertLevelVO(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel, enum class EAlertLevel OldAlertLevelLocal, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class EAlertLevel Temp_byte_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, enum class EAlertLevel Temp_byte_Variable_1, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, enum class EAlertLevel Temp_byte_Variable_2, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool K2Node_Select_Default, bool K2Node_Select_Default_1, bool Temp_bool_Variable_17, bool K2Node_Select_Default_2, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsDead_ReturnValue, enum class EAlertLevel Temp_byte_Variable_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1, bool K2Node_Select_Default_3, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "PlayAlertLevelVO");

	Params::ABP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO_Params Parms;

	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;
	Parms.OldAlertLevelLocal = OldAlertLevelLocal;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1 = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2 = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3 = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandleAlertStateUpdates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetDistanceBetweenActors_Distance                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2              (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::HandleAlertStateUpdates(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class EAlertLevel Temp_byte_Variable, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, enum class EAlertLevel Temp_byte_Variable_1, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EAlertLevel Temp_byte_Variable_2, bool Temp_bool_Variable_14, enum class EAlertLevel Temp_byte_Variable_3, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsDead_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetDistanceBetweenActors_Distance, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2, bool K2Node_Select_Default, bool K2Node_Select_Default_1, bool K2Node_Select_Default_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool Temp_bool_Variable_18, bool CallFunc_BooleanOR_ReturnValue_2, bool Temp_bool_Variable_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Select_Default_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "HandleAlertStateUpdates");

	Params::ABP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDistanceBetweenActors_Distance = CallFunc_GetDistanceBetweenActors_Distance;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_2 = CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_bIsInVehicleThatSupportsNoAlertState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::OnRep_bIsInVehicleThatSupportsNoAlertState()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnRep_bIsInVehicleThatSupportsNoAlertState");

	Params::ABP_PlayerPawn_NonParticipant_C_OnRep_bIsInVehicleThatSupportsNoAlertState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdateAlertStateVehicleCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetVehicleUInterface_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetVehicleTags_ReturnValue                              (ConstParm)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::UpdateAlertStateVehicleCheck(bool CallFunc_IsInVehicle_ReturnValue, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetVehicleTags_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "UpdateAlertStateVehicleCheck");

	Params::ABP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck_Params Parms;

	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue = CallFunc_GetVehicleUInterface_ReturnValue;
	Parms.CallFunc_GetVehicleTags_ReturnValue = CallFunc_GetVehicleTags_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ClientOnTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::ClientOnTargetChanged(class AActor* NewTarget)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ClientOnTargetChanged");

	Params::ABP_PlayerPawn_NonParticipant_C_ClientOnTargetChanged_Params Parms;

	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetIconPlacement
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      SelfActor                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ViewingActor                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutExtents                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetIconPlacement_OutLocation                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetIconPlacement_OutExtents                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::GetIconPlacement(class AActor* SelfActor, class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents, const struct FVector& CallFunc_GetIconPlacement_OutLocation, const struct FVector& CallFunc_GetIconPlacement_OutExtents, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "GetIconPlacement");

	Params::ABP_PlayerPawn_NonParticipant_C_GetIconPlacement_Params Parms;

	Parms.SelfActor = SelfActor;
	Parms.ViewingActor = ViewingActor;
	Parms.CallFunc_GetIconPlacement_OutLocation = CallFunc_GetIconPlacement_OutLocation;
	Parms.CallFunc_GetIconPlacement_OutExtents = CallFunc_GetIconPlacement_OutExtents;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = Parms.OutLocation;

	if (OutExtents != nullptr)
		*OutExtents = Parms.OutExtents;

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ClientOnAlertLevelChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertLevel             OldAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             NewAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::ClientOnAlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ClientOnAlertLevelChanged");

	Params::ABP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged_Params Parms;

	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.InitializeAnimInstanceSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAnimInstance*     K2Node_DynamicCast_AsFort_Player_Anim_Instance                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::InitializeAnimInstanceSettings(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortPlayerAnimInstance* K2Node_DynamicCast_AsFort_Player_Anim_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "InitializeAnimInstanceSettings");

	Params::ABP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings_Params Parms;

	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Anim_Instance = K2Node_DynamicCast_AsFort_Player_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdatePatrolAnimSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPatrolAnimAsset*        FoundAnimAsset                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPatrolAnimLayer*        K2Node_DynamicCast_AsFort_Patrol_Anim_Layer                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPatrolAnimAsset*        CallFunc_GetPatrolAnimSetFromWeapon_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::UpdatePatrolAnimSet(class AFortWeapon* NewWeapon, class UFortPatrolAnimAsset* FoundAnimAsset, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue, class UFortPatrolAnimLayer* K2Node_DynamicCast_AsFort_Patrol_Anim_Layer, bool K2Node_DynamicCast_bSuccess, class UFortPatrolAnimAsset* CallFunc_GetPatrolAnimSetFromWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "UpdatePatrolAnimSet");

	Params::ABP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.FoundAnimAsset = FoundAnimAsset;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue = CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Patrol_Anim_Layer = K2Node_DynamicCast_AsFort_Patrol_Anim_Layer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPatrolAnimSetFromWeapon_ReturnValue = CallFunc_GetPatrolAnimSetFromWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetCurrentFullbodyHitReactionMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                CurrentMontage                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWalking_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::GetCurrentFullbodyHitReactionMontage(class UAnimMontage** CurrentMontage, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsWalking_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "GetCurrentFullbodyHitReactionMontage");

	Params::ABP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage_Params Parms;

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsWalking_ReturnValue = CallFunc_IsWalking_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentMontage != nullptr)
		*CurrentMontage = Parms.CurrentMontage;

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetDataTrackerActorStateFromAlertLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertLevel             AlertLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::SetDataTrackerActorStateFromAlertLevel(enum class EAlertLevel AlertLevel, enum class EAlertLevel Temp_byte_Variable, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SetDataTrackerActorStateFromAlertLevel");

	Params::ABP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel_Params Parms;

	Parms.AlertLevel = AlertLevel;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.DataTrackerSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Registering                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponentManager*CallFunc_GetCurrent_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::DataTrackerSetup(bool Is_Registering, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "DataTrackerSetup");

	Params::ABP_PlayerPawn_NonParticipant_C_DataTrackerSetup_Params Parms;

	Parms.Is_Registering = Is_Registering;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetCurrent_ReturnValue = CallFunc_GetCurrent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetupLootTierNameWithWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_GetWeaponDataAmmoWorldItemDefinition_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AB_Athena_Pickaxe_Generic_C* K2Node_DynamicCast_AsB_Athena_Pickaxe_Generic                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::SetupLootTierNameWithWeapon(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class UFortWorldItemDefinition* CallFunc_GetWeaponDataAmmoWorldItemDefinition_ReturnValue, class AB_Athena_Pickaxe_Generic_C* K2Node_DynamicCast_AsB_Athena_Pickaxe_Generic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, class FName K2Node_Select_Default, bool CallFunc_HasTag_ReturnValue_2, class FName K2Node_Select_Default_1, bool CallFunc_HasTag_ReturnValue_3, class FName K2Node_Select_Default_2, bool CallFunc_HasTag_ReturnValue_4, class FName K2Node_Select_Default_3, class FName K2Node_Select_Default_4)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SetupLootTierNameWithWeapon");

	Params::ABP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetWeaponDataAmmoWorldItemDefinition_ReturnValue = CallFunc_GetWeaponDataAmmoWorldItemDefinition_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Athena_Pickaxe_Generic = K2Node_DynamicCast_AsB_Athena_Pickaxe_Generic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_HasTag_ReturnValue_4 = CallFunc_HasTag_ReturnValue_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AlertLevelChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertLevel             OldAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::AlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel InputPin)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "AlertLevelChanged");

	Params::ABP_PlayerPawn_NonParticipant_C_AlertLevelChanged_Params Parms;

	Parms.OldAlertLevel = OldAlertLevel;
	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceComponentSoundByTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SoundBankTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             AudioComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPC_VoiceComponent_C*       FoundVoiceComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPC_VoiceComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UQuartzSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UQuartzClockHandle*          CallFunc_GetHandleForClock_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayVoiceLine_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::PlayVoiceComponentSoundByTag(const struct FGameplayTag& SoundBankTag, class UAudioComponent** AudioComponent, class UNPC_VoiceComponent_C* FoundVoiceComponent, class UAudioComponent* Temp_object_Variable, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable, class UNPC_VoiceComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UQuartzSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, class UQuartzClockHandle* CallFunc_GetHandleForClock_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* K2Node_Select_Default, bool CallFunc_PlayVoiceLine_Success)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "PlayVoiceComponentSoundByTag");

	Params::ABP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag_Params Parms;

	Parms.SoundBankTag = SoundBankTag;
	Parms.FoundVoiceComponent = FoundVoiceComponent;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetHandleForClock_ReturnValue = CallFunc_GetHandleForClock_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayVoiceLine_Success = CallFunc_PlayVoiceLine_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioComponent != nullptr)
		*AudioComponent = Parms.AudioComponent;

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetAlertedStateGameplayCue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Alerted                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Combat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void ABP_PlayerPawn_NonParticipant_C::SetAlertedStateGameplayCue(bool Alerted, bool Combat, int32 CallFunc_SelectInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SetAlertedStateGameplayCue");

	Params::ABP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue_Params Parms;

	Parms.Alerted = Alerted;
	Parms.Combat = Combat;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_NewTargetActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnRep_NewTargetActor(bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnRep_NewTargetActor");

	Params::ABP_PlayerPawn_NonParticipant_C_OnRep_NewTargetActor_Params Parms;

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_AlertLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::OnRep_AlertLevel()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnRep_AlertLevel");

	Params::ABP_PlayerPawn_NonParticipant_C_OnRep_AlertLevel_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAIComponent_Voice*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UFortAIComponent_Voice*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::UserConstructionScript(TArray<class UFortAIComponent_Voice*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UFortAIComponent_Voice* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "UserConstructionScript");

	Params::ABP_PlayerPawn_NonParticipant_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDBNOStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   FortPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bInIsDBNO                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnDBNOStateChanged_Event(class AFortPawn* FortPawn, bool bInIsDBNO)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnDBNOStateChanged_Event");

	Params::ABP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event_Params Parms;

	Parms.FortPawn = FortPawn;
	Parms.bInIsDBNO = bInIsDBNO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ReceiveBeginPlay");

	Params::ABP_PlayerPawn_NonParticipant_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AttemptPlayVocalReinforcementSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       MetadataTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_NonParticipant_C::AttemptPlayVocalReinforcementSound(const struct FGameplayTagContainer& MetadataTagContainer)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "AttemptPlayVocalReinforcementSound");

	Params::ABP_PlayerPawn_NonParticipant_C_AttemptPlayVocalReinforcementSound_Params Parms;

	Parms.MetadataTagContainer = MetadataTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ActivateAlertDBNOCleanUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::ActivateAlertDBNOCleanUp()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ActivateAlertDBNOCleanUp");

	Params::ABP_PlayerPawn_NonParticipant_C_ActivateAlertDBNOCleanUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAlertLEvelCHangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaAIBotController*  BotController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             OldAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             NewAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnAlertLEvelCHangedEvent(class AFortAthenaAIBotController* BotController, enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnAlertLEvelCHangedEvent");

	Params::ABP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent_Params Parms;

	Parms.BotController = BotController;
	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.TriggerIdleVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::TriggerIdleVO()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "TriggerIdleVO");

	Params::ABP_PlayerPawn_NonParticipant_C_TriggerIdleVO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 PrevWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnWeaponEquipped");

	Params::ABP_PlayerPawn_NonParticipant_C_OnWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ReceiveEndPlay");

	Params::ABP_PlayerPawn_NonParticipant_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PlayerPawn_NonParticipant_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::ABP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params Parms;

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnCharacterCustomizationCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnCharacterCustomizationCompleted");

	Params::ABP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted_Params Parms;

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GameplayCue.Player.Interrogation.Voice.PickedUp
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_PlayerPawn_NonParticipant_C::GameplayCue_Player_Interrogation_Voice_PickedUp(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "GameplayCue.Player.Interrogation.Voice.PickedUp");

	Params::ABP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnWeaponAttachmentChangedDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 PrevWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnWeaponAttachmentChangedDelegate_Event_0(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnWeaponAttachmentChangedDelegate_Event_0");

	Params::ABP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ChallengerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::ChallengerDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ChallengerDied");

	Params::ABP_PlayerPawn_NonParticipant_C_ChallengerDied_Params Parms;

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


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetChallenger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             Challenger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::SetChallenger(class AFortPlayerPawn* Challenger)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "SetChallenger");

	Params::ABP_PlayerPawn_NonParticipant_C_SetChallenger_Params Parms;

	Parms.Challenger = Challenger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkPatrolAnimLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::LinkPatrolAnimLayer()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "LinkPatrolAnimLayer");

	Params::ABP_PlayerPawn_NonParticipant_C_LinkPatrolAnimLayer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkOverrideAnimLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::LinkOverrideAnimLayer()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "LinkOverrideAnimLayer");

	Params::ABP_PlayerPawn_NonParticipant_C_LinkOverrideAnimLayer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAnimInputEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAnimInputEvent*         AnimInputEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnAnimInputEvent(class UFortAnimInputEvent* AnimInputEvent)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnAnimInputEvent");

	Params::ABP_PlayerPawn_NonParticipant_C_OnAnimInputEvent_Params Parms;

	Parms.AnimInputEvent = AnimInputEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReLinkAnimLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::ReLinkAnimLayer()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ReLinkAnimLayer");

	Params::ABP_PlayerPawn_NonParticipant_C_ReLinkAnimLayer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceSoundByTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SoundBankTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "PlayVoiceSoundByTag");

	Params::ABP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag_Params Parms;

	Parms.SoundBankTag = SoundBankTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnEnteredVehicleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::OnEnteredVehicleEvent()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnEnteredVehicleEvent");

	Params::ABP_PlayerPawn_NonParticipant_C_OnEnteredVehicleEvent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::OnExitedVehicleEvent()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnExitedVehicleEvent");

	Params::ABP_PlayerPawn_NonParticipant_C_OnExitedVehicleEvent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerPawn_NonParticipant_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnDeathPlayEffects");

	Params::ABP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortPawn*                   InstigatorPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   ConvertedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature");

	Params::ABP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature_Params Parms;

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortPawn*                   UnconvertedPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        UnconvertReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(class AFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature");

	Params::ABP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature_Params Parms;

	Parms.UnconvertedPawn = UnconvertedPawn;
	Parms.UnconvertReason = UnconvertReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicle
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PlayerPawn_NonParticipant_C::OnExitedVehicle()
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnExitedVehicle");

	Params::ABP_PlayerPawn_NonParticipant_C_OnExitedVehicle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDied_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnDied_Event(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnDied_Event");

	Params::ABP_PlayerPawn_NonParticipant_C_OnDied_Event_Params Parms;

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


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AiTargetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OldTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::AiTargetChanged(class AActor* OldTarget, class AActor* NewTarget)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "AiTargetChanged");

	Params::ABP_PlayerPawn_NonParticipant_C_AiTargetChanged_Params Parms;

	Parms.OldTarget = OldTarget;
	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ExecuteUbergraph_BP_PlayerPawn_NonParticipant
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OldTarget                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_NewTarget                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_CustomEvent_FortPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bInIsDBNO                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaAIBotController*  K2Node_DynamicCast_AsFort_Athena_AIBot_Controller                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PhoebeController_NonParticipant_C*K2Node_DynamicCast_AsBP_Phoebe_Controller_Non_Participant        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_MetadataTagContainer                                ()
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaAIBotController*  K2Node_CustomEvent_BotController                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             K2Node_CustomEvent_OldAlertLevel                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             K2Node_CustomEvent_NewAlertLevel                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_Event_NewWeapon                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_Event_PrevWeapon                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_HitComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_NormalImpulse                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_Hit                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FFortAbilitySetHandle       CallFunc_EquipFortAbilitySet_ReturnValue                         (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_Event_Pawn                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnSameTeam_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ConstParm, ContainsInstancedReference)
// class AFortWeapon*                 K2Node_CustomEvent_NewWeapon                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_CustomEvent_PrevWeapon                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_Challenger                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_3                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent*         K2Node_Event_AnimInputEvent                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent_AnimClass*K2Node_DynamicCast_AsFort_Anim_Input_Event_Anim_Class            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNamed_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNamed_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_SoundBankTag                                        (NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// class UAudioComponent*             CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_4           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EDeathCause             CallFunc_ToDeathCause_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_ComponentBoundEvent_InstigatorPawn                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_ComponentBoundEvent_ConvertedPawn                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_ComponentBoundEvent_UnconvertedPawn                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        K2Node_ComponentBoundEvent_UnconvertReason                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaAIBotController*  K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaAIBotController*  K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_2              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Min_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Max_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::ExecuteUbergraph_BP_PlayerPawn_NonParticipant(int32 EntryPoint, class AActor* K2Node_CustomEvent_OldTarget, class AActor* K2Node_CustomEvent_NewTarget, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AFortPawn* K2Node_CustomEvent_FortPawn, bool K2Node_CustomEvent_bInIsDBNO, bool CallFunc_Not_PreBool_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_PhoebeController_NonParticipant_C* K2Node_DynamicCast_AsBP_Phoebe_Controller_Non_Participant, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, const struct FGameplayTagContainer& K2Node_Event_MetadataTagContainer, bool CallFunc_IsDead_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AFortAthenaAIBotController* K2Node_CustomEvent_BotController, enum class EAlertLevel K2Node_CustomEvent_OldAlertLevel, enum class EAlertLevel K2Node_CustomEvent_NewAlertLevel, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool Temp_bool_Variable_1, double CallFunc_RandomFloatInRange_ReturnValue, class AFortWeapon* K2Node_Event_NewWeapon, class AFortWeapon* K2Node_Event_PrevWeapon, bool CallFunc_HasAuthority_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, const struct FGameplayTag& K2Node_Select_Default, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_HasAuthority_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, FInterfaceProperty_ CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput, const struct FFortAbilitySetHandle& CallFunc_EquipFortAbilitySet_ReturnValue, class AFortPlayerPawn* K2Node_Event_Pawn, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_OnSameTeam_ReturnValue, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, class AActor* K2Node_CustomEvent_DamagedActor_1, float K2Node_CustomEvent_Damage_1, class AController* K2Node_CustomEvent_InstigatedBy_1, class AActor* K2Node_CustomEvent_DamageCauser_1, const struct FVector& K2Node_CustomEvent_HitLocation_1, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent_1, class FName K2Node_CustomEvent_BoneName_1, const struct FVector& K2Node_CustomEvent_Momentum_1, class AFortPlayerPawn* K2Node_CustomEvent_Challenger, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class UFortAnimInputEvent* K2Node_Event_AnimInputEvent, class UFortAnimInputEvent_AnimClass* K2Node_DynamicCast_AsFort_Anim_Input_Event_Anim_Class, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsNamed_ReturnValue, bool CallFunc_IsNamed_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FGameplayTag& K2Node_Event_SoundBankTag, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3, enum class EAlertLevel Temp_byte_Variable, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool Temp_bool_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable_3, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class UAudioComponent* CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_4, enum class EDeathCause CallFunc_ToDeathCause_ReturnValue, class AFortPawn* K2Node_ComponentBoundEvent_InstigatorPawn, class AFortPawn* K2Node_ComponentBoundEvent_ConvertedPawn, class AFortPawn* K2Node_ComponentBoundEvent_UnconvertedPawn, enum class EUnconvertReason K2Node_ComponentBoundEvent_UnconvertReason, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_HasAuthority_ReturnValue_3, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class AController* CallFunc_GetController_ReturnValue, bool Temp_bool_Variable_4, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_1, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable_5, bool K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_2, bool K2Node_DynamicCast_bSuccess_5, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_RandomFloatInRange_Max_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "ExecuteUbergraph_BP_PlayerPawn_NonParticipant");

	Params::ABP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_OldTarget = K2Node_CustomEvent_OldTarget;
	Parms.K2Node_CustomEvent_NewTarget = K2Node_CustomEvent_NewTarget;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_FortPawn = K2Node_CustomEvent_FortPawn;
	Parms.K2Node_CustomEvent_bInIsDBNO = K2Node_CustomEvent_bInIsDBNO;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Athena_AIBot_Controller = K2Node_DynamicCast_AsFort_Athena_AIBot_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Phoebe_Controller_Non_Participant = K2Node_DynamicCast_AsBP_Phoebe_Controller_Non_Participant;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_MetadataTagContainer = K2Node_Event_MetadataTagContainer;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_BotController = K2Node_CustomEvent_BotController;
	Parms.K2Node_CustomEvent_OldAlertLevel = K2Node_CustomEvent_OldAlertLevel;
	Parms.K2Node_CustomEvent_NewAlertLevel = K2Node_CustomEvent_NewAlertLevel;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_NewWeapon = K2Node_Event_NewWeapon;
	Parms.K2Node_Event_PrevWeapon = K2Node_Event_PrevWeapon;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_ComponentBoundEvent_HitComponent = K2Node_ComponentBoundEvent_HitComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_NormalImpulse = K2Node_ComponentBoundEvent_NormalImpulse;
	Parms.K2Node_ComponentBoundEvent_Hit = K2Node_ComponentBoundEvent_Hit;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_2 = CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1 = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput = CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput;
	Parms.CallFunc_EquipFortAbilitySet_ReturnValue = CallFunc_EquipFortAbilitySet_ReturnValue;
	Parms.K2Node_Event_Pawn = K2Node_Event_Pawn;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_OnSameTeam_ReturnValue = CallFunc_OnSameTeam_ReturnValue;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2 = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_CustomEvent_NewWeapon = K2Node_CustomEvent_NewWeapon;
	Parms.K2Node_CustomEvent_PrevWeapon = K2Node_CustomEvent_PrevWeapon;
	Parms.K2Node_CustomEvent_DamagedActor_1 = K2Node_CustomEvent_DamagedActor_1;
	Parms.K2Node_CustomEvent_Damage_1 = K2Node_CustomEvent_Damage_1;
	Parms.K2Node_CustomEvent_InstigatedBy_1 = K2Node_CustomEvent_InstigatedBy_1;
	Parms.K2Node_CustomEvent_DamageCauser_1 = K2Node_CustomEvent_DamageCauser_1;
	Parms.K2Node_CustomEvent_HitLocation_1 = K2Node_CustomEvent_HitLocation_1;
	Parms.K2Node_CustomEvent_FHitComponent_1 = K2Node_CustomEvent_FHitComponent_1;
	Parms.K2Node_CustomEvent_BoneName_1 = K2Node_CustomEvent_BoneName_1;
	Parms.K2Node_CustomEvent_Momentum_1 = K2Node_CustomEvent_Momentum_1;
	Parms.K2Node_CustomEvent_Challenger = K2Node_CustomEvent_Challenger;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_3 = CallFunc_GetAbilitySystemComponent_ReturnValue_3;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.K2Node_Event_AnimInputEvent = K2Node_Event_AnimInputEvent;
	Parms.K2Node_DynamicCast_AsFort_Anim_Input_Event_Anim_Class = K2Node_DynamicCast_AsFort_Anim_Input_Event_Anim_Class;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsNamed_ReturnValue = CallFunc_IsNamed_ReturnValue;
	Parms.CallFunc_IsNamed_ReturnValue_1 = CallFunc_IsNamed_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_Event_SoundBankTag = K2Node_Event_SoundBankTag;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3 = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_1 = CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_4 = CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_4;
	Parms.CallFunc_ToDeathCause_ReturnValue = CallFunc_ToDeathCause_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InstigatorPawn = K2Node_ComponentBoundEvent_InstigatorPawn;
	Parms.K2Node_ComponentBoundEvent_ConvertedPawn = K2Node_ComponentBoundEvent_ConvertedPawn;
	Parms.K2Node_ComponentBoundEvent_UnconvertedPawn = K2Node_ComponentBoundEvent_UnconvertedPawn;
	Parms.K2Node_ComponentBoundEvent_UnconvertReason = K2Node_ComponentBoundEvent_UnconvertReason;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_1 = K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_2 = K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_RandomFloatInRange_Min_ImplicitCast = CallFunc_RandomFloatInRange_Min_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Max_ImplicitCast = CallFunc_RandomFloatInRange_Max_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDeathCause             Cause                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnDeath__DelegateSignature(enum class EDeathCause Cause)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnDeath__DelegateSignature");

	Params::ABP_PlayerPawn_NonParticipant_C_OnDeath__DelegateSignature_Params Parms;

	Parms.Cause = Cause;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAlertLevelChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertLevel             OldAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertLevel             NewAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnAlertLevelChanged__DelegateSignature(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnAlertLevelChanged__DelegateSignature");

	Params::ABP_PlayerPawn_NonParticipant_C_OnAlertLevelChanged__DelegateSignature_Params Parms;

	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnTargetChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerPawn_NonParticipant_C::OnTargetChanged__DelegateSignature(class AActor* NewTarget)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_NonParticipant_C", "OnTargetChanged__DelegateSignature");

	Params::ABP_PlayerPawn_NonParticipant_C_OnTargetChanged__DelegateSignature_Params Parms;

	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

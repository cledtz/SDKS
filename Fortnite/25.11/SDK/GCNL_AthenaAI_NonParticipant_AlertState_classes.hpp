#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xA48 - 0x9F0)
// BlueprintGeneratedClass GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C
class AGCNL_AthenaAI_NonParticipant_AlertState_C : public AFortGameplayCueNotifyAthena_AIAlertState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                          IconColorAlert;                                    // 0x9F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          IconColorThreatend;                                // 0xA08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AnimationLength;                                   // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          IconColorAlertInner;                               // 0xA20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Aggro_Sound;                                       // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SearchingSound;                                    // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             Pawn_Converter;                                    // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_AthenaAI_NonParticipant_AlertState_C");
		return Clss;
	}

	void Play_Alert_Sound(class AActor* TargetedActor, class ABP_PlayerPawn_NonParticipant_C* K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationForActorToLocalPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnApplication(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState(int32 EntryPoint, double CallFunc_Conv_IntToDouble_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_1, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

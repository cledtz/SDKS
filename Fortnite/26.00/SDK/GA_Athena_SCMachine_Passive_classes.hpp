#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xB80 - 0xB28)
// BlueprintGeneratedClass GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C
class UGA_Athena_SCMachine_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortPlayerPawnAthena*                 PlayerPawn;                                        // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnZOffset;                                      // 0xB38(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BlockChipSpawnTag;                                 // 0xB50(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8177[0x4];                                     // Fixing Size After Last Property 
	struct FScalableFloat                        DropRebootCards;                                   // 0xB58(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Athena_SCMachine_Passive_C* GetDefaultObj();

	void CheckPlayerChipSpawnEnabled(bool* IsChipSpawnEnabled, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Check_Resurrection_Active(bool* bEnabled, bool PlaylistValid, class FName TestPlaylist, class UGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortGameStateComponent_Reboot* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsResurrectionEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SaveOutPlayer(class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void Spawn();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Athena_SCMachine_Passive(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_HasTag_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, class UGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Check_Resurrection_Active_bEnabled, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UBGA_Athena_SCMachine_Pickup_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_CheckPlayerChipSpawnEnabled_IsChipSpawnEnabled, class UFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsRespawningAllowed_ReturnValue, bool CallFunc_GetValueAsBoolWithContext_ReturnValue);
};

}



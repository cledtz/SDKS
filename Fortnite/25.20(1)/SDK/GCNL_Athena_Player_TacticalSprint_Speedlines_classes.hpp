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

// 0x48 (0x9B0 - 0x968)
// BlueprintGeneratedClass GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C
class UGCNL_Athena_Player_TacticalSprint_Speedlines_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       TimeBetweenLoopUpdates;                            // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             Particle_Components;                               // 0x978(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UCharacter*                            TargetCharacter;                                   // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLocallyViewed;                                   // 0x990(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0BB[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       As_Fort_Player_Pawn;                               // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        SurfaceTypeInt;                                    // 0x9A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0BC[0x4];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          LoopUpdateTimer;                                   // 0x9A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_Player_TacticalSprint_Speedlines_C");
		return Clss;
	}

	void CheckSurfaceType(class UFortPawn* Pawn, int32* SurfaceTypeInt, enum class EFortFootstepSurfaceType CallFunc_GetFootstepSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
	void GetPercentageSprintEnergy(class UActor* Energy_Owning_Actor, double* CurrentEnergyPercentage, bool CallFunc_IsValid_ReturnValue, class UTacticalSprintEnergyComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurrentEnergyPercentage_ReturnValue, double K2Node_FunctionResult_CurrentEnergyPercentage_ImplicitCast);
	void OnLoopingStartNiagara(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void LoopUpdate();
	void MovementModeChanged(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnRemovalGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void UpdateSurfaceType();
	void ExecuteUbergraph_GCNL_Athena_Player_TacticalSprint_Speedlines(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, class UNiagaraComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UNiagaraComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UCharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_GetPercentageSprintEnergy_CurrentEnergyPercentage, class UNiagaraComponent* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsWalking_ReturnValue, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsWalking_ReturnValue_1, class UNiagaraComponent* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_CheckSurfaceType_SurfaceTypeInt, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

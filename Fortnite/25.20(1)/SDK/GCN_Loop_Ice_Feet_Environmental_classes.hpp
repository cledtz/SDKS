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

// 0x38 (0x9A0 - 0x968)
// BlueprintGeneratedClass GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C
class UGCN_Loop_Ice_Feet_Environmental_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UActor*                                TargetActor;                                       // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UFXSystemComponent*>            SpawnedEmitters;                                   // 0x978(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UFortCollisionAudioComponent*          CollisionAudioComp;                                // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>               SpawnedAudioComps;                                 // 0x990(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_Ice_Feet_Environmental_C");
		return Clss;
	}

	void AttachFX(class USceneComponent* Mesh, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast);
	void ReceiveTick(float DeltaSeconds);
	void OnPawnMovementModeChanged(class UCharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void On_Footstep_Event();
	void OnLoopingStartGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_MapRangeClamped_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, int32 CallFunc_Array_LastIndex_ReturnValue, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, class UCharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsMovingOnGround_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue_1, class UAudioComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Clamp_ReturnValue_2, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput_1, class UAudioComponent* CallFunc_Array_Get_Item_2, FInterfaceProperty_ CallFunc_SetTriggerParameter_self_CastInput, int32 CallFunc_Array_LastIndex_ReturnValue_3, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 CallFunc_Clamp_ReturnValue_3, class UAudioComponent* CallFunc_Array_Get_Item_3, class UFXSystemComponent* CallFunc_Array_Get_Item_4, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_1, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, bool CallFunc_Less_IntInt_ReturnValue_1, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_1, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_SetFloatParameter_InFloat_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

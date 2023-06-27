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

// 0x70 (0x380 - 0x310)
// BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C
class ABP_VictoryDrone_C : public APawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponentBudgeted*        SkeletalMeshComponentBudgeted;                     // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SpawnOutAnimEndedDispatcher;                       // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       AnimPlayRate;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              StaticMeshMID;                                     // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         TeleportIn;                                        // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsAthena;                                          // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_94C0[0x6];                                     // Fixing Size After Last Property..
	class AFortPawn*                             TargetPlayer;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystemComponent*              CharacterAttached;                                 // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         InLobby;                                           // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsNPC;                                             // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_94C1[0x2];                                     // Fixing Size After Last Property..
	class FName                                  AttachPoint;                                       // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDecoy;                                           // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_94C2[0x7];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                Mesh_for_Attachment;                               // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnNPCDeath;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_VictoryDrone_C");
		return Clss;
	}

	void Added_Death_Audio(class USoundBase* Sound_to_Spawn, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
	void Decoy_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_6, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_7, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_8, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array);
	void NPC_FX_Parameters(TArray<struct FParticleSysParam>* Instance_Parameters, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_6, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_7, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_8, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array);
	void NotifyTeleportFinishedTriggered(bool CallFunc_HasAuthority_ReturnValue);
	void PlaySpawnAnim(class UAnimMontage* Montage, double NewLocalVar_0, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UAnimationAsset* Temp_object_Variable, class UAnimationAsset* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAnimationAsset* Temp_object_Variable_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool Temp_bool_Variable_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, class UAnimationAsset* Temp_object_Variable_3, class UAnimationAsset* Temp_object_Variable_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimationAsset* K2Node_Select_Default, bool Temp_bool_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimationAsset* K2Node_Select_Default_1, class UAnimationAsset* K2Node_Select_Default_2, class UAnimationAsset* K2Node_Select_Default_3, float CallFunc_SetPlayRate_Rate_ImplicitCast);
	void InitDrone();
	void ReceiveBeginPlay();
	void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_VictoryDrone(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double Temp_real_Variable, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, float K2Node_Event_DeltaSeconds, double Temp_real_Variable_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, double K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, float CallFunc_Delay_Duration_ImplicitCast);
	void SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

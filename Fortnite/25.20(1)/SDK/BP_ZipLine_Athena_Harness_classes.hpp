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

// 0x108 (0x398 - 0x290)
// BlueprintGeneratedClass BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C
class UBP_ZipLine_Athena_Harness_C : public UActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Zipline_AttachedToPlayer;                        // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Zipline_Magnet;                                 // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Zipline_Pulley_SpeedLines;                       // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Zipline_Motor;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SpawnFX;                                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DestroyFX;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CollideDestroyVFX;                                 // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SpawnSound;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            UnSpawnSound;                                      // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       AttachedPlayer;                                    // 0x2F0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HasHitAnotherPlayer;                               // 0x2F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9563[0x7];                                     // Fixing Size After Last Property..
	double                                       ZiplineChimeVisualUpdate;                          // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ChimeTimer;                                        // 0x308(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ZiplineDirection;                                  // 0x310(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Athena_Environmental_ZipLine_Spline_C* EnvZiplineSpline;                                  // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SplineRotationUpdateSeconds;                       // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MotorUpdateTimer;                                  // 0x338(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaZipline*                    AttachedZipline;                                   // 0x340(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DebugOutput;                                       // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReversingMomentum;                               // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTravelingUphill;                                // 0x34A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTravelingDownhill;                              // 0x34B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GCNTag_Travel;                                     // 0x34C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            TravelSound;                                       // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GCNTag_HighSpeed;                                  // 0x358(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GCNTag_ZiplineBraking;                             // 0x35C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bLoopingDownhillGCN;                               // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9564[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           DownhillTravelGE;                                  // 0x364(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMeshAttachment;                                 // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9565[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               CurrentDesired_Zipline_Offset;                     // 0x370(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* DynamicZiplineSpline;                              // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                      NewVar_0;                                          // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ZipLine_Athena_Harness_C");
		return Clss;
	}

	void OnRep_AttachedPlayer();
	void Update_Audio_and_VFXParams(double Alpha, double SpeedFactor, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, float CallFunc_GetZiplineSpeedFactor_ReturnValue, float CallFunc_GetZiplineSpeedFactorTarget_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1, double K2Node_VariableSet_SpeedFactor_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void ReceiveBeginPlay();
	void Start_Travel_Audio();
	void Stop_Travel_Audio();
	void ReceiveDestroyed();
	void HandleOnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void Chime_Visual();
	void OrientMotorForZipline(class UFortAthenaZiplineBase* Zipline, const struct FVector& DesiredZiplineOffset);
	void RotateToZiplineDirection();
	void UpdateMotorToSpline();
	void UpdateParamsForAudioAndVFX();
	void Cleanup_On_DownhillGCN();
	void UpdateZiplineOffsetLocation();
	void UpdateMotorToDynSpline();
	void ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UController* K2Node_CustomEvent_InstigatedBy, class UActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool Temp_bool_Variable_1, class UParticleSystem* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, class UFortAthenaZiplineBase* K2Node_CustomEvent_Zipline, const struct FVector& K2Node_CustomEvent_DesiredZiplineOffset, uint8 CallFunc_GetActorTeam_ReturnValue, class UPROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_FindDirectionClosestToWorldLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* K2Node_Select_Default_1, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, TArray<class UFortPlayerController*>& Temp_object_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FVector& CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

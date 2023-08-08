#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B9 (0xC49 - 0x990)
// BlueprintGeneratedClass BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C
class UBGA_Athena_WithGravity_Parent_C : public UBuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x990(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*        FortWaterInteraction;                              // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x9A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x9A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ResumeGravSimOnBegin;                              // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bResumeSimulation;                                 // 0x9B1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1DA[0x6];                                     // Fixing Size After Last Property
	struct FHitResult                            NullHit;                                           // 0x9B8(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               GravImpact_Loc;                                    // 0xA98(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GravHitNormal;                                     // 0xAB0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GravMaxSlope;                                      // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckForBounce;                                    // 0xAD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1DD[0x7];                                     // Fixing Size After Last Property
	double                                       ForcedBounceExtraZ;                                // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ForcedBounceCurrentCount;                          // 0xAE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1DE[0x4];                                     // Fixing Size After Last Property
	double                                       ForcedBounceMult;                                  // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActor*>                        GravFoundBuildingOnDied;                           // 0xAF0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         RepCollision;                                      // 0xB00(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1DF[0x7];                                     // Fixing Size After Last Property
	class UObject*                               AdditionalBounceObject;                            // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ForcedBounceMaxCount;                              // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceBounce;                                       // 0xB14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CountNonForceBounces;                              // 0xB15(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1E0[0x2];                                     // Fixing Size After Last Property
	double                                       BounceExtraZ;                                      // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BounceMult;                                        // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldAttach;                                      // 0xB28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1E2[0x7];                                     // Fixing Size After Last Property
	TArray<class UActor*>                        ActorsToNotAttachTo;                               // 0xB30(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         DontAttachToOthersOfThisClass;                     // 0xB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugText;                                         // 0xB41(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldNotReattach;                                 // 0xB42(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockStoppingSim;                                  // 0xB43(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeactivatePawnAndVehicleCollisionOnStop;           // 0xB44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowReattachmentToActors;                         // 0xB45(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A1E5[0x2];                                     // Fixing Size After Last Property
	struct FHitResult                            StopSimHitResult;                                  // 0xB48(0xE0)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               StopSimServerLocation;                             // 0xC28(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                       BounceAwayFromLocation_MinSpeed;                   // 0xC40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BounceOffTires;                                    // 0xC48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BGA_Athena_WithGravity_Parent_C");
		return Clss;
	}

	void BounceBGAAwayFromLocation(const struct FVector& LocationToBounceAwayFrom, double CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1);
	void OnRep_StopSimServerLocation(const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void OnRep_StopLocation();
	void Init(const struct FVector& GravHitNormal);
	void OnAttach(class UActor* AttachedActor);
	void RestartSimulation();
	void AttachToBindedActor(class UPrimitiveComponent* AttachComp, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class UBuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanActorSimulatePhysics_ReturnValue, TScriptInterface<class UFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_2);
	void BounceBGA(int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void CheckForSameClassToBounce(class UActor* Hit, bool* HitSameClass, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void OnRep_RepCollision();
	void ForceBounceBGA(int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void OnRep_bResumeSimulation();
	void BaseDestroyed(class UActor* DestroyedActor);
	void BaseDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleBinding(class UActor* Actor, class UPrimitiveComponent* HitComp);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class UActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void StopSim(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Impulse(double DelayBeforeImpulse, double DelayBeforeCollision, const struct FVector& ImpulseOrigin, const struct FVector& ImpulseAmount, bool SetCollisionAfterImpulse);
	void PlayHitFX(const struct FHitResult& HitResult);
	void SpawnFXSounds();
	void AttachedWasDestroyed();
	void SlidingDoorOpened();
	void OnUnderneathPhysicsObjectAwakeChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake);
	void ExecuteUbergraph_BGA_Athena_WithGravity_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& K2Node_CustomEvent_HitResult, class UActor* CallFunc_Array_Get_Item, class UBGA_Athena_WithGravity_Parent_C* K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent, bool K2Node_DynamicCast_bSuccess, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double K2Node_CustomEvent_DelayBeforeImpulse, double K2Node_CustomEvent_DelayBeforeCollision, const struct FVector& K2Node_CustomEvent_ImpulseOrigin, const struct FVector& K2Node_CustomEvent_ImpulseAmount, bool K2Node_CustomEvent_SetCollisionAfterImpulse, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FHitResult& K2Node_CustomEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class UActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, double CallFunc_Dot_VectorVector_ReturnValue, class FName CallFunc_GetAttachSocketName_ReturnValue, double CallFunc_DegAcos_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckForSameClassToBounce_HitSameClass, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Array_Contains_ReturnValue, class UBGA_Athena_WithGravity_Parent_C* K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanAND_ReturnValue_2, class UFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess_5, class UActor* K2Node_CustomEvent_Actor, class UPrimitiveComponent* K2Node_CustomEvent_HitComp, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor_1, bool K2Node_DynamicCast_bSuccess_6, class UFortPhysicsObjectComponent* CallFunc_GetPhysicsObjectComponent_ReturnValue, bool CallFunc_CanActorSimulatePhysics_ReturnValue, class UMilitaryBase_Door_01_C* K2Node_DynamicCast_AsMilitary_Base_Door_01, bool K2Node_DynamicCast_bSuccess_7, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UFortAthenaWater* K2Node_DynamicCast_AsFort_Athena_Water, bool K2Node_DynamicCast_bSuccess_9, class UFortWaterBodyBP_C* K2Node_DynamicCast_AsFort_Water_Body_BP, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_BooleanOR_ReturnValue_1, class UActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UController* K2Node_CustomEvent_InstigatedBy, class UActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, TArray<class UActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UActor* K2Node_CustomEvent_DestroyedActor, class UPrimitiveComponent* K2Node_CustomEvent_SimulatingComponent, bool K2Node_CustomEvent_bIsAwake, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UActor* CallFunc_GetOwner_ReturnValue, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor_2, bool K2Node_DynamicCast_bSuccess_11, class UFortPhysicsObjectComponent* CallFunc_GetPhysicsObjectComponent_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

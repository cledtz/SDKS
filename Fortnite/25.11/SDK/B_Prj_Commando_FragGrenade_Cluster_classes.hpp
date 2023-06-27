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

// 0x58 (0xAD8 - 0xA80)
// BlueprintGeneratedClass B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
class AB_Prj_Commando_FragGrenade_Cluster_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem1;                                   // 0xA88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio1;                                            // 0xA90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BounceSound;                                       // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Explosion;                                       // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ExplosionSound;                                    // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ExplosionLocation;                                 // 0xAB0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinExplosionDelay;                                 // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxExplosionDelay;                                 // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Commando_FragGrenade_Cluster_C");
		return Clss;
	}

	void OnStop(struct FHitResult& Hit);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, bool Temp_bool_IsClosed_Variable_1, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

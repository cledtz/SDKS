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

// 0x8 (0xC48 - 0xC40)
// BlueprintGeneratedClass Prop_PhysicsBoulder_Desert_01.Prop_PhysicsBoulder_Desert_01_C
class AProp_PhysicsBoulder_Desert_01_C : public AProp_PhysicsBoulder_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prop_PhysicsBoulder_Desert_01_C");
		return Clss;
	}

	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Prop_PhysicsBoulder_Desert_01(int32 EntryPoint, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue_2, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

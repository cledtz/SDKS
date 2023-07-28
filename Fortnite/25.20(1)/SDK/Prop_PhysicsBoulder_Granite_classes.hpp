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

// 0x28 (0xC68 - 0xC40)
// BlueprintGeneratedClass Prop_PhysicsBoulder_Granite.Prop_PhysicsBoulder_Granite_C
class UProp_PhysicsBoulder_Granite_C : public UProp_PhysicsBoulder_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraSystem*                        NS_RollingEffects;                                 // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  RollingEffectsVector3VarName;                      // 0xC50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F6D[0x4];                                     // Fixing Size After Last Property..
	class UNiagaraSystem*                        OnSpawnFX_One;                                     // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        OnSpawnFX_Two;                                     // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prop_PhysicsBoulder_Granite_C");
		return Clss;
	}

	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class UActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Prop_PhysicsBoulder_Granite(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class UFortPawn* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class UActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue_2, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

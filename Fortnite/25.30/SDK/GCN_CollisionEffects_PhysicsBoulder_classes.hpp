#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x368 - 0x368)
// BlueprintGeneratedClass GCN_CollisionEffects_PhysicsBoulder.GCN_CollisionEffects_PhysicsBoulder_C
class UGCN_CollisionEffects_PhysicsBoulder_C : public UGCN_CollisionEffects_Parent_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_CollisionEffects_PhysicsBoulder_C");
		return Clss;
	}

	void OnBurstNiagara(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance, class UNiagaraComponent* CallFunc_Array_Get_Item, class UProp_PhysicsBoulder_Granite_C* K2Node_DynamicCast_AsProp_Physics_Boulder_Granite, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UProp_PhysicsBoulder_Desert_01_C* K2Node_DynamicCast_AsProp_Physics_Boulder_Desert_01, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

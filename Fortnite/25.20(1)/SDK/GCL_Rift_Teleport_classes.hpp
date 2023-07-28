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

// 0x0 (0x370 - 0x370)
// BlueprintGeneratedClass GCL_Rift_Teleport.GCL_Rift_Teleport_C
class UGCL_Rift_Teleport_C : public UFortGameplayCueNotify_Looping
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_Rift_Teleport_C");
		return Clss;
	}

	bool WhileActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, FInterfaceProperty_ CallFunc_SpawnGenericCameraLensEffect_ReturnValue, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshComponent_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
	bool OnRemove(class UActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, struct FGameplayCueParameters& Parameters);
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, struct FGameplayCueParameters& Parameters);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

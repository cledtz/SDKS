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

// 0x30 (0x560 - 0x530)
// BlueprintGeneratedClass GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
class UGCN_BurtCharging_Player_Latent_C : public UFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x530(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerController*                     GCPlayerController;                                // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       FortPlayerPawn;                                    // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BoostSound;                                        // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BoostAudioComponent;                               // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BoostEndSound;                                     // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_BurtCharging_Player_Latent_C");
		return Clss;
	}

	bool OnExecute(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue);
	void ExecuteBoostLogic();
	void BoostEndEvent();
	void ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, FInterfaceProperty_ CallFunc_AddGenericCameraLensEffect_ReturnValue, class UFXSystemComponent* CallFunc_GetPrimaryParticleComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

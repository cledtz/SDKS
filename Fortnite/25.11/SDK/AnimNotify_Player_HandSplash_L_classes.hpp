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

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_Player_HandSplash_L.AnimNotify_Player_HandSplash_L_C
class UAnimNotify_Player_HandSplash_L_C : public UAnimNotify
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_Player_HandSplash_L_C");
		return Clss;
	}

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UFXSystemComponent* CallFunc_GetActivePlayerHandSplashInWaterComponent_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

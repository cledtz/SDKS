#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA1 - 0xA1)
// BlueprintGeneratedClass AnimNotifyState_HightBeam_HandFX_HologramHide.AnimNotifyState_HightBeam_HandFX_HologramHide_C
class UAnimNotifyState_HightBeam_HandFX_HologramHide_C : public UFN_TimedNiagaraNotify_C
{
public:

	static class UClass* StaticClass();
	static class UAnimNotifyState_HightBeam_HandFX_HologramHide_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Received_NotifyTick_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInFrontEndHologram_ReturnValue, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}



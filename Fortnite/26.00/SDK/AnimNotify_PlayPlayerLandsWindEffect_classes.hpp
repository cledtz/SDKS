#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_PlayPlayerLandsWindEffect.AnimNotify_PlayPlayerLandsWindEffect_C
class UAnimNotify_PlayPlayerLandsWindEffect_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerLandsWindEffect_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}



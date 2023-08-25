#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C
class UAnimNotify_PlaySoundWithCondition_C : public UFortAnimNotify_PlaySoundConditional
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_PlaySoundWithCondition_C* GetDefaultObj();

	bool ShouldTriggerAnimNotify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UActor* CallFunc_GetOwner_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthenaFromContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ShouldPlayDeathSoundEffects_ReturnValue);
};

}



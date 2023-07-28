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

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass AnimNotify_PlaySoundWithCondition.AnimNotify_PlaySoundWithCondition_C
class UAnimNotify_PlaySoundWithCondition_C : public UFortAnimNotify_PlaySoundConditional
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlaySoundWithCondition_C");
		return Clss;
	}

	bool ShouldTriggerAnimNotify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UActor* CallFunc_GetOwner_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthenaFromContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ShouldPlayDeathSoundEffects_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

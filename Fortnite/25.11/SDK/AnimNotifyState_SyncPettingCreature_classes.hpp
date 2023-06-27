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

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass AnimNotifyState_SyncPettingCreature.AnimNotifyState_SyncPettingCreature_C
class UAnimNotifyState_SyncPettingCreature_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_SyncPettingCreature_C");
		return Clss;
	}

	void GetRiderPettingMontage(class AActor* RiderActor, class UAnimMontage** RiderPettingMontage, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FRidingPettingData& CallFunc_GetPettingData_ReturnValue, const struct FRidingPettingData& CallFunc_GetPettingData_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FRidingPettingData& CallFunc_GetPettingData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class URiderComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimMontage* CallFunc_GetRiderPettingMontage_RiderPettingMontage, const struct FRidingPettingData& CallFunc_GetPettingData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_GrindRailLand.AnimNotify_GrindRailLand_C
class UAnimNotify_GrindRailLand_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_GrindRailLand_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UBP_GrindingComponent_C* GrindingComponent, class UActor* CallFunc_GetOwner_ReturnValue, class UBP_GrindingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// BlueprintGeneratedClass AnimNotify_FootStep.AnimNotify_FootStep_C
class UAnimNotify_FootStep_C : public UAnimNotify
{
public:
	int32                                        FootIndex;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPlayerFoleyContextSettings       PreviewSettings;                                   // 0x3C(0x14)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UAnimNotify_FootStep_C* GetDefaultObj();

	void AudioPreview(class UActor* InActor, class UObject* K2Node_DynamicCast_AsAnimation_Editor_Preview_Actor, bool K2Node_DynamicCast_bSuccess, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UBP_AnimPreviewFoleyComponent_C* CallFunc_FindOrAddArbitraryComponent_ReturnValue, class USoundLibraryContext* CallFunc_GetContext_ReturnValue, class UFortPlayerFoleyContext* K2Node_DynamicCast_AsFort_Player_Foley_Context, bool K2Node_DynamicCast_bSuccess_1, const struct FSoundLibraryPlayResult& CallFunc_PlaySound_OutResults);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}



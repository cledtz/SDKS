#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C
class UAnimNotify_FootStep_Right_C : public UAnimNotify_FootStep_C
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_FootStep_Right_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Received_Notify_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class UInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1);
};

}



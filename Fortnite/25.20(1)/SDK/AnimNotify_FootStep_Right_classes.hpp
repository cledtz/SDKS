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

// 0x0 (0x3C - 0x3C)
// BlueprintGeneratedClass AnimNotify_FootStep_Right.AnimNotify_FootStep_Right_C
class UAnimNotify_FootStep_Right_C : public UAnimNotify_FootStep_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_FootStep_Right_C");
		return Clss;
	}

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Received_Notify_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, FInterfaceProperty_ K2Node_DynamicCast_AsInterface_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x60 - 0x38)
// BlueprintGeneratedClass AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
class UAnimNotify_PlayForceFeedback_C : public UAnimNotify
{
public:
	class UForceFeedbackEffect*                  ForceFeedbackTemplate;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ForceFeedbackFarTemplate;                          // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayAtWorldLocation;                              // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6ACC[0x7];                                     // Fixing Size After Last Property
	double                                       InnerRadius;                                       // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OuterRadius;                                       // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlayForceFeedback_C");
		return Clss;
	}

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_PlayLocalForceFeedbackAtLocationMulti_InnerRadius_ImplicitCast, float CallFunc_PlayLocalForceFeedbackAtLocationMulti_OuterRadius_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

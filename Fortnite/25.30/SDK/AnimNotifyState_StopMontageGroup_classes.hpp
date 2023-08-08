#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C
class UAnimNotifyState_StopMontageGroup_C : public UAnimNotifyState
{
public:
	class FName                                  GroupNameToStop;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81EF[0x4];                                     // Fixing Size After Last Property
	double                                       BlendOutTime;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_StopMontageGroup_C");
		return Clss;
	}

	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_StopGroupByName_InBlendOutTime_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

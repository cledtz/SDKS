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

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_EliminationBotM2.AnimNotify_EliminationBotM2_C
class UAnimNotify_EliminationBotM2_C : public UAnimNotify
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_EliminationBotM2_C");
		return Clss;
	}

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TeleportationDrone_C* K2Node_DynamicCast_AsBP_Teleportation_Drone, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsElimination_Bot_VFXInterface, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

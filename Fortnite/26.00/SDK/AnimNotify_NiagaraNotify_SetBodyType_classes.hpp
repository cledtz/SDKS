#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA0 - 0x88)
// BlueprintGeneratedClass AnimNotify_NiagaraNotify_SetBodyType.AnimNotify_NiagaraNotify_SetBodyType_C
class UAnimNotify_NiagaraNotify_SetBodyType_C : public UFortAnimNotifyState_TimedNiagaraEffectVariant
{
public:
	enum class EFortCustomPartType               Part_Type;                                         // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D54[0x7];                                     // Fixing Size After Last Property 
	class FString                                Skeletal_Mesh_User_Name;                           // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotify_NiagaraNotify_SetBodyType_C* GetDefaultObj();

	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue);
};

}



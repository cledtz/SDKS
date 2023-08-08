#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x360 - 0x318)
// BlueprintGeneratedClass BP_TeleportationDrone.BP_TeleportationDrone_C
class UBP_TeleportationDrone_C : public UPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponentBudgeted*        SkeletalMeshComponentBudgeted;                     // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       AnimPlayRate;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              StaticMeshMID;                                     // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         TeleportIn;                                        // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_22F2[0x7];                                     // Fixing Size After Last Property
	class UParticleSystemComponent*              CharacterAttached;                                 // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         InLobby;                                           // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_22F3[0x7];                                     // Fixing Size After Last Property
	class USkeletalMeshComponent*                Mesh_for_Attachment;                               // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_TeleportationDrone_C");
		return Clss;
	}

	class UAnimationAsset* Get_Spawn_Animation(bool Temp_bool_Variable, class UAnimationAsset* Temp_object_Variable, class UAnimationAsset* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAnimationAsset* Temp_object_Variable_2, class UAnimationAsset* K2Node_Select_Default, class UAnimationAsset* K2Node_Select_Default_1);
	void PlaySpawnAnim(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimationAsset* CallFunc_Get_Spawn_Animation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_SetPlayRate_Rate_ImplicitCast);
	void ReceiveBeginPlay();
	void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_TeleportationDrone(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

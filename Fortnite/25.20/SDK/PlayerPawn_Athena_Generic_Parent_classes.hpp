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

// 0xF0 (0x5730 - 0x5640)
// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5640(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMotionWarpingComponent*               MotionWarping;                                     // 0x5648(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMultiInteractActorComponent_C*        MultiInteractActorComponent;                       // 0x5650(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            Default_Weapon_Materials;                          // 0x5658(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBackpackMaterials;                             // 0x5668(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHatMaterials;                                  // 0x5678(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHeadMaterials;                                 // 0x5688(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBodyMaterials;                                 // 0x5698(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnCharmMaterials;                                // 0x56A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnFaceMaterials;                                 // 0x56B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPostProcessComponent*                 PlayerPostProcessFX;                               // 0x56C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        SkeletalMeshes;                                    // 0x56D0(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>      PawnMaterials_ALL;                                 // 0x56E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            ShootingTargetReactToJump;                         // 0x56F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPlayHit;                                         // 0x5700(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEnteredVehicleDispatcher;                        // 0x5710(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnExitedVehicleDispatcher;                         // 0x5720(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Athena_Generic_Parent_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void OnEnteredVehicle();
	void OnExitedVehicle();
	void OnJumped();
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_HalfHeightAdjust_1, float K2Node_Event_ScaledHalfHeightAdjust_1, float K2Node_Event_HalfHeightAdjust, float K2Node_Event_ScaledHalfHeightAdjust);
	void OnExitedVehicleDispatcher__DelegateSignature();
	void OnEnteredVehicleDispatcher__DelegateSignature();
	void OnPlayHit__DelegateSignature(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ShootingTargetReactToJump__DelegateSignature(class AFortPlayerPawnAthena* JumpingPlayer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

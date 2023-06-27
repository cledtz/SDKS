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

// 0x77 (0xBF8 - 0xB81)
// BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C
class UGAB_Spray_Generic_C : public UGAB_Emote_Generic_C
{
public:
	uint8                                        Pad_92A2[0x7];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       DecalSize;                                         // 0xB90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSprayItemDefinition*            MySpray;                                           // 0xB98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DecalTraceDistance;                                // 0xBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>           DefaultSprayMontage_M;                             // 0xBA8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>           DefaultSprayMontage_F;                             // 0xBD0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_Spray_Generic_C");
		return Clss;
	}

	TSoftObjectPtr<class UAnimMontage> GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender, enum class EFortCustomGender Temp_byte_Variable, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageToPlay_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, TSoftObjectPtr<class UAnimMontage> K2Node_Select_Default);
	void TargetLineTrace(class AFortPawn* ActivatingPawn, bool* HitSomething, struct FVector* Location, struct FVector* Normal, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, class ABuildingGameplayActor* K2Node_DynamicCast_AsBuilding_Gameplay_Actor, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AcceptsEmoteSprays_ReturnValue, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void OnMontageStartedPlaying();
	void ExecuteUbergraph_GAB_Spray_Generic(int32 EntryPoint, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class UAthenaSprayItemDefinition* K2Node_DynamicCast_AsAthena_Spray_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_TargetLineTrace_HitSomething, const struct FVector& CallFunc_TargetLineTrace_Location, const struct FVector& CallFunc_TargetLineTrace_Normal, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_CanPlaceInstanceOfClass_ReturnValue, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, bool CallFunc_HasPermissionToEditWorld_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ABuildingActor* CallFunc_K2_SpawnBuildingActor_ReturnValue, class ABP_SprayDecal_C* K2Node_DynamicCast_AsBP_Spray_Decal, bool K2Node_DynamicCast_bSuccess_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

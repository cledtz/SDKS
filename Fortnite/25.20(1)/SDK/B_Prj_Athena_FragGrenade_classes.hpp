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

// 0x3B (0xC70 - 0xC35)
// BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
class UB_Prj_Athena_FragGrenade_C : public UB_Prj_Athena_Grenade_Base_C
{
public:
	uint8                                        Pad_1577[0x3];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Object_FloatingInWater;                         // 0xC40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SurfaceTypeSoundComponent_C*       BP_SurfaceTypeSoundComponent;                      // 0xC48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        PreExploWarning_PreExplo_E5859FFE443F57359EC2C0AB73DFA4CD; // 0xC50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PreExploWarning__Direction_E5859FFE443F57359EC2C0AB73DFA4CD; // 0xC54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1578[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    PreExploWarning;                                   // 0xC58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FeedbackCue;                                       // 0xC60(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1579[0x4];                                     // Fixing Size After Last Property..
	class UNiagaraSystem*                        Niagara_Bounse;                                    // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_FragGrenade_C");
		return Clss;
	}

	void PreExploWarning__FinishedFunc();
	void PreExploWarning__UpdateFunc();
	void FuseEnded();
	void OnExploded(TArray<class UActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void OnBounce(struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Pre_Explo_Audio_Tell();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(class UFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature(class UFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody);
	void ExecuteUbergraph_B_Prj_Athena_FragGrenade(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class UController* CallFunc_GetInstigatorController_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, TArray<class UActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody_1, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent_1, bool K2Node_ComponentBoundEvent_bIsFirstBody, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FWaterSurfaceInfo& CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo, class UFN_RadialForce_C* CallFunc_FinishSpawningActor_ReturnValue, FInterfaceProperty_ CallFunc_SetFloatParameter_self_CastInput, class UFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsLastBody, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x38 (0x3E8 - 0x3B0)
// BlueprintGeneratedClass GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
class AGCN_Athena_LowGravity_C : public AFortGameplayCueNotifyLoop_LowGravity
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                MyTargetCached;                                    // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExpireTellDelayTimer;                              // 0x3C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ExpirationSoundPeriod;                             // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExpirationSoundTimer;                              // 0x3D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDrawDistance;                                   // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    LoopingFX;                                         // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Athena_LowGravity_C");
		return Clss;
	}

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue);
	void Activated(class AActor* PlayerPawn, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, double CallFunc_GetTimeSeconds_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float K2Node_VariableSet_StartTime_ImplicitCast);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue);
	void ExpireTell();
	void PlayExpirationSound();
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void ClearExpireTell();
	void ExecuteUbergraph_GCN_Athena_LowGravity(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

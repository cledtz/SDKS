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

// 0x51 (0x309 - 0x2B8)
// BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  InvalidTarget;                                     // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Target;                                            // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxMeshCount;                                      // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_963A[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              SplineMID;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SplineFadeDistance;                                // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SplineFadeStartDistance;                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               TrajectoryOwner;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldUpdate;                                      // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_963B[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              InvalidSplineMID;                                  // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTrajectoryValid;                                // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ProjectileTrajectory_C");
		return Clss;
	}

	void SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner);
	void UpdateFromTrajectoryOwner(FInterfaceProperty_ K2Node_DynamicCast_AsFort_Trajectory_Ability_Interface, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents);
	void SetTrajectoryValid(bool bIsTrajectoryValid);
	void UpdateTargetMeshVisibility();
	void ExecuteUbergraph_BP_ProjectileTrajectory(int32 EntryPoint, float K2Node_Event_DeltaSeconds, TArray<struct FVector>& K2Node_Event_SplinePoints, TArray<struct FVector>& K2Node_Event_SplineTangents, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool K2Node_CustomEvent_bIsTrajectoryValid, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class USplineMeshComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

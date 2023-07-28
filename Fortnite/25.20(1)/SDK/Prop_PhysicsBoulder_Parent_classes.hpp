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

// 0x80 (0xC40 - 0xBC0)
// BlueprintGeneratedClass Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C
class UProp_PhysicsBoulder_Parent_C : public UBuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortSoundIndicatorComponent*          Sound_Indicator;                                   // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastImpactNormal;                                  // 0xBD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        VerticalImpulseRatio;                              // 0xBE8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       NextPotentialLaunchTime;                           // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LaunchDelay;                                       // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FScalableFloat>                PlayerImpactTiers;                                 // 0xC20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FScalableFloat>                PlayerImpulseTiers;                                // 0xC30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prop_PhysicsBoulder_Parent_C");
		return Clss;
	}

	void GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool* Minimum_Met, double* Impulse, double ReturnImpulseValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FScalableFloat& CallFunc_Array_Get_Item, const struct FScalableFloat& CallFunc_Array_Get_Item_1, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, double K2Node_VariableSet_ReturnImpulseValue_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast);
	void ReceiveBeginPlay();
	void ComponentHit(class UPrimitiveComponent* HitComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_Prop_PhysicsBoulder_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPrimitiveComponent* K2Node_CustomEvent_HitComponent, class UActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UFortPhysicsObjectComponent* CallFunc_GetPhysicsObjectComponent_ReturnValue, class UPrimitiveComponent* CallFunc_GetMovementBase_ReturnValue, bool CallFunc_IsActive_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_GetPlayerImpulseVelocityFromImpactVelocity_Minimum_Met, double CallFunc_GetPlayerImpulseVelocityFromImpactVelocity_Impulse, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

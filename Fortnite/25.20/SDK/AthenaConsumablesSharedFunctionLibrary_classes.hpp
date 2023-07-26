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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AthenaConsumablesSharedFunctionLibrary.AthenaConsumablesSharedFunctionLibrary_C
class UAthenaConsumablesSharedFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaConsumablesSharedFunctionLibrary_C");
		return Clss;
	}

	void Get_Actor_Forward_Cardinal_Direction(class AActor* Actor, class UObject* __WorldContext, enum class ECardinalDirection* OutCardinalDirection, double* OutYaw, double Yaw, enum class ECardinalDirection CardinalDirection, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_Abs_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2);
	void IsOverlappingDeployableBlockVolume(class UObject* WorldContextObject, float BlockingAreaCheckRadius, const struct FVector& Location, class UObject* __WorldContext, bool* bOverlapping, const struct FScalableFloat& bBlockThrowableDeployVolumesEnabled, class FName BlockedTag, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_GetValueAsBool_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ComponentHasTag_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

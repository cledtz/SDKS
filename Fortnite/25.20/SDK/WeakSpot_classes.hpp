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

// 0xC0 (0x3C8 - 0x308)
// BlueprintGeneratedClass WeakSpot.WeakSpot_C
class AWeakSpot_C : public ABuildingWeakSpot
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ConnectTheDotsComponent;                           // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleComponent;                                 // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CollisionComponent;                                // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E; // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9235[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    ScaleDownParticleTL;                               // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SpawnSound;                                        // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Particle_Location;                                 // 0x340(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USoundBase*>                    Crack_sounds;                                      // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       ConnectTheDotsWidth;                               // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       ConnectTheDotsDuration;                            // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConnectTheDotsTimeoutFromPreviousHit;              // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConnectTheDotsDurationScale;                       // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConnectTheDotsMaxDuration;                         // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConnectTheDotsTileScale;                           // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConnectTheDotsMinLength;                           // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConnectTheDotsMaxLength;                           // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DamageTemplate;                                    // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       IdleTemplate;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ConnectMID;                                        // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HideMeshTimer;                                     // 0x3C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeakSpot_C");
		return Clss;
	}

	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void ScaleDownParticleTL__FinishedFunc();
	void ScaleDownParticleTL__UpdateFunc();
	void OnFadeOut();
	void OnStartDirectionEffect();
	void OnHit();
	void HideMesh();
	void ExecuteUbergraph_WeakSpot(int32 EntryPoint, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class USoundBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, class USoundBase* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

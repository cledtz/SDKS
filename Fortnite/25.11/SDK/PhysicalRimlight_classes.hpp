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

// 0xE8 (0x370 - 0x288)
// BlueprintGeneratedClass PhysicalRimlight.PhysicalRimlight_C
class APhysicalRimlight_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   Right_Side_Rim_Light;                              // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9062[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            RightSideRim_Transform;                            // 0x2B0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      PawnMaterials_ALL;                                 // 0x310(0x10)(Edit, BlueprintVisible)
	double                                       Rim_Light_Physical_Intensity;                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RimlightDistanceFromCamera;                        // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RimlightOffsetFromCamera;                          // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  PlayerPawnAthenaRef;                               // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FString                                L_cvarName;                                        // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialParameterCollection*          Material_params;                                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  Sunlight_Color_Param_name;                         // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9063[0x4];                                     // Fixing Size After Last Property..
	double                                       Rimlight_CvarBoost;                                // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RimlightVerticalOffset;                            // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhysicalRimlight_C");
		return Clss;
	}

	void Set_Rimlight_Color_and_Intensity(enum class EFortDayPhase Temp_byte_Variable, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, class UDirectionalLightComponent* CallFunc_GetDirectionalLightComponent_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1);
	void RimlightAttemptValidation(bool CallFunc_Array_IsValidIndex_ReturnValue);
	void PhysicalRimlight_AutoGenFunc(const class FString& CVarName, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, double K2Node_VariableSet_Rimlight_CVARBoost_ImplicitCast);
	void Update_Rimlight();
	void ValidateRimlight(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void ReceiveBeginPlay();
	void InitRim();
	void Day_Phase_(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void ExecuteUbergraph_PhysicalRimlight(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDataDrivenCVarEngineSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, FInterfaceProperty_ CallFunc_GetContextualTimeOfDayManager_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, enum class EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, enum class EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

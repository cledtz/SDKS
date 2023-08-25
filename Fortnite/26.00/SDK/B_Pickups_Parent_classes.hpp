#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x144 (0x59C - 0x458)
// BlueprintGeneratedClass B_Pickups_Parent.B_Pickups_Parent_C
class UB_Pickups_Parent_C : public UFortPickupsParent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Root;                                              // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7; // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7; // 0x46C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7; // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D8[0x7];                                      // Fixing Size After Last Property 
	class UTimelineComponent*                    MobileSelectedTL;                                  // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Static_Mesh_Pickup;                                // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Skeletal_Mesh_Pickup;                              // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   SkeletalOrStaticMeshAssetPrimitive;                // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentElementIndex;                               // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_5DA[0x4];                                      // Fixing Size After Last Property 
	double                                       Component_Radius__Scaled_;                         // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       Component_Radius_Multiplier;                       // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FLinearColor>                  Outline_Rarity_Colors;                             // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                       Component_Radius;                                  // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystem*                       Picked_Up_Trail_PS_Old;                            // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               Sparkle_Spawn_Rate__Picked_Up_;                    // 0x4D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TArray<double>                               Lifetime__Picked_Up_;                              // 0x4E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	class UForceFeedbackEffect*                  PickupForceFeedback_Old;                           // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasUniqueMaterialIds;                              // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_5DD[0x7];                                      // Fixing Size After Last Property 
	TArray<struct FLinearColor>                  BackgroundRarityColors;                            // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	double                                       Random_Rotation;                                   // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               MobileSelectedOffset;                              // 0x518(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               MobileSelectedScale;                               // 0x530(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UStaticMeshComponent*                  MobileInteractIcon;                                // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MobileInteractIconLocation;                        // 0x550(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               MobileInteractIconScale;                           // 0x568(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInterface*                    MobileInteractionMaterial;                         // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         PickedUp;                                          // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_5DF[0x3];                                      // Fixing Size After Last Property 
	struct FLinearColor                          MissionItemOutlineColor;                           // 0x58C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_Pickups_Parent_C* GetDefaultObj();

	int32 GetViewDistanceQuality(bool CallFunc_InEditorOrPIE_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, int32 CallFunc_getViewDistanceQuality_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue);
	void Setup_View_Distances(int32* ViewDistanceQuality, int32 L_viewQuality, int32 CallFunc_getViewDistanceQuality_ReturnValue);
	void Mobile_Interation_Icon_Setup(int32 Temp_int_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* K2Node_Select_Default);
	void SetVisibleMobileInteractIcon(bool Visible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void SetActiveBackgroundParticleSystem(bool Active, bool Reset, bool CallFunc_IsValid_ReturnValue);
	void SetHiddenBackgroundVisualComponents(bool Hidden);
	void DestroyBackgroundVisualComponents();
	void ScaleHologramTimingsForPvP(double PVP_TimeScale, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, enum class ESubGame CallFunc_GetSubGame_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4, float K2Node_VariableSet_PickedUpSweepSpeed_ImplicitCast, float K2Node_VariableSet_PickedUpFadeOutTime_ImplicitCast, float K2Node_VariableSet_PickedUpHoldTime_ImplicitCast, float K2Node_VariableSet_PickedUpFadeInTime_ImplicitCast, float K2Node_VariableSet_PickedUpDelayBeforeGlow_ImplicitCast);
	void SetHologramPickedUpParams(bool Tier_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, double CallFunc_Fraction_ReturnValue, double CallFunc_Fraction_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_2, double CallFunc_GetGameTimeInSeconds_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4);
	void SpawnPickedUpTrailPS(class UParticleSystemComponent* TrailPS, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Array_Get_Item_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
	void UserConstructionScript(int32 L_viewQuality, class UPrimitiveComponent* CallFunc_SetupPickupMesh_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_Component_Radius_ImplicitCast, float K2Node_VariableSet_ComponentRadiusScaled_ImplicitCast);
	void MobileSelectedTL__FinishedFunc();
	void MobileSelectedTL__UpdateFunc();
	void EnableBacchusHighlight();
	void DisableBacchusHighlight();
	void HideBackgroundAndSpotlight();
	void OnAttached();
	void OnTossed();
	void OnPickedUp(class UFortPawn* PickupTarget);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Pickups_Parent(int32 EntryPoint, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, class UActor* CallFunc_GetAttachParentActor_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_GetMovementCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, enum class ESubGame CallFunc_GetSubGame_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, class UFortIngredientItemDefinition* K2Node_DynamicCast_AsFort_Ingredient_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, class UFortResourceItemDefinition* K2Node_DynamicCast_AsFort_Resource_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, class UFortPawn* K2Node_Event_PickupTarget, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Setup_View_Distances_viewDistanceQuality, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}



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

// 0x3C (0x5B8 - 0x57C)
// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{
public:
	uint8                                        Pad_8EA5[0x4];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  BG_Dark;                                           // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BG;                                                // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RarePickupFXMesh;                                  // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLightComp;                                     // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     RareAmbientEmitter;                                // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Pickup_Sound;                                      // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pickups_Default_C");
		return Clss;
	}

	void Setup_View_Distances(int32* ViewDistanceQuality, int32 L_viewQuality, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, int32 Temp_int_Variable, float Temp_real_Variable_4, float Temp_real_Variable_5, float Temp_real_Variable_6, float Temp_real_Variable_7, float Temp_real_Variable_8, int32 Temp_int_Variable_1, float Temp_real_Variable_9, float Temp_real_Variable_10, float Temp_real_Variable_11, float Temp_real_Variable_12, float Temp_real_Variable_13, int32 Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float Temp_real_Variable_14, float K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, float K2Node_Select_Default_1, float K2Node_Select_Default_2, int32 CallFunc_Setup_View_Distances_viewDistanceQuality, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void InitializeSpotlightComponent(int32 Temp_int_Variable, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_InEditorOrPIE_ReturnValue, const struct FTransform& Temp_struct_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class USpotLightComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void AddRareFX(int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Fraction_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	void Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void HideBackgroundAndSpotlight();
	void ReceiveBeginPlay();
	void OnPickedUp(class AFortPawn* PickupTarget);
	void OnTossed();
	void SetDrawDistances(double BG, double bgdark, double Gun);
	void SetMaxDraw_Gun(double BG);
	void SetMaxDraw_BGDark(double BG);
	void SetMaxDraw_BG(double BG);
	void SetMaxDraw_RareMesh(double BG);
	void SetMaxDraw_RareFX(double BG);
	void DrawDark();
	void ExecuteUbergraph_B_Pickups_Default(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AFortPawn* K2Node_Event_PickupTarget, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GetPickupRarityMID_bNeedsToBeInitialized, class UMaterialInstanceDynamic* CallFunc_GetPickupRarityMID_ReturnValue, double K2Node_CustomEvent_bg_5, double K2Node_CustomEvent_bgdark, double K2Node_CustomEvent_gun, double K2Node_CustomEvent_bg_4, double K2Node_CustomEvent_bg_3, double K2Node_CustomEvent_bg_2, double K2Node_CustomEvent_bg_1, double K2Node_CustomEvent_bg, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_4, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_5, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_6, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x399 - 0x341)
// BlueprintGeneratedClass MPItemShop_VaultWorld.MPItemShop_VaultWorld_C
class UMPItemShop_VaultWorld_C : public UVaultWorld_C
{
public:
	uint8                                        Pad_6F22[0x7];                                     // Fixing Size After Last Property 
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Floor;                                             // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FloorVisibility_FloorMask_33DB417F4F318DD14C0CDB92ED647F56; // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FloorVisibility__Direction_33DB417F4F318DD14C0CDB92ED647F56; // 0x35C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F23[0x3];                                     // Fixing Size After Last Property 
	class UTimelineComponent*                    FloorVisibility;                                   // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_FX_Transition_Fade_A94F40F44CC1E033CF6C509AB9A33280; // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_Forward_A94F40F44CC1E033CF6C509AB9A33280; // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TransitionForward__Direction_A94F40F44CC1E033CF6C509AB9A33280; // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F24[0x7];                                     // Fixing Size After Last Property 
	class UTimelineComponent*                    TransitionForward;                                 // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    DefaultBackgroundMaterial;                         // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    DefaultFloorMaterial;                              // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Background;                                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsMaterialBackground;                              // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMPItemShop_VaultWorld_C* GetDefaultObj();

	void StopTransitions();
	void HandleMaterialBackground(class UMaterialInterface* MaterialBackground, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1);
	void HandleTextureBackground(class UTexture2D*& TextureBackground);
	void GetBackground(class UFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess);
	void AssignBackgroundMaterial(class UMaterialInterface* SourceMaterial, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void AssignFloorMaterial(class UMaterialInterface* SourceMaterial, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void TransitionBackgroundBackward(double Backward, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void TransitionBackgroundForward(double Forward, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, class UMaterialInstanceDynamic* Mid, bool IsFloor, bool FirstTimeSetup, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_2, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, bool Temp_bool_Variable_3, float Temp_real_Variable, float Temp_real_Variable_1, class FName Temp_name_Variable_6, float K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class FName K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable_7, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, bool Temp_bool_Variable_4, class FName K2Node_Select_Default_4, bool CallFunc_IsValid_ReturnValue_1);
	void UserConstructionScript();
	void TransitionForward__FinishedFunc();
	void TransitionForward__UpdateFunc();
	void FloorVisibility__FinishedFunc();
	void FloorVisibility__UpdateFunc();
	void OnTransitionBackground(bool bPlayForward, enum class EBackgroundIntensityLevel IntensityTransition);
	void ReceiveBeginPlay();
	void OnInitialBackgroundTransition();
	void OnSetupTextureBackground(class UTexture2D* LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo);
	void OnSetupMaterialBackground(class UMaterialInterface* LoadedBackgroundMaterial, struct FVaultWorldBackgroundData& BackgroundInfo);
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void ExecuteUbergraph_MPItemShop_VaultWorld(int32 EntryPoint, double CallFunc_Lerp_ReturnValue, bool K2Node_Event_bPlayForward, enum class EBackgroundIntensityLevel K2Node_Event_IntensityTransition, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo_1, class UMaterialInterface* K2Node_Event_LoadedBackgroundMaterial, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}



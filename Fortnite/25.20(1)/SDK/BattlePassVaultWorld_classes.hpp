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

// 0xE7 (0x430 - 0x349)
// BlueprintGeneratedClass BattlePassVaultWorld.BattlePassVaultWorld_C
class UBattlePassVaultWorld_C : public UVaultWorld_C
{
public:
	uint8                                        Pad_7F62[0x7];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Floor;                                             // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A; // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_Fade_46DACBD74D0A8B2278950785C007984A; // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A; // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A; // 0x36C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F63[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    TransitionForward;                                 // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        BackgroundIntenstiy_Intensity_8C51F99C4026F0204F2184AD9661CD23; // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BackgroundIntenstiy__Direction_8C51F99C4026F0204F2184AD9661CD23; // 0x37C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F64[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    BackgroundIntenstiy;                               // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        ItemDetailsIntensity_TextureIntensity_1EC6205345E5A708DA53B5A9449F1700; // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ItemDetailsIntensity__Direction_1EC6205345E5A708DA53B5A9449F1700; // 0x38C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F65[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    ItemDetailsIntensity;                              // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27; // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27; // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F66[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Background_Effects;                                // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC; // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC; // 0x3AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F67[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    IconDissolve;                                      // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F68[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    ItemDetails;                                       // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50; // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50; // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F69[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Floor_Visibility;                                  // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8; // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_Fade_7073CD0840227233D3A64795A5A1B1B8; // 0x3E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8; // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8; // 0x3EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7F6A[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    TransitionBackward;                                // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     FloorMI;                                           // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FloorMID;                                          // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BG_Intensity_Max;                                  // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BG_Intensity_Mid;                                  // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BG_Intensity_Min;                                  // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTransitioning;                                  // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBackgroundIntensityLevel         Intensity_Transition;                              // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPageA_Max;                                      // 0x422(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPageB_Max;                                      // 0x423(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PageA_X_Offset;                                    // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PageB_X_Offset;                                    // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        X_Offset_Anim_Distance;                            // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassVaultWorld_C");
		return Clss;
	}

	void PageTransitionIntensityUpdate(class UMaterialInstanceDynamic* MID_Background, class UMaterialInstanceDynamic* MID_Floor, enum class EBackgroundIntensityLevel Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class EBackgroundIntensityLevel Temp_byte_Variable_1, bool Temp_bool_Variable_2, float K2Node_Select_Default, bool K2Node_Select_Default_1, bool Temp_bool_Variable_3, float K2Node_Select_Default_2, float K2Node_Select_Default_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float K2Node_Select_Option_0_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast_1, float K2Node_Select_Option_1_ImplicitCast_1, float K2Node_Select_LowIntensity_ImplicitCast, float K2Node_Select_HighIntensity_ImplicitCast);
	void TransitionBackgroundBackward(double Backward, double Fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7);
	void TransitionBackgroundForward(double Forward, double Fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7);
	void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid, class FName Temp_name_Variable, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_1, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, bool Temp_bool_Variable_2, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, bool Temp_bool_Variable_3, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, bool Temp_bool_Variable_4, class FName K2Node_Select_Default_4, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast);
	void UserConstructionScript(class UFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess);
	void TransitionForward__FinishedFunc();
	void TransitionForward__UpdateFunc();
	void TransitionBackward__FinishedFunc();
	void TransitionBackward__UpdateFunc();
	void Background_Effects__FinishedFunc();
	void Background_Effects__UpdateFunc();
	void Floor_Visibility__FinishedFunc();
	void Floor_Visibility__UpdateFunc();
	void ItemDetails__FinishedFunc();
	void ItemDetails__UpdateFunc();
	void IconDissolve__FinishedFunc();
	void IconDissolve__UpdateFunc();
	void ItemDetailsIntensity__FinishedFunc();
	void ItemDetailsIntensity__UpdateFunc();
	void BackgroundIntenstiy__FinishedFunc();
	void BackgroundIntenstiy__UpdateFunc();
	void ReceiveBeginPlay();
	void OnTransitionBackground(bool bPlayForward, enum class EBackgroundIntensityLevel IntensityTransition);
	void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo);
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void OnInitialBackgroundTransition();
	void OnTransitionItemDetails(bool bShowItemDetails);
	void OnIntensityChange(bool bToLowIntensity);
	void ExecuteUbergraph_BattlePassVaultWorld(int32 EntryPoint, double CallFunc_Divide_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Lerp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_Event_bPlayForward, enum class EBackgroundIntensityLevel K2Node_Event_IntensityTransition, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, bool K2Node_Event_bShowItemDetails, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Variable, double CallFunc_Lerp_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, double CallFunc_Conv_BoolToDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool K2Node_Event_bToLowIntensity, double CallFunc_Lerp_ReturnValue_2, bool CallFunc_BooleanXOR_ReturnValue, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_Fade_ImplicitCast, double CallFunc_TransitionBackgroundForward_Fade_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast, double CallFunc_TransitionBackgroundBackward_Fade_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast, double CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x77 (0x3C0 - 0x349)
// BlueprintGeneratedClass BelongTreatyEventVaultWorld.BelongTreatyEventVaultWorld_C
class UBelongTreatyEventVaultWorld_C : public UVaultWorld_C
{
public:
	uint8                                        Pad_A363[0x7];                                     // Fixing Size After Last Property
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Floor;                                             // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ItemDetails_X_Offset_869A70984306F8C1B7550D932E9B5D31; // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ItemDetails__Direction_869A70984306F8C1B7550D932E9B5D31; // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A364[0x3];                                     // Fixing Size After Last Property
	class UTimelineComponent*                    ItemDetails;                                       // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Floor_Visibility_FloorMask_48D6646D4ED89EFDC0617DB0310B64FA; // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Floor_Visibility__Direction_48D6646D4ED89EFDC0617DB0310B64FA; // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A365[0x3];                                     // Fixing Size After Last Property
	class UTimelineComponent*                    Floor_Visibility;                                  // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Background_Effects_SetStreaks_4FF15D86466CC8D472EB898808318082; // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Background_Effects__Direction_4FF15D86466CC8D472EB898808318082; // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A366[0x3];                                     // Fixing Size After Last Property
	class UTimelineComponent*                    Background_Effects;                                // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_FX_Transition_Fade_951B32BC40630F93E9D89F849ADFF3A0; // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_Pre_TransitionOffset_951B32BC40630F93E9D89F849ADFF3A0; // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionForward_Forward_951B32BC40630F93E9D89F849ADFF3A0; // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TransitionForward__Direction_951B32BC40630F93E9D89F849ADFF3A0; // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A367[0x3];                                     // Fixing Size After Last Property
	class UTimelineComponent*                    TransitionForward;                                 // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_fx_Transition_fade_D7844C724756A788F437348BCC2288B6; // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_Pre_Transition_Offset_D7844C724756A788F437348BCC2288B6; // 0x3AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionBackward_Backward_D7844C724756A788F437348BCC2288B6; // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TransitionBackward__Direction_D7844C724756A788F437348BCC2288B6; // 0x3B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A368[0x3];                                     // Fixing Size After Last Property
	class UTimelineComponent*                    TransitionBackward;                                // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BelongTreatyEventVaultWorld_C");
		return Clss;
	}

	void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, double CallFunc_Lerp_ReturnValue_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_9);
	void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, double CallFunc_Lerp_ReturnValue_4, double CallFunc_Lerp_ReturnValue_5, double CallFunc_Lerp_ReturnValue_6, double CallFunc_Lerp_ReturnValue_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_9);
	void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable_1, bool Temp_bool_Variable, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, bool Temp_bool_Variable_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, bool Temp_bool_Variable_2, class FName K2Node_Select_Default_2);
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
	void OnTransitionBackground(bool bPlayForward, enum class EBackgroundIntensityLevel IntensityTransition);
	void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, struct FVaultWorldBackgroundData& BackgroundInfo);
	void ReceiveBeginPlay();
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);
	void OnInitialBackgroundTransition();
	void OnTransitionItemDetails(bool bShowItemDetails);
	void OnUpdateMaterialIndex(int32 MaterialIndex);
	void ExecuteUbergraph_BelongTreatyEventVaultWorld(int32 EntryPoint, bool K2Node_Event_bPlayForward, enum class EBackgroundIntensityLevel K2Node_Event_IntensityTransition, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UTexture2D* K2Node_Event_LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& K2Node_Event_BackgroundInfo, bool K2Node_Event_bShowFloor, bool K2Node_Event_bShowEffects, bool K2Node_Event_bShowItemDetails, bool CallFunc_Not_PreBool_ReturnValue_2, int32 K2Node_Event_MaterialIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast, double CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast_1, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast, double CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast, double CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast, double CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast_1, double CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast, double CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

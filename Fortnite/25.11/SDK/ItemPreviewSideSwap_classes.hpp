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

// 0x180 (0x548 - 0x3C8)
// BlueprintGeneratedClass ItemPreviewSideSwap.ItemPreviewSideSwap_C
class AItemPreviewSideSwap_C : public AItemPreviewSwapper
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess_Mobile;                                // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLightLowMobile;                                 // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLight;                                          // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLight_LOWPC;                                    // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess_LOWPC;                                 // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*            DirectionalLight_LOWPC;                            // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*            DirectionalLightMobile;                            // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DirectionalLights;                                 // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GenericLighting;                                   // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870; // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870; // 0x424(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A06[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_1;                                        // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45; // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45; // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A07[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_0;                                        // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1; // 0x440(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1; // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A08[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    MoveOutRight;                                      // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE; // 0x468(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE; // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A09[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    MoveInRight;                                       // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47; // 0x490(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47; // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0A[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    MoveInLeft;                                        // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1; // 0x4B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1; // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0B[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    MoveOutLeft;                                       // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugMobile_Lighting;                              // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugLightingPC;                                   // 0x4E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x4E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysOn;                                          // 0x4E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugLighting_LOWDetailPC;                         // 0x4E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A0C[0x3];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            On_New_Item_Spawned;                               // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       CurrentZoomLevel;                                  // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TargetZoomLevel;                                   // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              TargetRotationOffset;                              // 0x508(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              OrigRotationOffset;                                // 0x520(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortAccountItemDefinition*            Primary_Requested_Item;                            // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItemDefinition*            Previous_Requested_Item;                           // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemPreviewSideSwap_C");
		return Clss;
	}

	void LightControl(bool Active, bool CallFunc_IsMobileGame_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
	void SwitchPCLighting(bool Visibility);
	void SwitchPCLighting_LOWDetail(bool Visibility, bool CallFunc_IsValid_ReturnValue);
	void SwitchMobileLighting(bool Visibility, bool CallFunc_IsValid_ReturnValue);
	void MoveOutLeft__FinishedFunc();
	void MoveOutLeft__UpdateFunc();
	void MoveInLeft__FinishedFunc();
	void MoveInLeft__UpdateFunc();
	void MoveInRight__FinishedFunc();
	void MoveInRight__UpdateFunc();
	void MoveOutRight__FinishedFunc();
	void MoveOutRight__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void OnReadyToSwap(class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& Options);
	void OnNewSceneRequested(class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& TransitionOptions);
	void UpdateSettings();
	void OnTargetZoomLevelSet(float TargetZoomLevel);
	void OnTargetRotationOffsetSet(struct FRotator& TargetRotationOffset);
	void ExecuteUbergraph_ItemPreviewSideSwap(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem_1, const struct FSceneTransitionOptions& K2Node_Event_Options, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem, const struct FSceneTransitionOptions& K2Node_Event_TransitionOptions, bool K2Node_SwitchEnum_CmpSuccess_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float K2Node_Event_TargetZoomLevel, bool Temp_bool_B_Execution_Happened_Variable_1, bool Temp_bool_A_Execution_Happened_Variable_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FRotator& K2Node_Event_TargetRotationOffset, const struct FRotator& CallFunc_RLerp_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_TargetZoomLevel_ImplicitCast, float K2Node_VariableSet_ZoomLevel_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
	void On_New_Item_Spawned__DelegateSignature(bool Should_Show_Floor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

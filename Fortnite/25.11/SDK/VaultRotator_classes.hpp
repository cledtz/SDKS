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

// 0x1C0 (0x580 - 0x3C0)
// BlueprintGeneratedClass VaultRotator.VaultRotator_C
class AVaultRotator_C : public AItemPreviewRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*            DirectionalLightMobile;                            // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*            DirectionalLight_LOWPC;                            // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DirectionalLights;                                 // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLightLowMobile;                                 // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLight;                                          // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLight_LOWPC;                                    // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess_Mobile;                                // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess_LOWPC;                                 // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GenericLighting;                                   // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_YawRotation_YawInterpAlpha_F13714DD4AFE0C9C8857E2950BEC127B; // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_YawRotation__Direction_F13714DD4AFE0C9C8857E2950BEC127B; // 0x41C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A34[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_YawRotation;                              // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39; // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39; // 0x42C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A35[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    Timeline_Zoom;                                     // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x438(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x450(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714; // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714; // 0x46C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714; // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A36[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    CameraTurn_180_to_360;                             // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x480(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x498(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A37[0x7];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    CameraTurn_0_to_180;                               // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A38[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            InitialCameraTransform;                            // 0x4D0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ClockwiseSound;                                    // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CounterClockwiseSound;                             // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugMobile_Lighting;                              // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugLightingPC;                                   // 0x541(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive;                                          // 0x542(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysOn;                                          // 0x543(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugLighting_LOWDetailPC;                         // 0x544(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A39[0x3];                                     // Fixing Size After Last Property..
	double                                       TargetZoomLevel;                                   // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              StartingRotationOffset;                            // 0x550(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              TargetRotationOffset;                              // 0x568(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VaultRotator_C");
		return Clss;
	}

	void PlaySoundWhenEnabled(class USoundBase* Sound, bool CallFunc_IsSoundEnabled_ReturnValue);
	void SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1);
	void ToggleBackgroundText(bool bDisplayText);
	void LightControl(bool Active, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void SwitchPCLighting(bool Visibility);
	void SwitchPCLighting_LOWDetail(bool Visibility);
	void SwitchMobileLighting(bool Visibility);
	void SetBackgroundString(class FText CustomText, class UUI_Background_Strings_C* CallFunc_Create_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void CameraTurn_0_to_180__FinishedFunc();
	void CameraTurn_0_to_180__UpdateFunc();
	void CameraTurn_180_to_360__FinishedFunc();
	void CameraTurn_180_to_360__UpdateFunc();
	void Timeline_Zoom__FinishedFunc();
	void Timeline_Zoom__UpdateFunc();
	void Timeline_YawRotation__FinishedFunc();
	void Timeline_YawRotation__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateSettings();
	void OnCameraTransitionReady(bool bPrimaryToSecondary, class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& Options);
	void OnTargetZoomLevelSet(float TargetZoomLevel);
	void OnSetBackgroundMessageText(class FText& BackgroundMessageText);
	void OnUpdateBackgroundColor(bool bEnableAutotestBackground);
	void OnTargetRotationOffsetSet(struct FRotator& TargetRotationOffset);
	void OnTargetRotationOffsetCanceled();
	void OnTargetZoomLevelCanceled();
	void ExecuteUbergraph_VaultRotator(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, enum class ETimelineDirection Temp_byte_Variable, enum class ETimelineDirection Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue_1, float CallFunc_GetPlaybackPosition_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double K2Node_Select_Default_1, const struct FInterpolatedTransitionCamera& CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FInterpolatedTransitionCamera& CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool K2Node_Event_bPrimaryToSecondary, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem, const struct FSceneTransitionOptions& K2Node_Event_Options, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, float K2Node_Event_TargetZoomLevel, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FText K2Node_Event_BackgroundMessageText, bool K2Node_Event_bEnableAutotestBackground, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FRotator& K2Node_Event_TargetRotationOffset, const struct FRotator& CallFunc_REase_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double K2Node_Select_Forward_ImplicitCast, double K2Node_Select_Forward_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast_1, float CallFunc_MakeRotator_Roll_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, double K2Node_VariableSet_TargetZoomLevel_ImplicitCast, float K2Node_VariableSet_ZoomLevel_ImplicitCast, float K2Node_VariableSet_ZoomLevel_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

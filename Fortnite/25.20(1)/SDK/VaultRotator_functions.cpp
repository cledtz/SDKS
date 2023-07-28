#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSoundEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::PlaySoundWhenEnabled(class USoundBase* Sound, bool CallFunc_IsSoundEnabled_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "PlaySoundWhenEnabled");

	Params::UVaultRotator_C_PlaySoundWhenEnabled_Params Parms;

	Parms.Sound = Sound;
	Parms.CallFunc_IsSoundEnabled_ReturnValue = CallFunc_IsSoundEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                RGBA0                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                RGBA1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SetBackgroundColor");

	Params::UVaultRotator_C_SetBackgroundColor_Params Parms;

	Parms.RGBA0 = RGBA0;
	Parms.RGBA1 = RGBA1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.ToggleBackgroundText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDisplayText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::ToggleBackgroundText(bool bDisplayText)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "ToggleBackgroundText");

	Params::UVaultRotator_C_ToggleBackgroundText_Params Parms;

	Parms.bDisplayText = bDisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::LightControl(bool Active, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "LightControl");

	Params::UVaultRotator_C_LightControl_Params Parms;

	Parms.Active = Active;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue_1 = CallFunc_IsErebus_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::SwitchPCLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SwitchPCLighting");

	Params::UVaultRotator_C_SwitchPCLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::SwitchPCLighting_LOWDetail(bool Visibility)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SwitchPCLighting_LOWDetail");

	Params::UVaultRotator_C_SwitchPCLighting_LOWDetail_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::SwitchMobileLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SwitchMobileLighting");

	Params::UVaultRotator_C_SwitchMobileLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.SetBackgroundString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CustomText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUI_Background_Strings_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::SetBackgroundString(class FText CustomText, class UUI_Background_Strings_C* CallFunc_Create_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "SetBackgroundString");

	Params::UVaultRotator_C_SetBackgroundString_Params Parms;

	Parms.CustomText = CustomText;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UVaultRotator_C::CameraTurn_0_to_180__FinishedFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "CameraTurn_0_to_180__FinishedFunc");

	Params::UVaultRotator_C_CameraTurn_0_to_180__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UVaultRotator_C::CameraTurn_0_to_180__UpdateFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "CameraTurn_0_to_180__UpdateFunc");

	Params::UVaultRotator_C_CameraTurn_0_to_180__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UVaultRotator_C::CameraTurn_180_to_360__FinishedFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "CameraTurn_180_to_360__FinishedFunc");

	Params::UVaultRotator_C_CameraTurn_180_to_360__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UVaultRotator_C::CameraTurn_180_to_360__UpdateFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "CameraTurn_180_to_360__UpdateFunc");

	Params::UVaultRotator_C_CameraTurn_180_to_360__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UVaultRotator_C::Timeline_Zoom__FinishedFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "Timeline_Zoom__FinishedFunc");

	Params::UVaultRotator_C_Timeline_Zoom__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UVaultRotator_C::Timeline_Zoom__UpdateFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "Timeline_Zoom__UpdateFunc");

	Params::UVaultRotator_C_Timeline_Zoom__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.Timeline_YawRotation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UVaultRotator_C::Timeline_YawRotation__FinishedFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "Timeline_YawRotation__FinishedFunc");

	Params::UVaultRotator_C_Timeline_YawRotation__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.Timeline_YawRotation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UVaultRotator_C::Timeline_YawRotation__UpdateFunc()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "Timeline_YawRotation__UpdateFunc");

	Params::UVaultRotator_C_Timeline_YawRotation__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVaultRotator_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "ReceiveBeginPlay");

	Params::UVaultRotator_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVaultRotator_C::UpdateSettings()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "UpdateSettings");

	Params::UVaultRotator_C_UpdateSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.OnCameraTransitionReady
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bPrimaryToSecondary                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  PrimaryRequestedItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     Options                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UVaultRotator_C::OnCameraTransitionReady(bool bPrimaryToSecondary, class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& Options)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "OnCameraTransitionReady");

	Params::UVaultRotator_C_OnCameraTransitionReady_Params Parms;

	Parms.bPrimaryToSecondary = bPrimaryToSecondary;
	Parms.PrimaryRequestedItem = PrimaryRequestedItem;
	Parms.Options = Options;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.OnTargetZoomLevelSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TargetZoomLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::OnTargetZoomLevelSet(float TargetZoomLevel)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "OnTargetZoomLevelSet");

	Params::UVaultRotator_C_OnTargetZoomLevelSet_Params Parms;

	Parms.TargetZoomLevel = TargetZoomLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.OnSetBackgroundMessageText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        BackgroundMessageText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVaultRotator_C::OnSetBackgroundMessageText(class FText& BackgroundMessageText)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "OnSetBackgroundMessageText");

	Params::UVaultRotator_C_OnSetBackgroundMessageText_Params Parms;

	Parms.BackgroundMessageText = BackgroundMessageText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.OnUpdateBackgroundColor
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnableAutotestBackground                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::OnUpdateBackgroundColor(bool bEnableAutotestBackground)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "OnUpdateBackgroundColor");

	Params::UVaultRotator_C_OnUpdateBackgroundColor_Params Parms;

	Parms.bEnableAutotestBackground = bEnableAutotestBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.OnTargetRotationOffsetSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FRotator                    TargetRotationOffset                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UVaultRotator_C::OnTargetRotationOffsetSet(struct FRotator& TargetRotationOffset)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "OnTargetRotationOffsetSet");

	Params::UVaultRotator_C_OnTargetRotationOffsetSet_Params Parms;

	Parms.TargetRotationOffset = TargetRotationOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.OnTargetRotationOffsetCanceled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVaultRotator_C::OnTargetRotationOffsetCanceled()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "OnTargetRotationOffsetCanceled");

	Params::UVaultRotator_C_OnTargetRotationOffsetCanceled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.OnTargetZoomLevelCanceled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVaultRotator_C::OnTargetZoomLevelCanceled()
{
	static auto Func = Class->GetFunction("VaultRotator_C", "OnTargetZoomLevelCanceled");

	Params::UVaultRotator_C_OnTargetZoomLevelCanceled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETimelineDirection      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimelineDirection      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlaybackPosition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlaybackPosition_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInterpolatedTransitionCameraCallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue     (NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInterpolatedTransitionCameraCallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1   (NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_1                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_Event_bPrimaryToSecondary                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  K2Node_Event_PrimaryRequestedItem                                (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     K2Node_Event_Options                                             (ConstParm, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TargetZoomLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_BackgroundMessageText                               (ConstParm)
// bool                               K2Node_Event_bEnableAutotestBackground                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_TargetRotationOffset                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_REase_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Forward_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Forward_ImplicitCast_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_TargetZoomLevel_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ZoomLevel_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ZoomLevel_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVaultRotator_C::ExecuteUbergraph_VaultRotator(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, enum class ETimelineDirection Temp_byte_Variable, enum class ETimelineDirection Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue_1, float CallFunc_GetPlaybackPosition_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double K2Node_Select_Default_1, const struct FInterpolatedTransitionCamera& CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FInterpolatedTransitionCamera& CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool K2Node_Event_bPrimaryToSecondary, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem, const struct FSceneTransitionOptions& K2Node_Event_Options, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, float K2Node_Event_TargetZoomLevel, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FText K2Node_Event_BackgroundMessageText, bool K2Node_Event_bEnableAutotestBackground, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FRotator& K2Node_Event_TargetRotationOffset, const struct FRotator& CallFunc_REase_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double K2Node_Select_Forward_ImplicitCast, double K2Node_Select_Forward_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast_1, float CallFunc_MakeRotator_Roll_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast_1, double K2Node_VariableSet_TargetZoomLevel_ImplicitCast, float K2Node_VariableSet_ZoomLevel_ImplicitCast, float K2Node_VariableSet_ZoomLevel_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast)
{
	static auto Func = Class->GetFunction("VaultRotator_C", "ExecuteUbergraph_VaultRotator");

	Params::UVaultRotator_C_ExecuteUbergraph_VaultRotator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue_1 = CallFunc_GetTimelineLength_ReturnValue_1;
	Parms.CallFunc_GetPlaybackPosition_ReturnValue = CallFunc_GetPlaybackPosition_ReturnValue;
	Parms.CallFunc_GetPlaybackPosition_ReturnValue_1 = CallFunc_GetPlaybackPosition_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue = CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1 = CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_1 = CallFunc_K2_SetRelativeTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.K2Node_Event_bPrimaryToSecondary = K2Node_Event_bPrimaryToSecondary;
	Parms.K2Node_Event_PrimaryRequestedItem = K2Node_Event_PrimaryRequestedItem;
	Parms.K2Node_Event_Options = K2Node_Event_Options;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_TargetZoomLevel = K2Node_Event_TargetZoomLevel;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_BackgroundMessageText = K2Node_Event_BackgroundMessageText;
	Parms.K2Node_Event_bEnableAutotestBackground = K2Node_Event_bEnableAutotestBackground;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_Event_TargetRotationOffset = K2Node_Event_TargetRotationOffset;
	Parms.CallFunc_REase_ReturnValue = CallFunc_REase_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_Select_Forward_ImplicitCast = K2Node_Select_Forward_ImplicitCast;
	Parms.K2Node_Select_Forward_ImplicitCast_1 = K2Node_Select_Forward_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast = CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast_1 = CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast_1 = CallFunc_MakeRotator_Roll_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast_1 = CallFunc_MakeRotator_Pitch_ImplicitCast_1;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast_1 = CallFunc_MakeRotator_Yaw_ImplicitCast_1;
	Parms.K2Node_VariableSet_TargetZoomLevel_ImplicitCast = K2Node_VariableSet_TargetZoomLevel_ImplicitCast;
	Parms.K2Node_VariableSet_ZoomLevel_ImplicitCast = K2Node_VariableSet_ZoomLevel_ImplicitCast;
	Parms.K2Node_VariableSet_ZoomLevel_ImplicitCast_1 = K2Node_VariableSet_ZoomLevel_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

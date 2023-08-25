#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemPreviewSideSwap.ItemPreviewSideSwap_C
// (Actor)

class UClass* UItemPreviewSideSwap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPreviewSideSwap_C");

	return Clss;
}


// ItemPreviewSideSwap_C ItemPreviewSideSwap.Default__ItemPreviewSideSwap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemPreviewSideSwap_C* UItemPreviewSideSwap_C::GetDefaultObj()
{
	static class UItemPreviewSideSwap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPreviewSideSwap_C*>(UItemPreviewSideSwap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPerformanceMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsErebus_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewSideSwap_C::LightControl(bool Active, bool CallFunc_IsMobileGame_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "LightControl");

	Params::UItemPreviewSideSwap_C_LightControl_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_IsInPerformanceMode_ReturnValue = CallFunc_IsInPerformanceMode_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue_1 = CallFunc_IsErebus_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewSideSwap_C::SwitchPCLighting(bool Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "SwitchPCLighting");

	Params::UItemPreviewSideSwap_C_SwitchPCLighting_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting_LOWDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewSideSwap_C::SwitchPCLighting_LOWDetail(bool Visibility, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "SwitchPCLighting_LOWDetail");

	Params::UItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewSideSwap_C::SwitchMobileLighting(bool Visibility, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "SwitchMobileLighting");

	Params::UItemPreviewSideSwap_C_SwitchMobileLighting_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::MoveOutLeft__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveOutLeft__FinishedFunc");

	Params::UItemPreviewSideSwap_C_MoveOutLeft__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::MoveOutLeft__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveOutLeft__UpdateFunc");

	Params::UItemPreviewSideSwap_C_MoveOutLeft__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::MoveInLeft__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveInLeft__FinishedFunc");

	Params::UItemPreviewSideSwap_C_MoveInLeft__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::MoveInLeft__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveInLeft__UpdateFunc");

	Params::UItemPreviewSideSwap_C_MoveInLeft__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::MoveInRight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveInRight__FinishedFunc");

	Params::UItemPreviewSideSwap_C_MoveInRight__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::MoveInRight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveInRight__UpdateFunc");

	Params::UItemPreviewSideSwap_C_MoveInRight__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::MoveOutRight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveOutRight__FinishedFunc");

	Params::UItemPreviewSideSwap_C_MoveOutRight__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::MoveOutRight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveOutRight__UpdateFunc");

	Params::UItemPreviewSideSwap_C_MoveOutRight__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "Timeline_0__FinishedFunc");

	Params::UItemPreviewSideSwap_C_Timeline_0__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "Timeline_0__UpdateFunc");

	Params::UItemPreviewSideSwap_C_Timeline_0__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "Timeline_1__FinishedFunc");

	Params::UItemPreviewSideSwap_C_Timeline_1__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "Timeline_1__UpdateFunc");

	Params::UItemPreviewSideSwap_C_Timeline_1__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "ReceiveBeginPlay");

	Params::UItemPreviewSideSwap_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnReadyToSwap
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  PrimaryRequestedItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     Options                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UItemPreviewSideSwap_C::OnReadyToSwap(class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "OnReadyToSwap");

	Params::UItemPreviewSideSwap_C_OnReadyToSwap_Params Parms{};

	Parms.PrimaryRequestedItem = PrimaryRequestedItem;
	Parms.Options = Options;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnNewSceneRequested
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  PrimaryRequestedItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     TransitionOptions                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UItemPreviewSideSwap_C::OnNewSceneRequested(class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& TransitionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "OnNewSceneRequested");

	Params::UItemPreviewSideSwap_C_OnNewSceneRequested_Params Parms{};

	Parms.PrimaryRequestedItem = PrimaryRequestedItem;
	Parms.TransitionOptions = TransitionOptions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemPreviewSideSwap_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "UpdateSettings");

	Params::UItemPreviewSideSwap_C_UpdateSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetZoomLevelSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TargetZoomLevel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewSideSwap_C::OnTargetZoomLevelSet(float TargetZoomLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "OnTargetZoomLevelSet");

	Params::UItemPreviewSideSwap_C_OnTargetZoomLevelSet_Params Parms{};

	Parms.TargetZoomLevel = TargetZoomLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetRotationOffsetSet
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FRotator                    TargetRotationOffset                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void UItemPreviewSideSwap_C::OnTargetRotationOffsetSet(struct FRotator& TargetRotationOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "OnTargetRotationOffsetSet");

	Params::UItemPreviewSideSwap_C_OnTargetRotationOffsetSet_Params Parms{};

	Parms.TargetRotationOffset = TargetRotationOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.ExecuteUbergraph_ItemPreviewSideSwap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  K2Node_Event_PrimaryRequestedItem_1                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     K2Node_Event_Options                                             (ConstParm, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  K2Node_Event_PrimaryRequestedItem                                (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     K2Node_Event_TransitionOptions                                   (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TargetZoomLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_B_Execution_Happened_Variable_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_A_Execution_Happened_Variable_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPerformanceMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Event_TargetRotationOffset                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_TargetZoomLevel_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_ZoomLevel_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewSideSwap_C::ExecuteUbergraph_ItemPreviewSideSwap(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem_1, const struct FSceneTransitionOptions& K2Node_Event_Options, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem, const struct FSceneTransitionOptions& K2Node_Event_TransitionOptions, bool K2Node_SwitchEnum_CmpSuccess_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float K2Node_Event_TargetZoomLevel, bool Temp_bool_B_Execution_Happened_Variable_1, bool Temp_bool_A_Execution_Happened_Variable_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, bool CallFunc_IsInPerformanceMode_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FRotator& K2Node_Event_TargetRotationOffset, const struct FRotator& CallFunc_RLerp_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_TargetZoomLevel_ImplicitCast, float K2Node_VariableSet_ZoomLevel_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "ExecuteUbergraph_ItemPreviewSideSwap");

	Params::UItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_PrimaryRequestedItem_1 = K2Node_Event_PrimaryRequestedItem_1;
	Parms.K2Node_Event_Options = K2Node_Event_Options;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_PrimaryRequestedItem = K2Node_Event_PrimaryRequestedItem;
	Parms.K2Node_Event_TransitionOptions = K2Node_Event_TransitionOptions;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_TargetZoomLevel = K2Node_Event_TargetZoomLevel;
	Parms.Temp_bool_B_Execution_Happened_Variable_1 = Temp_bool_B_Execution_Happened_Variable_1;
	Parms.Temp_bool_A_Execution_Happened_Variable_1 = Temp_bool_A_Execution_Happened_Variable_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.CallFunc_IsInPerformanceMode_ReturnValue = CallFunc_IsInPerformanceMode_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.K2Node_Event_TargetRotationOffset = K2Node_Event_TargetRotationOffset;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_TargetZoomLevel_ImplicitCast = K2Node_VariableSet_TargetZoomLevel_ImplicitCast;
	Parms.K2Node_VariableSet_ZoomLevel_ImplicitCast = K2Node_VariableSet_ZoomLevel_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.On New Item Spawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Should_Show_Floor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewSideSwap_C::On_New_Item_Spawned__DelegateSignature(bool Should_Show_Floor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewSideSwap_C", "On New Item Spawned__DelegateSignature");

	Params::UItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature_Params Parms{};

	Parms.Should_Show_Floor = Should_Show_Floor;

	UObject::ProcessEvent(Func, &Parms);

}

}



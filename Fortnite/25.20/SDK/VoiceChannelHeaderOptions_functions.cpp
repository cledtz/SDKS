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


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.SetJoinOrLeaveButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Join                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           ()

void UVoiceChannelHeaderOptions_C::SetJoinOrLeaveButton(bool Join, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "SetJoinOrLeaveButton");

	Params::UVoiceChannelHeaderOptions_C_SetJoinOrLeaveButton_Params Parms;

	Parms.Join = Join;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "PreConstruct");

	Params::UVoiceChannelHeaderOptions_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderOptions_C::Construct()
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "Construct");

	Params::UVoiceChannelHeaderOptions_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "Tick");

	Params::UVoiceChannelHeaderOptions_C_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.OnUpdateVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsActiveAndListening                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsActiveOrAvailable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAvailableAndNotActive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsListening                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowingRestriction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "OnUpdateVisuals");

	Params::UVoiceChannelHeaderOptions_C_OnUpdateVisuals_Params Parms;

	Parms.bIsActiveAndListening = bIsActiveAndListening;
	Parms.bIsActiveOrAvailable = bIsActiveOrAvailable;
	Parms.bIsAvailableAndNotActive = bIsAvailableAndNotActive;
	Parms.bIsListening = bIsListening;
	Parms.bShowingRestriction = bShowingRestriction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderOptions_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BP_OnHovered");

	Params::UVoiceChannelHeaderOptions_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderOptions_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BP_OnUnhovered");

	Params::UVoiceChannelHeaderOptions_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderOptions_C::BP_OnDisabled()
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BP_OnDisabled");

	Params::UVoiceChannelHeaderOptions_C_BP_OnDisabled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderOptions_C::BP_OnEnabled()
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BP_OnEnabled");

	Params::UVoiceChannelHeaderOptions_C_BP_OnEnabled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.OnListItemObjectSet_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::OnListItemObjectSet_1(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "OnListItemObjectSet_1");

	Params::UVoiceChannelHeaderOptions_C_OnListItemObjectSet_1_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BP_OnItemExpansionChanged");

	Params::UVoiceChannelHeaderOptions_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.On Options Expansion Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsExpanded                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::On_Options_Expansion_Changed(bool IsExpanded)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "On Options Expansion Changed");

	Params::UVoiceChannelHeaderOptions_C_On_Options_Expansion_Changed_Params Parms;

	Parms.IsExpanded = IsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BndEvt__SidebarVoiceChannelHeader_Button_194_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderOptions_C::BndEvt__SidebarVoiceChannelHeader_Button_194_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BndEvt__SidebarVoiceChannelHeader_Button_194_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UVoiceChannelHeaderOptions_C_BndEvt__SidebarVoiceChannelHeader_Button_194_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BndEvt__SidebarVoiceChannelHeader_Button_Options_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderOptions_C::BndEvt__SidebarVoiceChannelHeader_Button_Options_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BndEvt__SidebarVoiceChannelHeader_Button_Options_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UVoiceChannelHeaderOptions_C_BndEvt__SidebarVoiceChannelHeader_Button_Options_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BndEvt__SidebarVoiceChannelHeader_Button_Options_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderOptions_C::BndEvt__SidebarVoiceChannelHeader_Button_Options_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BndEvt__SidebarVoiceChannelHeader_Button_Options_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Params::UVoiceChannelHeaderOptions_C_BndEvt__SidebarVoiceChannelHeader_Button_Options_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BndEvt__VoiceChannelHeaderOptions_JoinLeaveButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::BndEvt__VoiceChannelHeaderOptions_JoinLeaveButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BndEvt__VoiceChannelHeaderOptions_JoinLeaveButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UVoiceChannelHeaderOptions_C_BndEvt__VoiceChannelHeaderOptions_JoinLeaveButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.BndEvt__VoiceChannelHeaderOptions_ReportButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::BndEvt__VoiceChannelHeaderOptions_ReportButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "BndEvt__VoiceChannelHeaderOptions_ReportButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UVoiceChannelHeaderOptions_C_BndEvt__VoiceChannelHeaderOptions_ReportButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderOptions.VoiceChannelHeaderOptions_C.ExecuteUbergraph_VoiceChannelHeaderOptions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsActiveAndListening                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsActiveOrAvailable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsAvailableAndNotActive                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsListening                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowingRestriction                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveChannel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveChannel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanJoinChannel_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanJoinChannel_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsListItemExpanded_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isExpanded                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveChannel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanJoinChannel_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelHeaderOptions_C::ExecuteUbergraph_VoiceChannelHeaderOptions(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_2, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_bIsActiveAndListening, bool K2Node_Event_bIsActiveOrAvailable, bool K2Node_Event_bIsAvailableAndNotActive, bool K2Node_Event_bIsListening, bool K2Node_Event_bShowingRestriction, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_SelectFloat_ReturnValue, const struct FVector2D& K2Node_Select_Default_2, double CallFunc_SelectFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_IsActiveChannel_ReturnValue, bool CallFunc_IsActiveChannel_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_7, bool CallFunc_CanJoinChannel_ReturnValue, bool CallFunc_CanJoinChannel_ReturnValue_1, bool CallFunc_IsListItemExpanded_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsExpanded, enum class EUMGSequencePlayMode K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool Temp_bool_Variable_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_CustomEvent_isExpanded, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, bool CallFunc_IsActiveChannel_ReturnValue_2, bool CallFunc_CanJoinChannel_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("VoiceChannelHeaderOptions_C", "ExecuteUbergraph_VoiceChannelHeaderOptions");

	Params::UVoiceChannelHeaderOptions_C_ExecuteUbergraph_VoiceChannelHeaderOptions_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_bIsActiveAndListening = K2Node_Event_bIsActiveAndListening;
	Parms.K2Node_Event_bIsActiveOrAvailable = K2Node_Event_bIsActiveOrAvailable;
	Parms.K2Node_Event_bIsAvailableAndNotActive = K2Node_Event_bIsAvailableAndNotActive;
	Parms.K2Node_Event_bIsListening = K2Node_Event_bIsListening;
	Parms.K2Node_Event_bShowingRestriction = K2Node_Event_bShowingRestriction;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_IsActiveChannel_ReturnValue = CallFunc_IsActiveChannel_ReturnValue;
	Parms.CallFunc_IsActiveChannel_ReturnValue_1 = CallFunc_IsActiveChannel_ReturnValue_1;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_CanJoinChannel_ReturnValue = CallFunc_CanJoinChannel_ReturnValue;
	Parms.CallFunc_CanJoinChannel_ReturnValue_1 = CallFunc_CanJoinChannel_ReturnValue_1;
	Parms.CallFunc_IsListItemExpanded_ReturnValue = CallFunc_IsListItemExpanded_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_CustomEvent_isExpanded = K2Node_CustomEvent_isExpanded;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_IsActiveChannel_ReturnValue_2 = CallFunc_IsActiveChannel_ReturnValue_2;
	Parms.CallFunc_CanJoinChannel_ReturnValue_2 = CallFunc_CanJoinChannel_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

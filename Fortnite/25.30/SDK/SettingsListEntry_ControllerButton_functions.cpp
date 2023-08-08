#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_ControllerButton_C::OnSettingAssigned(class FText& ActionText)
{
	static auto Func = Class->GetFunction("SettingsListEntry_ControllerButton_C", "OnSettingAssigned");

	Params::USettingsListEntry_ControllerButton_C_OnSettingAssigned_Params Parms;

	Parms.ActionText = ActionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*         Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_ControllerButton_C::BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static auto Func = Class->GetFunction("SettingsListEntry_ControllerButton_C", "BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::USettingsListEntry_ControllerButton_C_BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ActionText                                          (ConstParm)
// class UCommonButtonLegacy*         K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_ControllerButton_C::ExecuteUbergraph_SettingsListEntry_ControllerButton(int32 EntryPoint, class FText K2Node_Event_ActionText, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("SettingsListEntry_ControllerButton_C", "ExecuteUbergraph_SettingsListEntry_ControllerButton");

	Params::USettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionText = K2Node_Event_ActionText;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

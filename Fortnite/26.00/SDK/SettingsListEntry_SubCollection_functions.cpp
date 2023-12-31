#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C
// (None)

class UClass* USettingsListEntry_SubCollection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsListEntry_SubCollection_C");

	return Clss;
}


// SettingsListEntry_SubCollection_C SettingsListEntry_SubCollection.Default__SettingsListEntry_SubCollection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettingsListEntry_SubCollection_C* USettingsListEntry_SubCollection_C::GetDefaultObj()
{
	static class USettingsListEntry_SubCollection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsListEntry_SubCollection_C*>(USettingsListEntry_SubCollection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* USettingsListEntry_SubCollection_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "GetPrimaryGamepadFocusWidget");

	Params::USettingsListEntry_SubCollection_C_GetPrimaryGamepadFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnSettingAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_SubCollection_C::OnSettingAssigned(class FText& ActionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnSettingAssigned");

	Params::USettingsListEntry_SubCollection_C_OnSettingAssigned_Params Parms{};

	Parms.ActionText = ActionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_SubCollection_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnMouseEnter");

	Params::USettingsListEntry_SubCollection_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_SubCollection_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "OnMouseLeave");

	Params::USettingsListEntry_SubCollection_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C.ExecuteUbergraph_SettingsListEntry_SubCollection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ActionText                                          (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void USettingsListEntry_SubCollection_C::ExecuteUbergraph_SettingsListEntry_SubCollection(int32 EntryPoint, bool CallFunc_IsUsingTouch_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Event_ActionText, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SettingsListEntry_SubCollection_C", "ExecuteUbergraph_SettingsListEntry_SubCollection");

	Params::USettingsListEntry_SubCollection_C_ExecuteUbergraph_SettingsListEntry_SubCollection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_ActionText = K2Node_Event_ActionText;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}



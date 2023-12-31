#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C
// (None)

class UClass* UGamepadInfoSelectorPanel_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamepadInfoSelectorPanel_v3_C");

	return Clss;
}


// GamepadInfoSelectorPanel_v3_C GamepadInfoSelectorPanel_v3.Default__GamepadInfoSelectorPanel_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGamepadInfoSelectorPanel_v3_C* UGamepadInfoSelectorPanel_v3_C::GetDefaultObj()
{
	static class UGamepadInfoSelectorPanel_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGamepadInfoSelectorPanel_v3_C*>(UGamepadInfoSelectorPanel_v3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonLegacy*         CallFunc_GetSelectedButton_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UGamepadInfoSelectorPanel_v3_C::BP_GetDesiredFocusTarget(class UCommonButtonLegacy* CallFunc_GetSelectedButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "BP_GetDesiredFocusTarget");

	Params::UGamepadInfoSelectorPanel_v3_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetSelectedButton_ReturnValue = CallFunc_GetSelectedButton_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleReset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadInfoSelectorPanel_v3_C::HandleReset(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "HandleReset");

	Params::UGamepadInfoSelectorPanel_v3_C_HandleReset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleApply
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadInfoSelectorPanel_v3_C::HandleApply(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "HandleApply");

	Params::UGamepadInfoSelectorPanel_v3_C_HandleApply_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadInfoSelectorPanel_v3_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "HandleBack");

	Params::UGamepadInfoSelectorPanel_v3_C_HandleBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "BP_OnDeactivated");

	Params::UGamepadInfoSelectorPanel_v3_C_BP_OnDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGamepadInfoSelectorPanel_v3_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "OnAddedToFocusPath");

	Params::UGamepadInfoSelectorPanel_v3_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "BP_OnActivated");

	Params::UGamepadInfoSelectorPanel_v3_C_BP_OnActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.ExecuteUbergraph_GamepadInfoSelectorPanel_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInSubGame_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasInputActionHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasInputActionHandler_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadInfoSelectorPanel_v3_C::ExecuteUbergraph_GamepadInfoSelectorPanel_v3(int32 EntryPoint, bool CallFunc_IsInSubGame_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_HasInputActionHandler_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "ExecuteUbergraph_GamepadInfoSelectorPanel_v3");

	Params::UGamepadInfoSelectorPanel_v3_C_ExecuteUbergraph_GamepadInfoSelectorPanel_v3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsInSubGame_ReturnValue = CallFunc_IsInSubGame_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasInputActionHandler_ReturnValue = CallFunc_HasInputActionHandler_ReturnValue;
	Parms.CallFunc_HasInputActionHandler_ReturnValue_1 = CallFunc_HasInputActionHandler_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_HasInputActionHandler_ReturnValue_2 = CallFunc_HasInputActionHandler_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "GamepadInfoSelectorFocus__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorFocus__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorReset__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "GamepadInfoSelectorReset__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorReset__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorApply__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "GamepadInfoSelectorApply__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorApply__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "GamepadInfoSelectorBack__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorBack__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}



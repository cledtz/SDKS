#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UIKit_Dialog.WBP_UIKit_Dialog_C
// (None)

class UClass* UWBP_UIKit_Dialog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UIKit_Dialog_C");

	return Clss;
}


// WBP_UIKit_Dialog_C WBP_UIKit_Dialog.Default__WBP_UIKit_Dialog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UIKit_Dialog_C* UWBP_UIKit_Dialog_C::GetDefaultObj()
{
	static class UWBP_UIKit_Dialog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UIKit_Dialog_C*>(UWBP_UIKit_Dialog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.SetUIKitDialogViewModel
// (Final, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIKitDialogViewModel*       ViewModel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMVVMView*                   CallFunc_GetExtension_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UNotifyFieldValueChanged>CallFunc_SetViewModel_ViewModel_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_SetViewModel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_C::SetUIKitDialogViewModel(class UUIKitDialogViewModel* ViewModel, class UMVVMView* CallFunc_GetExtension_ReturnValue, TScriptInterface<class UNotifyFieldValueChanged> CallFunc_SetViewModel_ViewModel_CastInput, bool CallFunc_SetViewModel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_C", "SetUIKitDialogViewModel");

	Params::UWBP_UIKit_Dialog_C_SetUIKitDialogViewModel_Params Parms{};

	Parms.ViewModel = ViewModel;
	Parms.CallFunc_GetExtension_ReturnValue = CallFunc_GetExtension_ReturnValue;
	Parms.CallFunc_SetViewModel_ViewModel_CastInput = CallFunc_SetViewModel_ViewModel_CastInput;
	Parms.CallFunc_SetViewModel_ReturnValue = CallFunc_SetViewModel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_C", "PreConstruct");

	Params::UWBP_UIKit_Dialog_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.ExecuteUbergraph_WBP_UIKit_Dialog
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Dialog_C::ExecuteUbergraph_WBP_UIKit_Dialog(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Dialog_C", "ExecuteUbergraph_WBP_UIKit_Dialog");

	Params::UWBP_UIKit_Dialog_C_ExecuteUbergraph_WBP_UIKit_Dialog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Counter.UI_Counter_C
// (None)

class UClass* UUI_Counter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Counter_C");

	return Clss;
}


// UI_Counter_C UI_Counter.Default__UI_Counter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Counter_C* UUI_Counter_C::GetDefaultObj()
{
	static class UUI_Counter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Counter_C*>(UUI_Counter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Counter.UI_Counter_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Counter_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Counter_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UUI_Counter_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Counter.UI_Counter_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Counter_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Counter_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Counter_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Counter.UI_Counter_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Counter_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Counter_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_Counter_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Counter.UI_Counter_C.ExecuteUbergraph_UI_Counter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Subtract_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Counter_C::ExecuteUbergraph_UI_Counter(int32 EntryPoint, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Subtract_LinearColorLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Counter_C", "ExecuteUbergraph_UI_Counter");

	Params::UUI_Counter_C_ExecuteUbergraph_UI_Counter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue = CallFunc_Add_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Subtract_LinearColorLinearColor_ReturnValue = CallFunc_Subtract_LinearColorLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Counter.UI_Counter_C.OnClickDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Counter_C*               Counter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Counter_C::OnClickDelegate__DelegateSignature(class UUI_Counter_C* Counter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Counter_C", "OnClickDelegate__DelegateSignature");

	Params::UUI_Counter_C_OnClickDelegate__DelegateSignature_Params Parms{};

	Parms.Counter = Counter;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PinCodeButton.PinCodeButton_C
// (None)

class UClass* UPinCodeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PinCodeButton_C");

	return Clss;
}


// PinCodeButton_C PinCodeButton.Default__PinCodeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPinCodeButton_C* UPinCodeButton_C::GetDefaultObj()
{
	static class UPinCodeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPinCodeButton_C*>(UPinCodeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PinCodeButton.PinCodeButton_C.Set Pin Number
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Pin                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UPinCodeButton_C::Set_Pin_Number(const class FString& Pin, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PinCodeButton_C", "Set Pin Number");

	Params::UPinCodeButton_C_Set_Pin_Number_Params Parms{};

	Parms.Pin = Pin;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinCodeButton.PinCodeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPinCodeButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PinCodeButton_C", "Construct");

	Params::UPinCodeButton_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function PinCodeButton.PinCodeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinCodeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PinCodeButton_C", "PreConstruct");

	Params::UPinCodeButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PinCodeButton.PinCodeButton_C.ExecuteUbergraph_PinCodeButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPinCodeButton_C::ExecuteUbergraph_PinCodeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PinCodeButton_C", "ExecuteUbergraph_PinCodeButton");

	Params::UPinCodeButton_C_ExecuteUbergraph_PinCodeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



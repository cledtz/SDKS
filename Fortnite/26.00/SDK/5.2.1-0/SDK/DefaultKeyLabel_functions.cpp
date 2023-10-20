#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DefaultKeyLabel.DefaultKeyLabel_C
// (None)

class UClass* UDefaultKeyLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultKeyLabel_C");

	return Clss;
}


// DefaultKeyLabel_C DefaultKeyLabel.Default__DefaultKeyLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultKeyLabel_C* UDefaultKeyLabel_C::GetDefaultObj()
{
	static class UDefaultKeyLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultKeyLabel_C*>(UDefaultKeyLabel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DefaultKeyLabel.DefaultKeyLabel_C.UpdateKeyLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDefaultKeyLabel_C::UpdateKeyLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultKeyLabel_C", "UpdateKeyLabel");

	Params::UDefaultKeyLabel_C_UpdateKeyLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DefaultKeyLabel.DefaultKeyLabel_C.ExecuteUbergraph_DefaultKeyLabel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// bool                               CallFunc_HasIcon_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetIconBrush_ReturnValue                                (None)
// enum class ESlateVisibility        CallFunc_GetIconVisibility_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetDisplayNameVisibility_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultKeyLabel_C::ExecuteUbergraph_DefaultKeyLabel(int32 EntryPoint, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_HasIcon_ReturnValue, const struct FSlateBrush& CallFunc_GetIconBrush_ReturnValue, enum class ESlateVisibility CallFunc_GetIconVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetDisplayNameVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DefaultKeyLabel_C", "ExecuteUbergraph_DefaultKeyLabel");

	Params::UDefaultKeyLabel_C_ExecuteUbergraph_DefaultKeyLabel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_HasIcon_ReturnValue = CallFunc_HasIcon_ReturnValue;
	Parms.CallFunc_GetIconBrush_ReturnValue = CallFunc_GetIconBrush_ReturnValue;
	Parms.CallFunc_GetIconVisibility_ReturnValue = CallFunc_GetIconVisibility_ReturnValue;
	Parms.CallFunc_GetDisplayNameVisibility_ReturnValue = CallFunc_GetDisplayNameVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



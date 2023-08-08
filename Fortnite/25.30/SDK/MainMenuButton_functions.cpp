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


// Function MainMenuButton.MainMenuButton_C.UpdateRightSideIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>SoftMaterial                                                     (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void UMainMenuButton_C::UpdateRightSideIcon(TSoftObjectPtr<class UMaterialInterface> SoftMaterial)
{
	static auto Func = Class->GetFunction("MainMenuButton_C", "UpdateRightSideIcon");

	Params::UMainMenuButton_C_UpdateRightSideIcon_Params Parms;

	Parms.SoftMaterial = SoftMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuButton.MainMenuButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("MainMenuButton_C", "PreConstruct");

	Params::UMainMenuButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuButton.MainMenuButton_C.UpdateRightSideIconColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuButton_C::UpdateRightSideIconColor(const struct FLinearColor& Color)
{
	static auto Func = Class->GetFunction("MainMenuButton_C", "UpdateRightSideIconColor");

	Params::UMainMenuButton_C_UpdateRightSideIconColor_Params Parms;

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuButton.MainMenuButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainMenuButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("MainMenuButton_C", "BP_OnHovered");

	Params::UMainMenuButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuButton.MainMenuButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainMenuButton_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("MainMenuButton_C", "BP_OnSelected");

	Params::UMainMenuButton_C_BP_OnSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuButton.MainMenuButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainMenuButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("MainMenuButton_C", "BP_OnUnhovered");

	Params::UMainMenuButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuButton.MainMenuButton_C.ExecuteUbergraph_MainMenuButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UMaterialInterface>K2Node_CustomEvent_SoftMaterial                                  (UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuButton_C::ExecuteUbergraph_MainMenuButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UMaterialInterface> K2Node_CustomEvent_SoftMaterial, bool K2Node_Event_IsDesignTime, const struct FLinearColor& K2Node_CustomEvent_Color, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MainMenuButton_C", "ExecuteUbergraph_MainMenuButton");

	Params::UMainMenuButton_C_ExecuteUbergraph_MainMenuButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_SoftMaterial = K2Node_CustomEvent_SoftMaterial;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

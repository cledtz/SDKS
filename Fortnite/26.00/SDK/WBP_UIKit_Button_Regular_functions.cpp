#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C
// (None)

class UClass* UWBP_UIKit_Button_Regular_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UIKit_Button_Regular_C");

	return Clss;
}


// WBP_UIKit_Button_Regular_C WBP_UIKit_Button_Regular.Default__WBP_UIKit_Button_Regular_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UIKit_Button_Regular_C* UWBP_UIKit_Button_Regular_C::GetDefaultObj()
{
	static class UWBP_UIKit_Button_Regular_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UIKit_Button_Regular_C*>(UWBP_UIKit_Button_Regular_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.OverrideFontMaterials
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*           PrimaryFontMaterial                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           SecondaryFontMaterial                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_2                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_3                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_4                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_5                                (HasGetValueTypeHash)

void UWBP_UIKit_Button_Regular_C::OverrideFontMaterials(class UMaterialInstance* PrimaryFontMaterial, class UMaterialInstance* SecondaryFontMaterial, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_4, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Button_Regular_C", "OverrideFontMaterials");

	Params::UWBP_UIKit_Button_Regular_C_OverrideFontMaterials_Params Parms{};

	Parms.PrimaryFontMaterial = PrimaryFontMaterial;
	Parms.SecondaryFontMaterial = SecondaryFontMaterial;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_2 = K2Node_MakeStruct_SlateFontInfo_2;
	Parms.K2Node_MakeStruct_SlateFontInfo_3 = K2Node_MakeStruct_SlateFontInfo_3;
	Parms.K2Node_MakeStruct_SlateFontInfo_4 = K2Node_MakeStruct_SlateFontInfo_4;
	Parms.K2Node_MakeStruct_SlateFontInfo_5 = K2Node_MakeStruct_SlateFontInfo_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Regular_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Button_Regular_C", "PreConstruct");

	Params::UWBP_UIKit_Button_Regular_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.ExecuteUbergraph_WBP_UIKit_Button_Regular
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Regular_C::ExecuteUbergraph_WBP_UIKit_Button_Regular(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UIKit_Button_Regular_C", "ExecuteUbergraph_WBP_UIKit_Button_Regular");

	Params::UWBP_UIKit_Button_Regular_C_ExecuteUbergraph_WBP_UIKit_Button_Regular_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseUI.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseUI.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseUI.UI
// (None)

class UClass* UUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI");

	return Clss;
}


// UI VerseUI.Default__UI
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI* UUI::GetDefaultObj()
{
	static class UUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI*>(UUI::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RMakeCanvasSlot_L_Nwidget_M_Nvector2_M_N_QSize_Nvector2_20_3d_20_2e_2e_2e_M_N_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_N_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FUI_canvas_slot             RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FUI_canvas_slot UUI::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RMakeCanvasSlot_L_Nwidget_M_Nvector2_M_N_QSize_Nvector2_20_3d_20_2e_2e_2e_M_N_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_N_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R(const struct FTuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RMakeCanvasSlot_L_Nwidget_M_Nvector2_M_N_QSize_Nvector2_20_3d_20_2e_2e_2e_M_N_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_N_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R");

	Params::UUI__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RMakeCanvasSlot_L_Nwidget_M_Nvector2_M_N_QSize_Nvector2_20_3d_20_2e_2e_2e_M_N_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_N_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UUI::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R");

	Params::UUI__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_user_widget_slot$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FUI_user_widget_slot        RetVal                                                           (Parm, OutParm, ReturnParm)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FUI_user_widget_slot UUI::UI_user_widget_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_user_widget_slot$OverrideFactory");

	Params::UUI_UI_user_widget_slot_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_user_widget_slot$Factory
// (Static, HasOutParams)
// Parameters:
// struct FUI_user_widget_slot        RetVal                                                           (Parm, OutParm, ReturnParm)

struct FUI_user_widget_slot UUI::UI_user_widget_slot_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_user_widget_slot$Factory");

	Params::UUI_UI_user_widget_slot_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_stack_box_slot$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_stack_box_slot          RetVal                                                           (Parm, OutParm, ReturnParm)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_6                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_7                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_8                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_10                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_12                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_13                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_14                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_15                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_16                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_17                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_18                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_19                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_20                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_21                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_22                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FUI_stack_box_slot UUI::UI_stack_box_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, const struct FUI_margin& _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionalProperty_ _ExprResult_8, FOptionalProperty_ _ExprResult_9, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_10, FOptionalProperty_ _ExprResultStack_11, FVerseStringProperty_ _ExprResultStack_12, FOptionalProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResultStack_14, FOptionalProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResultStack_16, FOptionalProperty_ _ExprResult_17, const struct FUI_margin& _ExprResult_18, FVerseStringProperty_ _ExprResultStack_19, FOptionalProperty_ _ExprResult_20, FOptionalProperty_ _ExprResult_21, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_22, FOptionalProperty_ _ExprResultStack_23)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_stack_box_slot$OverrideFactory");

	Params::UUI_UI_stack_box_slot_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResultStack_23 = _ExprResultStack_23;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_stack_box_slot$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_stack_box_slot          RetVal                                                           (Parm, OutParm, ReturnParm)
// struct FUI_margin                  _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_2                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_6                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FUI_stack_box_slot UUI::UI_stack_box_slot_Factory(const struct FUI_margin& _ExprResult_0, FOptionalProperty_ _ExprResult_1, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FUI_margin& _ExprResult_4, FOptionalProperty_ _ExprResult_5, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_stack_box_slot$Factory");

	Params::UUI_UI_stack_box_slot_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_overlay_slot$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_overlay_slot            RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_6                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_7                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_8                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_9                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_10                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_11                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_12                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_13                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FUI_overlay_slot UUI::UI_overlay_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, const struct FUI_margin& _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionalProperty_ _ExprResult_8, FVerseStringProperty_ _ExprResultStack_9, FOptionalProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResultStack_11, FOptionalProperty_ _ExprResult_12, const struct FUI_margin& _ExprResult_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_overlay_slot$OverrideFactory");

	Params::UUI_UI_overlay_slot_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_overlay_slot$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_overlay_slot            RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// struct FUI_margin                  _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_margin                  _ExprResult_1                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FUI_overlay_slot UUI::UI_overlay_slot_Factory(const struct FUI_margin& _ExprResult_0, const struct FUI_margin& _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_overlay_slot$Factory");

	Params::UUI_UI_overlay_slot_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_canvas_slot$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_canvas_slot             RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_anchors                 _ExprResult_2                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_3                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_4                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_5                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_8                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_10                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_11                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_12                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_14                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_15                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_16                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_17                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_anchors                 _ExprResult_18                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_19                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_20                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_21                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_22                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_23                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_24                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_25                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_26                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_27                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_28                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_29                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_30                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_31                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FUI_canvas_slot UUI::UI_canvas_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, const struct FUI_anchors& _ExprResult_2, FVerseStringProperty_ _ExprResultStack_3, FOptionalProperty_ _ExprResult_4, const struct FUI_margin& _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, const struct FSpatialMath_vector2& _ExprResult_10, TMap<FVerseStringProperty_, uint8> _ExprResultStack_11, FVerseStringProperty_ _ExprResult_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResultStack_14, FOptionalProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResultStack_16, FOptionalProperty_ _ExprResult_17, const struct FUI_anchors& _ExprResult_18, FVerseStringProperty_ _ExprResultStack_19, FOptionalProperty_ _ExprResult_20, const struct FUI_margin& _ExprResult_21, FVerseStringProperty_ _ExprResultStack_22, FOptionalProperty_ _ExprResult_23, FVerseStringProperty_ _ExprResultStack_24, FOptionalProperty_ _ExprResult_25, const struct FSpatialMath_vector2& _ExprResult_26, TMap<FVerseStringProperty_, uint8> _ExprResultStack_27, FVerseStringProperty_ _ExprResult_28, FVerseStringProperty_ _ExprResult_29, FVerseStringProperty_ _ExprResultStack_30, FOptionalProperty_ _ExprResult_31)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_canvas_slot$OverrideFactory");

	Params::UUI_UI_canvas_slot_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResultStack_22 = _ExprResultStack_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms._ExprResultStack_24 = _ExprResultStack_24;
	Parms._ExprResult_25 = _ExprResult_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResultStack_27 = _ExprResultStack_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResult_29 = _ExprResult_29;
	Parms._ExprResultStack_30 = _ExprResultStack_30;
	Parms._ExprResult_31 = _ExprResult_31;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_canvas_slot$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_canvas_slot             RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// struct FUI_anchors                 _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_margin                  _ExprResult_1                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector2        _ExprResult_2                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// struct FUI_anchors                 _ExprResult_6                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_margin                  _ExprResult_7                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector2        _ExprResult_8                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_9                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)

struct FUI_canvas_slot UUI::UI_canvas_slot_Factory(const struct FUI_anchors& _ExprResult_0, const struct FUI_margin& _ExprResult_1, const struct FSpatialMath_vector2& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, const struct FUI_anchors& _ExprResult_6, const struct FUI_margin& _ExprResult_7, const struct FSpatialMath_vector2& _ExprResult_8, TMap<FVerseStringProperty_, uint8> _ExprResultStack_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_canvas_slot$Factory");

	Params::UUI_UI_canvas_slot_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_button_slot$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_button_slot             RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_6                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              _ExprResultStack_7                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_8                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_9                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_10                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_11                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_12                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUI_margin                  _ExprResult_13                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FUI_button_slot UUI::UI_button_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, const struct FUI_margin& _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionalProperty_ _ExprResult_8, FVerseStringProperty_ _ExprResultStack_9, FOptionalProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResultStack_11, FOptionalProperty_ _ExprResult_12, const struct FUI_margin& _ExprResult_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_button_slot$OverrideFactory");

	Params::UUI_UI_button_slot_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_button_slot$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_button_slot             RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// struct FUI_margin                  _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_margin                  _ExprResult_1                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FUI_button_slot UUI::UI_button_slot_Factory(const struct FUI_margin& _ExprResult_0, const struct FUI_margin& _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_button_slot$Factory");

	Params::UUI_UI_button_slot_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_margin$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_margin                  RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_8                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_11                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_12                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_13                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_14                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_15                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FUI_margin UUI::UI_margin_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FOptionalProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResultStack_14, FOptionalProperty_ _ExprResult_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_margin$OverrideFactory");

	Params::UUI_UI_margin_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResult_15 = _ExprResult_15;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_margin$Factory
// (Static, HasOutParams)
// Parameters:
// struct FUI_margin                  RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FUI_margin UUI::UI_margin_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_margin$Factory");

	Params::UUI_UI_margin_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_anchors$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_anchors                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_2                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_8                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_9                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_12                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_13                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_14                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_15                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_17                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_18                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_19                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_20                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_21                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_22                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_23                                                   (HasGetValueTypeHash)

struct FUI_anchors UUI::UI_anchors_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, const struct FSpatialMath_vector2& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7, const struct FSpatialMath_vector2& _ExprResult_8, TMap<FVerseStringProperty_, uint8> _ExprResultStack_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FOptionalProperty_ _ExprResult_13, const struct FSpatialMath_vector2& _ExprResult_14, TMap<FVerseStringProperty_, uint8> _ExprResultStack_15, FVerseStringProperty_ _ExprResult_16, FVerseStringProperty_ _ExprResult_17, FVerseStringProperty_ _ExprResultStack_18, FOptionalProperty_ _ExprResult_19, const struct FSpatialMath_vector2& _ExprResult_20, TMap<FVerseStringProperty_, uint8> _ExprResultStack_21, FVerseStringProperty_ _ExprResult_22, FVerseStringProperty_ _ExprResult_23)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_anchors$OverrideFactory");

	Params::UUI_UI_anchors_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResultStack_18 = _ExprResultStack_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResultStack_21 = _ExprResultStack_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_anchors$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_anchors                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector2        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_8                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_9                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_12                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_13                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)

struct FUI_anchors UUI::UI_anchors_Factory(const struct FSpatialMath_vector2& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector2& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7, const struct FSpatialMath_vector2& _ExprResult_8, TMap<FVerseStringProperty_, uint8> _ExprResultStack_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, const struct FSpatialMath_vector2& _ExprResult_12, TMap<FVerseStringProperty_, uint8> _ExprResultStack_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_anchors$Factory");

	Params::UUI_UI_anchors_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_widget_message$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FUI_widget_message          RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FUI_widget_message UUI::UI_widget_message_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_widget_message$OverrideFactory");

	Params::UUI_UI_widget_message_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_widget_message$Factory
// (Static, HasOutParams)
// Parameters:
// struct FUI_widget_message          RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FUI_widget_message UUI::UI_widget_message_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_widget_message$Factory");

	Params::UUI_UI_widget_message_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_player_ui_slot$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FUI_player_ui_slot          RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FUI_player_ui_slot UUI::UI_player_ui_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_player_ui_slot$OverrideFactory");

	Params::UUI_UI_player_ui_slot_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.UI_player_ui_slot$Factory
// (Static, HasOutParams)
// Parameters:
// struct FUI_player_ui_slot          RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FUI_player_ui_slot UUI::UI_player_ui_slot_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "UI_player_ui_slot$Factory");

	Params::UUI_UI_player_ui_slot_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI.$InitCDO
// (None)
// Parameters:

void UUI::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI", "$InitCDO");

	Params::UUI__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_player_ui
// (None)

class UClass* UUI_player_ui::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_player_ui");

	return Clss;
}


// UI_player_ui VerseUI.Default__UI_player_ui
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_player_ui* UUI_player_ui::GetDefaultObj()
{
	static class UUI_player_ui* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_player_ui*>(UUI_player_ui::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_player_ui._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUI_widget*                  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_player_ui::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_ui", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R");

	Params::UUI_player_ui__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_player_ui._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUI_widget*                  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_player_ui::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_ui", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R");

	Params::UUI_player_ui__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_player_ui._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lwidget_Mplayer__ui__slot_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UUI_player_ui::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R(const struct FTuple_Lwidget_Mplayer__ui__slot_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_ui", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R");

	Params::UUI_player_ui__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_player_ui.$InitInstance
// (None)
// Parameters:

void UUI_player_ui::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_ui", "$InitInstance");

	Params::UUI_player_ui__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_player_ui.$Block
// (None)
// Parameters:

void UUI_player_ui::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_ui", "$Block");

	Params::UUI_player_ui__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_player_ui.$InitCDO
// (None)
// Parameters:

void UUI_player_ui::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_player_ui", "$InitCDO");

	Params::UUI_player_ui__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_widget
// (None)

class UClass* UUI_widget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_widget");

	return Clss;
}


// UI_widget VerseUI.Default__UI_widget
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_widget* UUI_widget::GetDefaultObj()
{
	static class UUI_widget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_widget*>(UUI_widget::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EUI_widget_visibility   __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_widget::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R(enum class EUI_widget_visibility __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R");

	Params::UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UUI_widget::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R");

	Params::UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UUI_widget::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled");

	Params::UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EUI_widget_visibility   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EUI_widget_visibility UUI_widget::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility");

	Params::UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UUI_widget::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget");

	Params::UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UUI_widget::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget");

	Params::UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_widget.$InitInstance
// (None)
// Parameters:

void UUI_widget::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "$InitInstance");

	Params::UUI_widget__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_widget.$Block
// (None)
// Parameters:

void UUI_widget::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "$Block");

	Params::UUI_widget__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_widget.$InitCDO
// (None)
// Parameters:

void UUI_widget::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget", "$InitCDO");

	Params::UUI_widget__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_button
// (None)

class UClass* UUI_button::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_button");

	return Clss;
}


// UI_button VerseUI.Default__UI_button
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_button* UUI_button::GetDefaultObj()
{
	static class UUI_button* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_button*>(UUI_button::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_button._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FUI_button_slot             __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UUI_button::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R(const struct FUI_button_slot& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R");

	Params::UUI_button__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_button._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UUI_button::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick");

	Params::UUI_button__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI_button.$InitInstance
// (None)
// Parameters:

void UUI_button::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button", "$InitInstance");

	Params::UUI_button__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_button.$Block
// (None)
// Parameters:

void UUI_button::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button", "$Block");

	Params::UUI_button__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_button.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerseEngine_subscribable_event*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_button::_InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_button", "$InitCDO");

	Params::UUI_button__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_canvas
// (None)

class UClass* UUI_canvas::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_canvas");

	return Clss;
}


// UI_canvas VerseUI.Default__UI_canvas
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_canvas* UUI_canvas::GetDefaultObj()
{
	static class UUI_canvas* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_canvas*>(UUI_canvas::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_canvas._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUI_widget*                  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_canvas::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_canvas", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R");

	Params::UUI_canvas__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_canvas._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FUI_canvas_slot             __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UUI_canvas::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R(const struct FUI_canvas_slot& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_canvas", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R");

	Params::UUI_canvas__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_canvas.$InitInstance
// (None)
// Parameters:

void UUI_canvas::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_canvas", "$InitInstance");

	Params::UUI_canvas__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_canvas.$Block
// (None)
// Parameters:

void UUI_canvas::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_canvas", "$Block");

	Params::UUI_canvas__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_canvas.$InitCDO
// (HasDefaults)
// Parameters:
// TArray<struct FUI_canvas_slot>     _ExprResult_0                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<struct FUI_canvas_slot>     _ForResult_1                                                     (ContainsInstancedReference)
// int64                              _ForIndex_2                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_3                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<struct FUI_canvas_slot>     _ExprResult_5                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_5                                       (ContainsInstancedReference)
// TArray<struct FUI_canvas_slot>     _ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_8                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)

void UUI_canvas::_InitCDO(const TArray<struct FUI_canvas_slot>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FUI_canvas_slot>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4, const TArray<struct FUI_canvas_slot>& _ExprResult_5, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_5, const TArray<struct FUI_canvas_slot>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_7, uint8 _ExprResult_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_canvas", "$InitCDO");

	Params::UUI_canvas__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_1 = _ForResult_1;
	Parms._ForIndex_2 = _ForIndex_2;
	Parms._ForLength_3 = _ForLength_3;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xFFC68BC5_Array_5 = __verse_0xFFC68BC5_Array_5;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms._ForLength_8 = _ForLength_8;
	Parms.__verse_0xFB88B569_Item_7 = __verse_0xFB88B569_Item_7;
	Parms._ExprResult_9 = _ExprResult_9;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_color_block
// (None)

class UClass* UUI_color_block::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_color_block");

	return Clss;
}


// UI_color_block VerseUI.Default__UI_color_block
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_color_block* UUI_color_block::GetDefaultObj()
{
	static class UUI_color_block* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_color_block*>(UUI_color_block::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_color_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R");

	Params::UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_color_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R");

	Params::UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FColors_color               __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_color_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R");

	Params::UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UUI_color_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity");

	Params::UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector2 UUI_color_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize");

	Params::UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UUI_color_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor");

	Params::UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_color_block.$InitInstance
// (None)
// Parameters:

void UUI_color_block::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "$InitInstance");

	Params::UUI_color_block__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_color_block.$Block
// (None)
// Parameters:

void UUI_color_block::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "$Block");

	Params::UUI_color_block__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_color_block.$InitCDO
// (HasDefaults)
// Parameters:
// struct FSpatialMath_vector2        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

void UUI_color_block::_InitCDO(const struct FSpatialMath_vector2& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector2& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_color_block", "$InitCDO");

	Params::UUI_color_block__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_material_block
// (None)

class UClass* UUI_material_block::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_material_block");

	return Clss;
}


// UI_material_block VerseUI.Default__UI_material_block
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_material_block* UUI_material_block::GetDefaultObj()
{
	static class UUI_material_block* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_material_block*>(UUI_material_block::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FColors_color               __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_material_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R");

	Params::UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_material*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_material_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R");

	Params::UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_material_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R");

	Params::UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UUI_material_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint");

	Params::UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UAssets_material*            RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UAssets_material* UUI_material_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage");

	Params::UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector2 UUI_material_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize");

	Params::UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_material_block.$InitInstance
// (None)
// Parameters:

void UUI_material_block::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "$InitInstance");

	Params::UUI_material_block__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_material_block.$Block
// (None)
// Parameters:

void UUI_material_block::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "$Block");

	Params::UUI_material_block__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_material_block.$InitCDO
// (HasDefaults)
// Parameters:
// struct FSpatialMath_vector2        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

void UUI_material_block::_InitCDO(const struct FSpatialMath_vector2& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector2& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_material_block", "$InitCDO");

	Params::UUI_material_block__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_overlay
// (None)

class UClass* UUI_overlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_overlay");

	return Clss;
}


// UI_overlay VerseUI.Default__UI_overlay
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_overlay* UUI_overlay::GetDefaultObj()
{
	static class UUI_overlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_overlay*>(UUI_overlay::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_overlay._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUI_widget*                  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_overlay::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_overlay", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R");

	Params::UUI_overlay__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_overlay._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FUI_overlay_slot            __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UUI_overlay::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R(const struct FUI_overlay_slot& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_overlay", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R");

	Params::UUI_overlay__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_overlay.$InitInstance
// (None)
// Parameters:

void UUI_overlay::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_overlay", "$InitInstance");

	Params::UUI_overlay__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_overlay.$Block
// (None)
// Parameters:

void UUI_overlay::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_overlay", "$Block");

	Params::UUI_overlay__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_overlay.$InitCDO
// (HasDefaults)
// Parameters:
// TArray<struct FUI_overlay_slot>    _ExprResult_0                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<struct FUI_overlay_slot>    _ForResult_1                                                     (ContainsInstancedReference)
// int64                              _ForIndex_2                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_3                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<struct FUI_overlay_slot>    _ExprResult_5                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_5                                       (ContainsInstancedReference)
// TArray<struct FUI_overlay_slot>    _ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_8                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)

void UUI_overlay::_InitCDO(const TArray<struct FUI_overlay_slot>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FUI_overlay_slot>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4, const TArray<struct FUI_overlay_slot>& _ExprResult_5, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_5, const TArray<struct FUI_overlay_slot>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_7, uint8 _ExprResult_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_overlay", "$InitCDO");

	Params::UUI_overlay__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_1 = _ForResult_1;
	Parms._ForIndex_2 = _ForIndex_2;
	Parms._ForLength_3 = _ForLength_3;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xFFC68BC5_Array_5 = __verse_0xFFC68BC5_Array_5;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms._ForLength_8 = _ForLength_8;
	Parms.__verse_0xFB88B569_Item_7 = __verse_0xFB88B569_Item_7;
	Parms._ExprResult_9 = _ExprResult_9;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_simple_button_internal
// (None)

class UClass* UUI_simple_button_internal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_simple_button_internal");

	return Clss;
}


// UI_simple_button_internal VerseUI.Default__UI_simple_button_internal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_simple_button_internal* UUI_simple_button_internal::GetDefaultObj()
{
	static class UUI_simple_button_internal* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_simple_button_internal*>(UUI_simple_button_internal::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_simple_button_internal._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UVerse_message*              __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_simple_button_internal::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_simple_button_internal", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R");

	Params::UUI_simple_button_internal__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_simple_button_internal._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UUI_simple_button_internal::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_simple_button_internal", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick");

	Params::UUI_simple_button_internal__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseUI.UI_simple_button_internal.$InitInstance
// (None)
// Parameters:

void UUI_simple_button_internal::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_simple_button_internal", "$InitInstance");

	Params::UUI_simple_button_internal__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_simple_button_internal.$Block
// (None)
// Parameters:

void UUI_simple_button_internal::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_simple_button_internal", "$Block");

	Params::UUI_simple_button_internal__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_simple_button_internal.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerse_message*              _ExprResultStack_0                                               (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R_ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ExprResult_5                                                    (ContainsInstancedReference)
// TMap<enum class EVerseFalse, enum class EVerseFalse>__verse_0xC87067A2_Map_1                                         (ContainsInstancedReference)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x589418B4_Key_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x31A8F10C_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_10                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerse_message*              _ExprResultStack_12                                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R_ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ExprResult_17                                                   (ContainsInstancedReference)
// TMap<enum class EVerseFalse, enum class EVerseFalse>__verse_0xC87067A2_Map_6                                         (ContainsInstancedReference)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ForResult_18                                                    (ContainsInstancedReference)
// int64                              _ForIndex_19                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x589418B4_Key_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x31A8F10C_Value_8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_20                                                   (NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_21                                                   (NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_22                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_simple_button_internal::_InitCDO(class UVerse_message* _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_5, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_1, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_6, int64 _ForIndex_7, enum class EVerseFalse __verse_0x589418B4_Key_3, enum class EVerseFalse __verse_0x31A8F10C_Value_3, uint8 _ExprResult_8, uint8 _ExprResult_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11, class UVerse_message* _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_17, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_6, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_18, int64 _ForIndex_19, enum class EVerseFalse __verse_0x589418B4_Key_8, enum class EVerseFalse __verse_0x31A8F10C_Value_8, uint8 _ExprResult_20, uint8 _ExprResult_21, class UVerseEngine_subscribable_event* _ExprResult_22, uint64 _InstancingGraph_23)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_simple_button_internal", "$InitCDO");

	Params::UUI_simple_button_internal__InitCDO_Params Parms{};

	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xC87067A2_Map_1 = __verse_0xC87067A2_Map_1;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms.__verse_0x589418B4_Key_3 = __verse_0x589418B4_Key_3;
	Parms.__verse_0x31A8F10C_Value_3 = __verse_0x31A8F10C_Value_3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._InstancingGraph_11 = _InstancingGraph_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._Callee_13 = _Callee_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.__verse_0xC87067A2_Map_6 = __verse_0xC87067A2_Map_6;
	Parms._ForResult_18 = _ForResult_18;
	Parms._ForIndex_19 = _ForIndex_19;
	Parms.__verse_0x589418B4_Key_8 = __verse_0x589418B4_Key_8;
	Parms.__verse_0x31A8F10C_Value_8 = __verse_0x31A8F10C_Value_8;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._InstancingGraph_23 = _InstancingGraph_23;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_stack_box
// (None)

class UClass* UUI_stack_box::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_stack_box");

	return Clss;
}


// UI_stack_box VerseUI.Default__UI_stack_box
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_stack_box* UUI_stack_box::GetDefaultObj()
{
	static class UUI_stack_box* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_stack_box*>(UUI_stack_box::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_stack_box._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUI_widget*                  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_stack_box::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_stack_box", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R");

	Params::UUI_stack_box__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_stack_box._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FUI_stack_box_slot          __verse_0xB2CDDD72_Argument                                      (Parm)

void UUI_stack_box::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R(const struct FUI_stack_box_slot& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_stack_box", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R");

	Params::UUI_stack_box__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_stack_box.$InitInstance
// (None)
// Parameters:

void UUI_stack_box::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_stack_box", "$InitInstance");

	Params::UUI_stack_box__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_stack_box.$Block
// (None)
// Parameters:

void UUI_stack_box::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_stack_box", "$Block");

	Params::UUI_stack_box__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_stack_box.$InitCDO
// (HasDefaults)
// Parameters:
// TArray<struct FUI_stack_box_slot>  _ExprResult_0                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<struct FUI_stack_box_slot>  _ForResult_1                                                     (ContainsInstancedReference)
// int64                              _ForIndex_2                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_3                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<struct FUI_stack_box_slot>  _ExprResult_5                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_5                                       (ContainsInstancedReference)
// TArray<struct FUI_stack_box_slot>  _ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_8                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)

void UUI_stack_box::_InitCDO(const TArray<struct FUI_stack_box_slot>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FUI_stack_box_slot>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4, const TArray<struct FUI_stack_box_slot>& _ExprResult_5, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_5, const TArray<struct FUI_stack_box_slot>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_7, uint8 _ExprResult_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_stack_box", "$InitCDO");

	Params::UUI_stack_box__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_1 = _ForResult_1;
	Parms._ForIndex_2 = _ForIndex_2;
	Parms._ForLength_3 = _ForLength_3;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xFFC68BC5_Array_5 = __verse_0xFFC68BC5_Array_5;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms._ForLength_8 = _ForLength_8;
	Parms.__verse_0xFB88B569_Item_7 = __verse_0xFB88B569_Item_7;
	Parms._ExprResult_9 = _ExprResult_9;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_text_base
// (None)

class UClass* UUI_text_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_text_base");

	return Clss;
}


// UI_text_base VerseUI.Default__UI_text_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_text_base* UUI_text_base::GetDefaultObj()
{
	static class UUI_text_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_text_base*>(UUI_text_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FColors_color               __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UVerse_message*              __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EUI_text_overflow_policy__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R(enum class EUI_text_overflow_policy __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EUI_text_justification  __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R(enum class EUI_text_justification __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EUI_text_overflow_policyRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EUI_text_overflow_policy UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EUI_text_justification  RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EUI_text_justification UUI_text_base::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification");

	Params::UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_text_base.$InitInstance
// (None)
// Parameters:

void UUI_text_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "$InitInstance");

	Params::UUI_text_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_text_base.$Block
// (None)
// Parameters:

void UUI_text_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "$Block");

	Params::UUI_text_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_text_base.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerse_message*              _ExprResultStack_0                                               (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R_ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ExprResult_5                                                    (ContainsInstancedReference)
// TMap<enum class EVerseFalse, enum class EVerseFalse>__verse_0xC87067A2_Map_1                                         (ContainsInstancedReference)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x589418B4_Key_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x31A8F10C_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// class UVerse_message*              _ExprResultStack_10                                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R_ExprResult_12                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ExprResult_15                                                   (ContainsInstancedReference)
// TMap<enum class EVerseFalse, enum class EVerseFalse>__verse_0xC87067A2_Map_6                                         (ContainsInstancedReference)
// TMap<FVerseStringProperty_, class UVerse_localizable_value*>_ForResult_16                                                    (ContainsInstancedReference)
// int64                              _ForIndex_17                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x589418B4_Key_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0x31A8F10C_Value_8                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_18                                                   (NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_19                                                   (NoDestructor, HasGetValueTypeHash)

void UUI_text_base::_InitCDO(class UVerse_message* _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_5, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_1, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_6, int64 _ForIndex_7, enum class EVerseFalse __verse_0x589418B4_Key_3, enum class EVerseFalse __verse_0x31A8F10C_Value_3, uint8 _ExprResult_8, uint8 _ExprResult_9, class UVerse_message* _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_15, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_6, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_16, int64 _ForIndex_17, enum class EVerseFalse __verse_0x589418B4_Key_8, enum class EVerseFalse __verse_0x31A8F10C_Value_8, uint8 _ExprResult_18, uint8 _ExprResult_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_base", "$InitCDO");

	Params::UUI_text_base__InitCDO_Params Parms{};

	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xC87067A2_Map_1 = __verse_0xC87067A2_Map_1;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms.__verse_0x589418B4_Key_3 = __verse_0x589418B4_Key_3;
	Parms.__verse_0x31A8F10C_Value_3 = __verse_0x31A8F10C_Value_3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms.__verse_0xC87067A2_Map_6 = __verse_0xC87067A2_Map_6;
	Parms._ForResult_16 = _ForResult_16;
	Parms._ForIndex_17 = _ForIndex_17;
	Parms.__verse_0x589418B4_Key_8 = __verse_0x589418B4_Key_8;
	Parms.__verse_0x31A8F10C_Value_8 = __verse_0x31A8F10C_Value_8;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResult_19 = _ExprResult_19;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_text_block_internal
// (None)

class UClass* UUI_text_block_internal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_text_block_internal");

	return Clss;
}


// UI_text_block_internal VerseUI.Default__UI_text_block_internal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_text_block_internal* UUI_text_block_internal::GetDefaultObj()
{
	static class UUI_text_block_internal* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_text_block_internal*>(UUI_text_block_internal::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_text_block_internal.$InitInstance
// (None)
// Parameters:

void UUI_text_block_internal::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block_internal", "$InitInstance");

	Params::UUI_text_block_internal__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_text_block_internal.$Block
// (None)
// Parameters:

void UUI_text_block_internal::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block_internal", "$Block");

	Params::UUI_text_block_internal__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_text_block_internal.$InitCDO
// (None)
// Parameters:

void UUI_text_block_internal::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_text_block_internal", "$InitCDO");

	Params::UUI_text_block_internal__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_texture_block
// (None)

class UClass* UUI_texture_block::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_texture_block");

	return Clss;
}


// UI_texture_block VerseUI.Default__UI_texture_block
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_texture_block* UUI_texture_block::GetDefaultObj()
{
	static class UUI_texture_block* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_texture_block*>(UUI_texture_block::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FColors_color               __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_texture_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R");

	Params::UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tiling_M_Nimage__tiling_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Limage__tiling_Mimage__tiling_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UUI_texture_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tiling_M_Nimage__tiling_R(const struct FTuple_Limage__tiling_Mimage__tiling_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tiling_M_Nimage__tiling_R");

	Params::UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tiling_M_Nimage__tiling_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_texture*             __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UUI_texture_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture_R(class UAssets_texture* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture_R");

	Params::UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_texture_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R");

	Params::UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UUI_texture_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint");

	Params::UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FTuple_Limage__tiling_Mimage__tiling_RRetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FTuple_Limage__tiling_Mimage__tiling_R UUI_texture_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling");

	Params::UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UAssets_texture*             RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UAssets_texture* UUI_texture_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage");

	Params::UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector2 UUI_texture_block::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize");

	Params::UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseUI.UI_texture_block.$InitInstance
// (None)
// Parameters:

void UUI_texture_block::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "$InitInstance");

	Params::UUI_texture_block__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_texture_block.$Block
// (None)
// Parameters:

void UUI_texture_block::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "$Block");

	Params::UUI_texture_block__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_texture_block.$InitCDO
// (HasDefaults)
// Parameters:
// struct FSpatialMath_vector2        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

void UUI_texture_block::_InitCDO(const struct FSpatialMath_vector2& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector2& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_texture_block", "$InitCDO");

	Params::UUI_texture_block__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_user_widget
// (None)

class UClass* UUI_user_widget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_user_widget");

	return Clss;
}


// UI_user_widget VerseUI.Default__UI_user_widget
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_user_widget* UUI_user_widget::GetDefaultObj()
{
	static class UUI_user_widget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_user_widget*>(UUI_user_widget::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_user_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FUI_user_widget_slot        __verse_0xB2CDDD72_Argument                                      (Parm)

void UUI_user_widget::_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R(const struct FUI_user_widget_slot& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_user_widget", "_L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R");

	Params::UUI_user_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseUI.UI_user_widget.$InitInstance
// (None)
// Parameters:

void UUI_user_widget::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_user_widget", "$InitInstance");

	Params::UUI_user_widget__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_user_widget.$Block
// (None)
// Parameters:

void UUI_user_widget::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_user_widget", "$Block");

	Params::UUI_user_widget__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_user_widget.$InitCDO
// (HasDefaults)
// Parameters:
// TArray<struct FUI_user_widget_slot>_ExprResult_0                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_1                                       (ContainsInstancedReference)
// TArray<struct FUI_user_widget_slot>_ForResult_1                                                     (ContainsInstancedReference)
// int64                              _ForIndex_2                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_3                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// TArray<struct FUI_user_widget_slot>_ExprResult_5                                                    (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_5                                       (ContainsInstancedReference)
// TArray<struct FUI_user_widget_slot>_ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_8                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)

void UUI_user_widget::_InitCDO(const TArray<struct FUI_user_widget_slot>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FUI_user_widget_slot>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4, const TArray<struct FUI_user_widget_slot>& _ExprResult_5, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_5, const TArray<struct FUI_user_widget_slot>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_7, uint8 _ExprResult_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_user_widget", "$InitCDO");

	Params::UUI_user_widget__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0xFFC68BC5_Array_1 = __verse_0xFFC68BC5_Array_1;
	Parms._ForResult_1 = _ForResult_1;
	Parms._ForIndex_2 = _ForIndex_2;
	Parms._ForLength_3 = _ForLength_3;
	Parms.__verse_0xFB88B569_Item_3 = __verse_0xFB88B569_Item_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xFFC68BC5_Array_5 = __verse_0xFFC68BC5_Array_5;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms._ForLength_8 = _ForLength_8;
	Parms.__verse_0xFB88B569_Item_7 = __verse_0xFB88B569_Item_7;
	Parms._ExprResult_9 = _ExprResult_9;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseUI.UI_widget_class
// (None)

class UClass* UUI_widget_class::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_widget_class");

	return Clss;
}


// UI_widget_class VerseUI.Default__UI_widget_class
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_widget_class* UUI_widget_class::GetDefaultObj()
{
	static class UUI_widget_class* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_widget_class*>(UUI_widget_class::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseUI.UI_widget_class.$InitInstance
// (None)
// Parameters:

void UUI_widget_class::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget_class", "$InitInstance");

	Params::UUI_widget_class__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_widget_class.$Block
// (None)
// Parameters:

void UUI_widget_class::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget_class", "$Block");

	Params::UUI_widget_class__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseUI.UI_widget_class.$InitCDO
// (None)
// Parameters:

void UUI_widget_class::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_widget_class", "$InitCDO");

	Params::UUI_widget_class__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}



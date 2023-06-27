#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaBottomBarWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaBottomBarWidget_C", "Construct");

	Params::UAthenaBottomBarWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBottomBarWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaBottomBarWidget_C", "PreConstruct");

	Params::UAthenaBottomBarWidget_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.ExecuteUbergraph_AthenaBottomBarWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBoxSlot*                CallFunc_SlotAsSizeBoxSlot_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_MakeStruct_Top_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Bottom_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBottomBarWidget_C::ExecuteUbergraph_AthenaBottomBarWidget(int32 EntryPoint, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool K2Node_Event_IsDesignTime, double CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float K2Node_MakeStruct_Top_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast)
{
	static auto Func = Class->GetFunction("AthenaBottomBarWidget_C", "ExecuteUbergraph_AthenaBottomBarWidget");

	Params::UAthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Top_ImplicitCast = K2Node_MakeStruct_Top_ImplicitCast;
	Parms.K2Node_MakeStruct_Bottom_ImplicitCast = K2Node_MakeStruct_Bottom_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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


// Function AthenaVariantTileButton.AthenaVariantTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAthenaVariantTileButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("AthenaVariantTileButton_C", "OnListItemObjectSet");

	Params::UAthenaVariantTileButton_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaVariantTileButton.AthenaVariantTileButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaVariantTileButton_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("AthenaVariantTileButton_C", "BP_OnClicked");

	Params::UAthenaVariantTileButton_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaVariantTileButton.AthenaVariantTileButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaVariantTileButton_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaVariantTileButton_C", "Construct");

	Params::UAthenaVariantTileButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaVariantTileButton.AthenaVariantTileButton_C.ExecuteUbergraph_AthenaVariantTileButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaVariantTileButton_C::ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, class UObject* K2Node_Event_ListItemObject, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FVector2D& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaVariantTileButton_C", "ExecuteUbergraph_AthenaVariantTileButton");

	Params::UAthenaVariantTileButton_C_ExecuteUbergraph_AthenaVariantTileButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

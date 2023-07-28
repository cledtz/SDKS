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


// Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Header                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CommanderXP                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BoostXP                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        RestXP                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Body                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           Out                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UXpBarToolTip_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::CreateXPTooltip(class UPlayerController* Owner, class FText Header, class FText CommanderXP, class FText BoostXP, class FText RestXP, class FText Body, class UObject* __WorldContext, class UCommonUserWidget** Out, class UXpBarToolTip_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "CreateXPTooltip");

	Params::UTooltipLibrary_C_CreateXPTooltip_Params Parms;

	Parms.Owner = Owner;
	Parms.Header = Header;
	Parms.CommanderXP = CommanderXP;
	Parms.BoostXP = BoostXP;
	Parms.RestXP = RestXP;
	Parms.Body = Body;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           Owning_Player                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Header_Text                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class USlateBrushAsset*            Header_Icon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   ComparedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Compare_Item_Tooltip(class UPlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Compare Item Tooltip");

	Params::UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Header_Icon = Header_Icon;
	Parms.Item = Item;
	Parms.ComparedItem = ComparedItem;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           Owning_Player                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Header_Text                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class USlateBrushAsset*            Header_Icon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              OverrideQuantity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Item_Tooltip(class UPlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int32 OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Item Tooltip");

	Params::UTooltipLibrary_C_Create_Item_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Header_Icon = Header_Icon;
	Parms.Item = Item;
	Parms.OverrideQuantity = OverrideQuantity;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Tooltip_Text                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, class FText Tooltip_Text, class UObject* __WorldContext, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Set Enabled And Tooltip Text");

	Params::UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params Parms;

	Parms.Widget = Widget;
	Parms.Enabled = Enabled;
	Parms.Tooltip_Text = Tooltip_Text;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           Owning_Player                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Header_Text                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class USlateBrushAsset*            Icon_Brush                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTooltip_Custom_S_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Custom_Tooltip(class UPlayerController* Owning_Player, class FText Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_Custom_S_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Custom Tooltip");

	Params::UTooltipLibrary_C_Create_Custom_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;
	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerController*           Owning_Player                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Body_Text                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Header_Text                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class USlateBrushAsset*            Icon_Brush                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Header_Style                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Body_Style                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTooltip_Basic_S_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UTooltipLibrary_C::Create_Basic_Tooltip(class UPlayerController* Owning_Player, class FText Body_Text, class FText Header_Text, class USlateBrushAsset* Icon_Brush, class UClass* Header_Style, class UClass* Body_Style, class UObject* __WorldContext, class UUserWidget** Output, class UTooltip_Basic_S_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("TooltipLibrary_C", "Create Basic Tooltip");

	Params::UTooltipLibrary_C_Create_Basic_Tooltip_Params Parms;

	Parms.Owning_Player = Owning_Player;
	Parms.Body_Text = Body_Text;
	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;
	Parms.Header_Style = Header_Style;
	Parms.Body_Style = Body_Style;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

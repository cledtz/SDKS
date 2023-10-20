#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C
// (None)

class UClass* UUI_SpawnScreen_Loadout_Full_Slot_Module_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SpawnScreen_Loadout_Full_Slot_Module_C");

	return Clss;
}


// UI_SpawnScreen_Loadout_Full_Slot_Module_C UI_SpawnScreen_Loadout_Full_Slot_Module.Default__UI_SpawnScreen_Loadout_Full_Slot_Module_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* UUI_SpawnScreen_Loadout_Full_Slot_Module_C::GetDefaultObj()
{
	static class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SpawnScreen_Loadout_Full_Slot_Module_C*>(UUI_SpawnScreen_Loadout_Full_Slot_Module_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.GetLoadoutUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUI_SpawnScreen_Loadout_C*   UI_SpawnScreen_Loadout                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::GetLoadoutUI(class UUI_SpawnScreen_Loadout_C** UI_SpawnScreen_Loadout, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "GetLoadoutUI");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_GetLoadoutUI_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (UI_SpawnScreen_Loadout != nullptr)
		*UI_SpawnScreen_Loadout = Parms.UI_SpawnScreen_Loadout;

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::SetIsSelected(bool IsSelected, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "SetIsSelected");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_SetIsSelected_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.OnLoaded_D87A79554F692A8B151FD49046BDC164
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::OnLoaded_D87A79554F692A8B151FD49046BDC164(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "OnLoaded_D87A79554F692A8B151FD49046BDC164");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_OnLoaded_D87A79554F692A8B151FD49046BDC164_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "PreConstruct");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_BndEvt__UI_SpawnScreen_Loadout_Full_Slot_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.SetSlotInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          ItemJson                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::SetSlotInfo(class UClass* ItemClass, class UPlayFabJsonObject* ItemJson)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "SetSlotInfo");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_SetSlotInfo_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.ItemJson = ItemJson;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Slot_Module
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_ItemClass                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          K2Node_CustomEvent_ItemJson                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Slot_Module(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UClass* K2Node_CustomEvent_ItemClass, class UPlayFabJsonObject* K2Node_CustomEvent_ItemJson, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Slot_Module");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Slot_Module_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_CustomEvent_ItemClass = K2Node_CustomEvent_ItemClass;
	Parms.K2Node_CustomEvent_ItemJson = K2Node_CustomEvent_ItemJson;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_OnPressed__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Slot_Module.UI_SpawnScreen_Loadout_Full_Slot_Module_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Slot_Module_C*Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHover                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Slot_Module_C::OnHovered__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Slot_Module_C* Slot, bool IsHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Slot_Module_C", "OnHovered__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Slot_Module_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.IsHover = IsHover;

	UObject::ProcessEvent(Func, &Parms);

}

}



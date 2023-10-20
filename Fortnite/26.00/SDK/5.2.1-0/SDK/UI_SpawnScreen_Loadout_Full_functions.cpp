#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C
// (None)

class UClass* UUI_SpawnScreen_Loadout_Full_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SpawnScreen_Loadout_Full_C");

	return Clss;
}


// UI_SpawnScreen_Loadout_Full_C UI_SpawnScreen_Loadout_Full.Default__UI_SpawnScreen_Loadout_Full_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SpawnScreen_Loadout_Full_C* UUI_SpawnScreen_Loadout_Full_C::GetDefaultObj()
{
	static class UUI_SpawnScreen_Loadout_Full_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SpawnScreen_Loadout_Full_C*>(UUI_SpawnScreen_Loadout_Full_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.AddNewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayFabJsonObject*          Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayFabJsonObject*          L_Item                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_C::AddNewItem(class UPlayFabJsonObject* Item, class UPlayFabJsonObject* L_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_C", "AddNewItem");

	Params::UUI_SpawnScreen_Loadout_Full_C_AddNewItem_Params Parms{};

	Parms.Item = Item;
	Parms.L_Item = L_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_C", "Reset");

	Params::UUI_SpawnScreen_Loadout_Full_C_Reset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_WeaponCustomization_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_C::BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_WeaponCustomization_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_C", "BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_WeaponCustomization_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_C_BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_WeaponCustomization_K2Node_ComponentBoundEvent_0_OnClickBack__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_General_K2Node_ComponentBoundEvent_1_OnClickBack__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_C::BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_General_K2Node_ComponentBoundEvent_1_OnClickBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_C", "BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_General_K2Node_ComponentBoundEvent_1_OnClickBack__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_C_BndEvt__UI_SpawnScreen_Loadout_Full_UI_SpawnScreen_Loadout_Full_General_K2Node_ComponentBoundEvent_1_OnClickBack__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.InventoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_C::InventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_C", "InventoryUpdated");

	Params::UUI_SpawnScreen_Loadout_Full_C_InventoryUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_C", "PreConstruct");

	Params::UUI_SpawnScreen_Loadout_Full_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full.UI_SpawnScreen_Loadout_Full_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_2              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_C::ExecuteUbergraph_UI_SpawnScreen_Loadout_Full(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1, bool K2Node_DynamicCast_bSuccess_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_2, bool K2Node_DynamicCast_bSuccess_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_C", "ExecuteUbergraph_UI_SpawnScreen_Loadout_Full");

	Params::UUI_SpawnScreen_Loadout_Full_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1 = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_2 = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



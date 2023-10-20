#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C
// (None)

class UClass* UUI_SpawnScreen_Loadout_Full_Item_Gun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SpawnScreen_Loadout_Full_Item_Gun_C");

	return Clss;
}


// UI_SpawnScreen_Loadout_Full_Item_Gun_C UI_SpawnScreen_Loadout_Full_Item_Gun.Default__UI_SpawnScreen_Loadout_Full_Item_Gun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* UUI_SpawnScreen_Loadout_Full_Item_Gun_C::GetDefaultObj()
{
	static class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SpawnScreen_Loadout_Full_Item_Gun_C*>(UUI_SpawnScreen_Loadout_Full_Item_Gun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.SetIsEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Item_Gun_C::SetIsEquipped(bool IsEquipped, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Item_Gun_C", "SetIsEquipped");

	Params::UUI_SpawnScreen_Loadout_Full_Item_Gun_C_SetIsEquipped_Params Parms{};

	Parms.IsEquipped = IsEquipped;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_Item_Gun_C::BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Item_Gun_C", "BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Item_Gun_C_BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_Item_Gun_C::BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Item_Gun_C", "BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Item_Gun_C_BndEvt__UI_SpawnScreen_Loadout_Full_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_Item_Gun_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Item_Gun_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Item_Gun_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SpawnScreen_Loadout_Full_Item_Gun_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Item_Gun_C", "Initialize");

	Params::UUI_SpawnScreen_Loadout_Full_Item_Gun_C_Initialize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Item_Gun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStringField_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UPG_PlayerState_Game*        K2Node_DynamicCast_AsPG_Player_State_Game                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PG_PlayerController_Game_C*K2Node_DynamicCast_AsBP_PG_Player_Controller_Game                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_EquipItems_ReturnValue                                  (ReferenceParm)

void UUI_SpawnScreen_Loadout_Full_Item_Gun_C::ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Item_Gun(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_1, TArray<class FString>& CallFunc_EquipItems_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Item_Gun_C", "ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Item_Gun");

	Params::UUI_SpawnScreen_Loadout_Full_Item_Gun_C_ExecuteUbergraph_UI_SpawnScreen_Loadout_Full_Item_Gun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetStringField_ReturnValue = CallFunc_GetStringField_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsPG_Player_State_Game = K2Node_DynamicCast_AsPG_Player_State_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_PG_Player_Controller_Game = K2Node_DynamicCast_AsBP_PG_Player_Controller_Game;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EquipItems_ReturnValue = CallFunc_EquipItems_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Item_Gun_C*Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Item_Gun_C::OnPressed__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Item_Gun_C", "OnPressed__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Item_Gun_C_OnPressed__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_SpawnScreen_Loadout_Full_Item_Gun.UI_SpawnScreen_Loadout_Full_Item_Gun_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnScreen_Loadout_Full_Item_Gun_C*Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsHover                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpawnScreen_Loadout_Full_Item_Gun_C::OnHovered__DelegateSignature(class UUI_SpawnScreen_Loadout_Full_Item_Gun_C* Item, bool IsHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SpawnScreen_Loadout_Full_Item_Gun_C", "OnHovered__DelegateSignature");

	Params::UUI_SpawnScreen_Loadout_Full_Item_Gun_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.IsHover = IsHover;

	UObject::ProcessEvent(Func, &Parms);

}

}



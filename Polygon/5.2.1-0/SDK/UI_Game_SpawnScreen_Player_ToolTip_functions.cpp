#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Game_SpawnScreen_Player_ToolTip.UI_Game_SpawnScreen_Player_ToolTip_C
// (None)

class UClass* UUI_Game_SpawnScreen_Player_ToolTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Game_SpawnScreen_Player_ToolTip_C");

	return Clss;
}


// UI_Game_SpawnScreen_Player_ToolTip_C UI_Game_SpawnScreen_Player_ToolTip.Default__UI_Game_SpawnScreen_Player_ToolTip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Game_SpawnScreen_Player_ToolTip_C* UUI_Game_SpawnScreen_Player_ToolTip_C::GetDefaultObj()
{
	static class UUI_Game_SpawnScreen_Player_ToolTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Game_SpawnScreen_Player_ToolTip_C*>(UUI_Game_SpawnScreen_Player_ToolTip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Game_SpawnScreen_Player_ToolTip.UI_Game_SpawnScreen_Player_ToolTip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Game_SpawnScreen_Player_ToolTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_SpawnScreen_Player_ToolTip_C", "Construct");

	Params::UUI_Game_SpawnScreen_Player_ToolTip_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_SpawnScreen_Player_ToolTip.UI_Game_SpawnScreen_Player_ToolTip_C.ExecuteUbergraph_UI_Game_SpawnScreen_Player_ToolTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_Player_ToolTip_C::ExecuteUbergraph_UI_Game_SpawnScreen_Player_ToolTip(int32 EntryPoint, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_SpawnScreen_Player_ToolTip_C", "ExecuteUbergraph_UI_Game_SpawnScreen_Player_ToolTip");

	Params::UUI_Game_SpawnScreen_Player_ToolTip_C_ExecuteUbergraph_UI_Game_SpawnScreen_Player_ToolTip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



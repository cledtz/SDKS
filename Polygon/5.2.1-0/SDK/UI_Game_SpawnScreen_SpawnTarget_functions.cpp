#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Game_SpawnScreen_SpawnTarget.UI_Game_SpawnScreen_SpawnTarget_C
// (None)

class UClass* UUI_Game_SpawnScreen_SpawnTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Game_SpawnScreen_SpawnTarget_C");

	return Clss;
}


// UI_Game_SpawnScreen_SpawnTarget_C UI_Game_SpawnScreen_SpawnTarget.Default__UI_Game_SpawnScreen_SpawnTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Game_SpawnScreen_SpawnTarget_C* UUI_Game_SpawnScreen_SpawnTarget_C::GetDefaultObj()
{
	static class UUI_Game_SpawnScreen_SpawnTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Game_SpawnScreen_SpawnTarget_C*>(UUI_Game_SpawnScreen_SpawnTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Game_SpawnScreen_SpawnTarget.UI_Game_SpawnScreen_SpawnTarget_C.SetNewSpawnTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBI_SpawnTarget_C>NewSpawnTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_SpawnTarget_C::SetNewSpawnTarget(TScriptInterface<class UBI_SpawnTarget_C> NewSpawnTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_SpawnScreen_SpawnTarget_C", "SetNewSpawnTarget");

	Params::UUI_Game_SpawnScreen_SpawnTarget_C_SetNewSpawnTarget_Params Parms{};

	Parms.NewSpawnTarget = NewSpawnTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_SpawnScreen_SpawnTarget.UI_Game_SpawnScreen_SpawnTarget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_SpawnTarget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_SpawnScreen_SpawnTarget_C", "Tick");

	Params::UUI_Game_SpawnScreen_SpawnTarget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Game_SpawnScreen_SpawnTarget.UI_Game_SpawnScreen_SpawnTarget_C.ExecuteUbergraph_UI_Game_SpawnScreen_SpawnTarget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UBI_SpawnTarget_C>K2Node_CustomEvent_NewSpawnTarget                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_DynamicCast_AsUser_Widget                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Vector2DInterpTo_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_SpawnScreen_SpawnTarget_C::ExecuteUbergraph_UI_Game_SpawnScreen_SpawnTarget(int32 EntryPoint, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class UBI_SpawnTarget_C> K2Node_CustomEvent_NewSpawnTarget, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue, float CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Game_SpawnScreen_SpawnTarget_C", "ExecuteUbergraph_UI_Game_SpawnScreen_SpawnTarget");

	Params::UUI_Game_SpawnScreen_SpawnTarget_C_ExecuteUbergraph_UI_Game_SpawnScreen_SpawnTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_CustomEvent_NewSpawnTarget = K2Node_CustomEvent_NewSpawnTarget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_DynamicCast_AsUser_Widget = K2Node_DynamicCast_AsUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Vector2DInterpTo_ReturnValue = CallFunc_Vector2DInterpTo_ReturnValue;
	Parms.CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast = CallFunc_Vector2DInterpTo_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



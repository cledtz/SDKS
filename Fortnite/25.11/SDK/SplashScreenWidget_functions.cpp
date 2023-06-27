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


// Function SplashScreenWidget.SplashScreenWidget_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USplashScreenWidget_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("SplashScreenWidget_C", "BP_OnActivated");

	Params::USplashScreenWidget_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USplashScreenWidget_C::OnInputMethodChanged(enum class ECommonInputType InputType)
{
	static auto Func = Class->GetFunction("SplashScreenWidget_C", "OnInputMethodChanged");

	Params::USplashScreenWidget_C_OnInputMethodChanged_Params Parms;

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTouchInputPlatform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_InputType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_AddEvent_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void USplashScreenWidget_C::ExecuteUbergraph_SplashScreenWidget(int32 EntryPoint, bool CallFunc_IsTouchInputPlatform_ReturnValue, enum class ECommonInputType K2Node_Event_InputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsMobileApp_ReturnValue, class FText K2Node_Select_Default, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UAudioComponent* CallFunc_AddEvent_ReturnValue)
{
	static auto Func = Class->GetFunction("SplashScreenWidget_C", "ExecuteUbergraph_SplashScreenWidget");

	Params::USplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsTouchInputPlatform_ReturnValue = CallFunc_IsTouchInputPlatform_ReturnValue;
	Parms.K2Node_Event_InputType = K2Node_Event_InputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_AddEvent_ReturnValue = CallFunc_AddEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BattlePass_BuyAnimation.UI_BattlePass_BuyAnimation_C
// (None)

class UClass* UUI_BattlePass_BuyAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BattlePass_BuyAnimation_C");

	return Clss;
}


// UI_BattlePass_BuyAnimation_C UI_BattlePass_BuyAnimation.Default__UI_BattlePass_BuyAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BattlePass_BuyAnimation_C* UUI_BattlePass_BuyAnimation_C::GetDefaultObj()
{
	static class UUI_BattlePass_BuyAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BattlePass_BuyAnimation_C*>(UUI_BattlePass_BuyAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_BattlePass_BuyAnimation.UI_BattlePass_BuyAnimation_C.Finished_C59562724E96D1EE1EA7658EF238B4A5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BattlePass_BuyAnimation_C::Finished_C59562724E96D1EE1EA7658EF238B4A5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_BuyAnimation_C", "Finished_C59562724E96D1EE1EA7658EF238B4A5");

	Params::UUI_BattlePass_BuyAnimation_C_Finished_C59562724E96D1EE1EA7658EF238B4A5_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BattlePass_BuyAnimation.UI_BattlePass_BuyAnimation_C.Finished_B4691D1648DFE5BC8D04DFA90DFD037F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BattlePass_BuyAnimation_C::Finished_B4691D1648DFE5BC8D04DFA90DFD037F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_BuyAnimation_C", "Finished_B4691D1648DFE5BC8D04DFA90DFD037F");

	Params::UUI_BattlePass_BuyAnimation_C_Finished_B4691D1648DFE5BC8D04DFA90DFD037F_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BattlePass_BuyAnimation.UI_BattlePass_BuyAnimation_C.Finished_DB4C5BA5481B57A883CB2BB1C672664D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BattlePass_BuyAnimation_C::Finished_DB4C5BA5481B57A883CB2BB1C672664D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_BuyAnimation_C", "Finished_DB4C5BA5481B57A883CB2BB1C672664D");

	Params::UUI_BattlePass_BuyAnimation_C_Finished_DB4C5BA5481B57A883CB2BB1C672664D_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BattlePass_BuyAnimation.UI_BattlePass_BuyAnimation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BattlePass_BuyAnimation_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_BuyAnimation_C", "Construct");

	Params::UUI_BattlePass_BuyAnimation_C_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BattlePass_BuyAnimation.UI_BattlePass_BuyAnimation_C.ExecuteUbergraph_UI_BattlePass_BuyAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePass_BuyAnimation_C::ExecuteUbergraph_UI_BattlePass_BuyAnimation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_2, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_BuyAnimation_C", "ExecuteUbergraph_UI_BattlePass_BuyAnimation");

	Params::UUI_BattlePass_BuyAnimation_C_ExecuteUbergraph_UI_BattlePass_BuyAnimation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_2 = CallFunc_CreatePlayAnimationProxyObject_Result_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast = CallFunc_SetAnimationCurrentTime_InTime_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



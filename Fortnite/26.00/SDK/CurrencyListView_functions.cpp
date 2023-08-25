#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CurrencyListView.CurrencyListView_C
// (None)

class UClass* UCurrencyListView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurrencyListView_C");

	return Clss;
}


// CurrencyListView_C CurrencyListView.Default__CurrencyListView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCurrencyListView_C* UCurrencyListView_C::GetDefaultObj()
{
	static class UCurrencyListView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCurrencyListView_C*>(UCurrencyListView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CurrencyListView.CurrencyListView_C.AddDataToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCurrencyData               CurrencyData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCurrencyListObject_C*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCurrencyListView_C::AddDataToList(const struct FCurrencyData& CurrencyData, class UCurrencyListObject_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyListView_C", "AddDataToList");

	Params::UCurrencyListView_C_AddDataToList_Params Parms{};

	Parms.CurrencyData = CurrencyData;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyListView.CurrencyListView_C.RunClearListView
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCurrencyListView_C::RunClearListView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyListView_C", "RunClearListView");

	Params::UCurrencyListView_C_RunClearListView_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CurrencyListView.CurrencyListView_C.ExecuteUbergraph_CurrencyListView
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCurrencyListView_C::ExecuteUbergraph_CurrencyListView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CurrencyListView_C", "ExecuteUbergraph_CurrencyListView");

	Params::UCurrencyListView_C_ExecuteUbergraph_CurrencyListView_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Gear_Watch_01.BP_Item_Gear_Watch_01_C
// (Actor)

class UClass* UBP_Item_Gear_Watch_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Gear_Watch_01_C");

	return Clss;
}


// BP_Item_Gear_Watch_01_C BP_Item_Gear_Watch_01.Default__BP_Item_Gear_Watch_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Item_Gear_Watch_01_C* UBP_Item_Gear_Watch_01_C::GetDefaultObj()
{
	static class UBP_Item_Gear_Watch_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Item_Gear_Watch_01_C*>(UBP_Item_Gear_Watch_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_Gear_Watch_01.BP_Item_Gear_Watch_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Item_Gear_Watch_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_01_C", "ReceiveBeginPlay");

	Params::UBP_Item_Gear_Watch_01_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Gear_Watch_01.BP_Item_Gear_Watch_01_C.Watch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Item_Gear_Watch_01_C::Watch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_01_C", "Watch");

	Params::UBP_Item_Gear_Watch_01_C_Watch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Gear_Watch_01.BP_Item_Gear_Watch_01_C.ExecuteUbergraph_BP_Item_Gear_Watch_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Item_Gear_Watch_01_C::ExecuteUbergraph_BP_Item_Gear_Watch_01(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UActor* CallFunc_GetOwner_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_01_C", "ExecuteUbergraph_BP_Item_Gear_Watch_01");

	Params::UBP_Item_Gear_Watch_01_C_ExecuteUbergraph_BP_Item_Gear_Watch_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



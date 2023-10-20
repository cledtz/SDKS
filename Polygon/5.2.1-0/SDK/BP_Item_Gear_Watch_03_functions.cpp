#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Gear_Watch_03.BP_Item_Gear_Watch_03_C
// (Actor)

class UClass* UBP_Item_Gear_Watch_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Gear_Watch_03_C");

	return Clss;
}


// BP_Item_Gear_Watch_03_C BP_Item_Gear_Watch_03.Default__BP_Item_Gear_Watch_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Item_Gear_Watch_03_C* UBP_Item_Gear_Watch_03_C::GetDefaultObj()
{
	static class UBP_Item_Gear_Watch_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Item_Gear_Watch_03_C*>(UBP_Item_Gear_Watch_03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_Gear_Watch_03.BP_Item_Gear_Watch_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Item_Gear_Watch_03_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_03_C", "ReceiveBeginPlay");

	Params::UBP_Item_Gear_Watch_03_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Gear_Watch_03.BP_Item_Gear_Watch_03_C.Watch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Item_Gear_Watch_03_C::Watch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_03_C", "Watch");

	Params::UBP_Item_Gear_Watch_03_C_Watch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Gear_Watch_03.BP_Item_Gear_Watch_03_C.SetCorrectiveFovMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseFovMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Item_Gear_Watch_03_C::SetCorrectiveFovMaterial(bool UseFovMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_03_C", "SetCorrectiveFovMaterial");

	Params::UBP_Item_Gear_Watch_03_C_SetCorrectiveFovMaterial_Params Parms{};

	Parms.UseFovMaterial = UseFovMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Gear_Watch_03.BP_Item_Gear_Watch_03_C.ExecuteUbergraph_BP_Item_Gear_Watch_03
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_useFovMaterial                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Item_Gear_Watch_03_C::ExecuteUbergraph_BP_Item_Gear_Watch_03(int32 EntryPoint, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UActor* CallFunc_GetOwner_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_Event_useFovMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_03_C", "ExecuteUbergraph_BP_Item_Gear_Watch_03");

	Params::UBP_Item_Gear_Watch_03_C_ExecuteUbergraph_BP_Item_Gear_Watch_03_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_useFovMaterial = K2Node_Event_useFovMaterial;

	UObject::ProcessEvent(Func, &Parms);

}

}



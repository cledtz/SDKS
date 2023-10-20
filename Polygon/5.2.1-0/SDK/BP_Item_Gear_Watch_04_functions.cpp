#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C
// (Actor)

class UClass* UBP_Item_Gear_Watch_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Gear_Watch_04_C");

	return Clss;
}


// BP_Item_Gear_Watch_04_C BP_Item_Gear_Watch_04.Default__BP_Item_Gear_Watch_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Item_Gear_Watch_04_C* UBP_Item_Gear_Watch_04_C::GetDefaultObj()
{
	static class UBP_Item_Gear_Watch_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Item_Gear_Watch_04_C*>(UBP_Item_Gear_Watch_04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Item_Gear_Watch_04_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_04_C", "ReceiveBeginPlay");

	Params::UBP_Item_Gear_Watch_04_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Item_Gear_Watch_04_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_04_C", "ReceiveTick");

	Params::UBP_Item_Gear_Watch_04_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C.SetCorrectiveFovMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseFovMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Item_Gear_Watch_04_C::SetCorrectiveFovMaterial(bool UseFovMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_04_C", "SetCorrectiveFovMaterial");

	Params::UBP_Item_Gear_Watch_04_C_SetCorrectiveFovMaterial_Params Parms{};

	Parms.UseFovMaterial = UseFovMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Gear_Watch_04.BP_Item_Gear_Watch_04_C.ExecuteUbergraph_BP_Item_Gear_Watch_04
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_useFovMaterial                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Item_Gear_Watch_04_C::ExecuteUbergraph_BP_Item_Gear_Watch_04(int32 EntryPoint, class UActor* CallFunc_GetOwner_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_useFovMaterial, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Gear_Watch_04_C", "ExecuteUbergraph_BP_Item_Gear_Watch_04");

	Params::UBP_Item_Gear_Watch_04_C_ExecuteUbergraph_BP_Item_Gear_Watch_04_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_useFovMaterial = K2Node_Event_useFovMaterial;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



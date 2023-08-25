#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraRainDrops_01.B_CameraRainDrops_01_C
// (Actor)

class UClass* UB_CameraRainDrops_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraRainDrops_01_C");

	return Clss;
}


// B_CameraRainDrops_01_C B_CameraRainDrops_01.Default__B_CameraRainDrops_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_CameraRainDrops_01_C* UB_CameraRainDrops_01_C::GetDefaultObj()
{
	static class UB_CameraRainDrops_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_CameraRainDrops_01_C*>(UB_CameraRainDrops_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UB_CameraRainDrops_01_C::Alpha__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "Alpha__FinishedFunc");

	Params::UB_CameraRainDrops_01_C_Alpha__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UB_CameraRainDrops_01_C::Alpha__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "Alpha__UpdateFunc");

	Params::UB_CameraRainDrops_01_C_Alpha__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UB_CameraRainDrops_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "ReceiveBeginPlay");

	Params::UB_CameraRainDrops_01_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_CameraRainDrops_01_C::ExecuteUbergraph_B_CameraRainDrops_01(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "ExecuteUbergraph_B_CameraRainDrops_01");

	Params::UB_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



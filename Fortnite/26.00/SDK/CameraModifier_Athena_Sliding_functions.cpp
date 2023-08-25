#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C
// (None)

class UClass* UCameraModifier_Athena_Sliding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModifier_Athena_Sliding_C");

	return Clss;
}


// CameraModifier_Athena_Sliding_C CameraModifier_Athena_Sliding.Default__CameraModifier_Athena_Sliding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraModifier_Athena_Sliding_C* UCameraModifier_Athena_Sliding_C::GetDefaultObj()
{
	static class UCameraModifier_Athena_Sliding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModifier_Athena_Sliding_C*>(UCameraModifier_Athena_Sliding_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.BlendOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCameraModifier_Athena_Sliding_C::BlendOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifier_Athena_Sliding_C", "BlendOut");

	Params::UCameraModifier_Athena_Sliding_C_BlendOut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.ExecuteUbergraph_CameraModifier_Athena_Sliding
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCameraModifier_Athena_Sliding_C::ExecuteUbergraph_CameraModifier_Athena_Sliding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifier_Athena_Sliding_C", "ExecuteUbergraph_CameraModifier_Athena_Sliding");

	Params::UCameraModifier_Athena_Sliding_C_ExecuteUbergraph_CameraModifier_Athena_Sliding_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



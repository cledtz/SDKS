#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Athena_ProgressModal.Athena_ProgressModal_C
// (None)

class UClass* UAthena_ProgressModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ProgressModal_C");

	return Clss;
}


// Athena_ProgressModal_C Athena_ProgressModal.Default__Athena_ProgressModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ProgressModal_C* UAthena_ProgressModal_C::GetDefaultObj()
{
	static class UAthena_ProgressModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ProgressModal_C*>(UAthena_ProgressModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_ProgressModal.Athena_ProgressModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthena_ProgressModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_ProgressModal_C", "BP_OnActivated");

	Params::UAthena_ProgressModal_C_BP_OnActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_ProgressModal.Athena_ProgressModal_C.ExecuteUbergraph_Athena_ProgressModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAthena_ProgressModal_C::ExecuteUbergraph_Athena_ProgressModal(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_ProgressModal_C", "ExecuteUbergraph_Athena_ProgressModal");

	Params::UAthena_ProgressModal_C_ExecuteUbergraph_Athena_ProgressModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



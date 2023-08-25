#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C
// (None)

class UClass* UAthena_ControllerDisconnectedModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ControllerDisconnectedModal_C");

	return Clss;
}


// Athena_ControllerDisconnectedModal_C Athena_ControllerDisconnectedModal.Default__Athena_ControllerDisconnectedModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ControllerDisconnectedModal_C* UAthena_ControllerDisconnectedModal_C::GetDefaultObj()
{
	static class UAthena_ControllerDisconnectedModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ControllerDisconnectedModal_C*>(UAthena_ControllerDisconnectedModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthena_ControllerDisconnectedModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_ControllerDisconnectedModal_C", "BP_OnActivated");

	Params::UAthena_ControllerDisconnectedModal_C_BP_OnActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C.ExecuteUbergraph_Athena_ControllerDisconnectedModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAthena_ControllerDisconnectedModal_C::ExecuteUbergraph_Athena_ControllerDisconnectedModal(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_ControllerDisconnectedModal_C", "ExecuteUbergraph_Athena_ControllerDisconnectedModal");

	Params::UAthena_ControllerDisconnectedModal_C_ExecuteUbergraph_Athena_ControllerDisconnectedModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



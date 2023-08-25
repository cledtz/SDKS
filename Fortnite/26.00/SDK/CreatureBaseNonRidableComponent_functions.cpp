#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
// (None)

class UClass* UCreatureBaseNonRidableComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreatureBaseNonRidableComponent_C");

	return Clss;
}


// CreatureBaseNonRidableComponent_C CreatureBaseNonRidableComponent.Default__CreatureBaseNonRidableComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreatureBaseNonRidableComponent_C* UCreatureBaseNonRidableComponent_C::GetDefaultObj()
{
	static class UCreatureBaseNonRidableComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreatureBaseNonRidableComponent_C*>(UCreatureBaseNonRidableComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.GetRidingInfoFromTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             JumpAttachGroundHeightMin                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             JumpAttachGroundHeightBuffer                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsesAltRidingMessage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseNonRidableComponent_C::GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreatureBaseNonRidableComponent_C", "GetRidingInfoFromTarget");

	Params::UCreatureBaseNonRidableComponent_C_GetRidingInfoFromTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;

}


// Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ToggleRidingAlternative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseNonRidableComponent_C::ToggleRidingAlternative()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreatureBaseNonRidableComponent_C", "ToggleRidingAlternative");

	Params::UCreatureBaseNonRidableComponent_C_ToggleRidingAlternative_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.AlternateRidingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreatureBaseNonRidableComponent_C::AlternateRidingEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreatureBaseNonRidableComponent_C", "AlternateRidingEvent");

	Params::UCreatureBaseNonRidableComponent_C_AlternateRidingEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ExecuteUbergraph_CreatureBaseNonRidableComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureBaseNonRidableComponent_C::ExecuteUbergraph_CreatureBaseNonRidableComponent(int32 EntryPoint, class UActor* CallFunc_GetOwner_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreatureBaseNonRidableComponent_C", "ExecuteUbergraph_CreatureBaseNonRidableComponent");

	Params::UCreatureBaseNonRidableComponent_C_ExecuteUbergraph_CreatureBaseNonRidableComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
// (None)

class UClass* UGAT_Creative_TriggeredAbility_Pawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAT_Creative_TriggeredAbility_Pawn_C");

	return Clss;
}


// GAT_Creative_TriggeredAbility_Pawn_C GAT_Creative_TriggeredAbility_Pawn.Default__GAT_Creative_TriggeredAbility_Pawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAT_Creative_TriggeredAbility_Pawn_C* UGAT_Creative_TriggeredAbility_Pawn_C::GetDefaultObj()
{
	static class UGAT_Creative_TriggeredAbility_Pawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAT_Creative_TriggeredAbility_Pawn_C*>(UGAT_Creative_TriggeredAbility_Pawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.SetupPawnActorAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPawn*                   FortPawn                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   LocalFortPawn                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_Pawn_C::SetupPawnActorAbility(class UFortPawn** FortPawn, class UFortPawn* LocalFortPawn, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "SetupPawnActorAbility");

	Params::UGAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility_Params Parms{};

	Parms.LocalFortPawn = LocalFortPawn;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FortPawn != nullptr)
		*FortPawn = Parms.FortPawn;

}


// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_Creative_TriggeredAbility_Pawn_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "K2_ActivateAbilityFromEvent");

	Params::UGAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UFortPawn*                   CallFunc_SetupPawnActorAbility_FortPawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_Pawn_C::ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UFortPawn* CallFunc_SetupPawnActorAbility_FortPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn");

	Params::UGAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_SetupPawnActorAbility_FortPawn = CallFunc_SetupPawnActorAbility_FortPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_ApplyFullBodyHit_NonParticipant.GAB_ApplyFullBodyHit_NonParticipant_C
// (None)

class UClass* UGAB_ApplyFullBodyHit_NonParticipant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_ApplyFullBodyHit_NonParticipant_C");

	return Clss;
}


// GAB_ApplyFullBodyHit_NonParticipant_C GAB_ApplyFullBodyHit_NonParticipant.Default__GAB_ApplyFullBodyHit_NonParticipant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_ApplyFullBodyHit_NonParticipant_C* UGAB_ApplyFullBodyHit_NonParticipant_C::GetDefaultObj()
{
	static class UGAB_ApplyFullBodyHit_NonParticipant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_ApplyFullBodyHit_NonParticipant_C*>(UGAB_ApplyFullBodyHit_NonParticipant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_ApplyFullBodyHit_NonParticipant.GAB_ApplyFullBodyHit_NonParticipant_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PlayerPawn_NonParticipant_C*K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentFullbodyHitReactionMontage_CurrentMontage     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_ApplyFullBodyHit_NonParticipant_C::PickFullBodyHitMontageSection(int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UBP_PlayerPawn_NonParticipant_C* K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_GetCurrentFullbodyHitReactionMontage_CurrentMontage, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_ApplyFullBodyHit_NonParticipant_C", "PickFullBodyHitMontageSection");

	Params::UGAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant = K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentFullbodyHitReactionMontage_CurrentMontage = CallFunc_GetCurrentFullbodyHitReactionMontage_CurrentMontage;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



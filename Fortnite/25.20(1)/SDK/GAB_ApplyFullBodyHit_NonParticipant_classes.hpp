#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB98 - 0xB98)
// BlueprintGeneratedClass GAB_ApplyFullBodyHit_NonParticipant.GAB_ApplyFullBodyHit_NonParticipant_C
class UGAB_ApplyFullBodyHit_NonParticipant_C : public UGAB_GenericApplyFullBodyHit_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_ApplyFullBodyHit_NonParticipant_C");
		return Clss;
	}

	void PickFullBodyHitMontageSection(int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class UFortPawn* CallFunc_GetActivatingPawn_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UBP_PlayerPawn_NonParticipant_C* K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_GetCurrentFullbodyHitReactionMontage_CurrentMontage, class FName K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

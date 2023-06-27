#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BPI_NonParticipant.BPI_NonParticipant_C.AttemptPlayVocalReinforcementSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       MetadataTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_NonParticipant_C::AttemptPlayVocalReinforcementSound(const struct FGameplayTagContainer& MetadataTagContainer)
{
	static auto Func = Class->GetFunction("BPI_NonParticipant_C", "AttemptPlayVocalReinforcementSound");

	Params::UBPI_NonParticipant_C_AttemptPlayVocalReinforcementSound_Params Parms;

	Parms.MetadataTagContainer = MetadataTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NonParticipant.BPI_NonParticipant_C.PlayVoiceSoundByTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SoundBankTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBPI_NonParticipant_C::PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag)
{
	static auto Func = Class->GetFunction("BPI_NonParticipant_C", "PlayVoiceSoundByTag");

	Params::UBPI_NonParticipant_C_PlayVoiceSoundByTag_Params Parms;

	Parms.SoundBankTag = SoundBankTag;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

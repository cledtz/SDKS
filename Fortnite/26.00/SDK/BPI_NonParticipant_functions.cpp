#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NonParticipant.BPI_NonParticipant_C
// (None)

class UClass* UBPI_NonParticipant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NonParticipant_C");

	return Clss;
}


// BPI_NonParticipant_C BPI_NonParticipant.Default__BPI_NonParticipant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPI_NonParticipant_C* UBPI_NonParticipant_C::GetDefaultObj()
{
	static class UBPI_NonParticipant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPI_NonParticipant_C*>(UBPI_NonParticipant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NonParticipant.BPI_NonParticipant_C.AttemptPlayVocalReinforcementSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       MetadataTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPI_NonParticipant_C::AttemptPlayVocalReinforcementSound(const struct FGameplayTagContainer& MetadataTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NonParticipant_C", "AttemptPlayVocalReinforcementSound");

	Params::UBPI_NonParticipant_C_AttemptPlayVocalReinforcementSound_Params Parms{};

	Parms.MetadataTagContainer = MetadataTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_NonParticipant.BPI_NonParticipant_C.PlayVoiceSoundByTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SoundBankTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBPI_NonParticipant_C::PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NonParticipant_C", "PlayVoiceSoundByTag");

	Params::UBPI_NonParticipant_C_PlayVoiceSoundByTag_Params Parms{};

	Parms.SoundBankTag = SoundBankTag;

	UObject::ProcessEvent(Func, &Parms);

}

}



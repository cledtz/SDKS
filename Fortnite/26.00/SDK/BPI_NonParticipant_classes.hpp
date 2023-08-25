#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NonParticipant.BPI_NonParticipant_C
class UBPI_NonParticipant_C : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UBPI_NonParticipant_C* GetDefaultObj();

	void AttemptPlayVocalReinforcementSound(const struct FGameplayTagContainer& MetadataTagContainer);
	void PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag);
};

}



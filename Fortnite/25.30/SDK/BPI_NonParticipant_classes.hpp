#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPI_NonParticipant_C");
		return Clss;
	}

	void AttemptPlayVocalReinforcementSound(const struct FGameplayTagContainer& MetadataTagContainer);
	void PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

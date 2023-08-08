#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function BPI_NonParticipant.BPI_NonParticipant_C.AttemptPlayVocalReinforcementSound
struct UBPI_NonParticipant_C_AttemptPlayVocalReinforcementSound_Params
{
public:
	struct FGameplayTagContainer                 MetadataTagContainer;                              // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function BPI_NonParticipant.BPI_NonParticipant_C.PlayVoiceSoundByTag
struct UBPI_NonParticipant_C_PlayVoiceSoundByTag_Params
{
public:
	struct FGameplayTag                          SoundBankTag;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

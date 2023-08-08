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

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x248 (0x248 - 0x0)
// Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered
struct UGA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C40[0x4];                                     // Fixing Size After Last Property
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xD0)(ContainsInstancedReference)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0xD8(0xB0)(ConstParm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C41[0x7];                                     // Fixing Size After Last Property
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x190(0xB0)()
	class UActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.K2_ActivateAbility
struct UGA_Athena_Player_PreSlideFeedback_C_K2_ActivateAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.CustomEvent_0
struct UGA_Athena_Player_PreSlideFeedback_C_CustomEvent_0_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.FailedToActivatePassiveAbility
struct UGA_Athena_Player_PreSlideFeedback_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0xA8 (0xA8 - 0x0)
// Function GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback
struct UGA_Athena_Player_PreSlideFeedback_C_ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLastUpdateVelocity_ReturnValue;        // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraShakeBase*                      CallFunc_StartCameraShake_ReturnValue;             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F16[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F17[0x7];                                     // Fixing Size After Last Property
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x60(0x48)(ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

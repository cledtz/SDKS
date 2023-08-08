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

// 0x1 (0x1 - 0x0)
// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_OnEndAbility
struct UGA_Athena_Lockout_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_ActivateAbility
struct UGA_Athena_Lockout_C_K2_ActivateAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Lockout.GA_Athena_Lockout_C.Failsafe
struct UGA_Athena_Lockout_C_Failsafe_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function GA_Athena_Lockout.GA_Athena_Lockout_C.FailedToActivatePassiveAbility
struct UGA_Athena_Lockout_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x8C (0x8C - 0x0)
// Function GA_Athena_Lockout.GA_Athena_Lockout_C.ExecuteUbergraph_GA_Athena_Lockout
struct UGA_Athena_Lockout_C_ExecuteUbergraph_GA_Athena_Lockout_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_674A[0x4];                                     // Fixing Size After Last Property
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x8(0x48)(ContainsInstancedReference)
	enum class EFortGetPlayerPawnExecutions      CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec;   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_674C[0x7];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortGetPlayerPawnExecutions      CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1; // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_674E[0x2];                                     // Fixing Size After Last Property
	class UFortPlayerPawn*                       CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6750[0x6];                                     // Fixing Size After Last Property
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x80(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumper.

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
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69
struct UGA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC
struct UGA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_ActivateAbility
struct UGA_Vehicle_ExitHoldEvent_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_OnEndAbility
struct UGA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.FailedToActivatePassiveAbility
struct UGA_Vehicle_ExitHoldEvent_C_FailedToActivatePassiveAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.On Enter Vehicle Passenger
struct UGA_Vehicle_ExitHoldEvent_C_On_Enter_Vehicle_Passenger_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.On Enter Vehicle Driver
struct UGA_Vehicle_ExitHoldEvent_C_On_Enter_Vehicle_Driver_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.On Fully Exit Vehicle
struct UGA_Vehicle_ExitHoldEvent_C_On_Fully_Exit_Vehicle_Params
{
public:
};

// 0x5AA (0x5AA - 0x0)
// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.ExecuteUbergraph_GA_Vehicle_ExitHoldEvent
struct UGA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9626[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0x8(0xB0)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0xC0(0xD0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9627[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x198(0xB0)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x248(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9628[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    Temp_struct_Variable_1;                            // 0x258(0xB0)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x308(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9629[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x314(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x320(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x32C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x338(0x48)(ContainsInstancedReference)
	class UFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x389(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_962A[0x6];                                     // Fixing Size After Last Property..
	class UFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x398(0x28)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x3C0(0x10)(ReferenceParm)
	struct FGameplayEventData                    K2Node_CustomEvent_Payload_1;                      // 0x3D0(0xB0)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x480(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x48C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_962B[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x490(0xD0)(ContainsInstancedReference)
	struct FGameplayAbilityActorInfo             K2Node_Event_ActorInfo;                            // 0x560(0x48)(ContainsInstancedReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x5A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

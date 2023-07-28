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

// 0x114 (0x114 - 0x0)
// Function MultiInteractActorComponent.MultiInteractActorComponent_C.AddGCNL
struct UMultiInteractActorComponent_C_AddGCNL_Params
{
public:
	class UActor*                                Owner;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInteractingActorCount_ReturnValue;     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E06[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E07[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x38(0xD0)(ContainsInstancedReference)
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast; // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function MultiInteractActorComponent.MultiInteractActorComponent_C.RemoveGCNL
struct UMultiInteractActorComponent_C_RemoveGCNL_Params
{
public:
	class UActor*                                Owner;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xD0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E08[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x134 (0x134 - 0x0)
// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteGCNFromTag
struct UMultiInteractActorComponent_C_ExecuteGCNFromTag_Params
{
public:
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          InteractTag;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousInteractPlayerCount;                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInteractingActorCount_ReturnValue;     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E09[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInteractionDuration_ReturnValue;       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E0A[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x50(0xD0)(ContainsInstancedReference)
	float                                        CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast; // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E0B[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SafeDivide_A_ImplicitCast;                // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast; // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MultiInteractActorComponent.MultiInteractActorComponent_C.SetRequiredDuration
struct UMultiInteractActorComponent_C_SetRequiredDuration_Params
{
public:
	double                                       NewRequiredDuration;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustJoinedInteraction
struct UMultiInteractActorComponent_C_UpdateForPlayerJustJoinedInteraction_Params
{
public:
	class UFortPlayerStateAthena*                JoinedPlayer;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustLeftInteraction
struct UMultiInteractActorComponent_C_UpdateForPlayerJustLeftInteraction_Params
{
public:
	class UFortPlayerStateAthena*                LeftPlayer;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ReceiveBeginPlay
struct UMultiInteractActorComponent_C_ReceiveBeginPlay_Params
{
public:
};

// 0x43 (0x43 - 0x0)
// Function MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteUbergraph_MultiInteractActorComponent
struct UMultiInteractActorComponent_C_ExecuteUbergraph_MultiInteractActorComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInteractingActorCount_ReturnValue;     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerStateAthena*                K2Node_Event_JoinedPlayer;                         // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E0C[0x4];                                     // Fixing Size After Last Property..
	class UFortPlayerPawn*                       CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerStateAthena*                K2Node_Event_LeftPlayer;                           // 0x20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerPawn*                       CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E0D[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetInteractingActorCount_ReturnValue_1;   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E0E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

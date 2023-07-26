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

// 0x28 (0x28 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetAvatarHiddenInGame
struct UGA_Athena_HidingProp_Hide_C_SetAvatarHiddenInGame_Params
{
public:
	bool                                         New_Hidden;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6D[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                AvatarActor;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6E[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetCosmeticsAllowed
struct UGA_Athena_HidingProp_Hide_C_SetCosmeticsAllowed_Params
{
public:
	bool                                         Allowed;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_HasAuthority_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Completed_75B60D4B43DAA553E4C21EA3D2E3AD03
struct UGA_Athena_HidingProp_Hide_C_Completed_75B60D4B43DAA553E4C21EA3D2E3AD03_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03
struct UGA_Athena_HidingProp_Hide_C_Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03
struct UGA_Athena_HidingProp_Hide_C_Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19
struct UGA_Athena_HidingProp_Hide_C_OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_859E251740F1C46B914344A9FC343B19
struct UGA_Athena_HidingProp_Hide_C_OnTimedOut_859E251740F1C46B914344A9FC343B19_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32
struct UGA_Athena_HidingProp_Hide_C_OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_8010F4C64221E8F497C6559558420C32
struct UGA_Athena_HidingProp_Hide_C_OnTimedOut_8010F4C64221E8F497C6559558420C32_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_F049BFC743FE176042ECD98641AFE2B9
struct UGA_Athena_HidingProp_Hide_C_Added_F049BFC743FE176042ECD98641AFE2B9_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_35C56E354FE08855A837E0BDFB150F20
struct UGA_Athena_HidingProp_Hide_C_Added_35C56E354FE08855A837E0BDFB150F20_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_CD24BC554E955808A88A5B809807A94E
struct UGA_Athena_HidingProp_Hide_C_Added_CD24BC554E955808A88A5B809807A94E_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_E60D990647FDAB06895E738C7A2BAE7E
struct UGA_Athena_HidingProp_Hide_C_Added_E60D990647FDAB06895E738C7A2BAE7E_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D329D9924DF9DF1B79D0738C6CB8EBA1
struct UGA_Athena_HidingProp_Hide_C_Added_D329D9924DF9DF1B79D0738C6CB8EBA1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_1D4A49874AC422976CAC2C9155DDA736
struct UGA_Athena_HidingProp_Hide_C_Added_1D4A49874AC422976CAC2C9155DDA736_Params
{
public:
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.EventReceived_8C4C6D7442A0B18F41B269995833ED85
struct UGA_Athena_HidingProp_Hide_C_EventReceived_8C4C6D7442A0B18F41B269995833ED85_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D54881A34BC79E85BE563BA220DD924D
struct UGA_Athena_HidingProp_Hide_C_Added_D54881A34BC79E85BE563BA220DD924D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_EAA3FC0B4E27CDA8B4F3289DF7EA9E90
struct UGA_Athena_HidingProp_Hide_C_Added_EAA3FC0B4E27CDA8B4F3289DF7EA9E90_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnFinished_35C1D63345930DB9A5BDB7BED8B808BF
struct UGA_Athena_HidingProp_Hide_C_OnFinished_35C1D63345930DB9A5BDB7BED8B808BF_Params
{
public:
	bool                                         DestinationReached;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TimedOut;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D70[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               FinalTargetLocation;                               // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_HidingProp_Hide_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_OnEndAbility
struct UGA_Athena_HidingProp_Hide_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.RustleLoop
struct UGA_Athena_HidingProp_Hide_C_RustleLoop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.End
struct UGA_Athena_HidingProp_Hide_C_End_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.WobbleHidingProp
struct UGA_Athena_HidingProp_Hide_C_WobbleHidingProp_Params
{
public:
	double                                       NormalizedMagnitude;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Event_LockOnProp
struct UGA_Athena_HidingProp_Hide_C_Event_LockOnProp_Params
{
public:
};

// 0x13F4 (0x13F4 - 0x0)
// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.ExecuteUbergraph_GA_Athena_HidingProp_Hide
struct UGA_Athena_HidingProp_Hide_C_ExecuteUbergraph_GA_Athena_HidingProp_Hide_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D71[0x4];                                     // Fixing Size After Last Property..
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D72[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_CustomEvent_Payload;                        // 0x20(0xB0)()
	struct FGameplayEventData                    Temp_struct_Variable;                              // 0xD0(0xB0)()
	class UAbilityTask_WaitGameplayEvent*        CallFunc_WaitGameplayEvent_ReturnValue;            // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D73[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1A0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D74[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1B0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1BC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerForNextTickDelegate_ReturnValue; // 0x1C8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerForNextTickDelegate_ReturnValue_1; // 0x1D0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_DestinationReached;             // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_TimedOut;                       // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D75[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_CustomEvent_FinalTargetLocation;            // 0x1E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_1;                            // 0x1F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x212(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D76[0x5];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x220(0xB0)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D77[0x6];                                     // Fixing Size After Last Property..
	class AB_HidingProp_C*                       K2Node_DynamicCast_AsB_Hiding_Prop;                // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D78[0x7];                                     // Fixing Size After Last Property..
	class AB_HidingProp_C*                       K2Node_DynamicCast_AsB_Hiding_Prop_1;              // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D79[0x7];                                     // Fixing Size After Last Property..
	class AB_HidingProp_C*                       K2Node_DynamicCast_AsB_Hiding_Prop_2;              // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D7A[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x304(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x310(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x328(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x340(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_1;           // 0x358(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D7B[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector_X;                            // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x390(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x3B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D7C[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x3D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x3E8(0xD0)(ContainsInstancedReference)
	float                                        CallFunc_PlayAnimMontage_ReturnValue;              // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D7D[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable_2;                            // 0x4C0(0x28)()
	float                                        CallFunc_GetPlayLength_ReturnValue;                // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D7E[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x4F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x4F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D7F[0x7];                                     // Fixing Size After Last Property..
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_2;         // 0x508(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D80[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Temp_struct_Variable_3;                            // 0x514(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x518(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D81[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x528(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x540(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_1;  // 0x558(0xD0)(ContainsInstancedReference)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D82[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x630(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_3;         // 0x648(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D83[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x654(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x65C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D84[0x3];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetOwnedGameplayTags_self_CastInput;      // 0x660(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer;        // 0x670(0x20)()
	FInterfaceProperty_                          CallFunc_GetOwnedGameplayTags_self_CastInput_1;    // 0x690(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetOwnedGameplayTags_TagContainer_1;      // 0x6A0(0x20)()
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1; // 0x6C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x6C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x6D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D85[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2; // 0x6E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x6F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D86[0x7];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          CallFunc_GetCurrentMontage_ReturnValue;            // 0x700(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x708(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x720(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x738(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x750(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_2;  // 0x768(0xD0)(ContainsInstancedReference)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_2;           // 0x838(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x850(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x868(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D87[0x4];                                     // Fixing Size After Last Property..
	class UFortHeldObjectComponent*              CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue; // 0x878(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x880(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x8A8(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D88[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x8B0(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_IsPassengerInVehicle_ReturnValue;         // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D89[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x8C8(0x20)()
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x8E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8A[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x8F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8B[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x904(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x90C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8C[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2; // 0x910(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x918(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x919(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8D[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x91C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x928(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x930(0xB0)()
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x9E0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x9EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8E[0x3];                                     // Fixing Size After Last Property..
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x9F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimMontage_ReturnValue_1;            // 0x9F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x9FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x9FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x9FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8F[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_PlayAnimMontage_ReturnValue_2;            // 0xA00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D90[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0xA08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_3;           // 0xA10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0xA28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0xA40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xA58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_4;         // 0xA70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue;   // 0xA78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0xA80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xA81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0xA82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D91[0x5];                                     // Fixing Size After Last Property..
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_1;                   // 0xA88(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_1;               // 0xAB0(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0xAB4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData_1;             // 0xAC0(0xB0)()
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0xB70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D92[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0xB74(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_5;         // 0xB80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData_2;             // 0xB88(0xB0)()
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0xC38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D93[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0xC40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0xC48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0xC60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SelectVector_ReturnValue_2;               // 0xC78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0xC90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData_2;                   // 0xCA8(0x28)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag_2;               // 0xCD0(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0xCD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xCD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xCD6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0xCD7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3; // 0xCD8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0xCE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D94[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0xCE4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0xCF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0xCF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D95[0x6];                                     // Fixing Size After Last Property..
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_6;         // 0xCF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0xD00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D96[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_4; // 0xD04(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0xD0C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0xD18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortGetPlayerPawnExecutions      CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec;   // 0xD24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D97[0x3];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn; // 0xD28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D98[0x7];                                     // Fixing Size After Last Property..
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue_7;         // 0xD38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0xD40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D99[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0xD44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData_3;             // 0xD48(0xB0)()
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xDF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9A[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0xE00(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0xE18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0xE30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9B[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetValueAtLevel_ReturnValue_3;            // 0xE34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_4;            // 0xE38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xE3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xE40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9C[0x6];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_RandomRotator_ReturnValue;                // 0xE48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0xE60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_NormalizedMagnitude;            // 0xE78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue_4;           // 0xE80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_4;       // 0xE98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0xEB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_5;            // 0xEC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9D[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue_3;  // 0xED0(0xD0)(ContainsInstancedReference)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_6;            // 0xFA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_7;            // 0xFA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0xFA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9E[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0xFAC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimMontage_ReturnValue_3;            // 0xFB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_5; // 0xFBC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0xFC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9F[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0xFC8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanActorSimulatePhysics_ReturnValue;      // 0xFD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanActorSimulatePhysics_ReturnValue_1;    // 0xFD5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA0[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0xFD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_4;           // 0xFF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x1008(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x10E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA1[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x10EC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x10F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x1110(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x11F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_3;                   // 0x11F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_4;                   // 0x11F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x11F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA2[0x4];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x11F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_3;    // 0x1210(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x1228(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x1234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA3[0x3];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0x1238(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x1250(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x1330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA4[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FMax_ReturnValue;                         // 0x1338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x1340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x1348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x1350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA5[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x1358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0x1360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_ApplyRootMotionMoveToForce* CallFunc_ApplyRootMotionMoveToForce_ReturnValue_1; // 0x1368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x1370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA6[0x7];                                     // Fixing Size After Last Property..
	class UAbilityTask_ApplyRootMotionMoveToActorForce* CallFunc_ApplyRootMotionMoveToActorForce_ReturnValue; // 0x1378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0x1380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0x1381(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x1382(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA7[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x1388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x1390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x1398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Min_ImplicitCast;      // 0x13A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Max_ImplicitCast;      // 0x13A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x13B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA8[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x13B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_WobbleHidingProp_NormalizedMagnitude_ImplicitCast; // 0x13C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast; // 0x13C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA9[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_WobbleHidingProp_NormalizedMagnitude_ImplicitCast_1; // 0x13D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_WobbleHidingProp_NormalizedMagnitude_ImplicitCast_2; // 0x13D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_WobbleHidingProp_NormalizedMagnitude_ImplicitCast_3; // 0x13E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_1;            // 0x13E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyRootMotionMoveToActorForce_Duration_ImplicitCast; // 0x13EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyRootMotionMoveToForce_Duration_ImplicitCast; // 0x13F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

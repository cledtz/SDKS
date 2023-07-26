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

// 0x13 (0x13 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SoundLibrarySetup
struct ABP_PlayerPawn_NonParticipant_C_SoundLibrarySetup_Params
{
public:
	bool                                         IsAdding;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9420[0x7];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnUnconverted
struct ABP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted_Params
{
public:
	class AFortPawn*                             UnconvertedPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveLooseGameplayTags_ReturnValue;      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveLooseGameplayTags_ReturnValue_1;    // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9421[0x3];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnConverted
struct ABP_PlayerPawn_NonParticipant_C_HandlePawnConverted_Params
{
public:
	class AFortPawn*                             InstigatorPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             ConvertedPawn;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9422[0x7];                                     // Fixing Size After Last Property..
	class UFortAbilitySystemComponent*           CallFunc_GetFortAbilitySystemComponent_ReturnValue; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddLooseGameplayTags_ReturnValue;         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9423[0x6];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFortAbilitySetHandle                 CallFunc_EquipFortAbilitySet_ReturnValue;          // 0x38(0x38)(ContainsInstancedReference)
	bool                                         CallFunc_AddLooseGameplayTags_ReturnValue_1;       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9424[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x74(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayAlertLevelVO
struct ABP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO_Params
{
public:
	enum class EAlertLevel                       OldAlertLevel;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       NewAlertLevel;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       OldAlertLevelLocal;                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable_1;                              // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_9;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_10;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable_2;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_11;                             // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_12;                             // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_13;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_14;                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_15;                             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_16;                             // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_1;                           // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_17;                             // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_2;                           // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable_3;                              // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_18;                             // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_19;                             // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9425[0x1];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_3;                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9426[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3; // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xC6 (0xC6 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandleAlertStateUpdates
struct ABP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_9;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_10;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_11;                             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_12;                             // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_13;                             // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable_2;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_14;                             // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable_3;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9427[0x3];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9428[0x6];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9429[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942A[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x54(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_15;                             // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_16;                             // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_17;                             // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942B[0x1];                                     // Fixing Size After Last Property..
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942C[0x4];                                     // Fixing Size After Last Property..
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942D[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_GetValueAsObject_ReturnValue;             // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942E[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_942F[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetDistanceBetweenActors_Distance;        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9430[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_2;  // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2; // 0xB0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_1;                           // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_2;                           // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_18;                             // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_19;                             // 0xBF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_3;                           // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_bIsInVehicleThatSupportsNoAlertState
struct ABP_PlayerPawn_NonParticipant_C_OnRep_bIsInVehicleThatSupportsNoAlertState_Params
{
public:
};

// 0x43 (0x43 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdateAlertStateVehicleCheck
struct ABP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck_Params
{
public:
	bool                                         CallFunc_IsInVehicle_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9431[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetVehicleUInterface_ReturnValue;         // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetVehicleTags_ReturnValue;               // 0x18(0x20)(ConstParm)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ClientOnTargetChanged
struct ABP_PlayerPawn_NonParticipant_C_ClientOnTargetChanged_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetIconPlacement
struct ABP_PlayerPawn_NonParticipant_C_GetIconPlacement_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ViewingActor;                                      // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OutLocation;                                       // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OutExtents;                                        // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetIconPlacement_OutLocation;             // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetIconPlacement_OutExtents;              // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9432[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9433[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ClientOnAlertLevelChanged
struct ABP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged_Params
{
public:
	enum class EAlertLevel                       OldAlertLevel;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       NewAlertLevel;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.InitializeAnimInstanceSettings
struct ABP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings_Params
{
public:
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*               K2Node_DynamicCast_AsFort_Player_Anim_Instance;    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdatePatrolAnimSet
struct ABP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPatrolAnimAsset*                  FoundAnimAsset;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9434[0x7];                                     // Fixing Size After Last Property..
	class UAnimInstance*                         CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortPatrolAnimLayer*                  K2Node_DynamicCast_AsFort_Patrol_Anim_Layer;       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9435[0x7];                                     // Fixing Size After Last Property..
	class UFortPatrolAnimAsset*                  CallFunc_GetPatrolAnimSetFromWeapon_ReturnValue;   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetCurrentFullbodyHitReactionMontage
struct ABP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage_Params
{
public:
	class UAnimMontage*                          CurrentMontage;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWalking_ReturnValue;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetDataTrackerActorStateFromAlertLevel
struct ABP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel_Params
{
public:
	enum class EAlertLevel                       AlertLevel;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9436[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9437[0x2];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          K2Node_Select_Default;                             // 0xC(0x4)(NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.DataTrackerSetup
struct ABP_PlayerPawn_NonParticipant_C_DataTrackerSetup_Params
{
public:
	bool                                         Is_Registering;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9438[0x4];                                     // Fixing Size After Last Property..
	class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetupLootTierNameWithWeapon
struct ABP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9439[0x3];                                     // Fixing Size After Last Property..
	class UFortWorldItemDefinition*              CallFunc_GetWeaponDataAmmoWorldItemDefinition_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AB_Athena_Pickaxe_Generic_C*           K2Node_DynamicCast_AsB_Athena_Pickaxe_Generic;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue_1;                     // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue_2;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943A[0x3];                                     // Fixing Size After Last Property..
	class FName                                  K2Node_Select_Default_1;                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue_3;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943B[0x3];                                     // Fixing Size After Last Property..
	class FName                                  K2Node_Select_Default_2;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue_4;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943C[0x3];                                     // Fixing Size After Last Property..
	class FName                                  K2Node_Select_Default_3;                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default_4;                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AlertLevelChanged
struct ABP_PlayerPawn_NonParticipant_C_AlertLevelChanged_Params
{
public:
	enum class EAlertLevel                       OldAlertLevel;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       InputPin;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceComponentSoundByTag
struct ABP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag_Params
{
public:
	struct FGameplayTag                          SoundBankTag;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943D[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       AudioComponent;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNPC_VoiceComponent_C*                 FoundVoiceComponent;                               // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943E[0x1];                                     // Fixing Size After Last Property..
	class UNPC_VoiceComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UQuartzSubsystem*                      CallFunc_GetWorldSubsystem_ReturnValue;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x38(0xC)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_943F[0x4];                                     // Fixing Size After Last Property..
	class UQuartzClockHandle*                    CallFunc_GetHandleForClock_ReturnValue;            // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9440[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayVoiceLine_Success;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetAlertedStateGameplayCue
struct ABP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue_Params
{
public:
	bool                                         Alerted;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combat;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9441[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x8(0xD0)(ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_NewTargetActor
struct ABP_PlayerPawn_NonParticipant_C_OnRep_NewTargetActor_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_AlertLevel
struct ABP_PlayerPawn_NonParticipant_C_OnRep_AlertLevel_Params
{
public:
};

// 0x1D (0x1D - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UserConstructionScript
struct ABP_PlayerPawn_NonParticipant_C_UserConstructionScript_Params
{
public:
	TArray<class UFortAIComponent_Voice*>        CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UFortAIComponent_Voice*                CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDBNOStateChanged_Event
struct ABP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event_Params
{
public:
	class AFortPawn*                             FortPawn;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bInIsDBNO;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveBeginPlay
struct ABP_PlayerPawn_NonParticipant_C_ReceiveBeginPlay_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AttemptPlayVocalReinforcementSound
struct ABP_PlayerPawn_NonParticipant_C_AttemptPlayVocalReinforcementSound_Params
{
public:
	struct FGameplayTagContainer                 MetadataTagContainer;                              // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ActivateAlertDBNOCleanUp
struct ABP_PlayerPawn_NonParticipant_C_ActivateAlertDBNOCleanUp_Params
{
public:
};

// 0xA (0xA - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAlertLEvelCHangedEvent
struct ABP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent_Params
{
public:
	class AFortAthenaAIBotController*            BotController;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       OldAlertLevel;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       NewAlertLevel;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.TriggerIdleVO
struct ABP_PlayerPawn_NonParticipant_C_TriggerIdleVO_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnWeaponEquipped
struct ABP_PlayerPawn_NonParticipant_C_OnWeaponEquipped_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveEndPlay
struct ABP_PlayerPawn_NonParticipant_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0x30(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnCharacterCustomizationCompleted
struct ABP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GameplayCue.Player.Interrogation.Voice.PickedUp
struct ABP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp_Params
{
public:
	enum class EGameplayCueEvent                 EventType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9442[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnWeaponAttachmentChangedDelegate_Event_0
struct ABP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0_Params
{
public:
	class AFortWeapon*                           NewWeapon;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           PrevWeapon;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ChallengerDied
struct ABP_PlayerPawn_NonParticipant_C_ChallengerDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9443[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9444[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetChallenger
struct ABP_PlayerPawn_NonParticipant_C_SetChallenger_Params
{
public:
	class AFortPlayerPawn*                       Challenger;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkPatrolAnimLayer
struct ABP_PlayerPawn_NonParticipant_C_LinkPatrolAnimLayer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkOverrideAnimLayer
struct ABP_PlayerPawn_NonParticipant_C_LinkOverrideAnimLayer_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAnimInputEvent
struct ABP_PlayerPawn_NonParticipant_C_OnAnimInputEvent_Params
{
public:
	class UFortAnimInputEvent*                   AnimInputEvent;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReLinkAnimLayer
struct ABP_PlayerPawn_NonParticipant_C_ReLinkAnimLayer_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceSoundByTag
struct ABP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag_Params
{
public:
	struct FGameplayTag                          SoundBankTag;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnEnteredVehicleEvent
struct ABP_PlayerPawn_NonParticipant_C_OnEnteredVehicleEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicleEvent
struct ABP_PlayerPawn_NonParticipant_C_OnExitedVehicleEvent_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDeathPlayEffects
struct ABP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9445[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature
struct ABP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature_Params
{
public:
	class AFortPawn*                             InstigatorPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             ConvertedPawn;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature
struct ABP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature_Params
{
public:
	class AFortPawn*                             UnconvertedPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  UnconvertReason;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicle
struct ABP_PlayerPawn_NonParticipant_C_OnExitedVehicle_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDied_Event
struct ABP_PlayerPawn_NonParticipant_C_OnDied_Event_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9446[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9447[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AiTargetChanged
struct ABP_PlayerPawn_NonParticipant_C_AiTargetChanged_Params
{
public:
	class AActor*                                OldTarget;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                NewTarget;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x704 (0x704 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ExecuteUbergraph_BP_PlayerPawn_NonParticipant
struct ABP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9448[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_CustomEvent_OldTarget;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_NewTarget;                      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x18(0x4)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0x1C(0x4)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x44(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9449[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x54(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x60(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944A[0x4];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_CustomEvent_FortPawn;                       // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bInIsDBNO;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944B[0x6];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x88(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x98(0x8)(NoDestructor, HasGetValueTypeHash)
	class AAIController*                         CallFunc_GetAIController_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaAIBotController*            K2Node_DynamicCast_AsFort_Athena_AIBot_Controller; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944C[0x7];                                     // Fixing Size After Last Property..
	class ABP_PhoebeController_NonParticipant_C* K2Node_DynamicCast_AsBP_Phoebe_Controller_Non_Participant; // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944D[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 K2Node_Event_MetadataTagContainer;                 // 0xC8(0x20)()
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944E[0x6];                                     // Fixing Size After Last Property..
	class AFortAthenaAIBotController*            K2Node_CustomEvent_BotController;                  // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       K2Node_CustomEvent_OldAlertLevel;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       K2Node_CustomEvent_NewAlertLevel;                  // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_944F[0x6];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent; // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9450[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           K2Node_Event_NewWeapon;                            // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           K2Node_Event_PrevWeapon;                           // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9451[0x6];                                     // Fixing Size After Last Property..
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_HitComponent;           // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_ComponentBoundEvent_NormalImpulse;          // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_ComponentBoundEvent_Hit;                    // 0x168(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9452[0x7];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9453[0x7];                                     // Fixing Size After Last Property..
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_2;  // 0x260(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default;                             // 0x268(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9454[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1; // 0x270(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9455[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x27C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9456[0x7];                                     // Fixing Size After Last Property..
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x290(0x8)(NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x298(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9457[0x3];                                     // Fixing Size After Last Property..
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x2AC(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9458[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput; // 0x2B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFortAbilitySetHandle                 CallFunc_EquipFortAbilitySet_ReturnValue;          // 0x2C8(0x38)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_Event_Pawn;                                 // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnSameTeam_ReturnValue;                   // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9459[0x6];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2; // 0x310(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 K2Node_GameplayCueEvent_EventType;                 // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945A[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayCueParameters                K2Node_GameplayCueEvent_Parameters;                // 0x320(0xD0)(ConstParm, ContainsInstancedReference)
	class AFortWeapon*                           K2Node_CustomEvent_NewWeapon;                      // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           K2Node_CustomEvent_PrevWeapon;                     // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DamagedActor_1;                 // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage_1;                       // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945B[0x4];                                     // Fixing Size After Last Property..
	class AController*                           K2Node_CustomEvent_InstigatedBy_1;                 // 0x410(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DamageCauser_1;                 // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_HitLocation_1;                  // 0x420(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_FHitComponent_1;                // 0x438(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_BoneName_1;                     // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945C[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_CustomEvent_Momentum_1;                     // 0x448(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_Challenger;                     // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue_3;  // 0x468(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2; // 0x470(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945D[0x7];                                     // Fixing Size After Last Property..
	class UFortAnimInputEvent*                   K2Node_Event_AnimInputEvent;                       // 0x480(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAnimInputEvent_AnimClass*         K2Node_DynamicCast_AsFort_Anim_Input_Event_Anim_Class; // 0x488(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNamed_ReturnValue;                      // 0x491(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNamed_ReturnValue_1;                    // 0x492(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x493(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945E[0x3];                                     // Fixing Size After Last Property..
	struct FGameplayTag                          K2Node_Event_SoundBankTag;                         // 0x498(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_945F[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3; // 0x4A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       Temp_byte_Variable;                                // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x4A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x4AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9460[0x1];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x4AC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9461[0x3];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_Damage;                               // 0x4BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x4C0(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x4E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x4F8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                             K2Node_Event_InstigatedBy;                         // 0x5D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x5E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x5E8(0x18)()
	class UAudioComponent*                       CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_4; // 0x600(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EDeathCause                       CallFunc_ToDeathCause_ReturnValue;                 // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9462[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_ComponentBoundEvent_InstigatorPawn;         // 0x610(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_ComponentBoundEvent_ConvertedPawn;          // 0x618(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_ComponentBoundEvent_UnconvertedPawn;        // 0x620(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EUnconvertReason                  K2Node_ComponentBoundEvent_UnconvertReason;        // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9463[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x630(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x648(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x654(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9464[0x3];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_CustomEvent_DamagedActor;                   // 0x658(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage;                         // 0x660(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9465[0x4];                                     // Fixing Size After Last Property..
	class AController*                           K2Node_CustomEvent_InstigatedBy;                   // 0x668(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DamageCauser;                   // 0x670(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_HitLocation;                    // 0x678(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_FHitComponent;                  // 0x690(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_BoneName;                       // 0x698(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9466[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_CustomEvent_Momentum;                       // 0x6A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x6B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9467[0x7];                                     // Fixing Size After Last Property..
	class AFortAthenaAIBotController*            K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_1; // 0x6C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x6D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_1;                           // 0x6D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9468[0x4];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x6D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaAIBotController*            K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_2; // 0x6E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9469[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RandomFloatInRange_Min_ImplicitCast;      // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_Max_ImplicitCast;      // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x700(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDeath__DelegateSignature
struct ABP_PlayerPawn_NonParticipant_C_OnDeath__DelegateSignature_Params
{
public:
	enum class EDeathCause                       Cause;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAlertLevelChanged__DelegateSignature
struct ABP_PlayerPawn_NonParticipant_C_OnAlertLevelChanged__DelegateSignature_Params
{
public:
	enum class EAlertLevel                       OldAlertLevel;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertLevel                       NewAlertLevel;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnTargetChanged__DelegateSignature
struct ABP_PlayerPawn_NonParticipant_C_OnTargetChanged__DelegateSignature_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

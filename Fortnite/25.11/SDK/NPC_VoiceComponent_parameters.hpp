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

// 0x39 (0x39 - 0x0)
// Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlaySoundCue
struct UNPC_VoiceComponent_C_PlaySoundCue_Params
{
public:
	class USoundCue*                             SoundToPlay;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioComponent;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3861[0x6];                                     // Fixing Size After Last Property..
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPC_VoiceComponent.NPC_VoiceComponent_C.SetSourceEffectChainToApply
struct UNPC_VoiceComponent_C_SetSourceEffectChainToApply_Params
{
public:
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function NPC_VoiceComponent.NPC_VoiceComponent_C.Internal Get Voice Sound Bank
struct UNPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank_Params
{
public:
	class UFortTaggedSoundBank*                  Sound_Bank;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortTaggedSoundBank*                  CallFunc_GetVoiceSoundBank_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function NPC_VoiceComponent.NPC_VoiceComponent_C.Deprecated Set Sound Bank
struct UNPC_VoiceComponent_C_Deprecated_Set_Sound_Bank_Params
{
public:
	class UFortTaggedSoundBank*                  SoundBank;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine
struct UNPC_VoiceComponent_C_PlayVoiceLine_Params
{
public:
	struct FGameplayTag                          Gameplay_Tag;                                      // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3862[0x4];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       AudioComponent;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3863[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            SoundToPlay;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CurrentVOTag;                                      // 0x20(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3864[0x4];                                     // Fixing Size After Last Property..
	class UFortTaggedSoundBank*                  SoundBankToUse;                                    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3865[0x6];                                     // Fixing Size After Last Property..
	class UFortTaggedSoundBank*                  CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3866[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3867[0x6];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x80(0x20)()
	double                                       CallFunc_GetTimeSeconds_ReturnValue_1;             // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetSoundToPlay_ReturnValue;               // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

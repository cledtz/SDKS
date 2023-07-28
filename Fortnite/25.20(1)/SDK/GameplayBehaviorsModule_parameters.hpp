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

// 0x18 (0x18 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
struct UGameplayBehavior_K2_TriggerBehavior_Params
{
public:
	class UActor*                                Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*               Config;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                SmartObjectOwner;                                  // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
struct UGameplayBehavior_K2_OnTriggeredPawn_Params
{
public:
	class UPawn*                                 Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*               Config;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                SmartObjectOwner;                                  // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
struct UGameplayBehavior_K2_OnTriggeredCharacter_Params
{
public:
	class UCharacter*                            Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*               Config;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                SmartObjectOwner;                                  // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
struct UGameplayBehavior_K2_OnTriggered_Params
{
public:
	class UActor*                                Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayBehaviorConfig*               Config;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                SmartObjectOwner;                                  // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
struct UGameplayBehavior_K2_OnFinishedPawn_Params
{
public:
	class UPawn*                                 Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasInterrupted;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4555[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
struct UGameplayBehavior_K2_OnFinishedCharacter_Params
{
public:
	class UCharacter*                            Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasInterrupted;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4556[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
struct UGameplayBehavior_K2_OnFinished_Params
{
public:
	class UActor*                                Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasInterrupted;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4557[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
struct UGameplayBehavior_K2_GetNextActorIndexInSequence_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
struct UGameplayBehavior_K2_EndBehavior_Params
{
public:
	class UActor*                                Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
struct UGameplayBehavior_K2_AbortBehavior_Params
{
public:
	class UActor*                                Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetValueAsGameplayTagForBlackboardComp
struct UGameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp_Params
{
public:
	class UBlackboardComponent*                  BlackboardComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KeyName;                                           // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_455C[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 GameplayTagValue;                                  // 0x10(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetBlackboardValueAsGameplayTag
struct UGameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Value;                                             // 0x30(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTagFromBlackboardComp
struct UGameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp_Params
{
public:
	class UBlackboardComponent*                  BlackboardComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KeyName;                                           // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_455D[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTag
struct UGameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.AddGameplayTagFilterToBlackboardKeySelector
struct UGameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector_Params
{
public:
	struct FBlackboardKeySelector                InSelector;                                        // 0x0(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UObject*                               Owner;                                             // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_455E[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
struct UGameplayBehavior_AnimationBased_OnMontageFinished_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_455F[0x7];                                     // Fixing Size After Last Property..
	class UActor*                                InAvatar;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

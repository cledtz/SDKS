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

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ToString
struct UEnhancedPlayerMappableKeyProfile_ToString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.SetDisplayName
struct UEnhancedPlayerMappableKeyProfile_SetDisplayName_Params
{
public:
	class FText                                  NewDisplayName;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetToDefault
struct UEnhancedPlayerMappableKeyProfile_ResetToDefault_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetMappingToDefault
struct UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Params
{
public:
	class FName                                  InMappingName;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.QueryPlayerMappedKeys
struct UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Params
{
public:
	struct FPlayerMappableKeyQueryOptions        Options;                                           // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          OutKeys;                                           // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385E[0x4];                                     // Fixing Size Of Struct..
};

// 0xB8 (0xB8 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.K2_FindKeyMapping
struct UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Params
{
public:
	struct FPlayerKeyMapping                     OutKeyMapping;                                     // 0x0(0x88)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMapPlayerKeyArgs                     InArgs;                                            // 0x88(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileIdentifer
struct UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileDisplayName
struct UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetPlayerMappingRows
struct UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Params
{
public:
	TMap<class FName, struct FKeyMappingRow>     ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappingNamesForKey
struct UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OutMappingNames;                                   // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385F[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappedKeysInRow
struct UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3860[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FKey>                          OutKeys;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3861[0x4];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.DumpProfileToLog
struct UEnhancedPlayerMappableKeyProfile_DumpProfileToLog_Params
{
public:
};

// 0xB8 (0xB8 - 0x0)
// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.DoesMappingPassQueryOptions
struct UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Params
{
public:
	struct FPlayerKeyMapping                     PlayerMapping;                                     // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerMappableKeyQueryOptions        Options;                                           // 0x88(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3862[0x7];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContexts
struct UEnhancedInputUserSettings_UnregisterInputMappingContexts_Params
{
public:
	TSet<class UInputMappingContext*>            MappingContexts;                                   // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3863[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContext
struct UEnhancedInputUserSettings_UnregisterInputMappingContext_Params
{
public:
	class UInputMappingContext*                  IMC;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3864[0x7];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.UnMapPlayerKey
struct UEnhancedInputUserSettings_UnMapPlayerKey_Params
{
public:
	struct FMapPlayerKeyArgs                     InArgs;                                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FailureReason;                                     // 0x30(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.SetKeyProfile
struct UEnhancedInputUserSettings_SetKeyProfile_Params
{
public:
	struct FGameplayTag                          InProfileId;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3865[0x3];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.SaveSettings
struct UEnhancedInputUserSettings_SaveSettings_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.ResetKeyProfileToDefault
struct UEnhancedInputUserSettings_ResetKeyProfileToDefault_Params
{
public:
	struct FGameplayTag                          ProfileId;                                         // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3866[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 FailureReason;                                     // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.ResetAllPlayerKeysInRow
struct UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Params
{
public:
	struct FMapPlayerKeyArgs                     InArgs;                                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FailureReason;                                     // 0x30(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContexts
struct UEnhancedInputUserSettings_RegisterInputMappingContexts_Params
{
public:
	TSet<class UInputMappingContext*>            MappingContexts;                                   // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3867[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContext
struct UEnhancedInputUserSettings_RegisterInputMappingContext_Params
{
public:
	class UInputMappingContext*                  IMC;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3868[0x7];                                     // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.MapPlayerKey
struct UEnhancedInputUserSettings_MapPlayerKey_Params
{
public:
	struct FMapPlayerKeyArgs                     InArgs;                                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 FailureReason;                                     // 0x30(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction EnhancedInput.EnhancedInputUserSettings.MappingContextRegisteredWithSettings__DelegateSignature
struct UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Params
{
public:
	class UInputMappingContext*                  IMC;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction EnhancedInput.EnhancedInputUserSettings.MappableKeyProfileChanged__DelegateSignature
struct UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Params
{
public:
	class UEnhancedPlayerMappableKeyProfile*     NewProfile;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.IsMappingContextRegistered
struct UEnhancedInputUserSettings_IsMappingContextRegistered_Params
{
public:
	class UInputMappingContext*                  IMC;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3869[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.GetKeyProfileWithIdentifier
struct UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Params
{
public:
	struct FGameplayTag                          ProfileId;                                         // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386A[0x4];                                     // Fixing Size After Last Property..
	class UEnhancedPlayerMappableKeyProfile*     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfileIdentifier
struct UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfile
struct UEnhancedInputUserSettings_GetCurrentKeyProfile_Params
{
public:
	class UEnhancedPlayerMappableKeyProfile*     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.FindMappingsInRow
struct UEnhancedInputUserSettings_FindMappingsInRow_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_386B[0x4];                                     // Fixing Size After Last Property..
	TSet<struct FPlayerKeyMapping>               ReturnValue;                                       // 0x8(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsChanged__DelegateSignature
struct UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Params
{
public:
	class UEnhancedInputUserSettings*            Settings;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsApplied__DelegateSignature
struct UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.CreateNewKeyProfile
struct UEnhancedInputUserSettings_CreateNewKeyProfile_Params
{
public:
	struct FPlayerMappableKeyProfileCreationArgs InArgs;                                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UEnhancedPlayerMappableKeyProfile*     ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.AsyncSaveSettings
struct UEnhancedInputUserSettings_AsyncSaveSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EnhancedInput.EnhancedInputUserSettings.ApplySettings
struct UEnhancedInputUserSettings_ApplySettings_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
struct UEnhancedInputComponent_GetBoundActionValue_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     ReturnValue;                                       // 0x8(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
struct UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params
{
public:
	class UInputMappingContext*                  Context;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceImmediately;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3871[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
struct UEnhancedInputLibrary_MakeInputActionValueOfType_Params
{
public:
	double                                       X;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionValueType             ValueType;                                         // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3872[0x7];                                     // Fixing Size After Last Property..
	struct FInputActionValue                     ReturnValue;                                       // 0x20(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
struct UEnhancedInputLibrary_MakeInputActionValue_Params
{
public:
	double                                       X;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     MatchValueType;                                    // 0x18(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputActionValue                     ReturnValue;                                       // 0x38(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
struct UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3873[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
struct UEnhancedInputLibrary_GetPlayerMappableKeySettings_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerMappableKeySettings*            ReturnValue;                                       // 0x50(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetMappingName
struct UEnhancedInputLibrary_GetMappingName_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3874[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
struct UEnhancedInputLibrary_GetBoundActionValue_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          Action;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
struct UEnhancedInputLibrary_Conv_InputActionValueToString_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
struct UEnhancedInputLibrary_Conv_InputActionValueToBool_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3875[0x7];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
struct UEnhancedInputLibrary_BreakInputActionValue_Params
{
public:
	struct FInputActionValue                     InActionValue;                                     // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	double                                       X;                                                 // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionValueType             Type;                                              // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3876[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
struct UEnhancedInputPlatformData_GetContextRedirect_Params
{
public:
	class UInputMappingContext*                  InContext;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputMappingContext*                  ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForPlayerMapping
struct UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForAction
struct UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForPlayerMapping
struct UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3878[0x4];                                     // Fixing Size After Last Property..
	struct FInputActionValue                     RawValue;                                          // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForAction
struct UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     RawValue;                                          // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
struct UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params
{
public:
	struct FModifyContextOptions                 Options;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputMappingRebuildType          RebuildType;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
struct UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params
{
public:
	class UPlayerMappableInputConfig*            Config;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3879[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
struct UEnhancedInputSubsystemInterface_RemoveMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_387A[0x7];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
struct UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0x4(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_387B[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
struct UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params
{
public:
	struct FModifyContextOptions                 Options;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
struct UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params
{
public:
	TArray<class UInputMappingContext*>          PrioritizedActiveContexts;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UInputMappingContext*                  InputContext;                                      // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          Action;                                            // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x20(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMappingQueryIssue>            OutIssues;                                         // 0x38(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EMappingQueryIssue                BlockingIssues;                                    // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMappingQueryResult               ReturnValue;                                       // 0x49(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387C[0x6];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
struct UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params
{
public:
	class UInputMappingContext*                  InputContext;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          Action;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x10(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMappingQueryIssue>            OutIssues;                                         // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EMappingQueryIssue                BlockingIssues;                                    // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMappingQueryResult               ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387D[0x6];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
struct UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.OnUserSettingsChanged
struct UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Params
{
public:
	class UEnhancedInputUserSettings*            Settings;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.OnUserKeyProfileChanged
struct UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Params
{
public:
	class UEnhancedPlayerMappableKeyProfile*     InNewProfile;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
struct UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_387E[0x4];                                     // Fixing Size After Last Property..
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0x18(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_387F[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
struct UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3880[0x4];                                     // Fixing Size After Last Property..
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
struct UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3881[0x4];                                     // Fixing Size After Last Property..
	struct FKey                                  NewKey;                                            // 0x8(0x18)(ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x20(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0x30(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3882[0x3];                                     // Fixing Size After Last Property..
	int32                                        ReturnValue;                                       // 0x34(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForPlayerMapping
struct UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3883[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Value;                                             // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
struct UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForPlayerMapping
struct UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3884[0x4];                                     // Fixing Size After Last Property..
	struct FInputActionValue                     RawValue;                                          // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
struct UEnhancedInputSubsystemInterface_InjectInputForAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     RawValue;                                          // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
struct UEnhancedInputSubsystemInterface_HasMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutFoundPriority;                                  // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3885[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.GetUserSettings
struct UEnhancedInputSubsystemInterface_GetUserSettings_Params
{
public:
	class UEnhancedInputUserSettings*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
struct UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3886[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FKey>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
struct UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params
{
public:
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
struct UEnhancedInputSubsystemInterface_ClearAllMappings_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
struct UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params
{
public:
	class UPlayerMappableInputConfig*            Config;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3887[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
struct UEnhancedInputSubsystemInterface_AddMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0xC(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3888[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
struct UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388A[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
struct UEnhancedInputWorldSubsystem_AddActorInputComponent_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapKey
struct UInputMappingContext_UnmapKey_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
struct UInputMappingContext_UnmapAllKeysFromAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapAll
struct UInputMappingContext_UnmapAll_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapAction
struct UInputMappingContext_UnmapAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function EnhancedInput.InputMappingContext.MapKey
struct UInputMappingContext_MapKey_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ToKey;                                             // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnhancedActionKeyMapping             ReturnValue;                                       // 0x20(0x50)(Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.InputModifier.ModifyRaw
struct UInputModifier_ModifyRaw_Params
{
public:
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     CurrentValue;                                      // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3891[0x4];                                     // Fixing Size After Last Property..
	struct FInputActionValue                     ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.InputModifier.GetVisualizationColor
struct UInputModifier_GetVisualizationColor_Params
{
public:
	struct FInputActionValue                     SampleValue;                                       // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputActionValue                     FinalValue;                                        // 0x20(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x40(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.InputTrigger.UpdateState
struct UInputTrigger_UpdateState_Params
{
public:
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     ModifiedValue;                                     // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerState                     ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3897[0x3];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.InputTrigger.IsActuated
struct UInputTrigger_IsActuated_Params
{
public:
	struct FInputActionValue                     ForValue;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3898[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.InputTrigger.GetTriggerType
struct UInputTrigger_GetTriggerType_Params
{
public:
	enum class ETriggerType                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
struct UPlayerMappableInputConfig_ResetToDefault_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
struct UPlayerMappableInputConfig_IsDeprecated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
struct UPlayerMappableInputConfig_GetPlayerMappableKeys_Params
{
public:
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
struct UPlayerMappableInputConfig_GetMetadata_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
struct UPlayerMappableInputConfig_GetMappingContexts_Params
{
public:
	TMap<class UInputMappingContext*, int32>     ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
struct UPlayerMappableInputConfig_GetMappingByName_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A1[0x4];                                     // Fixing Size After Last Property..
	struct FEnhancedActionKeyMapping             ReturnValue;                                       // 0x8(0x50)(Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
struct UPlayerMappableInputConfig_GetKeysBoundToAction_Params
{
public:
	class UInputAction*                          InAction;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
struct UPlayerMappableInputConfig_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
struct UPlayerMappableInputConfig_GetConfigName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

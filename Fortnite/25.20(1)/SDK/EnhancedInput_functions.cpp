#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ToString
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEnhancedPlayerMappableKeyProfile::ToString()
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "ToString");

	Params::UEnhancedPlayerMappableKeyProfile_ToString_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.SetDisplayName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewDisplayName                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UEnhancedPlayerMappableKeyProfile::SetDisplayName(class FText& NewDisplayName)
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "SetDisplayName");

	Params::UEnhancedPlayerMappableKeyProfile_SetDisplayName_Params Parms;

	Parms.NewDisplayName = NewDisplayName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetToDefault
// (Native, Public, BlueprintCallable)
// Parameters:

void UEnhancedPlayerMappableKeyProfile::ResetToDefault()
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "ResetToDefault");

	Params::UEnhancedPlayerMappableKeyProfile_ResetToDefault_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetMappingToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InMappingName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedPlayerMappableKeyProfile::ResetMappingToDefault(class FName InMappingName)
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "ResetMappingToDefault");

	Params::UEnhancedPlayerMappableKeyProfile_ResetMappingToDefault_Params Parms;

	Parms.InMappingName = InMappingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.QueryPlayerMappedKeys
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerMappableKeyQueryOptionsOptions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FKey>                OutKeys                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEnhancedPlayerMappableKeyProfile::QueryPlayerMappedKeys(struct FPlayerMappableKeyQueryOptions& Options, TArray<struct FKey>* OutKeys)
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "QueryPlayerMappedKeys");

	Params::UEnhancedPlayerMappableKeyProfile_QueryPlayerMappedKeys_Params Parms;

	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutKeys != nullptr)
		*OutKeys = Parms.OutKeys;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.K2_FindKeyMapping
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerKeyMapping           OutKeyMapping                                                    (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMapPlayerKeyArgs           InArgs                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UEnhancedPlayerMappableKeyProfile::K2_FindKeyMapping(struct FPlayerKeyMapping* OutKeyMapping, struct FMapPlayerKeyArgs& InArgs)
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "K2_FindKeyMapping");

	Params::UEnhancedPlayerMappableKeyProfile_K2_FindKeyMapping_Params Parms;

	Parms.InArgs = InArgs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutKeyMapping != nullptr)
		*OutKeyMapping = Parms.OutKeyMapping;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileIdentifer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UEnhancedPlayerMappableKeyProfile::GetProfileIdentifer()
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetProfileIdentifer");

	Params::UEnhancedPlayerMappableKeyProfile_GetProfileIdentifer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UEnhancedPlayerMappableKeyProfile::GetProfileDisplayName()
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetProfileDisplayName");

	Params::UEnhancedPlayerMappableKeyProfile_GetProfileDisplayName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetPlayerMappingRows
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FName, struct FKeyMappingRow>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<class FName, struct FKeyMappingRow> UEnhancedPlayerMappableKeyProfile::GetPlayerMappingRows()
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetPlayerMappingRows");

	Params::UEnhancedPlayerMappableKeyProfile_GetPlayerMappingRows_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappingNamesForKey
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                        InKey                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutMappingNames                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEnhancedPlayerMappableKeyProfile::GetMappingNamesForKey(struct FKey& InKey, TArray<class FName>* OutMappingNames)
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetMappingNamesForKey");

	Params::UEnhancedPlayerMappableKeyProfile_GetMappingNamesForKey_Params Parms;

	Parms.InKey = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMappingNames != nullptr)
		*OutMappingNames = Parms.OutMappingNames;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappedKeysInRow
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKey>                OutKeys                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEnhancedPlayerMappableKeyProfile::GetMappedKeysInRow(class FName MappingName, TArray<struct FKey>* OutKeys)
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "GetMappedKeysInRow");

	Params::UEnhancedPlayerMappableKeyProfile_GetMappedKeysInRow_Params Parms;

	Parms.MappingName = MappingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutKeys != nullptr)
		*OutKeys = Parms.OutKeys;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.DumpProfileToLog
// (Native, Public, BlueprintCallable, Const)
// Parameters:

void UEnhancedPlayerMappableKeyProfile::DumpProfileToLog()
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "DumpProfileToLog");

	Params::UEnhancedPlayerMappableKeyProfile_DumpProfileToLog_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedPlayerMappableKeyProfile.DoesMappingPassQueryOptions
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerKeyMapping           PlayerMapping                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerMappableKeyQueryOptionsOptions                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedPlayerMappableKeyProfile::DoesMappingPassQueryOptions(struct FPlayerKeyMapping& PlayerMapping, struct FPlayerMappableKeyQueryOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedPlayerMappableKeyProfile", "DoesMappingPassQueryOptions");

	Params::UEnhancedPlayerMappableKeyProfile_DoesMappingPassQueryOptions_Params Parms;

	Parms.PlayerMapping = PlayerMapping;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContexts
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class UInputMappingContext*>  MappingContexts                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputUserSettings::UnregisterInputMappingContexts(TSet<class UInputMappingContext*>& MappingContexts)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "UnregisterInputMappingContexts");

	Params::UEnhancedInputUserSettings_UnregisterInputMappingContexts_Params Parms;

	Parms.MappingContexts = MappingContexts;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContext
// (Native, Public, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        IMC                                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputUserSettings::UnregisterInputMappingContext(class UInputMappingContext* IMC)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "UnregisterInputMappingContext");

	Params::UEnhancedInputUserSettings_UnregisterInputMappingContext_Params Parms;

	Parms.IMC = IMC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.UnMapPlayerKey
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMapPlayerKeyArgs           InArgs                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       FailureReason                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UEnhancedInputUserSettings::UnMapPlayerKey(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "UnMapPlayerKey");

	Params::UEnhancedInputUserSettings_UnMapPlayerKey_Params Parms;

	Parms.InArgs = InArgs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FailureReason != nullptr)
		*FailureReason = Parms.FailureReason;

}


// Function EnhancedInput.EnhancedInputUserSettings.SetKeyProfile
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InProfileId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputUserSettings::SetKeyProfile(struct FGameplayTag& InProfileId)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "SetKeyProfile");

	Params::UEnhancedInputUserSettings_SetKeyProfile_Params Parms;

	Parms.InProfileId = InProfileId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.SaveSettings
// (Native, Public, BlueprintCallable)
// Parameters:

void UEnhancedInputUserSettings::SaveSettings()
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "SaveSettings");

	Params::UEnhancedInputUserSettings_SaveSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputUserSettings.ResetKeyProfileToDefault
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ProfileId                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       FailureReason                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UEnhancedInputUserSettings::ResetKeyProfileToDefault(struct FGameplayTag& ProfileId, struct FGameplayTagContainer* FailureReason)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "ResetKeyProfileToDefault");

	Params::UEnhancedInputUserSettings_ResetKeyProfileToDefault_Params Parms;

	Parms.ProfileId = ProfileId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FailureReason != nullptr)
		*FailureReason = Parms.FailureReason;

}


// Function EnhancedInput.EnhancedInputUserSettings.ResetAllPlayerKeysInRow
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMapPlayerKeyArgs           InArgs                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       FailureReason                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UEnhancedInputUserSettings::ResetAllPlayerKeysInRow(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "ResetAllPlayerKeysInRow");

	Params::UEnhancedInputUserSettings_ResetAllPlayerKeysInRow_Params Parms;

	Parms.InArgs = InArgs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FailureReason != nullptr)
		*FailureReason = Parms.FailureReason;

}


// Function EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContexts
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class UInputMappingContext*>  MappingContexts                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputUserSettings::RegisterInputMappingContexts(TSet<class UInputMappingContext*>& MappingContexts)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "RegisterInputMappingContexts");

	Params::UEnhancedInputUserSettings_RegisterInputMappingContexts_Params Parms;

	Parms.MappingContexts = MappingContexts;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContext
// (Native, Public, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        IMC                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputUserSettings::RegisterInputMappingContext(class UInputMappingContext* IMC)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "RegisterInputMappingContext");

	Params::UEnhancedInputUserSettings_RegisterInputMappingContext_Params Parms;

	Parms.IMC = IMC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.MapPlayerKey
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMapPlayerKeyArgs           InArgs                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       FailureReason                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void UEnhancedInputUserSettings::MapPlayerKey(struct FMapPlayerKeyArgs& InArgs, struct FGameplayTagContainer* FailureReason)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "MapPlayerKey");

	Params::UEnhancedInputUserSettings_MapPlayerKey_Params Parms;

	Parms.InArgs = InArgs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FailureReason != nullptr)
		*FailureReason = Parms.FailureReason;

}


// DelegateFunction EnhancedInput.EnhancedInputUserSettings.MappingContextRegisteredWithSettings__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UInputMappingContext*        IMC                                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputUserSettings::MappingContextRegisteredWithSettings__DelegateSignature(class UInputMappingContext* IMC)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "MappingContextRegisteredWithSettings__DelegateSignature");

	Params::UEnhancedInputUserSettings_MappingContextRegisteredWithSettings__DelegateSignature_Params Parms;

	Parms.IMC = IMC;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction EnhancedInput.EnhancedInputUserSettings.MappableKeyProfileChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UEnhancedPlayerMappableKeyProfile*NewProfile                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputUserSettings::MappableKeyProfileChanged__DelegateSignature(class UEnhancedPlayerMappableKeyProfile* NewProfile)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "MappableKeyProfileChanged__DelegateSignature");

	Params::UEnhancedInputUserSettings_MappableKeyProfileChanged__DelegateSignature_Params Parms;

	Parms.NewProfile = NewProfile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnhancedInput.EnhancedInputUserSettings.IsMappingContextRegistered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        IMC                                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputUserSettings::IsMappingContextRegistered(class UInputMappingContext* IMC)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "IsMappingContextRegistered");

	Params::UEnhancedInputUserSettings_IsMappingContextRegistered_Params Parms;

	Parms.IMC = IMC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.GetKeyProfileWithIdentifier
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ProfileId                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnhancedPlayerMappableKeyProfile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::GetKeyProfileWithIdentifier(struct FGameplayTag& ProfileId)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "GetKeyProfileWithIdentifier");

	Params::UEnhancedInputUserSettings_GetKeyProfileWithIdentifier_Params Parms;

	Parms.ProfileId = ProfileId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfileIdentifier
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UEnhancedInputUserSettings::GetCurrentKeyProfileIdentifier()
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "GetCurrentKeyProfileIdentifier");

	Params::UEnhancedInputUserSettings_GetCurrentKeyProfileIdentifier_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEnhancedPlayerMappableKeyProfile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::GetCurrentKeyProfile()
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "GetCurrentKeyProfile");

	Params::UEnhancedInputUserSettings_GetCurrentKeyProfile_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.FindMappingsInRow
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<struct FPlayerKeyMapping>     ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TSet<struct FPlayerKeyMapping> UEnhancedInputUserSettings::FindMappingsInRow(class FName MappingName)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "FindMappingsInRow");

	Params::UEnhancedInputUserSettings_FindMappingsInRow_Params Parms;

	Parms.MappingName = MappingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UEnhancedInputUserSettings*  Settings                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputUserSettings::EnhancedInputUserSettingsChanged__DelegateSignature(class UEnhancedInputUserSettings* Settings)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "EnhancedInputUserSettingsChanged__DelegateSignature");

	Params::UEnhancedInputUserSettings_EnhancedInputUserSettingsChanged__DelegateSignature_Params Parms;

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsApplied__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UEnhancedInputUserSettings::EnhancedInputUserSettingsApplied__DelegateSignature()
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "EnhancedInputUserSettingsApplied__DelegateSignature");

	Params::UEnhancedInputUserSettings_EnhancedInputUserSettingsApplied__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EnhancedInput.EnhancedInputUserSettings.CreateNewKeyProfile
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPlayerMappableKeyProfileCreationArgsInArgs                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UEnhancedPlayerMappableKeyProfile*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnhancedPlayerMappableKeyProfile* UEnhancedInputUserSettings::CreateNewKeyProfile(struct FPlayerMappableKeyProfileCreationArgs& InArgs)
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "CreateNewKeyProfile");

	Params::UEnhancedInputUserSettings_CreateNewKeyProfile_Params Parms;

	Parms.InArgs = InArgs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputUserSettings.AsyncSaveSettings
// (Native, Public, BlueprintCallable)
// Parameters:

void UEnhancedInputUserSettings::AsyncSaveSettings()
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "AsyncSaveSettings");

	Params::UEnhancedInputUserSettings_AsyncSaveSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputUserSettings.ApplySettings
// (Native, Public, BlueprintCallable)
// Parameters:

void UEnhancedInputUserSettings::ApplySettings()
{
	static auto Func = Class->GetFunction("EnhancedInputUserSettings", "ApplySettings");

	Params::UEnhancedInputUserSettings_ApplySettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputComponent::GetBoundActionValue(class UInputAction* Action)
{
	static auto Func = Class->GetFunction("EnhancedInputComponent", "GetBoundActionValue");

	Params::UEnhancedInputComponent_GetBoundActionValue_Params Parms;

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        Context                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceImmediately                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "RequestRebuildControlMappingsUsingContext");

	Params::UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params Parms;

	Parms.Context = Context;
	Parms.bForceImmediately = bForceImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionValueType   ValueType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValueOfType(double X, double Y, double Z, enum class EInputActionValueType ValueType)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValueOfType");

	Params::UEnhancedInputLibrary_MakeInputActionValueOfType_Params Parms;

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.ValueType = ValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           MatchValueType                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValue(double X, double Y, double Z, struct FInputActionValue& MatchValueType)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValue");

	Params::UEnhancedInputLibrary_MakeInputActionValue_Params Parms;

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.MatchValueType = MatchValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputLibrary::IsActionKeyMappingPlayerMappable(struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "IsActionKeyMappingPlayerMappable");

	Params::UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Params Parms;

	Parms.ActionKeyMapping = ActionKeyMapping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetThirdPlayerMappableKeySlot()
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "GetThirdPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetSecondPlayerMappableKeySlot()
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "GetSecondPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerMappableKeySettings*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayerMappableKeySettings* UEnhancedInputLibrary::GetPlayerMappableKeySettings(struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "GetPlayerMappableKeySettings");

	Params::UEnhancedInputLibrary_GetPlayerMappableKeySettings_Params Parms;

	Parms.ActionKeyMapping = ActionKeyMapping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetMappingName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnhancedActionKeyMapping   ActionKeyMapping                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UEnhancedInputLibrary::GetMappingName(struct FEnhancedActionKeyMapping& ActionKeyMapping)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "GetMappingName");

	Params::UEnhancedInputLibrary_GetMappingName_Params Parms;

	Parms.ActionKeyMapping = ActionKeyMapping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetFourthPlayerMappableKeySlot()
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "GetFourthPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerMappableKeySlot      ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPlayerMappableKeySlot UEnhancedInputLibrary::GetFirstPlayerMappableKeySlot()
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "GetFirstPlayerMappableKeySlot");

	Params::UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::GetBoundActionValue(class UActor* Actor, class UInputAction* Action)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "GetBoundActionValue");

	Params::UEnhancedInputLibrary_GetBoundActionValue_Params Parms;

	Parms.Actor = Actor;
	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEnhancedInputLibrary::Conv_InputActionValueToString(const struct FInputActionValue& ActionValue)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToString");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToString_Params Parms;

	Parms.ActionValue = ActionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputLibrary::Conv_InputActionValueToBool(const struct FInputActionValue& InValue)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToBool");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToBool_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis3D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params Parms;

	Parms.ActionValue = ActionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis2D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis1D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InActionValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionValueType   Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputLibrary::BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, enum class EInputActionValueType* Type)
{
	static auto Func = Class->GetFunction("EnhancedInputLibrary", "BreakInputActionValue");

	Params::UEnhancedInputLibrary_BreakInputActionValue_Params Parms;

	Parms.InActionValue = InActionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Z != nullptr)
		*Z = Parms.Z;

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        InContext                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputMappingContext*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInputMappingContext* UEnhancedInputPlatformData::GetContextRedirect(class UInputMappingContext* InContext)
{
	static auto Func = Class->GetFunction("EnhancedInputPlatformData", "GetContextRedirect");

	Params::UEnhancedInputPlatformData_GetContextRedirect_Params Parms;

	Parms.InContext = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForPlayerMapping
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::StopContinuousInputInjectionForPlayerMapping(class FName MappingName)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "StopContinuousInputInjectionForPlayerMapping");

	Params::UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForPlayerMapping_Params Parms;

	Parms.MappingName = MappingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForAction
// (Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::StopContinuousInputInjectionForAction(class UInputAction* Action)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "StopContinuousInputInjectionForAction");

	Params::UEnhancedInputSubsystemInterface_StopContinuousInputInjectionForAction_Params Parms;

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForPlayerMapping
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           RawValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::StartContinuousInputInjectionForPlayerMapping(class FName MappingName, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "StartContinuousInputInjectionForPlayerMapping");

	Params::UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForPlayerMapping_Params Parms;

	Parms.MappingName = MappingName;
	Parms.RawValue = RawValue;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForAction
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           RawValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::StartContinuousInputInjectionForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "StartContinuousInputInjectionForAction");

	Params::UEnhancedInputSubsystemInterface_StartContinuousInputInjectionForAction_Params Parms;

	Parms.Action = Action;
	Parms.RawValue = RawValue;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputMappingRebuildTypeRebuildType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RequestRebuildControlMappings");

	Params::UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params Parms;

	Parms.Options = Options;
	Parms.RebuildType = RebuildType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemovePlayerMappableConfig");

	Params::UEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params Parms;

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::RemoveMappingContext(class UInputMappingContext* MappingContext, struct FModifyContextOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveMappingContext");

	Params::UEnhancedInputSubsystemInterface_RemoveMappingContext_Params Parms;

	Parms.MappingContext = MappingContext;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeysForMapping(class FName MappingName, struct FModifyContextOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeysForMapping");

	Params::UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Params Parms;

	Parms.MappingName = MappingName;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeys(struct FModifyContextOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeys");

	Params::UEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params Parms;

	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UInputMappingContext*>PrioritizedActiveContexts                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UInputMappingContext*        InputContext                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMappingQueryIssue      BlockingIssues                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMappingQueryResult     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMappingQueryResult UEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInContextSet");

	Params::UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params Parms;

	Parms.PrioritizedActiveContexts = PrioritizedActiveContexts;
	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = Key;
	Parms.BlockingIssues = BlockingIssues;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIssues != nullptr)
		*OutIssues = Parms.OutIssues;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        InputContext                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMappingQueryIssue      BlockingIssues                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMappingQueryResult     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMappingQueryResult UEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInActiveContextSet");

	Params::UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params Parms;

	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = Key;
	Parms.BlockingIssues = BlockingIssues;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIssues != nullptr)
		*OutIssues = Parms.OutIssues;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKey>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKey> UEnhancedInputSubsystemInterface::QueryKeysMappedToAction(class UInputAction* Action)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryKeysMappedToAction");

	Params::UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params Parms;

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.OnUserSettingsChanged
// (Native, Protected)
// Parameters:
// class UEnhancedInputUserSettings*  Settings                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::OnUserSettingsChanged(class UEnhancedInputUserSettings* Settings)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "OnUserSettingsChanged");

	Params::UEnhancedInputSubsystemInterface_OnUserSettingsChanged_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.OnUserKeyProfileChanged
// (Native, Protected)
// Parameters:
// class UEnhancedPlayerMappableKeyProfile*InNewProfile                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::OnUserKeyProfileChanged(class UEnhancedPlayerMappableKeyProfile* InNewProfile)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "OnUserKeyProfileChanged");

	Params::UEnhancedInputSubsystemInterface_OnUserKeyProfileChanged_Params Parms;

	Parms.InNewProfile = InNewProfile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerMappableKeySlot      KeySlot                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEnhancedInputSubsystemInterface::K2_RemovePlayerMappedKeyInSlot(class FName MappingName, struct FPlayerMappableKeySlot& KeySlot, struct FModifyContextOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_RemovePlayerMappedKeyInSlot");

	Params::UEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Params Parms;

	Parms.MappingName = MappingName;
	Parms.KeySlot = KeySlot;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerMappableKeySlot      KeySlot                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FKey UEnhancedInputSubsystemInterface::K2_GetPlayerMappedKeyInSlot(class FName MappingName, struct FPlayerMappableKeySlot& KeySlot)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_GetPlayerMappedKeyInSlot");

	Params::UEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Params Parms;

	Parms.MappingName = MappingName;
	Parms.KeySlot = KeySlot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        NewKey                                                           (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerMappableKeySlot      KeySlot                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEnhancedInputSubsystemInterface::K2_AddPlayerMappedKeyInSlot(class FName MappingName, const struct FKey& NewKey, struct FPlayerMappableKeySlot& KeySlot, struct FModifyContextOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "K2_AddPlayerMappedKeyInSlot");

	Params::UEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Params Parms;

	Parms.MappingName = MappingName;
	Parms.NewKey = NewKey;
	Parms.KeySlot = KeySlot;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForPlayerMapping
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::InjectInputVectorForPlayerMapping(class FName MappingName, const struct FVector& Value, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputVectorForPlayerMapping");

	Params::UEnhancedInputSubsystemInterface_InjectInputVectorForPlayerMapping_Params Parms;

	Parms.MappingName = MappingName;
	Parms.Value = Value;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputVectorForAction");

	Params::UEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params Parms;

	Parms.Action = Action;
	Parms.Value = Value;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForPlayerMapping
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           RawValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::InjectInputForPlayerMapping(class FName MappingName, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputForPlayerMapping");

	Params::UEnhancedInputSubsystemInterface_InjectInputForPlayerMapping_Params Parms;

	Parms.MappingName = MappingName;
	Parms.RawValue = RawValue;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           RawValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputForAction");

	Params::UEnhancedInputSubsystemInterface_InjectInputForAction_Params Parms;

	Parms.Action = Action;
	Parms.RawValue = RawValue;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutFoundPriority                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputSubsystemInterface::HasMappingContext(class UInputMappingContext* MappingContext, int32* OutFoundPriority)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "HasMappingContext");

	Params::UEnhancedInputSubsystemInterface_HasMappingContext_Params Parms;

	Parms.MappingContext = MappingContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFoundPriority != nullptr)
		*OutFoundPriority = Parms.OutFoundPriority;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetUserSettings
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UEnhancedInputUserSettings*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnhancedInputUserSettings* UEnhancedInputSubsystemInterface::GetUserSettings()
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetUserSettings");

	Params::UEnhancedInputSubsystemInterface_GetUserSettings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKey>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKey> UEnhancedInputSubsystemInterface::GetAllPlayerMappedKeys(class FName MappingName)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappedKeys");

	Params::UEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Params Parms;

	Parms.MappingName = MappingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> UEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings()
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappableActionKeyMappings");

	Params::UEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UEnhancedInputSubsystemInterface::ClearAllMappings()
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "ClearAllMappings");

	Params::UEnhancedInputSubsystemInterface_ClearAllMappings_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddPlayerMappableConfig");

	Params::UEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params Parms;

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemInterface::AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority, struct FModifyContextOptions& Options)
{
	static auto Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddMappingContext");

	Params::UEnhancedInputSubsystemInterface_AddMappingContext_Params Parms;

	Parms.MappingContext = MappingContext;
	Parms.Priority = Priority;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputWorldSubsystem::RemoveActorInputComponent(class UActor* Actor)
{
	static auto Func = Class->GetFunction("EnhancedInputWorldSubsystem", "RemoveActorInputComponent");

	Params::UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputWorldSubsystem::AddActorInputComponent(class UActor* Actor)
{
	static auto Func = Class->GetFunction("EnhancedInputWorldSubsystem", "AddActorInputComponent");

	Params::UEnhancedInputWorldSubsystem_AddActorInputComponent_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.UnmapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapKey(class UInputAction* Action, const struct FKey& Key)
{
	static auto Func = Class->GetFunction("InputMappingContext", "UnmapKey");

	Params::UInputMappingContext_UnmapKey_Params Parms;

	Parms.Action = Action;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapAllKeysFromAction(class UInputAction* Action)
{
	static auto Func = Class->GetFunction("InputMappingContext", "UnmapAllKeysFromAction");

	Params::UInputMappingContext_UnmapAllKeysFromAction_Params Parms;

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.UnmapAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInputMappingContext::UnmapAll()
{
	static auto Func = Class->GetFunction("InputMappingContext", "UnmapAll");

	Params::UInputMappingContext_UnmapAll_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.UnmapAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapAction(class UInputAction* Action)
{
	static auto Func = Class->GetFunction("InputMappingContext", "UnmapAction");

	Params::UInputMappingContext_UnmapAction_Params Parms;

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.MapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        ToKey                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEnhancedActionKeyMapping UInputMappingContext::MapKey(class UInputAction* Action, const struct FKey& ToKey)
{
	static auto Func = Class->GetFunction("InputMappingContext", "MapKey");

	Params::UInputMappingContext_MapKey_Params Parms;

	Parms.Action = Action;
	Parms.ToKey = ToKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputModifier.ModifyRaw
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           CurrentValue                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UInputModifier::ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime)
{
	static auto Func = Class->GetFunction("InputModifier", "ModifyRaw");

	Params::UInputModifier_ModifyRaw_Params Parms;

	Parms.PlayerInput = PlayerInput;
	Parms.CurrentValue = CurrentValue;
	Parms.DeltaTime = DeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputModifier.GetVisualizationColor
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FInputActionValue           SampleValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionValue           FinalValue                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UInputModifier::GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue)
{
	static auto Func = Class->GetFunction("InputModifier", "GetVisualizationColor");

	Params::UInputModifier_GetVisualizationColor_Params Parms;

	Parms.SampleValue = SampleValue;
	Parms.FinalValue = FinalValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.UpdateState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ModifiedValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETriggerState           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETriggerState UInputTrigger::UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime)
{
	static auto Func = Class->GetFunction("InputTrigger", "UpdateState");

	Params::UInputTrigger_UpdateState_Params Parms;

	Parms.PlayerInput = PlayerInput;
	Parms.ModifiedValue = ModifiedValue;
	Parms.DeltaTime = DeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.IsActuated
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInputActionValue           ForValue                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputTrigger::IsActuated(struct FInputActionValue& ForValue)
{
	static auto Func = Class->GetFunction("InputTrigger", "IsActuated");

	Params::UInputTrigger_IsActuated_Params Parms;

	Parms.ForValue = ForValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.GetTriggerType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ETriggerType            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETriggerType UInputTrigger::GetTriggerType()
{
	static auto Func = Class->GetFunction("InputTrigger", "GetTriggerType");

	Params::UInputTrigger_GetTriggerType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPlayerMappableInputConfig::ResetToDefault()
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "ResetToDefault");

	Params::UPlayerMappableInputConfig_ResetToDefault_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPlayerMappableInputConfig::IsDeprecated()
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "IsDeprecated");

	Params::UPlayerMappableInputConfig_IsDeprecated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetPlayerMappableKeys()
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "GetPlayerMappableKeys");

	Params::UPlayerMappableInputConfig_GetPlayerMappableKeys_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UPlayerMappableInputConfig::GetMetadata()
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "GetMetadata");

	Params::UPlayerMappableInputConfig_GetMetadata_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class UInputMappingContext*, int32>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<class UInputMappingContext*, int32> UPlayerMappableInputConfig::GetMappingContexts()
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingContexts");

	Params::UPlayerMappableInputConfig_GetMappingContexts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEnhancedActionKeyMapping UPlayerMappableInputConfig::GetMappingByName(class FName MappingName)
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingByName");

	Params::UPlayerMappableInputConfig_GetMappingByName_Params Parms;

	Parms.MappingName = MappingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                InAction                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetKeysBoundToAction(class UInputAction* InAction)
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "GetKeysBoundToAction");

	Params::UPlayerMappableInputConfig_GetKeysBoundToAction_Params Parms;

	Parms.InAction = InAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UPlayerMappableInputConfig::GetDisplayName()
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "GetDisplayName");

	Params::UPlayerMappableInputConfig_GetDisplayName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UPlayerMappableInputConfig::GetConfigName()
{
	static auto Func = Class->GetFunction("PlayerMappableInputConfig", "GetConfigName");

	Params::UPlayerMappableInputConfig_GetConfigName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

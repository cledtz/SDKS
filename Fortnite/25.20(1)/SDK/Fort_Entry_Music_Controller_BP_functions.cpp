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


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  New_Music                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Event_Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UFort_Entry_Music_Controller_BP_C::Change_Music(class USoundBase* New_Music, double StartTime, const struct FGameplayTag& Event_Tag)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Change Music");

	Params::UFort_Entry_Music_Controller_BP_C_Change_Music_Params Parms;

	Parms.New_Music = New_Music;
	Parms.StartTime = StartTime;
	Parms.Event_Tag = Event_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFort_Entry_Music_Controller_BP_C::ListenToMusicPacks()
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ListenToMusicPacks");

	Params::UFort_Entry_Music_Controller_BP_C_ListenToMusicPacks_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition*NewMusicPack                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              StartTimeOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFort_Entry_Music_Controller_BP_C::OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "OnMusicPackChanged");

	Params::UFort_Entry_Music_Controller_BP_C_OnMusicPackChanged_Params Parms;

	Parms.NewMusicPack = NewMusicPack;
	Parms.StartTimeOffset = StartTimeOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lobby_Music_Activate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  New_Music                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFort_Entry_Music_Controller_BP_C::Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Lobby Music Override");

	Params::UFort_Entry_Music_Controller_BP_C_Lobby_Music_Override_Params Parms;

	Parms.Lobby_Music_Activate = Lobby_Music_Activate;
	Parms.New_Music = New_Music;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.SetCanRetriggerNextMusicPack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCanRetriggerNextMusicPack                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFort_Entry_Music_Controller_BP_C::SetCanRetriggerNextMusicPack(bool bCanRetriggerNextMusicPack)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "SetCanRetriggerNextMusicPack");

	Params::UFort_Entry_Music_Controller_BP_C_SetCanRetriggerNextMusicPack_Params Parms;

	Parms.bCanRetriggerNextMusicPack = bCanRetriggerNextMusicPack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.PlayEquippedMusicPack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFort_Entry_Music_Controller_BP_C::PlayEquippedMusicPack()
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "PlayEquippedMusicPack");

	Params::UFort_Entry_Music_Controller_BP_C_PlayEquippedMusicPack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.StartMusic
// (Event, Public, BlueprintEvent)
// Parameters:

void UFort_Entry_Music_Controller_BP_C::StartMusic()
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "StartMusic");

	Params::UFort_Entry_Music_Controller_BP_C_StartMusic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_New_Music_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_StartTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Event_Tag                                     (NoDestructor, HasGetValueTypeHash)
// class UAthenaMusicPackItemDefinition*K2Node_CustomEvent_NewMusicPack                                  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartTimeOffset                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Lobby_Music_Activate                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_New_Music                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bCanRetriggerNextMusicPack                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             ()
// struct FGameplayTagContainer       Temp_struct_Variable_1                                           ()
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAthenaMusicPackItemDefinition*CallFunc_GetEquippedMusicPack_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Select_Default                                            ()
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDefaultMusicEquipped_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_AddEvent_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAthenaMusicPackItemDefinition*CallFunc_GetEquippedMusicPack_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Change_Music_StartTime_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFort_Entry_Music_Controller_BP_C::ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, class USoundBase* K2Node_CustomEvent_New_Music_1, double K2Node_CustomEvent_StartTime, const struct FGameplayTag& K2Node_CustomEvent_Event_Tag, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, float K2Node_CustomEvent_StartTimeOffset, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Lobby_Music_Activate, class USoundBase* K2Node_CustomEvent_New_Music, bool K2Node_CustomEvent_bCanRetriggerNextMusicPack, class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, class UFortMusicContext* CallFunc_GetContext_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTagContainer& K2Node_Select_Default, bool Temp_bool_Variable_1, class UFortMusicContext* CallFunc_GetContext_ReturnValue_1, const struct FGameplayTag& K2Node_Select_Default_1, bool CallFunc_IsDefaultMusicEquipped_ReturnValue, class UAudioComponent* CallFunc_AddEvent_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue_2, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UFortMusicContext* CallFunc_GetContext_ReturnValue_3, double CallFunc_Change_Music_StartTime_ImplicitCast)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ExecuteUbergraph_Fort_Entry_Music_Controller_BP");

	Params::UFort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_New_Music_1 = K2Node_CustomEvent_New_Music_1;
	Parms.K2Node_CustomEvent_StartTime = K2Node_CustomEvent_StartTime;
	Parms.K2Node_CustomEvent_Event_Tag = K2Node_CustomEvent_Event_Tag;
	Parms.K2Node_CustomEvent_NewMusicPack = K2Node_CustomEvent_NewMusicPack;
	Parms.K2Node_CustomEvent_StartTimeOffset = K2Node_CustomEvent_StartTimeOffset;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Lobby_Music_Activate = K2Node_CustomEvent_Lobby_Music_Activate;
	Parms.K2Node_CustomEvent_New_Music = K2Node_CustomEvent_New_Music;
	Parms.K2Node_CustomEvent_bCanRetriggerNextMusicPack = K2Node_CustomEvent_bCanRetriggerNextMusicPack;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEquippedMusicPack_ReturnValue = CallFunc_GetEquippedMusicPack_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsDefaultMusicEquipped_ReturnValue = CallFunc_IsDefaultMusicEquipped_ReturnValue;
	Parms.CallFunc_AddEvent_ReturnValue = CallFunc_AddEvent_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetEquippedMusicPack_ReturnValue_1 = CallFunc_GetEquippedMusicPack_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.CallFunc_Change_Music_StartTime_ImplicitCast = CallFunc_Change_Music_StartTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.InitSnowCoverageComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameStateBase*              Game_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateComponent_SurfaceOverride*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AmbientAudioController_C::InitSnowCoverageComponent(class UGameStateBase* Game_State, class UFortGameStateComponent_SurfaceOverride* CallFunc_GetComponentByClass_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "InitSnowCoverageComponent");

	Params::UBP_AmbientAudioController_C_InitSnowCoverageComponent_Params Parms;

	Parms.Game_State = Game_State;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnViewTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      New_Target                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Prev_Target                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AmbientAudioController_C::OnViewTargetChanged(class UActor* New_Target, class UActor* Prev_Target)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "OnViewTargetChanged");

	Params::UBP_AmbientAudioController_C_OnViewTargetChanged_Params Parms;

	Parms.New_Target = New_Target;
	Parms.Prev_Target = Prev_Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.CacheViewTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      NewViewTarget                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AmbientAudioController_C::CacheViewTarget(class UActor* NewViewTarget, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UActor* CallFunc_GetViewTarget_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "CacheViewTarget");

	Params::UBP_AmbientAudioController_C_CacheViewTarget_Params Parms;

	Parms.NewViewTarget = NewViewTarget;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.RemovePlayerTags
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void UBP_AmbientAudioController_C::RemovePlayerTags(class UActor* Player, TArray<struct FGameplayTag>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "RemovePlayerTags");

	Params::UBP_AmbientAudioController_C_RemovePlayerTags_Params Parms;

	Parms.Player = Player;
	Parms.Array = Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ApplyPlayerTags
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        Tag_Array                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void UBP_AmbientAudioController_C::ApplyPlayerTags(class UActor* Player, TArray<struct FGameplayTag>& Tag_Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "ApplyPlayerTags");

	Params::UBP_AmbientAudioController_C_ApplyPlayerTags_Params Parms;

	Parms.Player = Player;
	Parms.Tag_Array = Tag_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.UpdateSnowSetupBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAmbientAudioSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        CallFunc_GetSpecialSurfaceType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocationInSpecialSurface_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AmbientAudioController_C::UpdateSnowSetupBP(class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface CallFunc_GetSpecialSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocationInSpecialSurface_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "UpdateSnowSetupBP");

	Params::UBP_AmbientAudioController_C_UpdateSnowSetupBP_Params Parms;

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSpecialSurfaceType_ReturnValue = CallFunc_GetSpecialSurfaceType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsLocationInSpecialSurface_ReturnValue = CallFunc_IsLocationInSpecialSurface_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast = CallFunc_IsLocationInSpecialSurface_Padding_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnReady_C8AC4F724844E04160BE56BEAB4A2614
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameStateBase*              GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AmbientAudioController_C::OnReady_C8AC4F724844E04160BE56BEAB4A2614(class UGameStateBase* GameState)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "OnReady_C8AC4F724844E04160BE56BEAB4A2614");

	Params::UBP_AmbientAudioController_C_OnReady_C8AC4F724844E04160BE56BEAB4A2614_Params Parms;

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Room Size Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Curr                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Prev                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBP_AmbientAudioController_C::On_Room_Size_Changed(const struct FGameplayTag& Curr, const struct FGameplayTag& Prev)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "On Room Size Changed");

	Params::UBP_AmbientAudioController_C_On_Room_Size_Changed_Params Parms;

	Parms.Curr = Curr;
	Parms.Prev = Prev;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Room State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Curr                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Prev                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AmbientAudioController_C::On_Room_State_Changed(uint8 Curr, uint8 Prev)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "On Room State Changed");

	Params::UBP_AmbientAudioController_C_On_Room_State_Changed_Params Parms;

	Parms.Curr = Curr;
	Parms.Prev = Prev;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Update Interior Audio Verb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AmbientAudioController_C::Update_Interior_Audio_Verb()
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "Update Interior Audio Verb");

	Params::UBP_AmbientAudioController_C_Update_Interior_Audio_Verb_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AmbientAudioController_C::Update()
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "Update");

	Params::UBP_AmbientAudioController_C_Update_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AmbientAudioController_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "ReceiveBeginPlay");

	Params::UBP_AmbientAudioController_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameStateBase*              K2Node_CustomEvent_GameState                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameStateBase*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_GameStateReady*CallFunc_GameStateReadyAsync_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Curr_1                                        (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Prev_1                                        (NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_Curr                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_Prev                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UAmbientAudioSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AmbientAudioController_C::ExecuteUbergraph_BP_AmbientAudioController(int32 EntryPoint, class UGameStateBase* K2Node_CustomEvent_GameState, class UGameStateBase* Temp_object_Variable, class UFortAsyncAction_GameStateReady* CallFunc_GameStateReadyAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_Curr_1, const struct FGameplayTag& K2Node_CustomEvent_Prev_1, uint8 K2Node_CustomEvent_Curr, uint8 K2Node_CustomEvent_Prev, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class UAmbientAudioSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("BP_AmbientAudioController_C", "ExecuteUbergraph_BP_AmbientAudioController");

	Params::UBP_AmbientAudioController_C_ExecuteUbergraph_BP_AmbientAudioController_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GameState = K2Node_CustomEvent_GameState;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GameStateReadyAsync_ReturnValue = CallFunc_GameStateReadyAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Curr_1 = K2Node_CustomEvent_Curr_1;
	Parms.K2Node_CustomEvent_Prev_1 = K2Node_CustomEvent_Prev_1;
	Parms.K2Node_CustomEvent_Curr = K2Node_CustomEvent_Curr;
	Parms.K2Node_CustomEvent_Prev = K2Node_CustomEvent_Prev;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

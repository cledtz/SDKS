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


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.GetAffiliationsToShowFor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortTeamAffiliation>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<enum class EFortTeamAffiliation> UBGA_RiftPortal_Item_Athena_C::GetAffiliationsToShowFor(TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "GetAffiliationsToShowFor");

	Params::UBGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ShouldShowSoundIndicator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetVehicleUInterface_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindSeatIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBGA_RiftPortal_Item_Athena_C::ShouldShowSoundIndicator(class UFortPlayerController* PlayerController, class UFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPawn* CallFunc_GetPawn_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_FindSeatIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ShouldShowSoundIndicator");

	Params::UBGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue = CallFunc_GetVehicleUInterface_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FindSeatIndex_ReturnValue = CallFunc_FindSeatIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.TeleportPlayerAndSendEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TeleportPlayerPawn_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::TeleportPlayerAndSendEvent(class UFortPlayerPawn* PlayerPawn, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_TeleportPlayerPawn_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "TeleportPlayerAndSendEvent");

	Params::UBGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_TeleportPlayerPawn_ReturnValue = CallFunc_TeleportPlayerPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.IsPlayerAttachedToAIPawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAIPawn*                 AIPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             AttachedPlayerPawn                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::IsPlayerAttachedToAIPawn(class UFortAIPawn* AIPawn, bool* Result, class UFortPlayerPawn** AttachedPlayerPawn, TArray<class UActor*>& CallFunc_GetAttachedActors_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UActor* CallFunc_Array_Get_Item, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "IsPlayerAttachedToAIPawn");

	Params::UBGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn_Params Parms;

	Parms.AIPawn = AIPawn;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AttachedPlayerPawn != nullptr)
		*AttachedPlayerPawn = Parms.AttachedPlayerPawn;

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.EjectFromTurret
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_GetVehicleUInterface_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanTeleport_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::EjectFromTurret(class UFortPlayerPawn* PlayerPawn, FInterfaceProperty_ CallFunc_GetVehicleUInterface_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_CanTeleport_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "EjectFromTurret");

	Params::UBGA_RiftPortal_Item_Athena_C_EjectFromTurret_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.CallFunc_GetVehicleUInterface_ReturnValue = CallFunc_GetVehicleUInterface_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_CanTeleport_ReturnValue = CallFunc_CanTeleport_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue = CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Is Flying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::Is_Flying(bool* NewParam, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Is Flying");

	Params::UBGA_RiftPortal_Item_Athena_C_Is_Flying_Params Parms;

	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.UseRiftQuestUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UController*                 InController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerController*>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::UseRiftQuestUpdate(class UController* InController, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class UFortPlayerController*>& K2Node_MakeArray_Array, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "UseRiftQuestUpdate");

	Params::UBGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate_Params Parms;

	Parms.InController = InController;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted;
	Parms.CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted = CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.CheckForRiftLocUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UController*                 InController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::CheckForRiftLocUpdate(class UController* InController)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "CheckForRiftLocUpdate");

	Params::UBGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate_Params Parms;

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_PlayerPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::OnRep_PlayerPawn()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_PlayerPawn");

	Params::UBGA_RiftPortal_Item_Athena_C_OnRep_PlayerPawn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_Vehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::OnRep_Vehicle()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_Vehicle");

	Params::UBGA_RiftPortal_Item_Athena_C_OnRep_Vehicle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_TeleportLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::OnRep_TeleportLocation()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_TeleportLocation");

	Params::UBGA_RiftPortal_Item_Athena_C_OnRep_TeleportLocation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayExpandOrCollapseAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Expand                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::PlayExpandOrCollapseAudio(bool Expand, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayExpandOrCollapseAudio");

	Params::UBGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio_Params Parms;

	Parms.Expand = Expand;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed__FinishedFunc()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Audio RiftDestroyed__FinishedFunc");

	Params::UBGA_RiftPortal_Item_Athena_C_Audio_RiftDestroyed__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed__UpdateFunc()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Audio RiftDestroyed__UpdateFunc");

	Params::UBGA_RiftPortal_Item_Athena_C_Audio_RiftDestroyed__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::VectorScale__FinishedFunc()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VectorScale__FinishedFunc");

	Params::UBGA_RiftPortal_Item_Athena_C_VectorScale__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::VectorScale__UpdateFunc()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VectorScale__UpdateFunc");

	Params::UBGA_RiftPortal_Item_Athena_C_VectorScale__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::FragmentMovement__FinishedFunc()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "FragmentMovement__FinishedFunc");

	Params::UBGA_RiftPortal_Item_Athena_C_FragmentMovement__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::FragmentMovement__UpdateFunc()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "FragmentMovement__UpdateFunc");

	Params::UBGA_RiftPortal_Item_Athena_C_FragmentMovement__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.DestroyRift
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::DestroyRift()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "DestroyRift");

	Params::UBGA_RiftPortal_Item_Athena_C_DestroyRift_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBGA_RiftPortal_Item_Athena_C::BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::UBGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBGA_RiftPortal_Item_Athena_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::UBGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::UBGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ReceiveBeginPlay");

	Params::UBGA_RiftPortal_Item_Athena_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayTeleportFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PlayerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerState*                RequestingPlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::PlayTeleportFX(const struct FVector& PlayerLocation, class UPlayerState* RequestingPlayerState)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayTeleportFX");

	Params::UBGA_RiftPortal_Item_Athena_C_PlayTeleportFX_Params Parms;

	Parms.PlayerLocation = PlayerLocation;
	Parms.RequestingPlayerState = RequestingPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayCosmeticFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::PlayCosmeticFX()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayCosmeticFX");

	Params::UBGA_RiftPortal_Item_Athena_C_PlayCosmeticFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OverlappingOnBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::OverlappingOnBeginPlay(class UActor* Actor)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OverlappingOnBeginPlay");

	Params::UBGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay_Params Parms;

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleTeleportEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::VehicleTeleportEvent()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VehicleTeleportEvent");

	Params::UBGA_RiftPortal_Item_Athena_C_VehicleTeleportEvent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.NotifyTeleportedVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      VehicleActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::NotifyTeleportedVehicle(class UActor* VehicleActor)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "NotifyTeleportedVehicle");

	Params::UBGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle_Params Parms;

	Parms.VehicleActor = VehicleActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlaylistLoaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlaylistName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBGA_RiftPortal_Item_Athena_C::PlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlaylistLoaded");

	Params::UBGA_RiftPortal_Item_Athena_C_PlaylistLoaded_Params Parms;

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleInteractionFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawnAthena*       FortPlayerPawnAthena                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::VehicleInteractionFailed(class UFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VehicleInteractionFailed");

	Params::UBGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed_Params Parms;

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.TryRiftTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::TryRiftTeleport(class UActor* TargetActor)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "TryRiftTeleport");

	Params::UBGA_RiftPortal_Item_Athena_C_TryRiftTeleport_Params Parms;

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.IncrementTeleportLocationOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     IncrementValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::IncrementTeleportLocationOffset(const struct FVector& IncrementValue)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "IncrementTeleportLocationOffset");

	Params::UBGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset_Params Parms;

	Parms.IncrementValue = IncrementValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ResetTeleportLocationOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBGA_RiftPortal_Item_Athena_C::ResetTeleportLocationOffset()
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ResetTeleportLocationOffset");

	Params::UBGA_RiftPortal_Item_Athena_C_ResetTeleportLocationOffset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ForceRiftTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::ForceRiftTeleport(class UActor* Target_Actor)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ForceRiftTeleport");

	Params::UBGA_RiftPortal_Item_Athena_C_ForceRiftTeleport_Params Parms;

	Parms.Target_Actor = Target_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ExecuteUbergraph_BGA_RiftPortal_Item_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIgnoredActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_PlayerLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerState*                K2Node_CustomEvent_RequestingPlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_Actor                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_VehicleActor                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                K2Node_DynamicCast_AsFort_Vehicle_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_PlaylistName                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)
// class UFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckCreativeMode_CanCompleteQuest               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawnAthena*       K2Node_CustomEvent_FortPlayerPawnAthena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Flying_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CallFunc_GetOverlappingActors_OverlappingActors_1                (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Flying_NewParam_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetVehicleActorPtr_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanTeleport_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerPawn*>     CallFunc_BP_GetAllPassengers_ReturnValue                         (ReferenceParm)
// TArray<class UFortPlayerPawn*>     CallFunc_BP_GetAllPassengers_ReturnValue_1                       (ReferenceParm)
// class UFortPlayerPawn*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetOwnerLocation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetDriver_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerState*                Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerState*                K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_TargetActor                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_IncrementValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerPawn*>     CallFunc_BP_GetAllPassengers_ReturnValue_2                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortPlayerPawn*>     CallFunc_BP_GetAllPassengers_ReturnValue_3                       (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                K2Node_DynamicCast_AsFort_Vehicle_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1(NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInsideHidingProp_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TeleportAIPawn_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAttachedToAIPawn_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_IsPlayerAttachedToAIPawn_AttachedPlayerPawn             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_Target_Actor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBGA_RiftPortal_Item_Athena_C::ExecuteUbergraph_BGA_RiftPortal_Item_Athena(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class UActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class UActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsIgnoredActor_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class UActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, TArray<class UActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& K2Node_CustomEvent_PlayerLocation, class UPlayerState* K2Node_CustomEvent_RequestingPlayerState, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, class UActor* K2Node_Event_Actor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetValueAtLevel_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UActor* K2Node_Event_VehicleActor, FInterfaceProperty_ K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_2, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class FName K2Node_CustomEvent_PlaylistName, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, class UFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1, bool CallFunc_IsValid_ReturnValue_1, class UController* CallFunc_GetController_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UFortPlayerPawnAthena* K2Node_CustomEvent_FortPlayerPawnAthena, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_Is_Flying_NewParam, TArray<class UActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Is_Flying_NewParam_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class UActor* CallFunc_GetVehicleActorPtr_ReturnValue, bool CallFunc_CanTeleport_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, TArray<class UFortPlayerPawn*>& CallFunc_BP_GetAllPassengers_ReturnValue, TArray<class UFortPlayerPawn*>& CallFunc_BP_GetAllPassengers_ReturnValue_1, class UFortPlayerPawn* CallFunc_Array_Get_Item, class UFortPlayerPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2, class UController* CallFunc_GetController_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_GetOwnerLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortPlayerPawn* CallFunc_GetDriver_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UController* CallFunc_GetController_ReturnValue_2, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UPlayerState* Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, class UPlayerState* K2Node_Select_Default, class UActor* K2Node_CustomEvent_TargetActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& K2Node_CustomEvent_IncrementValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, TArray<class UFortPlayerPawn*>& CallFunc_BP_GetAllPassengers_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UFortPlayerPawn*>& CallFunc_BP_GetAllPassengers_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortPlayerPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_4, FInterfaceProperty_ K2Node_DynamicCast_AsFort_Vehicle_Interface_1, bool K2Node_DynamicCast_bSuccess_5, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1, bool CallFunc_IsInVehicle_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_IsInsideHidingProp_ReturnValue, class UFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_TeleportAIPawn_ReturnValue, bool CallFunc_IsPlayerAttachedToAIPawn_Result, class UFortPlayerPawn* CallFunc_IsPlayerAttachedToAIPawn_AttachedPlayerPawn, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UActor* K2Node_CustomEvent_Target_Actor, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast)
{
	static auto Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ExecuteUbergraph_BGA_RiftPortal_Item_Athena");

	Params::UBGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_2 = K2Node_ComponentBoundEvent_OverlappedComponent_2;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_2 = K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsIgnoredActor_ReturnValue = CallFunc_IsIgnoredActor_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerLocation = K2Node_CustomEvent_PlayerLocation;
	Parms.K2Node_CustomEvent_RequestingPlayerState = K2Node_CustomEvent_RequestingPlayerState;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_VehicleActor = K2Node_Event_VehicleActor;
	Parms.K2Node_DynamicCast_AsFort_Vehicle_Interface = K2Node_DynamicCast_AsFort_Vehicle_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CustomEvent_PlaylistName = K2Node_CustomEvent_PlaylistName;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Athena_CheckCreativeMode_CanCompleteQuest = CallFunc_Athena_CheckCreativeMode_CanCompleteQuest;
	Parms.CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1 = CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_FortPlayerPawnAthena = K2Node_CustomEvent_FortPlayerPawnAthena;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Is_Flying_NewParam = CallFunc_Is_Flying_NewParam;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors_1 = CallFunc_GetOverlappingActors_OverlappingActors_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Is_Flying_NewParam_1 = CallFunc_Is_Flying_NewParam_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetVehicleActorPtr_ReturnValue = CallFunc_GetVehicleActorPtr_ReturnValue;
	Parms.CallFunc_CanTeleport_ReturnValue = CallFunc_CanTeleport_ReturnValue;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_BP_GetAllPassengers_ReturnValue = CallFunc_BP_GetAllPassengers_ReturnValue;
	Parms.CallFunc_BP_GetAllPassengers_ReturnValue_1 = CallFunc_BP_GetAllPassengers_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetOwnerLocation_ReturnValue = CallFunc_GetOwnerLocation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDriver_ReturnValue = CallFunc_GetDriver_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue = CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_TargetActor = K2Node_CustomEvent_TargetActor;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.K2Node_CustomEvent_IncrementValue = K2Node_CustomEvent_IncrementValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_BP_GetAllPassengers_ReturnValue_2 = CallFunc_BP_GetAllPassengers_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BP_GetAllPassengers_ReturnValue_3 = CallFunc_BP_GetAllPassengers_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsFort_Vehicle_Interface_1 = K2Node_DynamicCast_AsFort_Vehicle_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1 = CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_IsInsideHidingProp_ReturnValue = CallFunc_IsInsideHidingProp_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_TeleportAIPawn_ReturnValue = CallFunc_TeleportAIPawn_ReturnValue;
	Parms.CallFunc_IsPlayerAttachedToAIPawn_Result = CallFunc_IsPlayerAttachedToAIPawn_Result;
	Parms.CallFunc_IsPlayerAttachedToAIPawn_AttachedPlayerPawn = CallFunc_IsPlayerAttachedToAIPawn_AttachedPlayerPawn;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_Target_Actor = K2Node_CustomEvent_Target_Actor;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

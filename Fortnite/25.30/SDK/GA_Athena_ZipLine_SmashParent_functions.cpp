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


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Motor Offset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Athena_Environmental_ZipLine_Spline_C*K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::Get_Zipline_Motor_Offset(struct FVector* Offset, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Get Zipline Motor Offset");

	Params::UGA_Athena_ZipLine_SmashParent_C_Get_Zipline_Motor_Offset_Params Parms;

	Parms.K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline = K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = Parms.Offset;

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GetZiplineRotationForMotor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_Athena_Environmental_ZipLine_Spline_C*K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Roll_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::GetZiplineRotationForMotor(struct FRotator* Rotation, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "GetZiplineRotationForMotor");

	Params::UGA_Athena_ZipLine_SmashParent_C_GetZiplineRotationForMotor_Params Parms;

	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline = K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Roll_ImplicitCast = CallFunc_MakeRotator_Roll_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = Parms.Rotation;

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Pole A Socket Loc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PoleBSocketLoc                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Athena_Environmental_ZipLine_Spline_C*K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::Get_Zipline_Pole_A_Socket_Loc(struct FVector* PoleBSocketLoc, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Get Zipline Pole A Socket Loc");

	Params::UGA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_A_Socket_Loc_Params Parms;

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline = K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PoleBSocketLoc != nullptr)
		*PoleBSocketLoc = Parms.PoleBSocketLoc;

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Pole B Socket Loc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PoleBSocketLoc                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Athena_Environmental_ZipLine_Spline_C*K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::Get_Zipline_Pole_B_Socket_Loc(struct FVector* PoleBSocketLoc, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Get Zipline Pole B Socket Loc");

	Params::UGA_Athena_ZipLine_SmashParent_C_Get_Zipline_Pole_B_Socket_Loc_Params Parms;

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline = K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PoleBSocketLoc != nullptr)
		*PoleBSocketLoc = Parms.PoleBSocketLoc;

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.CheckForQuestProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// class UController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerbMessage_Custom         CallFunc_MakeCustomVerbMessage_ReturnValue                       ()
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVerbMessage_Custom         CallFunc_AddTagsForSubject_Result                                ()

void UGA_Athena_ZipLine_SmashParent_C::CheckForQuestProgress(TScriptInterface<class UGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class UController* CallFunc_GetController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FVerbMessage_Custom& CallFunc_MakeCustomVerbMessage_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FVerbMessage_Custom& CallFunc_AddTagsForSubject_Result)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "CheckForQuestProgress");

	Params::UGA_Athena_ZipLine_SmashParent_C_CheckForQuestProgress_Params Parms;

	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeCustomVerbMessage_ReturnValue = CallFunc_MakeCustomVerbMessage_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_AddTagsForSubject_Result = CallFunc_AddTagsForSubject_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.CheckMotor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasHarness                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ZipLine_Athena_Harness_C*K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::CheckMotor(bool HasHarness, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UActor*>& CallFunc_GetAttachedActors_OutActors, int32 Temp_int_Loop_Counter_Variable, class UActor* CallFunc_Array_Get_Item, class UBP_ZipLine_Athena_Harness_C* K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "CheckMotor");

	Params::UGA_Athena_ZipLine_SmashParent_C_CheckMotor_Params Parms;

	Parms.HasHarness = HasHarness;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness = K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Spawn Motor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_Zipline_Motor_Offset_Offset                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ZipLine_Athena_Harness_Yellow_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::Spawn_Motor(class UActor* PlayerPawn, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_Get_Zipline_Motor_Offset_Offset, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UBP_ZipLine_Athena_Harness_Yellow_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Spawn Motor");

	Params::UGA_Athena_ZipLine_SmashParent_C_Spawn_Motor_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Get_Zipline_Motor_Offset_Offset = CallFunc_Get_Zipline_Motor_Offset_Offset;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.BreakNearbyStructures
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::BreakNearbyStructures(class UFortPlayerPawn* PlayerPawn, TArray<class UActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "BreakNearbyStructures");

	Params::UGA_Athena_ZipLine_SmashParent_C_BreakNearbyStructures_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Added_5A9C02A9480D39B213A8AC81767C7A76
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::Added_5A9C02A9480D39B213A8AC81767C7A76()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Added_5A9C02A9480D39B213A8AC81767C7A76");

	Params::UGA_Athena_ZipLine_SmashParent_C_Added_5A9C02A9480D39B213A8AC81767C7A76_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Removed_A0F18316443E5C5267615C9692274B36
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::Removed_A0F18316443E5C5267615C9692274B36()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Removed_A0F18316443E5C5267615C9692274B36");

	Params::UGA_Athena_ZipLine_SmashParent_C_Removed_A0F18316443E5C5267615C9692274B36_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::SurroundingsCheck()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SurroundingsCheck");

	Params::UGA_Athena_ZipLine_SmashParent_C_SurroundingsCheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ZipLine_SmashParent_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_ZipLine_SmashParent_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnPawnLanded_Bind
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Athena_ZipLine_SmashParent_C::OnPawnLanded_Bind(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnPawnLanded_Bind");

	Params::UGA_Athena_ZipLine_SmashParent_C_OnPawnLanded_Bind_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleZiplineStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsZiplining                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::HandleZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "HandleZiplineStateChanged");

	Params::UGA_Athena_ZipLine_SmashParent_C_HandleZiplineStateChanged_Params Parms;

	Parms.bIsZiplining = bIsZiplining;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.RemoveFallDamageImmunity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::RemoveFallDamageImmunity()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "RemoveFallDamageImmunity");

	Params::UGA_Athena_ZipLine_SmashParent_C_RemoveFallDamageImmunity_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnEnterVehicle_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::OnEnterVehicle_Bind()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnEnterVehicle_Bind");

	Params::UGA_Athena_ZipLine_SmashParent_C_OnEnterVehicle_Bind_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ZipliningComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::ZipliningComplete()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "ZipliningComplete");

	Params::UGA_Athena_ZipLine_SmashParent_C_ZipliningComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnEnteredAircraft_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::OnEnteredAircraft_Bind()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnEnteredAircraft_Bind");

	Params::UGA_Athena_ZipLine_SmashParent_C_OnEnteredAircraft_Bind_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnBeginSkydiving_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::OnBeginSkydiving_Bind()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnBeginSkydiving_Bind");

	Params::UGA_Athena_ZipLine_SmashParent_C_OnBeginSkydiving_Bind_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.DelaySpawnMotor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::DelaySpawnMotor()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "DelaySpawnMotor");

	Params::UGA_Athena_ZipLine_SmashParent_C_DelaySpawnMotor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.BindEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::BindEvent()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "BindEvent");

	Params::UGA_Athena_ZipLine_SmashParent_C_BindEvent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SwimmingStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::SwimmingStarted()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SwimmingStarted");

	Params::UGA_Athena_ZipLine_SmashParent_C_SwimmingStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.EnterWaterExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             FortPlayerPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::EnterWaterExit(class UFortPlayerPawn* FortPlayerPawn)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "EnterWaterExit");

	Params::UGA_Athena_ZipLine_SmashParent_C_EnterWaterExit_Params Parms;

	Parms.FortPlayerPawn = FortPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleClientSplineZiplineStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsZiplining                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::HandleClientSplineZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "HandleClientSplineZiplineStateChanged");

	Params::UGA_Athena_ZipLine_SmashParent_C_HandleClientSplineZiplineStateChanged_Params Parms;

	Parms.bIsZiplining = bIsZiplining;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SplineZiplineMovementModeDelayOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::SplineZiplineMovementModeDelayOver()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SplineZiplineMovementModeDelayOver");

	Params::UGA_Athena_ZipLine_SmashParent_C_SplineZiplineMovementModeDelayOver_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "K2_OnEndAbility");

	Params::UGA_Athena_ZipLine_SmashParent_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Remove Fall Damage Immunity Delayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::Remove_Fall_Damage_Immunity_Delayed()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Remove Fall Damage Immunity Delayed");

	Params::UGA_Athena_ZipLine_SmashParent_C_Remove_Fall_Damage_Immunity_Delayed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.EndAsyncBreakNearbyStructuresOverlap
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UActor*>              OverlapActors                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ZipLine_SmashParent_C::EndAsyncBreakNearbyStructuresOverlap(TArray<class UActor*>& OverlapActors)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "EndAsyncBreakNearbyStructuresOverlap");

	Params::UGA_Athena_ZipLine_SmashParent_C_EndAsyncBreakNearbyStructuresOverlap_Params Parms;

	Parms.OverlapActors = OverlapActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck_SmashObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::SurroundingsCheck_SmashObjects()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SurroundingsCheck_SmashObjects");

	Params::UGA_Athena_ZipLine_SmashParent_C_SurroundingsCheck_SmashObjects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck_MotorCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::SurroundingsCheck_MotorCheck()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SurroundingsCheck_MotorCheck");

	Params::UGA_Athena_ZipLine_SmashParent_C_SurroundingsCheck_MotorCheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurruondingsCheck_VehicleCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::SurruondingsCheck_VehicleCheck()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "SurruondingsCheck_VehicleCheck");

	Params::UGA_Athena_ZipLine_SmashParent_C_SurruondingsCheck_VehicleCheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.StartSurroundingsCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::StartSurroundingsCheck()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "StartSurroundingsCheck");

	Params::UGA_Athena_ZipLine_SmashParent_C_StartSurroundingsCheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnPawnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      DamagedActor                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "OnPawnDied");

	Params::UGA_Athena_ZipLine_SmashParent_C_OnPawnDied_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayTagEvent_ZiplineEnter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ZipLine_SmashParent_C::GameplayTagEvent_ZiplineEnter(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "GameplayTagEvent_ZiplineEnter");

	Params::UGA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineEnter_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayTagEvent_ZiplineExit
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ZipLine_SmashParent_C::GameplayTagEvent_ZiplineExit(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "GameplayTagEvent_ZiplineExit");

	Params::UGA_Athena_ZipLine_SmashParent_C_GameplayTagEvent_ZiplineExit_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayEvent_ZiplineEnter_BeginZiplining
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::GameplayEvent_ZiplineEnter_BeginZiplining()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "GameplayEvent_ZiplineEnter_BeginZiplining");

	Params::UGA_Athena_ZipLine_SmashParent_C_GameplayEvent_ZiplineEnter_BeginZiplining_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.FallingTagRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::FallingTagRemoved()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "FallingTagRemoved");

	Params::UGA_Athena_ZipLine_SmashParent_C_FallingTagRemoved_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Pre_BeginZiplinging
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::Pre_BeginZiplinging()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "Pre_BeginZiplinging");

	Params::UGA_Athena_ZipLine_SmashParent_C_Pre_BeginZiplinging_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleGameplayEventTag
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ZipLine_SmashParent_C::HandleGameplayEventTag(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "HandleGameplayEventTag");

	Params::UGA_Athena_ZipLine_SmashParent_C_HandleGameplayEventTag_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ZiplinePostBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ZipLine_SmashParent_C::ZiplinePostBegin_Event()
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "ZiplinePostBegin_Event");

	Params::UGA_Athena_ZipLine_SmashParent_C_ZiplinePostBegin_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ExecuteUbergraph_GA_Athena_ZipLine_SmashParent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WantsToGoFromVehicleToZipline_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInInteractBlockingVehicle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsZiplining_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_CustomEvent_Pawn_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1            (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_CustomEvent_FortPlayerPawn                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemove_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsZiplining                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_CustomEvent_Pawn                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              K2Node_Event_OverlapActors                                       (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2            (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaSupplyDropBalloon*K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHeldObjectComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent*         CallFunc_CreateAnimInputEvent_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAnimInputEvent*         CallFunc_CreateAnimInputEvent_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_DamagedActor                                  (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_2                                   (ConstParm)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_1                                   (ConstParm)
// class UPrimitiveComponent*         K2Node_DynamicCast_AsPrimitive_Component                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaZipline*          K2Node_DynamicCast_AsFort_Athena_Zipline                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData                                     (ConstParm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ZipLine_SmashParent_C::ExecuteUbergraph_GA_Athena_ZipLine_SmashParent(int32 EntryPoint, bool CallFunc_WantsToGoFromVehicleToZipline_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInInteractBlockingVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& K2Node_CustomEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool K2Node_CustomEvent_bIsZiplining_1, class UFortPlayerPawn* K2Node_CustomEvent_Pawn_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FGameplayEventData& K2Node_Event_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UController* CallFunc_GetController_ReturnValue_1, class UFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_3, class UFortPlayerPawn* K2Node_CustomEvent_FortPlayerPawn, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_bIsZiplining, class UFortPlayerPawn* K2Node_CustomEvent_Pawn, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, TArray<class UActor*>& K2Node_Event_OverlapActors, bool CallFunc_IsValid_ReturnValue_8, class UActor* CallFunc_Array_Get_Item, class UBuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_5, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_6, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, class UFortAthenaSupplyDropBalloon* K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon, bool K2Node_DynamicCast_bSuccess_7, class UFortHeldObjectComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortAnimInputEvent* CallFunc_CreateAnimInputEvent_ReturnValue, class UFortAnimInputEvent* CallFunc_CreateAnimInputEvent_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, class UActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UController* K2Node_CustomEvent_InstigatedBy, class UActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess_8, class UFortAthenaZipline* K2Node_DynamicCast_AsFort_Athena_Zipline, bool K2Node_DynamicCast_bSuccess_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, const struct FGameplayEventData& K2Node_CustomEvent_EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static auto Func = Class->GetFunction("GA_Athena_ZipLine_SmashParent_C", "ExecuteUbergraph_GA_Athena_ZipLine_SmashParent");

	Params::UGA_Athena_ZipLine_SmashParent_C_ExecuteUbergraph_GA_Athena_ZipLine_SmashParent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_WantsToGoFromVehicleToZipline_ReturnValue = CallFunc_WantsToGoFromVehicleToZipline_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInInteractBlockingVehicle_ReturnValue = CallFunc_IsInInteractBlockingVehicle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_CustomEvent_bIsZiplining_1 = K2Node_CustomEvent_bIsZiplining_1;
	Parms.K2Node_CustomEvent_Pawn_1 = K2Node_CustomEvent_Pawn_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Movement_Component = K2Node_DynamicCast_AsCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_1 = K2Node_DynamicCast_AsFort_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_FortPlayerPawn = K2Node_CustomEvent_FortPlayerPawn;
	Parms.CallFunc_WaitGameplayTagRemove_ReturnValue = CallFunc_WaitGameplayTagRemove_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_bIsZiplining = K2Node_CustomEvent_bIsZiplining;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.CallFunc_GetMovementComponent_ReturnValue_1 = CallFunc_GetMovementComponent_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCharacter_Movement_Component_1 = K2Node_DynamicCast_AsCharacter_Movement_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_Event_OverlapActors = K2Node_Event_OverlapActors;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon = K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CreateAnimInputEvent_ReturnValue = CallFunc_CreateAnimInputEvent_ReturnValue;
	Parms.CallFunc_CreateAnimInputEvent_ReturnValue_1 = CallFunc_CreateAnimInputEvent_ReturnValue_1;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.K2Node_CustomEvent_EventData_2 = K2Node_CustomEvent_EventData_2;
	Parms.K2Node_CustomEvent_EventData_1 = K2Node_CustomEvent_EventData_1;
	Parms.K2Node_DynamicCast_AsPrimitive_Component = K2Node_DynamicCast_AsPrimitive_Component;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsFort_Athena_Zipline = K2Node_DynamicCast_AsFort_Athena_Zipline;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_EventData = K2Node_CustomEvent_EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
